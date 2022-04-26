#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
//#include <stdio.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

void itoa(unsigned int n, char * buf);

int printf(const char *str, ...) {
    //panic("Not implemented");
        
    if (str == NULL) return -1;
  
    int ret_num = 0;// 返回打印字符的个数
    char* pStr = (char*)str;// 指向str
    int ArgIntVal = 0;  // 接收整型
    char* ArgStrVal = NULL;  // 接收字符型
       
    char buf[1024];
    va_list pArgs; // 定义va_list类型指针，用于存储参数的地址
    va_start(pArgs, str); // 初始化pArgs
      
    memset(buf, 0, sizeof(buf));
    while (*pStr != '\0')
    {
        switch (*pStr)
        {
        case '\t':
            putch(*pStr); ret_num += 4; break;
        case '\r':
            putch(*pStr); ret_num++; break;
        case '\n':
            putch(*pStr); ret_num++; break;
        case '%':
            pStr++;
            // % 格式解析
            switch (*pStr)
            {
            case '%':
                putch('%');// %%，输出%
                ret_num++;
                pStr++;
                break;
            case 'c':
                ArgIntVal = va_arg(pArgs, int);// %c，输出char
                putch((char)ArgIntVal);
                ret_num++;
                pStr++;
                break;
            case 'd':
                ArgIntVal = va_arg(pArgs, int);// %d，输出char

                // putch((char)ArgIntVal);
                //  itoa(ArgIntVal)
                // ret_num++;
                //  pStr++;
                // break;

                 if(ArgIntVal < 0)
                  {
                      putch('-');

                      ret_num++  ;
                      ArgIntVal = -ArgIntVal;
                  }
                    
                  itoa(ArgIntVal, buf)  ;
                  int i;
                   //ret_num += strlen(buf);  
                   for(i=0;i<=strlen(buf) ; i++)           
                   {

                       putch(buf[i]);

                   }
                    //   while (*buf!='\0')
                    //    {
                    //        putch('f');
                    //       // ArgStrVal++;
                    //         ret_num++;
                    //    }

                       pStr++; 

                       break;

            case 's':
                // 接收字符
                ArgStrVal = va_arg(pArgs, char*);
                ret_num += strlen(ArgStrVal);
                while (*ArgStrVal)
                {
                    putch(*ArgStrVal);
                    ArgStrVal++;
                }

                pStr++;
                break;

            default:
                break;
            }


        default:
            putch(*pStr); ret_num++;
            break;
        }
        pStr++;
    }
    va_end(pArgs);// 结束取参数

    return ret_num;


}

int vsprintf(char *str, const char *fmt, va_list ap) {
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
