#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int max, min; 
    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;
    cout << "Nhap so thu ba: ";
    cin >> c;

    max = a; 
    min = a; 

    if (max < b) {
        max = b; 
    }
    if (max < c) {
        max = c;
    }

   
    if (min > b) {
        min = b; 
    }
    if (min > c) {
        min = c; 
    }

    cout << "So lon nhat: " << max << endl;
    cout << "So nho nhat: " << min << endl;

    return 0;
}
