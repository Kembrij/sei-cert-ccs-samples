// POS33-C: Noncompliant Code Example
char *filename = /* something */;
 
pid_t pid = vfork();
 if (pid == 0 )  /* child */ {
   if (execve(filename, NULL, NULL) == -1) {
     /* Handle error */
   }
   _exit(1);  /* in case execve() fails */
}
