#include <iostream>
using namespace std;
int main()
{
    float x,y;
    cout<<"Enter the value of x:"<<endl;
    cin>>x;
    cout<<"Enter the value of y:"<<endl;
    cin>>y;
    float result=(x*x)+(y*y)+2*x*y+30;
    cout<<"(x*x)+(y*y)+2*x*y+30="<<result<<endl;

    return 0;
}
