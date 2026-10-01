#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long sumaTotal = (n * (n + 1)) / 2;

    for (int i = 0; i < n - 1; i++) {
        long long numero;
        cin >> numero;
        sumaTotal = sumaTotal - numero;
    }

    cout << sumaTotal << endl;

    return 0;
}