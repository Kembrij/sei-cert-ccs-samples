#include <assert.h>
  
void func(void) {
  char c = 'x';
  int i = c;
  int *ip = &i;
 
  assert(ip == &i);
}
