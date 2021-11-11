#include <iostream>
using namespace std;

int main() {
   int n = 0;
   cin >> n;
   int a = 1;
   int b = 1;
   while (a <= n) {
      cout << a << endl;
      int s = a + b;
      a = b;
      b = s;
   }
   return 0;
}
