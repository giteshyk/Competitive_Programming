#include<bits/stdc++.h>

using namespace std;

long long int compute_gcd(long long int num1,long long int num2)
{
    if(num2==0)
        return num1;
    long long int rem;

    rem = remainder(num1,num2);
    compute_gcd(num2,rem);
}

int main()
{
    long long int a,b,gcd;

    cin>>a>>b;
    gcd = compute_gcd(a,b);
    cout<<" GCD is "<<gcd;
    return 0;
}
