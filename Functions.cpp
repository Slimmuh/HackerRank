#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{

    if (a > b && a > c && a > d)
    {

        cout << a << endl;
    }

    else if (b > a && b > c && b > d)
    {

        cout << b << endl;
    }
    else if (c > d && c > a && c > b && c > d)
    {

        cout << c << endl;
    }
    else if (d > a && d > b && d > c)
    {

        cout << d << endl;
    }

    return 0;
}

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    max_of_four(a, b, c, d);

    return 0;
}
