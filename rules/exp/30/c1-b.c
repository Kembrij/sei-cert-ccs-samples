// EXP30-C: Compliant Solution
extern void func(int i, int j);
  
void f(int i) {
  int j = i++;
  func(j, i);
}
