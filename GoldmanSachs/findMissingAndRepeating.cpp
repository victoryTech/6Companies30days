class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int i = 0;
        while(i < n){
            while(arr[i]!=arr[arr[i]-1] && i<n)
                swap(arr[i],arr[arr[i]-1]);
                
            i++;
        }
        int *ans = new int[2];
        for(int i = 0; i < n; i++){
            if(arr[i] != i + 1){
                ans[0] = arr[i];  // repeating
                ans[1] = i + 1;   // missing
                break;
            }
        }
        
        return ans;
    }
};