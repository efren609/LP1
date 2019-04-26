#include <iostream>
#include <vector>
using namespace std;

vector<int> A;

bool EsPosible() {
    int contador = 0;
    int real = A[0];
    for(int i = 1; i < A.size(); i++) {
        if(real == A[i]) {
            contador++;
            if(contador == 2) {
                return true;
                break;
            }
        }else{
            contador = 0;
        }
        real = A[i];
    }
    return false;
}

int main()
{
    cout << "Cual es la longitud? ? ";
    int a;
    cin >> a;
    cout << "Ingrese los datos por espacios porfavor (# # # ...) ? ";
    while(a--)
    {
        int x;
        cin >> x;
        A.push_back(x);
        if(a == 0) {
            if(EsPosible()) {
                cout << "SI es posible";
            }else{
                cout << "NO es posible";
            }
        }
    }
    return 0;
}
