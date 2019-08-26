void *childThread(void *val) {
  /* Correctly prints 1 */
  int *res = (int *)val;
  printf("Result: %d\n", *res);
  free(res);
  return NULL;
}
 
void createThread(pthread *tid) {
  int result;
  /* Copy data into dynamic memory */
  int *val = malloc(sizeof(int));
 
  if (!val) {
    /* Handle error */
  }
  *val = 1;
  if ((result = pthread_create(&id, NULL, childThread, val)) != 0) {
    /* Handle error */
  }
}
 
int main(void) {
  pthread_t tid;
  int result;
  createThread(&tid);
  if ((result = pthread_join(tid, NULL)) != 0) {
    /* Handle error */
  }
  return 0;
}
