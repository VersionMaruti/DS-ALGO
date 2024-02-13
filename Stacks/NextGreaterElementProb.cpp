#include<bits/stdc++.h>

using namespace std;
class Solution {
  public:
    vector < int > nextGreaterElements(vector < int > & nums) {
      int n = nums.size();
      vector < int > nge(n, -1);
      stack < int > st;
      for (int i = 2 * n - 1; i >= 0; i--) {//Yahan 2*n-1 Imaginary artay ke liye hain jab humko circular
      //array se related problem solve karni hogi.
        while (!st.empty() && st.top() <= nums[i % n]) {//(i%n) humein starting se shift kr dega
          st.pop();
        }

        if (i < n) {
          if (!st.empty()) nge[i] = st.top();
        }
        st.push(nums[i % n]);
      }
      return nge;
    }
};
int main() {
  Solution obj;
  vector < int > v {2,4,3,1,5};
  vector < int > res = obj.nextGreaterElements(v);
  cout << "The next greater elements are" << endl;
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << " ";
  }
}