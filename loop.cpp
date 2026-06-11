/*#include <iostream>
using namespace std;
int main() {
  for (int i = 1; i <= 10; i++) {
    cout << "hello world" << endl;
  }

  return 0;
}
*/
/*#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "enter the number: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cout << "hello world" << endl;
  }
  return 0;
}
*/
/*#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "enter the number: ";
  cin >> n;//2*2=4
  for (int i = 1; i <= 10; i++) {
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
  }
  return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
  // int n;
  // cout << "enter the number 1 : ";
  // cin >> n;//2*2=4
  for (int i = 1; i <= 100; i++) {
    cout << i << endl;
  }
  return 0;
}
*/
/*#include <iostream>
using namespace std;
int main() {
  // int n;
  // cout << "enter the number 1 : ";
  // cin >> n;//2*2=4
  for (int i = 1; i <= 99; i = i + 2) {
    cout << i << endl;
  }
  return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "enter the number: ";
  cin >> n;
  for (int i = 1; i <= 2*n-1; i = i + 2) {
    cout << "ap -" << i << ",";
  }
  return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
  int a,d,n;
  cout << "enter the first term of AP : ";
  cin >> a;
  cout << "enter the common difference of AP : ";
  cin >> d;
  cout << "enter the number of terms of AP : ";
  cin >> n;
  int term = a;
  for (int i = 1; i <= 2 * n - 1; i = i + 2) {
    cout << "ap -" << term << ",";
    term =term + d;
  }
  return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "enter the number: ";
  cin >> n;
  int a =1;
  for (int i = 1; i <= n; i++) {
    cout << "GP - " << a << " , ";
    a=a*2;
  }
  return 0;
} */