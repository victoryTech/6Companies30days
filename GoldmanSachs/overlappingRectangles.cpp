class Solution {
  public:
    int doOverlap(int l1[], int r1[], int l2[], int r2[]) {
        // if one rectangle is on left side of other
        if(l1[0] > r2[0] or l2[0] > r1[0])
            return 0;
            
        // if one rectangle is above other
        if(l1[1] < r2[1] or l2[1] < r1[1])
            return 0;
        
        return true;
    }
};