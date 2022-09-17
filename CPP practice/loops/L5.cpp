#include <iostream>
using namespace std;
int main()
{
    int  sum = 0, pdt = 1;
    for (int j = 1; j < 500; j++)
    {
        for (int i = 1; i < j; i++)
        {
            if (j % i == 0)
            {
                sum += i;
                pdt *= i;
            }
        }
        if (sum == pdt)
        {
            cout <<" "<<j;
        }
    }
}