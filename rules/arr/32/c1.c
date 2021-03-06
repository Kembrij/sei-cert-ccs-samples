// ARR32-C: Compliant Solution (sizeof)
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
  
enum { N1 = 4096 };
 
void *func(size_t n2) {
  if (n2 > SIZE_MAX / (N1 * sizeof(int))) {
    /* Prevent sizeof wrapping */
    return NULL;
  }
 
  typedef int A[n2][N1];
 
  A *array = malloc(sizeof(A));
  if (!array) {
    /* Handle error */
    return NULL;
  }
 
  for (size_t i = 0; i != n2; ++i) {
    memset(array[i], 0, N1 * sizeof(int));
  }
  return array;
}
