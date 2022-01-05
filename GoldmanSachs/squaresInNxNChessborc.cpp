class Solution {
  public:
    long long squaresInChessBoard(long long n) {
        // n * n -> (n*(n+1)*((2*n)+1))/6;
        long long ans = (n*(n+1) *((2*n)+1))/6;
        return ans;
    }
};