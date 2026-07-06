class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs[strs.size()-1];
        int i=0;
        int j=0;
        string ans="";
        while(i<first.size() && j<last.size()){
            if(first[i]==last[i]){
                ans+=first[i];
            }
            else{
                break;
            }
            i++;
            j++;
        }
        return ans;
    }
};