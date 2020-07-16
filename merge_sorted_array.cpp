class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            for(int i=m-1,j=n-1,k=m+n-1;k>=0&&j>=0;k--)
                nums1[k]=(i<0||nums1[i]<nums2[j])?nums2[j--]:nums1[i--];
    }
};

//Here we just start comparing from the last element and return the bigger one at the last index of bigger array.
//Code is missing the driver code , you may add driver code of your choice.
