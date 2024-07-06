class MyStack {
public:
    MyStack() {
        
    }                                                              /* queue::empty()	O(1)
                                                                      queue::size()	O(1)
                                                                      queue::emplace()	O(1)
                                                                      queue::front()	O(1)
                                                                      queue::back()	O(1)
                                                                      queue::push(g) 	O(1)
                                                                      queue::pop() 	O(1)*/
    queue<int>q;
    
    void push(int x) {
        int i=1;
        if(q.empty())
        q.push(x);
        else
        {
            q.push(x);
            while(q.size()-1>=i)
            {
              int temp=q.front();
              q.pop();
              
              q.push(temp); 
            i++;
            }
        }
    }
    
    int pop() {
        int a=q.front();
        q.pop();
        return a;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        if(q.empty())
        return true;
        else
        return false;
    }
};
