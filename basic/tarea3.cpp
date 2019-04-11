#include <iostream>
using namespace std;
int caracter(int x){
  return (x);
}
int main() {
  for (int i=97;i<=123;++i){
    cout<<char (caracter(i))<<"\n";
  }
  return 0;
}
