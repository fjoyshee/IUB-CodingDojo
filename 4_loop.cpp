
//level II----4_loop
#include <iostream>
using namespace std;
int main()
{
    int i,n,sum;
    cin>>i;
    i=1;
    n=100;
    for (int i=1;i<=n;i++)
    {
    if (i==1)
    {
        cout<<"sum =";
        cout<<i;
    }
    else if (i>1 && i<n)
    {
        cout<<"+"<<i;
    }
    if(i==n)
        cout<<"="<<sum;
    }

}
