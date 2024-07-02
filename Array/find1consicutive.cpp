#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int n = nums.size();
    int max = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
       
        if (nums[i] == 0)
        {
            count = 0;
        }else{

        count++;
        }
        if (count > max)
        {
            max = count;
        }

    }
    return max;
}

int main()
{
    vector<int> num = {1, 0, 1, 1, 0, 1};
    int x = findMaxConsecutiveOnes(num);
    cout << x;
}