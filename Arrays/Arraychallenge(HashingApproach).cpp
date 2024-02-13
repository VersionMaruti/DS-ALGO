

#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int> &a, long long k)
{
    int n = a.size(); // size of the array.

    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        // calculate the prefix sum till index i:
        sum += a[i];

        // if the sum = k, update the maxLen:
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }

        // calculate the sum of remaining part i.e. x-k:
        long long rem = sum - k;

        // Calculate the length and update maxLen:
        if (preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        // Finally, update the map checking the conditions:
        if (preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}

int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

/*
To find the maximum sum of sub array using hashing method at first we create a hash map which store the sum to the Iath Element as it first and the ends for it second it store iterator and here it is the iterator . Here the logic is same as the previous problem I had solved few months ago but the catch is only here we are using hashing . So to calculate the maximum targeted sum at first we cheque the sum which is to till the I th is equals to K if there is not we will cheque that if if it is the maximum to the k Then for this condition we cheque that if there is a element exist in the hash map which is equal to the sum K if there it is then there is then there it will exist A sub array Which total sum is equal to the k and rest of the calculating the maximum length is are very basic so you can calculate  by yourselves.
*/