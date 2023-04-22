class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        int f=1;
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        for(int i=0;i<N;i++){
            if(A[i]!=B[i]){
            f=0;
            break;}
        }
         if(f==1)
         return 1;
         else
         return 0;
        
    }
};
