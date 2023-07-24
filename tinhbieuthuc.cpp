#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x;
    cout << "Nhap gia tri x: ";
    cin >> x;
    
    double ngoac = pow(x, 2) + 10 * x * sqrt(x) + 3 * x + 1;
    double y1 = 4 * ngoac;

    const double pi = 3.141592;
    double y2 = sin(pi * pow(x, 2)) + sqrt(pow(x, 2) + 1) / exp(2 * x) + cos(pi / 4 * x);
    cout << "Gia tri cua y1 la: " << y1 << endl;
    cout << "Gia tri cua y2 la: " << y2 << endl;

    return 0;
}
