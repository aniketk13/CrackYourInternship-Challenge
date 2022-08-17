class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> codes={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_set<string> ans;
        for(auto i:words){
            string code="";
            for(auto j:i){
                code+=codes[j-'a'];
            }
            ans.insert(code);
        }
        return ans.size();
        
    }
};