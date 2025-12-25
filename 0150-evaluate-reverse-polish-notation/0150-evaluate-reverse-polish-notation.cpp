class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> result;
        for(auto& ch:tokens){
            if(ch == "+"){
                int a = result.top();
                result.pop();
                int b = result.top();
                result.pop();
                result.push(b+a);
            }
            else if(ch == "-"){
                int a = result.top();
                result.pop();
                int b = result.top();
                result.pop();
                result.push(b-a);
            }
            else if(ch == "*"){
                int a = result.top();
                result.pop();
                int b = result.top();
                result.pop();
                result.push(b*a);
            }
            else if(ch == "/"){
                int a = result.top();
                result.pop();
                int b = result.top();
                result.pop();
                result.push(b/a);
            }
            else{
                result.push(stoi(ch));
            }
        }

        return result.top();
    }
};