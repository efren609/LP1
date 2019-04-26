#include <iostream>
using namespace std;

int brincos(int maximo) {
    int brincos = 1;
    int distancia = 1;
    int suma = 1;
    while(suma < maximo) {
        distancia += 9;
        suma += distancia;
        brincos++;
    }
    return brincos;
}

int main()
{
    cout << "Cuanto recorrio? ? ";
    int lrecor;
    cin >> lrecor;
    cout << brincos(lrecor) << endl;
    return 0;
}
