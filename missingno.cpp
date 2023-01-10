class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int s=0;
        for(int i=0;i<n-1;i++)
       s=s+array[i];
       int es=n*(n+1)/2;
      
       return (es-s);
}
};
