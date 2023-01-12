#include <iostream>
#include <cmath>
using namespace std;
main()
{
	float neededHours;
	float daysForCompletion;
	float normalDayHours = 8;
	float numberOfWorkers;
	float overtimeHours;
	float workingDays;
	cout  <<  "Enter required hours(0-2000000): ";
	cin  >>  neededHours;
	cout  <<  "Enter days for film completion(0-20,000): ";
	cin  >>  daysForCompletion;
	cout  <<  "Enter number of workers(0-200): ";
	cin  >>  numberOfWorkers;
	overtimeHours = 2 + normalDayHours;
	workingDays = daysForCompletion * (10/100);
	floor(workingDays);
if(neededHours  >=  overtimeHours)
	{
		cout  <<  "Yes!"  <<  workingDays  <<  " hours left."  <<  endl;
	}
if(neededHours  <=  overtimeHours)
	{
		cout  <<  "Not enough time!"  <<  workingDays  <<  " hours needed.";
	}
}