void printMaxactivities (int s[],int f[],int n) {            //input is sorted according to finish values in increasing order
    int i = 0 , j;
    cout << i << " ";
    
    for(j = 1; j<n;j++){
        if(s[j] >= f[i]){
            cout << j << " ";
            i = j;
        }
    }
}
// greedy O(NlogN) approach (for this function it will only take O(N) time but for sort O(NlogN) )
