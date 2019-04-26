#include <iostream>
using namespace std;
#define DEBUG 0

int calcu(int a, int b, int c) {
    int sum = 0;
    int resX = 0;
    int resY = 0;
    for(int i = 1; i <= c; i++) {
        if((a-i) < 1 || (a+i) > 8) {
            resX++;
        }
        if((b-i) < 1 || (b+i) > 8) {
            resY++;
        }
    }
    resX = ((c*2) + 1) - resX;
    resY = ((c*2) + 1) - resY;
    if(resX > 8) resX = 8;
    if(resY > 8) resY = 8;
    return resX*resY;
}

int main()
{
    int a, b, c;
    #if DEBUG
    int T;
    cin>>T;
    while(T--)
    {
        cin >> a;
        cin >> b;
        cin >> c;
        if(c >= 7) {
            cout<< 64 <<endl;
        }else{
            cout<< Calcular(a, b, c) <<endl;
        }
    }
    #else
    cout << "Ingresa la posicion fila (en rango 1 hasta 8) ? ";
    cin >> a;
    if(!a || a < 1 || a > 8) {
        cout << "ERROR";
        return 0;
    }
    cout << "Ingrese la posicion columna (en rango 1 hasta 8) ? ";
    cin >> b;
    if(!b || b < 1 || b > 8) {
        cout << "ERROR";
        return 0;
    }
    cout << "Cuantas veces juego? ? ";
    cin >> c;
    if(!c || c < 0) {
        cout << "ERROR FIRE FIRE";
        return 0;
    }
    if(c >= 7) {
        cout << 64;
    }else{
        cout << calcu(a, b, c);
    }
    #endif
    return 0;
}
