/*Author:Chenkun Li
* E-mail:2622857898@qq.com
* Time:Mar 12,2022*/
//算术运算、求最大和最小数
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Imput three different integers:" << a << " " << b << " " << c << endl;
    cout << "Sum is " << a + b + c << endl;
    cout << "Average is " << (a + b + c) / 3 << endl;
    cout << "Product is " << a * b * c << endl;
    if(a < b )
    {
        if (b < c)
        {
            cout << "Smallest is " << a << endl;
            cout << "Largest is " << c << endl;
        }
        else
        {
            if (a < c)
            {
                cout << "Smallest is " << a << endl;
                cout << "Largest is " << b << endl;
            }
            else
            {
                cout << "Smallest is " << c << endl;
                cout << "Largest is " << b << endl;
            }
        }
    }
    else
    {
        if (a < c)
        {
            cout << "Smallest is " << b << endl;
            cout << "Largest is " << c << endl;
        }
        else
        {
            if (c < b)
            {
                cout << "Smallest is " << c<< endl;
                cout << "Largest is " << a<< endl;
            }
            else
            {
                cout << "Smallest is " <<b<< endl;
                cout << "Largest is " << a << endl;
            }
        }
    }

    return 0;
}
