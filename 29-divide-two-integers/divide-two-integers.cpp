
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long a = dividend;
        long long b = divisor;

        bool isNegative = (dividend ^ divisor) < 0;

        if (a < 0) a = -a;
        if (b < 0) b = -b;

        long long quotient = 0;

        for (int i = 31; i >= 0; i--) {
            if ((a >> i) >= b) {
                a -= (b << i);
                quotient += (1LL << i);
            }
        }

        if (isNegative)
            quotient = -quotient;

        return static_cast<int>(quotient);
    }
};
