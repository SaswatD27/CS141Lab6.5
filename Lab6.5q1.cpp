//include library
#include<iostream>
using namespace std;
//write a void function DetPossibilties() to determine possible scenarios where the total cost of the 100 fruits bought is Rs. 100 given that apples cost Rs. 1 each, mangoes cost Rs. 3 each and bananas cost Rs. 0.5 each
void DetPossibilities()
{
	//declare three int variables a, m, and b to store the values of the quantities of apples, mangoes and bananas bought
	int a,m,b;
	//declare a float variable sum to store the total cost of the 100 fruits bought and initialise its value as zero
	float sum=0;
	//using a for loop to increament the value of a from 0 to 100
	for(a=0;a<=100;a++)
	{		
		//using a for loop, initialise int j=100-a and m=0, and giving the condition m<=j, increment m by 1 for each iteration
		for(int j=100-a,m=0;m<=j;m++)
		{	
			//define b to be equal to 100-a-m
			b=100-a-m;
			//calculate the value of the variable sum by multiply the quantity of each type of fruit with its unit cost and adding the total cost for each type of fruit up
			sum=(a*1)+(m*3)+(b*0.5);	
			//if the value of sum is precisely 100, display a, m, b
			if(sum==100)
			{
				cout<<endl<<"POSSIBLE SOLUTION : "<<endl<<"No. of Apples - "<<a<<endl<<"No. of Mangoes - "<<m<<endl<<"No. of Bananas - "<<b<<endl;
			}
			
		//end for loop
		}
	//end for loop
	}
}
//write main function
int main()
{
	//call function DetPossibilities()
	DetPossibilities();
	//Auf wiedersehen
	return 0;
}
