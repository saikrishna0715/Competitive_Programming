#include <stack>
class Solution { //Uses Stack
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        for(char i:s){
            if(i != '#'){
                st1.push(i);
            }
            else{
                if(! st1.empty()){
                    st1.pop();
                }
            }
        }
        for(char i:t){
            if(i != '#'){
                st2.push(i);
            }
            else{
                if(! st2.empty()){
                    st2.pop();
                }
            }
        }
        return st1 == st2;
    }
};