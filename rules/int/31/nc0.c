// INT31-C: Noncompliant Code Example (Unsigned to Signed)
#include <limits.h>
  
void func(void) {
  unsigned long int u_a = ULONG_MAX;
  signed char sc;
  sc = (signed char)u_a; /* Cast eliminates warning */
  /* ... */
}
