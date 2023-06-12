
class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        unordered_set<int> s;

        for(int i=0;i<n;i++)
        s.insert(a[i]);
        int c=0;
        for(int i=0;i<m;i++){
            int k=b[i];
            if(s.find(k)!=s.end())
            {
                c++;
                s.erase(k);
            }
            
            
        }
        return c;
    }
};
