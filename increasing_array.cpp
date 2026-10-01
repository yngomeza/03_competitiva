#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long mov = 0;
    long long ant;
    cin >> ant;

    for (int i = 1; i < n; i++) {
        long long actual;
        cin >> actual;

        if (actual < ant) {
            mov += (ant - actual);
        } else {
            ant = actual;
        }
    }

    cout << mov << endl;

    return 0;
}