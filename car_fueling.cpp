#include <bits/stdc++.h>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int d, int m, vector<int> & stops,int n) {
    int curr_max = m, curr_stop ;
    int refills = 0;
    int max_refill = 0;

    if(m>d)
        return 0;

    while(curr_max <= d && max_refill <=n+1 ){
        int i = 0;

        while(curr_max - stops[i] >= 0 && i<n)
            i++;

        curr_stop = stops[i-1] ;
        if(curr_max < d && curr_stop < d)
            refills += 1;
        curr_max = curr_stop + m ;
        max_refill += 1 ;

        if(curr_max >= d)
            return refills ;
    }
return -1;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops ,n) << "\n";

    return 0;
}
