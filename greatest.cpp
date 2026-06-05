#include <iostream>
using namespace std;
int main() {
  float a, b, c;
  cout << "Enter the value of a = ";
  cin >> a;
  cout << "Enter the value of b = ";
  cin >> b;
  cout << "Enter the value of c = ";
  cin >> c;

  if (a == b && b == c) {
    cout << "a and b and c are all equal";
  } else if (a == b && a > c) {
    cout << "a and b are the greatest";
  } else if (a == c && a > b) {
    cout << "a and c are the greatest";
  } else if (b == c && b > a) {
    cout << "b and c are the greatest";
  } else if (a > b && a > c) {
    cout << "A is the greatest of all";
  } else if (b > a && b > c) {
    cout << "B is the greatest of all";
  } else if (c > a && c > b) {
    cout << "C is the greatest of all";
  }
  return 0;
}