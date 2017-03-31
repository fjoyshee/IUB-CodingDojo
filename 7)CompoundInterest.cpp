#include <iostream>
#include <cmath>

using namespace std;
int main()

{
   float n,p,r,f;

    cout<<"Enter the value of principle: "<<endl;
    cin>>p;
    cout<<"Enter the value of rate: "<<endl;
    cin>>r;
    cout<<"Enter the value of number: "<<endl;
    cin>>n;
    f=p*pow((1+r),n);
    cout<<"Compound Interest is : "<<f<<endl;
   cin>>f;

    return 0;
}
