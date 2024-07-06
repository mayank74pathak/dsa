 MinStack() {
        
    }
    int mini=INT_MAX;
    stack<int>s1;
    stack<int>s2;
    void push(int val) {
        if(s1.empty())
        {
            s1.push(val);
            s2.push(val);
        }
       else
       {
        if(val<=s2.top())
        {
            s2.push(val);
        }
       s1.push(val);
       }
    }
    
    void pop() {
    if(s1.empty())
    return;
else if(s1.top()==s2.top())
s2.pop();
s1.pop();        
    }
    
    int top() {
       if(s1.empty())
       return NULL;
       int temp =s1.top();
       return temp; 
    }
    
    int getMin() {
        if(s2.empty())
        return NULL;
        return s2.top();
    }
