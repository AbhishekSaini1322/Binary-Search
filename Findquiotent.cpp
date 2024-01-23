#include <iostream>
using namespace std;

int Getqutent(int divisor, int divident)
{
    int start = 0;
    int end = divident;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {

        if (mid * divisor == divident)
        {
            return mid;
        }

        if (mid * divisor > divident)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int divisor = -1;
    int divident = -44;

    int ans = Getqutent(abs(divisor) , abs(divident));

    if((divisor < 0 && divident > 0) || (divisor > 0 && divident < 0)){
        ans = 0 - ans;
    }

    cout << "Final answer is: " << ans << endl;
}