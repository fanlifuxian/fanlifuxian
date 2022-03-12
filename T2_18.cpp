/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 12,2022*/
//整数比较
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
        cout<<a<<" is large"<<endl;
    else if(a<b)
        cout<<b<<" is large"<<endl;
    else
        cout<<"These numbers are equal"<<endl;
    return 0;
}
