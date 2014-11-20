#include <iostream>
using namespace std;
int main ()
{
int a,b,c=0;
cin>>a;
  for(b=2; b<a; b++)
    {
        if(a%b==0)
        {
        c=1;
        break;
        }
    }
    if (c==0)
        cout << "Prosto";
    else
    cout<<"Sastavno";
        return 0;
}
