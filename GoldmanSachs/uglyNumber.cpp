class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    ull ugly[n];
	    ull nextUglyNumber = 1;
	    ull i2 = 0, i3 = 0, i5 = 0;
	    ull nextMultiple2 = 2;
	    ull nextMultiple3 = 3;
	    ull nextMultiple5 = 5;
	    
	    ugly[0] = 1;
	    for(int i = 1; i < n; i++){
	        nextUglyNumber = min({nextMultiple2, nextMultiple3, nextMultiple5});
	        ugly[i] = nextUglyNumber;
	        
	        if(nextUglyNumber == nextMultiple2){
	            i2++;
	            nextMultiple2 = ugly[i2] * 2;
	        }
	        
	        if(nextUglyNumber == nextMultiple3){
	            i3++;
	            nextMultiple3 = ugly[i3] * 3;
	        }
	        
	        if(nextUglyNumber == nextMultiple5){
	            i5++;
	            nextMultiple5 = ugly[i5] * 5;
	        }
	    }
	    return nextUglyNumber;
	}
};