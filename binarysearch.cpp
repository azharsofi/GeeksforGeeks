class Solution {
  public:
    int binarysearch(int a[], int n, int k) {
        int s=0;
        int e=n-1;
        while(s<=e){
        int m=s+(e-s)/2;
        if(a[m]==k)
        return m;
        else if(k>a[m])
        s=m+1;
        else
        e=m-1;
            
        }
        return -1;
    }
};
