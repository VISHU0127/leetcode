// Title: Min Stack
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/min-stack/

        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    void pop() {
        }
    }
    
    int getMin() {
        return s.top().second;
            int minVal = min(value, s.top().second);
            s.push({value, minVal});
        else{
        if(s.empty()){
            s.push({value, value});
        }
