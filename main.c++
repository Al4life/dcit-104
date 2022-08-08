#include <iostream>

using namespace std;
int main()
{ 
    int i, j, sum = 0, count = 0;
    loop1: 
        for(i = 2; i <= 10; i++)
        {
            for(j = i - 1; j > 1; j--)
            {
                if(i % j == 0)
                {
                    goto loop1;
                }
            }
            sum = sum + i;
            count++;
        }
        printf("The avg:%d", (sum / count));
        return 0;
}