#include <iostream>
using namespace std;

int airport()
{
	double distance;
	int time;

	cout << "Enter distace to airport (km) : ";
	cin >> distance;

	cout << "Enter time (minutes) : ";
	cin >> time;

	double speed = distance / (time / 60);

	cout << speed << "KMpH \n\n";

	return 0;
}


int work()
{
	int workDay = 8;
	int spend;

	cout << "Enter spend time (sec) : ";
	cin >> spend;

	double left = workDay - (spend / 3600.0);

	cout << "left : " << left << " hours \n\n";

	return 0;
}


int laptop()
{
	double price;
	int laptops;
	int discount;

	cout << "Enter price : ";
	cin >> price;

	cout << "counts of laptops : ";
	cin >> laptops;

	cout << "Enter discount : ";
	cin >> discount;

	double result = (price * (double(discount) / 100)) * laptops;

	cout << result << "\n\n";

	return 0;
}


int boys()
{
	int goodBoys;
	int badBoys;

	cout << "Enter count of good boys : ";
	cin >> goodBoys;

	cout << "Enter count of bad boys : ";
	cin >> badBoys;

	int boys = badBoys + goodBoys;
	double goodProc = (goodBoys * 100) / boys;
	double badProc = (badBoys * 100) / boys;

	cout << "good boys : " << goodProc << "% \n";
	cout << "bad boys : " << badProc << "% \n\n";

	return 0;
}


int time()
{
	int time;
	
	cout << "Enter spend time (sec) : ";
	cin >> time;

	int hours = time / 3600;
	int minutes = (time - (hours * 3600)) / 60;
	int seconds = (time - ((hours * 3600) + (minutes * 60)));

	cout << "hours : " << 24 - hours << "\n";
	cout << "minutes : " << 60 - minutes << "\n";
	cout << "seconds : " << 60 - seconds << "\n\n";

	return 0;
}


int invest()
{
	double summ;
	int month;
	double proc;

	cout << "Enter your summ : ";
	cin >> summ;

	cout << "Enter month : ";
	cin >> month;

	cout << "Enter proc : ";
	cin >> proc;

	double result = summ * ((double(month) / 12) * (proc / 100));

	cout << "result : " << result << "\n\n";

	return 0;
}


int main()
{
	airport();
	work();
	laptop();
	boys();
	time();
	invest();
}