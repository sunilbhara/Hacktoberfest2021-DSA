#include<iostream>
using namespace std;

int main()
{
    int n,s=1;
    cout<<"Enter the number : "<<endl;
    cin>>n;


    for(int i=n ; i>0 ; i--)
    {
        
        s=s*i;
    }

    cout<<"factorial of the number "<<n<<" is : "<<s<<endl;
}