 string reverseWords(string s) {
       string ans;
       int n=s.length()-1;
       int k=0;
       while(s[n]==' ')
       n--;
       while(s[k]==' ')
       k++;
       string w;
       for(int i=n;i>=k;i--)
       {
        if(s[i]!=' ')
        w.push_back(s[i]);
        if(s[i]==' ' and s[i-1]!=' ')
        {
            reverse(w.begin(),w.end());
           ans+=w+' ';
         w.erase();
        }
        
       } 
       reverse(w.begin(),w.end());
       ans+=w;
    return ans;
    }
