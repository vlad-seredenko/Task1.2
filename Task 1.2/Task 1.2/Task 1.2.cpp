#include <iostream>
using namespace std;

double Summ(double x, double E)
{
    int n = 0;
    double a = 1;
    double y_cos_x = a;
    double cos_x;

    do {
        cos_x = -x * x / ((2. * n + 1.) * (2. * n + 2.));
        a *= cos_x;
        y_cos_x += a;
        n++;

    } while (fabs(a) < E);
    return y_cos_x;
}

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    double x;
    double E;
    cout << "Введiть Е = ";
    cin >> E;
    cout << "Введiть х = ";
    cin >> x;
    double y_cos_x = Summ(x, E);
    cout<<"y = cos(x) = " << y_cos_x << endl;
    return 0;
}