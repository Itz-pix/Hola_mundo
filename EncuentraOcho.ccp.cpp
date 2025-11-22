#include <bits/stdc++.h>>
using namespace std;

int main()
{
    //Numeros que van a ingresar
    int N;

    cin >> N;
    //Analizar cada numero
    int arreglo[N];
    //lectura de los numeros
    for (int i = 0; i < N; i++)
        cin >> arreglo[i];
    //Comparacion para encontrar el 8
    for (int i = 0; i < N; i++)
        if (arreglo[i] == 8) {
            cout << 1;
            return 0;
        }

    cout << 0;

    return 0;
}



