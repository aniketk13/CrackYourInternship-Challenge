class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<char,string> mp;
        mp['a']=".-";
        mp['b']="-...";        
        mp['c']="-.-.";        
        mp['d']="-..";        
        mp['e']=".";        
        mp['f']="..-.";        
        mp['g']="--.";        
        mp['h']="....";        
        mp['i']="..";        
        mp['j']=".---";        
        mp['k']="-.-";        
        mp['l']=".-..";        
        mp['m']="--";
        mp['n']="-.";
        mp['o']="---";        
        mp['p']=".--.";        
        mp['q']="--.-";        
        mp['r']=".-.";        
        mp['s']="...";        
        mp['t']="-";        
        mp['u']="..-";        
        mp['v']="...-";        
        mp['w']=".--";        
        mp['x']="-..-";        
        mp['y']="-.--";        
        mp['z']="--..";
        
        set<string> ans;
        for(int i=0;i<words.size();i++){
            string code="";
            for(int j=0;j<words[i].length();j++){
                code+=mp[words[i][j]];
            }
            ans.insert(code);
            cout<<code;
        }
        return ans.size();
        
    }
};