#include <iostream>
#include <string>
using namespace std;


//Task 1 - Point,Circle
/*class Point {
public:
	float x_point, y_point;
	Point() {
		x_point = 0;
		y_point = 0;
	}
	Point(float x, float y) {
		x_point = x;
		y_point = y;
	}
	void setX(float x) {
		x_point = x;
	}
	void setY(float y) {
		y_point = y;
	}
	float getX() {
		return x_point;
	}
	float getY() {
		return y_point;
	}
	void display() {
		cout << "\n(" << x_point << ", " << y_point << ")\n";
	}
};

class Circle : public Point {
	float radius;
public:
	Circle() {
		x_point = 0;
		radius = 0;
	}
	Circle(float r, Point o) {
		radius = r;
		x_point = o.x_point;
		y_point = o.y_point;
	}
	Circle(float r, float x, float y) {
		radius = r;
		x_point = x;
		y_point = y;
	}
	void getRadius() {
		radius = y_point - x_point;
		if (radius < 0) {
			radius += 2.0 * (-1 * radius);
		}
		cout << "\nRadius of the circle ";
		display();
		cout << " is " << radius << '\n';
	}
	void circumference() {
		float circumference;
		circumference = radius * 2.0 * 3.14;
		cout << "\nCircumference of the circle ";
		display();
		cout << " is " << circumference << '\n';
	}
};

int main() {

	Point origin;
	Point testing(3, 7);

	origin.display();
	testing.display();

	Circle firstC(0, 2, 5);
	Circle secondC(0, testing);

	firstC.getRadius();
	firstC.circumference();

	secondC.getRadius();
	secondC.circumference();

	return 0;
}*/


//Task 2 - Bank account

/*class Account {
public:
	double accountBalance;
	string customerName;
	static int accountNumber;

	Account() {
		accountBalance = 0.0;
		customerName = '0';
		accountNumber++;
	}
	Account(double bal, string name) {
		customerName = name;
		if (bal < 0.0) {
			cout << "\nError : Initial balance can not be less than 0.";
			accountBalance = 0.0;
		}
		else 
			accountBalance = bal;
		accountNumber++;
	}
	void setAccBal(double bal) {
		accountBalance = bal;
	}
	void setCustName(string name) {
		customerName = name;
	}
	void setAccNo(int accNo) {
		accountNumber = accNo;
	}
	double getBalance() {
		cout << "\nYour balance is Rs.";
		return accountBalance;
	}
	string getName() {
		return customerName;
	}
	int getAccountNo() {
		cout << "\nThe users account number is: ";
		return accountNumber;
	}
	void credit(double creditAmount) {
		accountBalance += creditAmount;
		cout << "\nYour account has been successfully credited with Rs." << creditAmount << ".";
	}
	void debit(double debitAmount) {
		double tempBal = accountBalance;
		if (tempBal - debitAmount < 0) {
			cout << "\nDebit amount exceeded account balance.";
		}
		else {
			accountBalance -= debitAmount;
			cout << "\nYour account has been successfully debited by Rs." << debitAmount << ".";
		}
			
	}
};
int Account::accountNumber = 0;

class CreditCardAccount : public Account {
public:
	string pinNumber;

	CreditCardAccount() {
		accountBalance = 0.0;
		pinNumber = "0000";
	}
	CreditCardAccount(double bal, string pinNo) {
		if (bal < 0.0) {
			cout << "\nError : Initial balance can not be less than 0.";
			accountBalance = 0.0;
		}
		else
			accountBalance = bal;
		pinNumber = pinNo;
	}
	void setPinNo(string pinNo) {
		pinNumber = pinNo;
	}
	string getPinNo() {
		cout << "\nThe pin number for this account is: ";
		return pinNumber;
	}
	void resetPin(string newPin) {
		pinNumber = newPin;
		cout << "\nPin number has been successfully reset to: " << pinNumber << '.';
	}
};

class CheckingAccount : public Account {
public:
	double fee;

	CheckingAccount() {
		accountBalance = 0;
		fee = 0;
	}
	CheckingAccount(double bal, double f) {
		if (bal < 0.0) {
			cout << "\nError : Initial balance can not be less than 0.";
			accountBalance = 0.0;
		}
		else
			accountBalance = bal;
		fee = f;
	}
	void setFee(double f) {
		fee = f;
	}
	double getFee() {
		return fee;
	}
	void credit(double creditAmount) {
		double tempBal = accountBalance;
		if (tempBal + creditAmount - fee < 0) {
			cout << "\nInsufficient balance for fee reduction.";
		}
		else {
			accountBalance += creditAmount;
			accountBalance -= fee;
			cout << "\nYour account has been successfully credited with Rs." << creditAmount << ".";
		}
			
	}
	void debit(double debitAmount) {
		double tempBal = accountBalance;
		if (tempBal - debitAmount < 0) {
			cout << "\nDebit amount exceeded account balance.";
		}
		else if (tempBal - debitAmount - fee < 0) {
			cout << "\nInsufficient balance for fee reduction.";
		}
		else {
			accountBalance -= debitAmount;
			accountBalance -= fee;
			cout << "\nYour account has been successfully debited by Rs." << debitAmount << ".";
		}
	}
};

int main() {

	Account fawad(1000, "fawad");
	fawad.credit(500);
	fawad.debit(500);
	cout << fawad.getBalance();
	cout << fawad.getAccountNo();
	cout << '\n';

	CreditCardAccount omar(500, "1234");
	omar.credit(500);
	cout << omar.getBalance();
	cout << omar.getPinNo();
	omar.resetPin("2222");
	cout << omar.getAccountNo();
	cout << '\n';
	CheckingAccount haris(100, 50);
	haris.credit(100);
	haris.debit(50);
	cout << haris.getBalance();
	cout << haris.getAccountNo();

	return 0;
}*/