class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int n=__builtin_popcount(N);
        return n;
    }

};
