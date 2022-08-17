class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> codes={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_set<string> ans;
        for(string i:words){
            string code="";
            for(char j:i){
                code+=codes[j-'a'];
            }
            ans.insert(code);
        }
        return ans.size();
        
    }
};