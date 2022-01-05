class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // M = no of chocolates
        // N = No of students
        // K = starting position
        int lastPerson = (M + K - 1) % N;
        if(lastPerson == 0) // means that position is at last
            return N;
        return lastPerson;
    }
};