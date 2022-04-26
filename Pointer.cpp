#include <iostream>
using namespace std;

void update(int a, int b)
{

    int x = a + b;
    int y = abs(a - b);

    cout << x << endl;
    cout << y;
}

int main()
{

    int a = 0;
    int b = 0;

    cin >> a;
    cin >> b;

    update(a, b);

    return 0;
}