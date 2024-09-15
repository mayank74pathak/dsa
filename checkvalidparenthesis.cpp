//https://www.youtube.com/watch?v=WBHt2u-FbaA
bool checkValidString(string s) {
        stack<int>left,star;
        for(int i=0;i<s.length();i++)
        {
            if('('==s[i])
            left.push(i);
            else if('*'==s[i])
            star.push(i);
            else
            {
                if(!left.empty())
                {
                    left.pop();
                }
              else if(!star.empty())
              {
                star.pop();
              }
              else
              {
                return false;
              }
            
            }
        }
    while(!left.empty())
    {
     if(star.size()==0)
     return false;
     if(left.top()<star.top())
     {
        left.pop();
        star.pop();
     }
    else
    return false;
    }
    return true;
    }
