string encode(string src)
{     
    string ans = "";
    int count = 1;
    
    int i = 0;
    for(i = 0; i < src.length() - 1; i++){
        if(src[i] == src[i + 1])
            count++;
        else if(src[i] != src[i + 1]){
            ans = ans + src[i] + to_string(count);
            count = 1;
        }
    }
    
    ans = ans + src[i] + to_string(count);
    return ans;
}