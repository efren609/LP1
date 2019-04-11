#include <iostream>
using namespace std;
int main ( )
{
const double cmperinch = 2 . 5 4 ; //#cm p o r p ul ga da
int length = 1 ; // u ni da d de l o n g i t u d
char unit = 'a'  ;
cout<<"Por f a v o r i n g r e s e una longitud y su unidad ( coi ) : \ n” ;
cin >> length >> unit ;
switch ( unit ) {
case ' i ’ :
cout << length << " i n == ”
<< cmperinch * length << "cm\n” ;
break ;
case 'c':
cout << length << "cm == " << length / cmperinch << " i n \n” ;
break ;
default :
cout << "Lo siento , no conosco esa unidad"
<< unit <<" \ n” ;
b r e a k ;
}
}


