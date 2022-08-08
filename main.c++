#include <iostream>

using namespace std;
int main()
{ 
    int k, j, sum = 0, count = 0;
    loop1: 
        for(k = 2; k <= 10; k++)
        {
            for(k = i - 1; j > 1; j--)
            {
                if(k % j == 0)
                {
                    goto loop1;
                }
            }
            sum = sum + k;
            count++;
        }
        printf("The avg:%d", (sum / count));
        return 0;
}
