#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cout << "Nhap bien so xe : \n";
    cin >> a >> b >> c >> d;
    
    if (a == 0)
    {
        cout << "Bien so xe la : " << a << b << c << d;
        e = a + b + c + d;
        cout << " \n So nut la : " << e << endl;
    }
    else
    {
        cout << "Bien so xe la : " << a << b << c << d;
        f = a + b + c + d;
        cout << " \n So nut la : " << f << endl;
    }
    
    return 0;
}
