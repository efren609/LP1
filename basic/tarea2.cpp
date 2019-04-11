#include <iostream>
using namespace std;
int main() {
  double money=0;
  char cambio;
  char cambio1;
  cout<<"¤¤¤ Ingrese el monto de su deposito ¤¤¤ \n"<<"                  ? ";
  cin>>money;
  cout<<"¤¤¤ Que tipo de moneda es su deposito? ¤¤¤ \n";
  cout<<"Marque:\n"<<"1 » dolares\n"<<"2 » yenes\n"<<"3 » euros\n"<<"4 » libras\n"<<"5 » yuanes\n"<<"6 » Shekels\n"<<"                  ? ";
  cin>>cambio;
  switch(cambio){
    case '1':
    cout<<"¤¤¤ Que tipo de cambio desea hacer?? ¤¤¤ \n";
    cout<<"Marque:\n"<<"1 » Yenes\n"<<"2 » Euros\n"<<"3 » Libras\n"<<"4 » Yuanes\n"<<"5 » Shekels\n"<<"                  ? ";
    cin>>cambio1;
    switch(cambio1){
      case'1':
      (money=money*111.46);
      cout<<"       » Usted tiene "<<money<<" ¥ yenes\n";
      break;
      case'2':
      (money=money*0.89);
      cout<<"       » Usted tiene "<<money<<" € euros\n";
      break;
      case'3':
      (money=money*0.76);
      cout<<"       » Usted tiene "<<money<<" £ libras\n";
      break;
      case'4':
      (money=money*6.71);
      cout<<"       » Usted tiene "<<money<<" ¥ yuanes\n";
      break;
      case'5':
      (money=money*3.60);
      cout<<"       » Usted tiene "<<money<<" ? shekel\n";
      break;}
    break;
    case'2':
    cout<<"¤¤¤ Que tipo de cambio desea hacer?? ¤¤¤ \n";
    cout<<"Marque:\n"<<"1 » Dolares\n"<<"2 » Euros\n"<<"3 » Libras\n"<<"4 » Yuanes\n"<<"5 » Shekels\n"<<"                  ? ";
    cin>>cambio1;
    switch(cambio1){
      case'1':
      (money=money*0.0090);
      cout<<"       » Usted tiene "<<money<<" $ dolares\n";
      break;
      case'2':
      (money=money*0.0080);
      cout<<"       » Usted tiene "<<money<<" € euros\n";
      break;
      case'3':
      (money=money*0.0068);
      cout<<"       » Usted tiene "<<money<<" £ libras\n";
      break;
      case'4':
      (money=money*0.060);
      cout<<"       » Usted tiene "<<money<<" ¥ yuanes\n";
      break;
      case'5':
      (money=money*0.032);
      cout<<"       » Usted tiene "<<money<<" ? shekel\n";
      break;}
    break;
    case'3':
    cout<<"¤¤¤ Que tipo de cambio desea hacer?? ¤¤¤ \n";
    cout<<"Marque:\n"<<"1 » Dolares\n"<<"2 » Yenes\n"<<"3 » Libras\n"<<"4 » Yuanes\n"<<"5 » Shekels\n"<<"                  ? ";
    cin>>cambio1;
    switch(cambio1){
      case'1':
      (money=money*1.12);
      cout<<"       » Usted tiene "<<money<<" $ dolares\n";
      break;
      case'2':
      (money=money*125.35);
      cout<<"       » Usted tiene "<<money<<" ¥ yenes\n";
      break;
      case'3':
      (money=money*0.85);
      cout<<"       » Usted tiene "<<money<<" £ libras\n";
      break;
      case'4':
      (money=money*7.55);
      cout<<"       » Usted tiene "<<money<<" ¥ yuanes\n";
      break;
      case'5':
      (money=money*4.05);
      cout<<"       » Usted tiene "<<money<<" ? shekel\n";
      break;}
    break;
    case'4':
    cout<<"¤¤¤ Que tipo de cambio desea hacer?? ¤¤¤ \n";
    cout<<"Marque:\n"<<"1 » Dolares\n"<<"2 » Yenes\n"<<"3 » Libras\n"<<"4 » Yuanes\n"<<"5 » Shekels\n"<<"                  ? ";
    cin>>cambio1;
    switch(cambio1){
      case'1':
      (money=money*1.32);
      cout<<"       » Usted tiene "<<money<<" $ dolares\n";
      break;
      case'2':
      (money=money*146.77);
      cout<<"       » Usted tiene "<<money<<" ¥ yenes\n";
      break;
      case'3':
      (money=money*1.17);
      cout<<"       » Usted tiene "<<money<<" € euros\n";
      break;
      case'4':
      (money=money*8.84);
      cout<<"       » Usted tiene "<<money<<" ¥ yuanes\n";
      break;
      case'5':
      (money=money*4.74);
      cout<<"       » Usted tiene "<<money<<" ? shekel\n";
      break;}
    break;

  
   }
   



  


}
