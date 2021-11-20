#include <iostream>

class Solution {
public:
    int mySqrt(const int& x)
    {
        if (x == 0) return 0;
        if (x == 1) return 1;

        int rightBound = x;
        int leftBound = 0;

        while (rightBound - leftBound > 1)
        {
            int mid = (rightBound + leftBound) / 2;

            if (x / mid == mid) return mid;

            if (x / mid > mid)
                leftBound = mid;
            else
                rightBound = mid;
        }

        return leftBound;
    }
};

int main()
{}

