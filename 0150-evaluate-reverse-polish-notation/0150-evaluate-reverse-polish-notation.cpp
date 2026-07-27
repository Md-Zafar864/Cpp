class Solution {
public:
    int evalRPN(vector<string>& token) {
        int n=token.size();
        stack<int> st;
        int a=0;
        int b=0;
        int res=0;
        for(int i=0; i<n; i++){
            if(!st.empty() && (token[i]=="+" || token[i]=="-" || token[i]=="*" || token[i]=="/" )){
                
                if(token[i]=="+"){
                    a=st.top();
                    st.pop();
                    b=st.top();
                    st.pop();
                    st.push(b+a);
                }
                  else if(token[i]=="-"){
                     int a=st.top();
                    st.pop();
                    b=st.top();
                    st.pop();
                    st.push(b-a); }
                
                  else if(token[i]=="/"){
                      int a=st.top();
                    st.pop();
                    b=st.top();
                    st.pop();
                    st.push(b/a);    
                }
                   else if(token[i]=="*"){
                      int a=st.top();
                    st.pop();
                    b=st.top();
                    st.pop();
                    st.push(b*a);        
                    
                }
               
            }
            else{
                st.push(stoi(token[i]));
            }
            


        }
        return (st.top());
    }
};