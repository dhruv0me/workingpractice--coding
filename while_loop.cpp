// simple example of while loop
/*#include <iostream >
using namespace std;
int main (){
    long long i = 100000000000000000000;
    while(i>=1)
    {
       cout<<i<<endl;
        i--;
    }

}
*/
// example of continue
/*#include <iostream>
using namespace std;
int main (){
    int x=4, y=0;
    while(x>=0){
        x--;
        y++;
        if(x==y)
        continue;
    else
    {
        cout<<x<<""<<y<<endl;
    }
    }
}*/
// counting the number of digits of a number
/*#include <iostream>
using namespace std;
int main(){
    long long n;
    cout<<"Enter the number: ";
    cin>>n;
    long long i=0;
    while(n>0)
    {
        n=n/10;
        i++;
    }
     cout<<i<<endl;
    return 0;
}
*/
// adding digits of a number
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i=0;
    while(n!=0)
    {
        int ld = n%10;
        n=n/10;
         i += ld;
    }
     cout<<i;
    return 0;
}*/
// multiplying the digits of a number
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i=1;
    while(n!=0)
    {
        int ld = n%10;
        n=n/10;
         i *= ld;
    }
     cout<<i;
    return 0;
}*/
// adding even digits of a number
/*#include <iostream>
using namespace std;
int main() {
  long long n;
  cout << "Enter the number: ";
  cin >> n;
  long long i = 0;
  while (n>0) {
    long long ld = n % 10;
    n = n / 10;
    if(ld%2==0){
        i+=ld;
    }
    }
  cout << i;
  return 0;
}*/