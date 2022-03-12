/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 12,2022*/
//棋盘图案
#include<iostream>
using namespace std;
int main()
{
    //方法1
    for(int i=1;i<=8;i++)
    {

        if(i%2==0)
            cout<<" * * * * * * * *"<<endl;
        else
            cout<<"* * * * * * * *"<<endl;
    }
    //方法2
    cout<<"* * * * * * * *"<<endl;
    cout<<" * * * * * * * *"<<endl;
    cout<<"* * * * * * * *"<<endl;
    cout<<" * * * * * * * *"<<endl;
    cout<<"* * * * * * * *"<<endl;
    cout<<" * * * * * * * *"<<endl;
    cout<<"* * * * * * * *"<<endl;
    cout<<" * * * * * * * *"<<endl;
    return 0;
}
