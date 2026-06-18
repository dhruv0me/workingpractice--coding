#include <iostream>
#include <cmath>
using namespace std;

int main() {
//(a + b)^2 = a^2 + 2ab + b^2
//(a - b)^2 = a^2 - 2ab + b^2
//a^3 + b^3 = (a + b)(a^2 - ab + b^2)
//a^3 - b^3 = (a - b)(a^2 + ab + b^2)
cout<<"select the function you want to perform : "<<endl;
cout<<" 1. (a + b)^2 = a^2 + 2ab + b^2"<<endl;
cout<<" 2. (a - b)^2 = a^2 - 2ab + b^2"<<endl;
cout<<" 3. a^3 + b^3 = (a + b)(a^2 - ab + b^2)"<<endl;
cout<<" 4. a^3 - b^3 = (a - b)(a^2 + ab + b^2)"<<endl;
int c;
cout<<"option = ";
cin>>c;
 int a,b;
 cout<<" enter the value of a = ";
 cin>>a;
 cout<<" enter the value of b = ";
 cin>>b;
 if(c==1){
     cout<<"ANSWER is = "<< pow( a,2) + (2 * a * b) + pow(b,2);
 }
  else if (c==2){
     cout<<"ANSWER is = "<< pow( a,2) - (2 * a * b) + pow(b,2);
 }
  else if  (c==3){
     cout<<"ANSWER is = "<< ( a + b ) * (pow( a,2) - (2 * a * b) + pow(b,2));
 }
  else if (c==4){
     cout<<"ANSWER is = "<<( a - b ) * (pow( a,2) + (2 * a * b) + pow(b,2));
 }
 else{
     cout<<"invalid output ";
 };
 return 0;
}