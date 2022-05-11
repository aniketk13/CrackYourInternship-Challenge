class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int> st;
        int max_profit=0;
        for(int i=0;i<prices.size();i++){
            if(st.empty()){
                st.push(prices[i]);
            }
            else{
                if(prices[i]>st.top())
                {
                    if(i+1<prices.size() && prices[i+1]-st.top()>prices[i]-st.top())
                        continue;
                    max_profit+=prices[i]-st.top();
                    st.pop();
                }
                else
                {
                    st.pop();
                    st.push(prices[i]);
                }
            }
        }
        return max_profit;
    }
    
    //Approach 2
    int maxProfit(vector<int>& prices) {
        stack<int> st;
        int max_profit=0;
        for(int i=0;i<prices.size();i++){
            if(st.empty()){
                st.push(prices[i]);
            }
            else{
                if(prices[i]>st.top())
                {
                    max_profit+=prices[i]-st.top();
                    st.pop();
                    st.push(prices[i]);
                }
                else
                {
                    st.pop();
                    st.push(prices[i]);
                }
            }
        }
        return max_profit;
    }
    
    //Approach 3
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i+1]-prices[i]>0)
                max_profit+=prices[i+1]-prices[i];
        }
        return max_profit;
    }
};
