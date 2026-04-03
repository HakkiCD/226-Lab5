#include <iostream>

using namespace std;

double calculateGn(int n, double r) {
    if (n == 0) {
        return 1.0;
    }


    double powerValue = 1.0;
    for(int i = 0; i < n; i++) {
        powerValue *= r;
    }

    return powerValue + calculateGn(n - 1, r);
}

int main() {
    int n;
    double r;

    cout << "n degerini giriniz: ";
    cin >> n;
    cout << "r (oran) degerini giriniz: ";
    cin >> r;

    double finalResult = calculateGn(n, r);

    cout << "Gn Sonucu: " << finalResult << endl;

    return 0;
}