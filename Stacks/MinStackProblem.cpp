#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
    stack<long long> st;
    long long mini;
	
	public:

		
		// Constructor
		minStack() 
		{ 
			mini=INT_MAX;
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			if(st.empty()){
                st.push(num);
                mini=num;
            }
            else if(num<mini){
                st.push(2*num*1LL-mini);
                mini=num;
            }
            else{
                st.push(num);
            }
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
            if(st.empty()){
                return -1;
            }
			long long el = st.top();
            st.pop();

            int ret=-1;
            if(el<mini){ 
                mini=(2*mini-el);
            }
            return el;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			 if(st.empty()){
                return -1;
            }
            if(st.top()<mini){
                return mini;
            }
            return st.top();
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			return mini;
		}
};