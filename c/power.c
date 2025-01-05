#include <stdio.h>

double myPow(double x, int n) {
    if (n > 0) {
        if (n == 0) {
            return 1;
        }
        return x * myPow(x, n - 1);
    }
    else {
        if (n == 0) {
            return 1;
        }
        return (1/x) * (myPow(x, n + 1));
    }
}

double myPow2(double x, int n) {
    double res = 1;
    if (x == 1) {
        return x;
    }
    if (x == -1 && n % 2 == 0) {
        return -x;
    }
    if (x == -1 && n % 2 == 1) {
        return x;
    }

    if (n == -2147483648) {
        n += 1;
    }
    for (int i = 0; i < abs(n); i++) {
        res *= x;
        if (n>0 && res > 10001) {
            break;
        }
        if (n < 0 && res > 100001) {
            break;
        }
    }
    if (n > 0) {
        return res;
    }
    else {
        return 1 / res;
    }
    pow(2, 5);
    
}

//Solution optimale
double myPow5(double x, int n) {
    long long min = -2147483648, max = 2147483647;
    if (min <= n && n <= max) {
        if (x > -100.0 && x < 100.0) {
            if (n < 0) {
                if (n == INT_MIN) {
                    n = INT_MAX;
                    x = 1 / (x * x);
                }
                else {
                    x = 1 / x;
                    n = -n;
                }
            }
            double res = 1;
            while (n > 0) {
                if (n & 1) {		

                    res *= x; 
                }
                x *= x;
                n >>= 1;
            }
            return res;
        }
        else {
            return 0;
        }
    }
    else {
        return 0;
    }
}






int main()
{
    double result;
    result = myPow5(2,7);
    printf("%f",result);
}
