/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 12,2022*/
//整数的各位数字
#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c,d,e;
    cin>>n;
    a=n%10;
    b=n/10%10;
    c=n/100%10;
    d=n/1000%10;
    e=n/10000;
    cout<<e<<"   "<<d<<"   "<<c<<"   "<<b<<"   "<<a<<endl;
    return 0;
}
