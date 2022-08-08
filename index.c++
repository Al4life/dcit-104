#include <iostream>

using namespace std;

int main()

{

int count_even_number=0;

int sum =0;

int average=0;

for( int i=1; i<=10000; i++)

{

if(i%2==0)

{

count_even_number= count_even_number+1;

sum = sum+i;

}

}

average = sum/count_even_number;

cout << "\n\n the average of summation of even numbers:"<<average <<endl;

}