class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long prod = 1;
        long long i = 0;
        long long count = 0;
        
        for(int j = 0; j < n; j++){
            prod *= a[j];
            
            while(i < n and prod >= k){
                prod /= a[i++];
            }
            
            count += (j - i + 1);
        }
        return count;
    }
};