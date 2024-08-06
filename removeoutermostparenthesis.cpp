string removeOuterParentheses(string s) {
        bool flag=true;
        int count=0;
        
        string ans="";
        for(int i=0;i<s.length();i++ )
          {
            if(s[i]=='(')
            {
                count++;
            }
            if(s[i]==')')
            {
                count--;
            }
             if(flag==true and count==1)
             {
                flag=false;
                continue;
             }
            if(flag==false and count==0)
            {
                flag=true;
                continue;
            }  
           ans=ans+s[i]; 
          }
    return ans;
    }
