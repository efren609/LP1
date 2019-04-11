#include <iostream>
using namespace std;
int square(int x){
  int suma,c=0,array[x];
  for(int i=0;i<x;i++){
    c=x;
    array[i]=c;
    suma+=array[i];
  }
 return(suma);
}
int main(){
  cout<<square(5);
}
