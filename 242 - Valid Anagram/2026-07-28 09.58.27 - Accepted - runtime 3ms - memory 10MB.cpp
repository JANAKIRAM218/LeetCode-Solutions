class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for (char i:s){
            mp1[i]++;
        }
        cout<<endl;
        for(char j:t){
            mp2[j]++;
        }


        return mp1==mp2;
    }
};