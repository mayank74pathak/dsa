//https://www.youtube.com/watch?v=BXocVkXthOE
int romanToInt(string s) {
       int sum=0;
       unordered_map<char,int>m;
       m['I']=1;
       m['V']=5;
       m['X']=10;
       m['L']=50;
       m['C']=100;
       m['D']=500;
       m['M']=1000;
       for(int i=0;i<s.length()-1;i++)
       {
         if(m[s[i]]<m[s[i+1]])
         {
            sum-=m[s[i]];
         }
        else
        sum+=m[s[i]]; 
       } 
      sum+=m[s[s.length()-1]];
      return sum;
    }
