// INT36-C: Compliant Solution
#include <stdint.h>
  
void f(void) {
  char *ptr;
  /* ... */
  uintptr_t number = (uintptr_t)ptr; 
  /* ... */
}
