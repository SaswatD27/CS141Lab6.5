//include libraries
#include<iostream>
#include<math.h>
using namespace std;
//write a long (type) function DetNo() to find the next number after 1225 which is both a perfect square and the sum of n consecutive natural no.s (starting from 1) (hint:1225 is 35^2). Declare a long variable "sol" in it to store the value of the number to be obtained
long DetNo()
{
	long sol;
	//declare int variables chk (to store 1 or 0 based on the satisfaction of a condition) and i (with the initial value of 36)
	int chk=0,i=36;
	//write a do while loop which will continue to run only if the value of chk is 0
	do
	{
		//declare a long variable sum with the initial value of 0 to store the sum of consecutive natural no.s (starting from 1)		
		long sum=0;
		//declare the value of sol to be the value of i squared
		sol=pow(i,2);
		//write a for loop declaring an int variable j (initial value = 1), adding the value of j to that of sum in the body in each iteration, giving the condition sum<sol (so that the loop stops when the value of sum becomes atleast that of sol), incrementing j by 1 for each iteration
		for(int j=1;sum<sol;j++)
		{
			sum+=j;
		}
		//if the values of sum and sol are equal, then assign a value 1 to chk to indicate the satisfaction of the condition
		if(sum==sol)
		chk=1;
		i++;
	//check for satisfaction of the condition for the continuation of the loop
	}while(chk==0);
	//return the value of sol
	return sol;
}
//write the main function to call the above function and store the returned value in a long variable "sol" and display its value
int main()
{
	long sol=DetNo();
	cout<<"The required no. is "<<sol;
	//Sayonara
	return 0;
}
