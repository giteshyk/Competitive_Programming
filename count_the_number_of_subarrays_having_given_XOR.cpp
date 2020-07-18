#include <bits/stdc++.h>
using namespace std;

long long subarrayXor(int arr[], int n, int m)    //m is given xor
{
    long long ans = 0;
    vector<int> prefixXOR(n,0);
    unordered_map<int,int> XOR_entries ;

    prefixXOR[0] = arr[0];

    for(int i=1;i<n;i++){
        prefixXOR[i] = prefixXOR[i-1]^arr[i];
    }

    for(int i=0;i<n;i++){
        int temp = m^prefixXOR[i];

        ans = ans + (long long)XOR_entries[temp];

        if(prefixXOR[i]==m){
            ans++;
        }

        XOR_entries[prefixXOR[i]]++;
    }
    return ans;
}

// Driver program to test above function
int main()
{
    int arr[] = { 4, 2, 2, 6, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 6;

    cout << "Number of subarrays having given XOR is "
         << subarrayXor(arr, n, m);
    return 0;
}
