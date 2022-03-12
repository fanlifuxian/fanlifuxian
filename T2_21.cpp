/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 12,2022*/
//用星号显示图形
#include <iostream>

using namespace std;

int main()
{

    //矩形
   /*for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(i==1||i==9||j==1||j==9)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }*/
    //菱形
    /*for(int i=1;i<=9;i++)
    {

        for(int j=1;j<=9;j++)
        {

            if((i+j)==6||(i+j)==14||(j-i)==4||(i-j)==4)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }*/
    //箭头
    /*for(int i=1;i<=3;i++)
    {

        for(int j=1;j<=5;j++)
        {
            if((i+j)<=3||(j-i)>=3)
            cout<<" ";
            else
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=4;i<=9;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j<=2||j>=4)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }*/
    //椭圆
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(j>=4&&j<=6&&(i==1||i==9)||((j==1)||j==9)&&(i>=3&&i<=7)||(i==2&&j==2)||(i==2&&j==8)||(i==8&&j==8)||(i==8&&j==2))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;

}
