int solution:: findMedian(vector<vector<int>> &A){
  int m = A.size();
  int n = A[0].size();
  
  int max = A[0][0];
  int min = A[0][0];
  
  for(int i = 0; i < m; i++){
    if(A[i][0] < min) min = A[i][0];
    if(A[i][n-1] > max) max = A[i][n-1];
  }
  
  int required = (m*n + 1)/2;
  
  while(min<max){
    int sum = 0;
    int mid = (min + max)/2;
    
    for(int i=0;i<m;i++){
      sum += upper_bound(A[i].begin(),A[i].end(),mid) - A[i].begin();    
     }
     if(sum >= required){
        max = min;
     }
     else min = mid + 1;
  }
  return max;
}
