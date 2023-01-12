#include <iostream>
using namespace std;
float taxCalculator(char choice,float itemPrice);
main()
{
	float itemPrice;
	char choice;
	cout  <<  "Enter item price: ";
	cin  >>  itemPrice;
	cout  <<  "Enter vechile code: ";
	cin  >>  choice;
	taxCalculator(choice,itemPrice);
}
float taxCalculator(char choice,float itemPrice)
{
if(choice  ==  'M')
	{
		float taxRate = 6;
		float taxAmount = (itemPrice) * (taxRate/100);
		float finalPrice = (itemPrice + taxAmount);
		cout  <<  "Total Amount including tax is "  <<  finalPrice  <<  "."  <<  endl;
	}
if(choice  ==  'E')
	{
		float taxRate = 8;
		float taxAmount = (itemPrice) * (taxRate/100);
		float finalPrice = (itemPrice + taxAmount);
		cout  <<  "Total Amount including tax is "  <<  finalPrice  <<  "."  <<  endl;
	}
if(choice  ==  'S')
	{
		float taxRate = 10;
		float taxAmount = (itemPrice) * (taxRate/100);
		float finalPrice = (itemPrice + taxAmount);
		cout  <<  "Total Amount including tax is "  <<  finalPrice  <<  "."  <<  endl;
	}
if(choice  ==  'V')
	{
		float taxRate = 12;
		float taxAmount = (itemPrice) * (taxRate/100);
		float finalPrice = (itemPrice + taxAmount);
		cout  <<  "Total Amount including tax is "  <<  finalPrice  <<  "."  <<  endl;
	}
if(choice  ==  'T')
	{
		float taxRate = 15;
		float taxAmount = (itemPrice) * (taxRate/100);
		float finalPrice = (itemPrice + taxAmount);
		cout  <<  "Total Amount including tax is "  <<  finalPrice  <<  "."  <<  endl;
	}
}
