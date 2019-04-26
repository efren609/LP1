#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> mala_palabra;
    mala_palabra.push_back("SHIT");
    mala_palabra.push_back("shit");

    cout << "Ingresa una palabra: ";
    string word;
    cin >> word;
    bool found = false;
    for(int i = 0; i < mala_palabra.size(); i++) {
        if(mala_palabra[i] == word) {
            found = true;
            break;
        }
    }
    if(!found) {
        cout << word;
    }else{
        cout << "Piiiii";
    }
    return 0;
}
