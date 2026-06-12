/*#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "enter the number: ";
  cin >> n;
  for (int i =1;i<n;i++){
    if(n%i==0 ){cout<<i<<endl;}
  }
  return 0;
}
  */
  #include <iostream>
using namespace std;
int main() {
  int n;
  cout << "enter the number: ";
  cin >> n;
  int f = 1;
  for (int i = 1; i <= n / 2; i++) {
    if (n % i == 0) f = i;
  }
  cout << f;
  return 0;
}
