/*#include <iostream>
#include <string>
using namespace std;*/

//Task 1 - Heartrate

/*class HeartRate {
public:
	string FirstName, LastName;
	int bdDate, bdMonth, bdYear, age, MaxHeartRate, targetRateHigh, targetRateLow;
	HeartRate() { 
		FirstName = '0';
		LastName = '0';
		bdDate = bdMonth = bdYear = age = MaxHeartRate = targetRateHigh = targetRateLow = 0; 
	}
	HeartRate(string fN, string lN, int d, int m, int y) {
		FirstName = fN;
		LastName = lN;
		bdDate = d;
		bdMonth = m;
		bdYear = y;
	}

	void setFirstName(string fN) {
		FirstName = fN;
	}
	void setLastName(string lN) {
		LastName = lN;
	}
	void setBdDay(int bdD) {
		bdDate = bdD;
	}
	void setBdMonth(int bdM) {
		bdMonth = bdM;
	}
	void setBdYear(int bdY) {
		bdYear = bdY;
	}
	string getFirstName() {
		return FirstName;
	}
	string getLastName() {
		return LastName;
	}
	int getBdDate() {
		return bdDate;
	}
	int getBdMonth() {
		return bdMonth;
	}
	int getBdYear() {
		return bdYear;
	}
	int getAge() {
		age = 2022 - bdYear;
		return age;
	}
	int getMaxHeartRate() {
		MaxHeartRate = 220 - age;
		return MaxHeartRate;
	}
	void calcTargetHeartRate() {
		targetRateHigh = MaxHeartRate * 0.76;
		targetRateLow = MaxHeartRate * 0.64;
	}
	int getTHRHigh() {
		return targetRateHigh;
	}
	int getTHRLow() {
		return targetRateLow;
	}
};

int main() {
	HeartRate employee[5];
	int numberEmployees = 0;
	char choiceAdd, choiceData = 'y';
	for (int i = 0; i < 5; i++) {
		cout << "\nEnter the first name of employee No. " << i + 1 << '\n';
		cin >> employee[i].FirstName;
		cout << "\nEnter the last name of employee No. " << i + 1 << '\n';
		cin >> employee[i].LastName;
		cout << "\nEnter the year of birth of employee No. " << i + 1 << '\n';
		cin >> employee[i].bdYear;
		cout << "\nEnter the month of birht of employee No. " << i + 1 << '\n';
		cin >> employee[i].bdMonth;
		cout << "\nEnter the date of birth of employee No. " << i + 1 << '\n';
		cin >> employee[i].bdDate;
		employee[i].getAge();
		employee[i].getMaxHeartRate();
		employee[i].calcTargetHeartRate();
		numberEmployees++;
		if (i == 4) break;
		cout << "\nDo you want to add data of another employee? (y/n)";
		cin >> choiceAdd;
		if (choiceAdd == 'n' || choiceAdd == 'N') break;
	}
	cout << "\nThe total number of employees is " << numberEmployees;
	do {
		cout << "\nEnter number of employee whose data you want to display :";
		int empNo;
		cin >> empNo;
		cout << "\nName of employee No. " << empNo << " is " << employee[empNo - 1].getFirstName() << " " << employee[empNo - 1].getLastName();
		cout << "\nDate of birth of this employee is : " << employee[empNo - 1].getBdDate() << ", " << employee[empNo - 1].getBdMonth() << ", " << employee[empNo - 1].getBdYear();
		cout << " and their age is : " << employee[empNo - 1].getAge() << " years.";
		cout << "\nThier maximum heart rate is " << employee[empNo - 1].getMaxHeartRate() << " bpm";
		cout << " and their target heart rate is between " << employee[empNo - 1].getTHRHigh() << " bpm and " << employee[empNo - 1].getTHRLow() << " bpm.";
		cout << "\n Do you want to get data of another employee? (y/n)\n";
		cin >> choiceData;
	} while (choiceData == 'y' || choiceData == 'Y');
	return 0;
}*/


//Task 2 - tollBooth

