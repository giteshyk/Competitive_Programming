#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,i,a=0,b=1,fib;

    cin>>n;

    if(n<=1)
    {
    return n;
    }
    //prints n fibonacci numbers
    cout<<a<<" ";
    cout<<b<<" ";

    for(i=0;i<n-2;i++)
    {
        fib = a + b ;
        a=b;
        b=fib;
        cout<<fib<<" ";
    }
    return 0;
}
