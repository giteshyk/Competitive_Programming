#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,j,k=-100000,n,max_index_1=-1,max_index_2=-1;
    cin>>n;
    long long int inp_arr[n];
    long long int max1,max2;

    for(i=0;i<n;i++)
    {
        cin>>inp_arr[i];                   //INPUT
    }


    for(i=0;i<n;i++)                        //First Maximum Index
    {
    if(max_index_1 == -1 || inp_arr[i] > inp_arr[max_index_1])
        max_index_1 = i ;
    }


    for(i=0;i<n;i++)                         //Second Maximum Index
    {
    if(i!=max_index_1 && (max_index_2 == -1 || inp_arr[i] > inp_arr[max_index_2]))
        max_index_2 = i ;
    }

    cout<<inp_arr[max_index_1]*inp_arr[max_index_2];
    return 0;
}

