#include <iostream>
using namespace std;
int main() {
  string money;
	float cd;
	cout<<"» A que moneda desea cambiarlo( escriba eu o yen o lib): \n";
  cout<<"                             ?";
	cin>>money;
	if (money=="lib"  or money== "yen" or money == "eu" )
	{
	
		cout<<"Cuantos dolares desea cambiar:\n";
    cout<<"                            ?";
		cin>>cd;
		if (money == "eu" )
		{
			cd=1.12*cd;
			cout<<"Usted tiene » "<<cd<<" €";
		}
		if (money == "yen")
		{
			cd=0.0090*cd;
			cout<<"Usted tiene » "<<cd<<" ¥";
		}
			
		if (money == "lib")
		{
			cd=1.32*cd;
			cout<<"Usted tiene » "<<cd<<" £";
		}
}
	else{
		cout<<"Fallo al ingresar la moneda \n";
	}		
			
	return 0;

}