/*class tollBooth {
public:
	static unsigned int totalCars;
	static double totalMoney;
	static const double incMoney;
	tollBooth() {
		totalCars = 0;
		totalMoney = 0;
	}
	tollBooth(unsigned int c, double m) {
		totalCars = c;
		totalMoney = m;
	}
	static void setTotalCars(unsigned int c) {
		totalCars = c;
	}
	static void setTotalMoney(double m) {
		totalMoney = m;
	}
	static int getTotalCars() {
		return totalCars;
	}
	static double getTotalMoney() {
		return totalMoney;
	}
	static void payingCar() {
		totalCars++;
		totalMoney += incMoney;
	}
	static void noPayCar() {
		totalCars++;
	}
	static void display() {
		cout << "\nThe number of cars that have passed the toll booth are: " << getTotalCars();
		cout << "\n The total amount of tolsl collected is: $" << getTotalMoney();
	}
};
unsigned int tollBooth::totalCars = 0;
double tollBooth::totalMoney = 0;
const double tollBooth::incMoney = 0.5;

int main() {
	int choice;
	do {
		cout << "Enter 1 for a paying car, 2 for a non paying car, 3 to exit program.\n";
		cin >> choice;
		switch (choice) {
		case(1):
			tollBooth::payingCar();
			break;
		case(2):
			tollBooth::noPayCar();
			break;
		}
	} while (choice == 1 || choice == 2);
	cout << '\n';
	tollBooth::display();

	return 0;
}*/

//Task 3 - Time

/*class Time {
public:
	unsigned int second, minute, hour;
	Time() {
		second = 0;
		minute = 0;
		hour = 0;
	}
	Time(unsigned int h, unsigned int m, unsigned int s) {
		hour = h;
		minute = m;
		second = s;
	}
	void setHour(int h) {
		hour = h;
	}
	void setMinute(int m) {
		minute = m;
	}
	void setSecond(int s) {
		second = s;
	}
	int getHour() {
		return hour;
	}
	int getMinute() {
		return minute;
	}
	int getSecond() {
		return second;
	}
	void display() {
		cout << "\nThe time is: ";
		cout << hour << ':' << minute << ':' << second;
	}
	void add(Time one, Time two) {
		hour = one.hour + two.hour;
		minute = one.minute + two.minute;
		second += one.second + two.second;
		if (second >= 60) {
			minute++;
			second -= 60;
		}
		if (minute >= 60) {
			hour++;
			minute -= 60;
		}
		if (hour >= 12) {
			hour -= 12;
		}
	}
};

int main() {
	const Time first(8, 24, 53);
	const Time second(5, 42, 5);
	Time third;

	third.add(first, second);
	third.display();

	return 0;
}*/


//Task 4 - Job

/*class Job {
public:
	int deadline, timeTaken;
	int profit; 
	static int totalProfit;
	static int jobID;
	void setDeadline(int d) {
		deadline = d;
	}
	void setTimeTaken(int tk) {
		timeTaken = tk;
	}
	void setProfit(int p) {
		profit = p;
	}
	int getDeadline() {
		return deadline;
	}
	int getTimeTaken() {
		return timeTaken;
	}
	int getProfit() {
		return profit;
	}
	Job() {
		deadline = 0;
		timeTaken = 0;
		profit = 0;
		Job::jobID++;
	}
	Job(int d, int tk, int p) {
		deadline = d;
		timeTaken = tk;
		profit = p;
		Job::jobID++;
	}
	void isThereProfit() {
		if (timeTaken <= deadline)
			Job::totalProfit += profit;
		else profit = 0;
	}
	static int displayTotalProfit() {
		return Job::totalProfit;
	}
	static int displayTotalJobs() {
		return Job::jobID;
	}

};

int Job::jobID = 0;
int Job::totalProfit = 0;

int main() {

	Job first(4, 3, 50);
	Job second(7, 7, 90);
	Job third(1, 5, 500);
	Job fourth(6, 3, 45);

	first.isThereProfit();
	second.isThereProfit();
	third.isThereProfit();
	fourth.isThereProfit();

	cout << "\nTotal number of jobs taken is: " << Job::displayTotalJobs();
	cout << "\nTotal profit made is: " << Job::displayTotalProfit();

	return 0;
}*/