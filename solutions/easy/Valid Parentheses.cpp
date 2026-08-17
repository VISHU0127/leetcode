// Title: Valid Parentheses
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/valid-parentheses/

            }
                    if((st.top() == '(' && str[i] == ')') ||
                        (st.top() == '{' && str[i] == '}') ||
                        (st.top() == '[' && str[i] == ']')){
                            st.pop();
                    }
                        else{
                            return false;
                        }
                }
        }
    return st.size() == 0;
}
};   
