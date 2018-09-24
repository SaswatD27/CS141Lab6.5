//include libraries
#include<iostream>
using namespace std;
//write a function Inpdat() with an integer parameter "qtysh" asking for input of the no. of pairs of shoes sold a week; return value of qtysh
int Inpdat()
{
	int qtysh;
	cout<<"Input the no. of pairs of shoes sold per week - ";
	cin>>qtysh;
	return qtysh;
}
//write functions, each with the int argument "qtysh" (with the inputted value of no.s of pairs of shoes sold a week stored in it) and declaring a float variable "salary" to store the amount of salary earned a week, for each of the three earning options; given each pair of shoes costs Rs. 225
//Option 1 -  Salary of 600 per week; return the value of salary as 600
void Opt1(int qtysh)
{
	float salary=600;
	cout<<endl<<"Salary earned for option 1 (fixed salary) = Rs. "<<salary<<"/-";
}
//Option 2 - Salary of 7 per hour (given that the salesperson works 40 hours a week) plus a 10% commission on sales; display the calculated value of salary
void Opt2(int qtysh)
{
	float salary=(7*40)+((qtysh*225)*0.1);
	cout<<endl<<"Salary earned for Option 2 (Rs. 7 per hour plus 10% commission on sales) = Rs. "<<salary<<"/-";
} 
//Option 3 - No salary, but 20 % commission on sales and Rs. 20 for each pair of shoes sold; display the calculated value of salary
void Opt3(int qtysh)
{
	float salary=((qtysh*225)*0.2)+(qtysh*20);
	cout<<endl<<"Salary earned for Option 3 (20% commission on sales and Rs. 20 for each pair of shoes sold = Rs. "<<salary<<"/-";
}
//write the driver (main) function, declaring an int variable to store the returned value of qtysh and to call the all of the four abovementioned functions, the latter three using the returned value of qtysh
int main()
{	
	int qty;
	qty=Inpdat();
	Opt1(qty);
	Opt2(qty);
	Opt3(qty);
	//Dos svidaniya
	return 0;
}

