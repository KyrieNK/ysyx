#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
  //panic("Not implemented");
  assert(src);
  char* cur = dst;
  while(*src != '\0'){
    *dst = *src;
    dst++;
    src++;
  }
  *dst = '\0';
  return cur;
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  //panic("Not implemented");
  char *p = dst;
  assert((dst != NULL) && (src != NULL));
  while (*dst != '\0'){
    dst++;
  }
  while((*dst++ = *src++) != '\0') {
    ;
  }
  return p;
  
}

int strcmp(const char *s1, const char *s2) {
  //panic("Not implemented");
  //如果两个字符串当前比较的字符相等
	while (*s1 == *s2)
	{
		assert(s1 && s2);//断言
		if (*s1 == '\0' && *s2 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}

  return *s1 - *s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  //panic("Not implemented");
  assert(s && (c>=0));
  char *tmp = (char *)s;
  while(n--){
    *tmp++ = c;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  //panic("Not implemented");
  char *a = (char *)s1;
  char *b = (char *)s2;
  while(n--){
    assert(a && b);
    if(*a == *b){
      a++;
      b++;
    }else{
      return -1;
    }
  }
  return 0;
}

#endif
