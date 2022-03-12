/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 12,2022*/
//最大和最小整数
#include <iostream>

using namespace std;

int main()
{
   int a[5],t;
   for(int i=0;i<=4;i++)
   {
      cin>>a[i] ;
      for(int j=1;j<=4;j++)
      {
          if(a[i]<a[j])
          {
             t=a[i] ;
             a[j]=a[i];
             a[i]=t;
          }

      }

   }
   cout<<"max=: "<<a[4]<<endl;
   cout<<"min=: "<<a[0]<<endl;
    return 0;
}
