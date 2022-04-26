#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int i = 3;
    long j = 12345678912345;
    char k = 'a';
    float l = 334.230;
    double m = 14049.304930000;

    cout << i << endl;
    cout << j << endl;
    cout << k << endl;
    cout << fixed << setprecision(3) << l << endl;
    cout << fixed << setprecision(9) << m << endl;

    return 0;
}