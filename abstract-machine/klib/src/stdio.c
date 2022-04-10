#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
//#include <stdio.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

void itoa(unsigned int n, char * buf);

int printf(const char *fmt, ...) {
  panic("Not implemented");

}

int vsprintf(char *str, const char *fmt, va_list ap) {
  //panic("Not implemented");
  // char *str;

  // for(str = out; *fmt ; fmt++){
  //   if(*fmt != '%'){
  //     *str++ = *fmt;
  //     continue;
  //   }

  //   // bool bFmt = true;
  //   // while(bFmt)
  //   // {
  //   //     fmt++; /* This also skips first '%' */
  //   //     switch (*fmt)
  //   //     {
  //   //         case '-': break;
  //   //         case '+': break;
  //   //         case ' ': break;
  //   //         case '#': break;
  //   //         case '0': break;
  //   //         default:  bFmt = false;
  //   //     }
  //   // }

  //   fmt++;
  //   switch (*fmt)
  //   {
  //     case 'd':
  //     {
  //       int n = va_arg(ap,int);
  //       // if(n < 0){
  //       //   *str = '-';
  //       //   str++;
  //       //   n = -n;
  //       // }
  //       itoa(n,out);

  //       memcpy(str,out,strlen(out));
  //       str += strlen(out);
  //       //str++;
  //       break;
  //     }
  //    case 's':
  //    {
  //      char *s = va_arg(ap,char *);
  //      memcpy(str, s, strlen(s));
  //      str += strlen(s);
  //      str++;
  //      break;
  //    }
    
  //   default:
  //     // if(*fmt == '\n'){

  //     // }
  //     break;
  //   }
  // }
  
  // *str = '\0';
  // return str - out;
    int count = 0;
    char c;
    char *s;
    int n;
    
    char buf[65];
    char digit[16];

    
    memset(buf, 0, sizeof(buf));
    memset(digit, 0, sizeof(digit));

  while(*fmt != '\0')
    {
      if(*fmt == '%')
        {
            fmt++;
            switch(*fmt)
         {
                case 'd': /*整型*/
                {
                        n = va_arg(ap, int);
                        if(n < 0)
                        {
                            *str = '-';
                            str++;
                            n = -n;
                        }
                        itoa(n, buf);
                        memcpy(str, buf, strlen(buf));
                        str += strlen(buf);
                        break;
                }    
                case 'c': /*字符型*/
                {
                        c = va_arg(ap, int);
                        *str = c;
                        str++;
                        break;
                }
                // case 'x': /*16进制*/
                // {
                //         n = va_arg(ap, int);
                //         xtoa(n, buf);
                //         memcpy(str, buf, strlen(buf));
                //         str += strlen(buf);
                //         break;
                // }
                case 's': /*字符串*/
                {
                        s = va_arg(ap, char *);
                        memcpy(str, s, strlen(s));
                        str += strlen(s);
                        break;
                }
                default:
                        break;
            }
        }
        else
        {
            *str = *fmt;
            str++;
            if(*fmt == '\n')
            {
                    
            }
        }
        fmt++;
    }

    //str++;
    *str = '\0';
    return count;
}

int sprintf(char *out, const char *fmt, ...) {
  //panic("Not implemented");
  int ret;
  va_list args;
  
  va_start(args,fmt);
  ret = vsprintf(out,fmt,args);
  va_end(args);

  return ret;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

void itoa(unsigned int n, char * buf)
{
        int i;
        
        if(n < 10)
        {
          buf[0] = n + '0';
          buf[1] = '\0';
          return;
        }
        itoa(n / 10, buf);

        for(i=0; buf[i]!='\0'; i++);
        
        buf[i] = (n % 10) + '0';
        
        buf[i+1] = '\0';


}


#endif
