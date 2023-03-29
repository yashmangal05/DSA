//https://leetcode.com/problems/evaluate-reverse-polish-notation/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto i : tokens){
            if(i.size()>1 || isdigit(i[0])){
                st.push(stoi(i));
            }
            else{
                int num = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                switch(i[0]){
                    case '+' : st.push(num + num2); break;
                    case '-' : st.push(num2 - num); break;
                    case '*' : st.push(num2*num); break;
                    case '/' : st.push(num2/num);
                }
            }
        }
        return st.top();
    }
};