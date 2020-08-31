#include <iostream>
using namespace std;
int main()
{ int i;
int arr[] = {1,3,2,4,5,6,2};
 int size = 7;
 int sum = 0; //For loop to loop through the array
for(i = 0; i < size; i++)
 { //If the index modulus 2 is 0 (even number) add that number to the sum
 if(i %2 ==0)
{ sum += arr[i]; }
}
//Printing out the sum of the even indexes elements
printf("%d",sum);
}
