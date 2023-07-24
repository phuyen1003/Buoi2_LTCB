#include <iostream>
using namespace std;

int main() {
    float km;
    float tien;

    cout << "Nhap vao so km: ";
    cin >> km;

    if (km >= 0 && km <= 1) {
        tien = km * 15000;
        cout << "Ban phai tra: " << tien << " d";
    } else if (km >= 2 && km < 6) {
        tien = km * 13500;
        cout << "Ban phai tra: " << tien << " d";
    } else if (km >= 6) {
        tien = km * 11000;
        cout << "Ban phai tra: " << tien << " d";
    } else if (km > 120) {
        tien = km / 10;
        cout << "Ban phai tra: " << tien << " d";
    }

    return 0;
}
