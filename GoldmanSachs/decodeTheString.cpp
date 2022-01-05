class Solution{
public:
    string decodedString(string s){
        stack<string> strStack;
        stack<int> nums;
        string curStr;
        int num = 0;
        
        for(char c : s){
            if(isdigit(c)){
                num = num * 10 + (c - '0');
            }
            else if(isalpha(c)){
                curStr.push_back(c);
            }
            else if(c == '['){
                strStack.push(curStr);
                nums.push(num);
                curStr = "";
                num = 0;
            }
            else if(c == ']'){
                string temp = curStr;
                for(int i = 0; i < nums.top() - 1; i++)
                    curStr += temp;
                
                curStr = strStack.top() + curStr;
                strStack.pop();
                nums.pop();
            }
        }
        return curStr;
    }
};