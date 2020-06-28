#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,j,k=-100000,n;
    cin>>n;
    long long int inp_arr[n];

    for(i=0;i<n;i++)
    {
        cin>>inp_arr[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(inp_arr[i]*inp_arr[j]>k)
                k=inp_arr[i]*inp_arr[j];
        }
    }
    cout<<k;
    return 0;
}
