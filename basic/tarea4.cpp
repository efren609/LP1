#include <iostream>
using namespace std;
int caracter(int x){
  return (x);
}
int main() {
  for (int h=0,i=97,j=65 ;h<=24 || i<=122 || j<=90;++h,++i,++j){
    cout<<h<<") "<<char (caracter(i))<<" »» "<< char (caracter(j))<<"\n";
  }
  return 0;
}
