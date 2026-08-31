class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int hashlen=256;
        int hash[hashlen];
        for(int i=0;i<hashlen;i++){
            hash[i]=-1;
        }
        int r=0;
        int l=0;
        int maxlength=0;
        while(r<n){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;

                }

            }
            int length=r-l+1;
            maxlength=max(maxlength,length);
            hash[s[r]]=r;
            r++;

        }
        return maxlength;
        


        
        
    }
};
