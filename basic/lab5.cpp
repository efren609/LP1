#include <iostream>
using namespace std;
int main ( )
{
const double cmperinch = 2 . 5 4 ; // numero de cm en un i n
int length = 1 ; 
char unit = ' ' ;
cout<< Por favor ingrese una longitud
seguida de su unidad ( c o i ) : "\ n" ;
cin >> length >> unit ;
if ( unit == i )
cout << length << in == << cmperinch * length << "cm\n” ;
e l s e i f ( u n i t == 'c'  )
c o u t << l e n g t h << "cm == "
<< l e n g t h / c m p e r i n c h << " i n \n” ;
else
cout << "Lo s i e n t o , no c o n o s c o una unidad llamada " << u n i t << "\ n" ;

}
