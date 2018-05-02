#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include<cmath>
using namespace std;

int main()
{
    int n ,i,equation_num;
    string equ,equation[100];
    cin>>n;
    for(i=0;i<=n;i++)
    {
        getline(cin,equ);
        equation[i]=equ;
    }

    for(i=0;i<=n;i++)
    {

        cout<<equation[i].substr(0,equation[i].find("+"))<<endl;
    }











//cin>>equation_num;
//for(i=0;i<=n;i++)
  //  {

   //     if((equation_num)==i)
     //   {
       //     cout<<equation[i]<<endl;
         //   break;
     //   }
    //}

    return 0;
}
