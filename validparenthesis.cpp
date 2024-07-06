 bool isValid(string s) {
      stack<char>st;
       for(char c:s)
       {
        if(c=='(' or c=='[' or c=='{')
           st.push(c);
        else if(st.empty() or (c==')' and st.top()!='(') or (c=='}' and st.top()!='{') or (c==']' and st.top()!='['))
           return false;
         else
            st.pop();
       }
  return st.empty();  
 }
