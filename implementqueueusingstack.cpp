class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int>s1;
    stack<int>s2;
    void push(int x) {                                                          
        s1.push(x);                                                            
    }
                                                                      /*The functions associated with stack are: 
                                                                        empty() – Returns whether the stack is empty – Time Complexity : O(1) 
                                                                        size() – Returns the size of the stack – Time Complexity : O(1) 
                                                                        top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
                                                                        push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
                                                                        pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1) 

*/
    int pop() {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
       int temp=s2.top();
       s2.pop();
       while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    return temp;
    }
    
    int peek() {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
       int temp=s2.top();
       
       while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    return temp;


    }
    
    bool empty() {
       if(s1.empty())
       return true;

       return false; 
    }
};
