//string substr (size_t pos, size_t len) const;
bool rotateString(string s, string goal) {
      string c=s+s;
      if(s==goal)
      return true;
      int i=1;
      while(i<s.length())
      {
        if(goal==c.substr(i,s.length()))
        return true;
         i++;
      }
      
      return false;

    }
