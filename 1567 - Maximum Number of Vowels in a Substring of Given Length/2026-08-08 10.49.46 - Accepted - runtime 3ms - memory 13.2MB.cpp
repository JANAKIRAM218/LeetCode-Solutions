class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0;
        int ans=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){
                count+=1 ;

            }
        }
        ans=count;
        for(int i=k;i<s.size();i++){
            char c=s[i-k];
            if(c=='a' || c=='e' || c=='i' || c=='o' ||c=='u' ){
                count--;
            }
            c=s[i];
            if(c=='a' || c=='e' || c=='i' || c=='o' ||c=='u' ){
                count++;
            }

            ans=max(ans,count);

        }
        return ans;
    }
};