#include<iostream>
#include<ctime>

using std::cout;
using std::endl;
class watch
{
public:
	int hour;
	int minute;
	int second;
	watch(int h, int m, int s);
	void getTime();

};

void watch::getTime()
{
	int s = time(0);
	int second = s % 60;
	int m = s / 60;
	int minute = m % 60;
	int h = m / 60 + 9;
	int hour = h % 24;
}
	
int main()
{
	int hour, minute, second ;	
	cout<< "현재시간"<< hour << ":" << minute 
		<< ":" << second <<endl;
	
};
