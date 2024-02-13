#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int first(int n, int arr[], int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    int firsto = first(n, arr, i + 1, key);
    return firsto;
}
int last(int n, int arr[], int j, int key)
{
    if (j == n)
    {
        return -1;
    }
    int restarray = last(n, arr, j + 1, key);
    // cout<<restarr<<endl;
    if (restarray != -1)
    {
        return restarray; // ye restarray isliye lagaya hain kyunki last takk pahunch kar jab waapis
        // aayenge to 2 5th par mil jayega to uske baad return laga kar waapis funtion calling hi
        // lagate rahenge.
        //    cout<<j<<" "<<arr[j]<<endl;
    }
    cout << j << " " << arr[j] << endl;
    if (arr[j] == key)
    {
        return j;
    }
    return -1;
}

int main()
{
    int n = 7;
    int arr[7] = {4, 2, 1, 2, 5, 2, 8};
    cout << first(7, arr, 0, 2) << endl;
    cout << last(7, arr, 0, 2) << endl;

    return 0;
}

/*
RECURSION:
1.Every call of the function return to the same line.If function defined in 5th line then calling
will go to that line.
2.For every function call compiler generate a new stack memory itself.
3.When return occurs then call return to last call of function and if there is any line of code
define after tha recursive call it will read it first and returns back.
4.We can solve recursion by 2 methods:
(i)Induction Hypothesis:-Here we know the value for small value of n and Hypothis the value for
f(n-1) hence on.Generally this method used in simple questions like Fibonacci.

(ii)Recursion Tree:Advance questions we use this method.
*/
#include <iostream>
using namespace std;
bool issorted(int n, int arr[])
{
    if (n == 1)
    {
        return n;
    }
    if (arr[0] < arr[1] && issorted(n - 1, arr + 1))
    {
        return true;
    }
    return false;
}

int main()
{
    int n = 7;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    if (issorted(7, arr))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "not" << endl;
    }
    return 0;
}