// ENV34-C: Noncompliant Code Example
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
  
void func(void) {
  char *tmpvar;
  char *tempvar;
 
  tmpvar = getenv("TMP");
  if (!tmpvar) {
    /* Handle error */
  }
  tempvar = getenv("TEMP");
  if (!tempvar) {
    /* Handle error */
  }
  if (strcmp(tmpvar, tempvar) == 0) {
    printf("TMP and TEMP are the same.\n");
  } else {
    printf("TMP and TEMP are NOT the same.\n");
  }
}
