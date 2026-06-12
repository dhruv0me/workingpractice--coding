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
/*#include <iostream>
using namespace std;
int main() {
int n;
cout << "enter the number: ";
cin >> n;
for (int i = n / 2; i >= 1; i--) {
  if (n % i == 0)
  {  cout<<i<<endl;
      break;
}
}
return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "enter the number: ";
  cin >> n;
  bool flag = true;
  for (int i =2 ;i<n/2;i++)
  { if(n%i==0){flag=false;break;}}
  if(n==1){cout<<"neither prime nor composite";}
  else if(flag==true){cout<<"prime";}else{cout<<"Composite";};
   return 0;
}*/
