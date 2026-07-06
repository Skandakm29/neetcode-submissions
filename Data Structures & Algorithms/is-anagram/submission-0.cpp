class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>sx(26,0);
        if(s.size()!=t.size()) return false;
        for(char c:s){
            sx[c-'a']++;
        }
        for(char c:t){
            sx[c-'a']--;
        }
        for(int i=0;i<26;i++){
            if(sx[i]!=0){
                return false;
            }
        }
        return true;
    }
};
