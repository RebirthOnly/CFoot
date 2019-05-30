// CFate.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CTest
{
private:
	int foot;
	int inch;
	int check();
public:
	CTest();
	CTest(int f, int i);
	int setLength(int f, int i);
	void displayLength();
	void addMiddleLength();
	int getfoot();
	int getinch();
	CTest addLength(CTest &od);
	CTest operator + (CTest &otemp);
	CTest operator + (const int &d);
};
CTest CTest::operator +(CTest &otemp)
{
	CTest temp;
	temp.setLength(foot + otemp.foot, inch + otemp.inch);
	return temp;
}
CTest CTest::operator + (const int &d)
{
	CTest temp;
 	temp.setLength(foot, inch + d);
 	return temp;
}
CTest CTest::addLength(CTest &od)
{
	CTest temp;
 	temp.setLength(foot + od.foot, inch + od.inch);
 	return temp;
 }
CTest::CTest()
{
	foot = 1;
	inch = 1;
 
}
CTest::CTest(int f, int i)
{
 	foot = f;
	inch = i;
 	check();


}
int CTest::setLength(int f, int i)
{
	foot = f;
 	inch = i;
	check();
 	return 0;

}
void CTest::displayLength()
{
	cout << foot << "英尺" << inch << "英寸" << endl;
}
int CTest::check()
{
	int flatfootinch[12] = { 1,2,3,4,5,6,7,8,9 };
	int flatfootinch[12] = { 1,2,3,4,5,6,7,8,9 };
 	int temp = 1;
 	while (temp == 1 &&  != 0 && day != 0)
 	{
 		if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
 		{
 			if (leapYearDays[month] < day)
			{
 				day = day - leapYearDays[month];
				month++;
 				temp = 1;
		}
 			else
			{
				temp = 0;
 			}
		}
 		else
 		{
			if (flatYearDays[month] < day)
 			{
 				day = day - flatYearDays[month];
				month++;
				temp = 1;
 			}
 			else
 			{
				temp = 0;
 			}
 		}
 		if (month > 12)
		{
			year++;
 			month = month - 12;
			temp = 1;
		}
 	}

return 0;
}
int CMyDate::getYear()
{
	return year;
}
int CMyDate::getMonth()
{
	return month;
}
int CMyDate::getDay()
{
 	return day;
}
void CMyDate::addOneDay()
{
	int flatYearDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
 	int leapYearDays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
 	day++;

 	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
	{
 		if (leapYearDays[month - 1] < day)
 		{
	    	day = 1;
 			month++;
 		}
 	}
	else
 	{
 		if (flatYearDays[month - 1] < day)
 		{
 			day = 1;
 			month++;
		}
	}
	if (month > 12)
 	{
 		month = 1;
 		year++;
 	}


 }
int main()
{
	CMyDate od1(2019, 5, 27), od2(0, 0, 100), od3;
	//od3 = od1.addDate(od2); 
    od3 = od1 + 100;
    od1.displayDate();
    od2.displayDate();
    od3.displayDate();
	return 0;
}




