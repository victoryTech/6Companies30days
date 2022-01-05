class Solution {
public:
    
    int gcd(int a, int b){
        if(b == 0)
            return a;
        
        return gcd(b, a % b);
    }
    
    string gcdOfStrings(string str1, string str2) {
        int n1 = str1.size();
        int n2 = str2.size();
        
        int tLength = gcd(n1, n2); // calculating gcd maximum common
        
        // if the both string are of equal lenth
        if(n1 == n2){
            for(int i = 0; i < n1; i++){
                if(str1[i] != str2[i])
                    return "";
            }
        }
        
        int segmentIndex = 0;
        
        // for the first string check
        for(int i = tLength; i < n1; i++){
            
            // when it's having multiple tlength string in segment
            if(segmentIndex == tLength){
                segmentIndex = 0;
            }
            
            if(str1[i] != str1[segmentIndex]){
                return "";
            }
            
            segmentIndex++;
        }
        
        segmentIndex = 0;
        // for the second string with first consideration segment
        for(int i = tLength; i < n2; i++){
            if(segmentIndex == tLength)
                segmentIndex = 0;
            
            if(str1[segmentIndex] != str2[i])
                return "";
            
            segmentIndex++;
        }
        
        
        // return the ans string if it's having valid gcd string in common
        string ans;
        for(int i = 0; i < tLength; i++)
            ans.push_back(str1[i]);
        
        return ans;
    }
};