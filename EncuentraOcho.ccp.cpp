#include <bits/stdc++.h>>
using namespace std;

int main()
{
    int N;

    cin >> N;

    int arreglo[N];

    for (int i = 0; i < N; i++)
        cin >> arreglo[i];

    for (int i = 0; i < N; i++)
        if (arreglo[i] == 4) {
            cout << 1;
            return 0;
        }

    cout << 0;

    return 0;
}



