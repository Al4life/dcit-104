#include <iostream>

using namespace std;

int main()

{

int count_even_number=0;

int sum =0;

int average=0;

for( int d=1; d<=10000; d++)

{

if(d%2==0)

{

count_even_number= count_even_number+1;

sum = sum+d;

}

}

average = sum/count_even_number;

cout << "\n\n the average of summation of even numbers:"<<average <<endl;

}
