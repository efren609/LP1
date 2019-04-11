#include <iostream>
using namespace std;
int main() {
  int c=0;
  int f=0;
  cout<<"Ingrese dos valores para crear las dimensiones del salón de clases\n";
  cout<<"                               » ";
  cin>>c;
  cout<<"                               » ";
  cin>>f;
  if ((0==c%2)&&(0==f%2)||(0!=c%2)&&(0==f%2)||(0==c%2)&&(0!=f%2)){
    cout<<"»SI";
  }
  if ((0!=c%2)&&(0!=f%2)){
    cout<<"»NO";
  }

return 0;
}
