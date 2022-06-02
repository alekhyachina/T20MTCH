#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    if ( c+36*(20-b)>a )
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}