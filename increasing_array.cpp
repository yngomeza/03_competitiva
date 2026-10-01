#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long mov = 0;
    long long ant;
    cin >> ant;

    for (int i = 1; i < n; i++) {
        long long act;
        cin >> act;

        if (act < ant) {
            mov += (ant - act);
        } else {
            ant = act;
        }
    }

    cout << mov << endl;

    return 0;
}