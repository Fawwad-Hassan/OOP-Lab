/*#include <iostream>
#include <string>
#include <cmath>
using namespace std;*/

//Task 0-a - Example 1

/*class Example {
public:
	int a;
	int add(Example E) {
		a += E.a;
		return a;
	}
};

int main() {

	Example E1, E2;
	E1.a = 50;
	E2.a = 100;
	cout << "Initial values\n";
	cout << "Value of object 1: " << E1.a
		<< "\n& object 2: " << E2.a << "\n\n";

	int result = E2.add(E1);

	cout << "New values\n";
	cout << "Value of object 1: " << E1.a
		<< "\n& object 2: " << E2.a << "\n\n";

	cout << "Result: " << result;

	return 0;
}*/

//Task 0-b - Example 4

/*class Employee {
public:
	int id;
	string name;
	float salary;

	Employee(int i, string n, float s) {
		id = i;
		name = n;
		salary = s;
	}

	void display() {
		cout << id << ' ' << name << ' ' << salary;
	}
};

int main() {

	Employee e1 = Employee(101, "Sonoo", 8900);
	e1.display();
	return 0;
}*/


//Task 1 - Point

/*class Point {
public:
	float x, y;

	Point() {
		x = 0;
		y = 0;
	}

	Point(float xValue, float yValue) {
		x = xValue;
		y = yValue;
	}
	void setx(float xValue) {
		x = xValue;
	}
	void sety(float yValue) {
		y = yValue;
	}
	float getx() {
		return x;
	}
	float gety() {
		return y;
	}

	void isZero() {
		if (x == 0 && y == 0) {
			cout << "Point (" << x << ',' << y << ") is at origin.\n";
		}
		else 
			cout << "Point (" << x << ',' << y << ") is not at origin.\n";
	}

	float distance(Point secondPoint) {
		float out, toSqrt;
		toSqrt = ((secondPoint.x - x) * (secondPoint.x - x)) + ((secondPoint.y - y) * (secondPoint.y - y));
		out = sqrt(toSqrt);
		return out;
	}

	Point midPoint(Point secondPoint) {
		Point out;
		out.x = (x + secondPoint.x) / 2;
		out.y = (y + secondPoint.y) / 2;
		return out;
	}

	void isEqualTo(Point secondPoint) {
		if (x == secondPoint.x && y == secondPoint.y) {
			cout << "The two point are equal\n";
		}
		else
			cout << "The two points are not equal\n";
	}

	void isGreaterThan(Point secondPoint) {
		Point origin;
		float pointOneDistance, pointTwoDistance;
		pointOneDistance = sqrt((x * x) + (y * y));
		pointTwoDistance = sqrt((secondPoint.x * secondPoint.x) + (secondPoint.y * secondPoint.y));
		if (pointOneDistance > pointTwoDistance)
			cout << "The first point is greater than the second point.\n";
		else
			cout << "The second point is greater than the first point.\n";
	}
};

int main() {

	Point g, origin, midPointg;
	g.setx(-2);
	g.isZero();
	g.gety();
	midPointg = g.midPoint(origin);
	g.isEqualTo(origin);
	Point r(9, 8.5);
	r.isGreaterThan(g);
	Point j = g;
	g.isEqualTo(r);
	g.isEqualTo(j);
	Point f(-6.7, -9.5);
	f.setx(5.5);
	f.distance(r);
	g.distance(f);
	g.distance(r);

	return 0;
}*/


//Task 2 - Saving Account

/*class SavingAccount {
public:
	float balance, annualInterestRate;

	SavingAccount() {
		balance = 0;
		annualInterestRate = 0;
	}

	SavingAccount(float bal, float anIntRate) {
		balance = bal;
		annualInterestRate = anIntRate;
	}

	void setBal(float bal) {
		balance = bal;
	}
	void setAnIntRate(float anIntRate) {
		annualInterestRate = anIntRate;
	}
	float getBal() {
		return balance;
	}
	float getAnIntRate() {
		return annualInterestRate;
	}

	float getMonthlyInterest() {
		float monInt;
		monInt = (balance * annualInterestRate) / 12;
		balance += monInt;
		return monInt;
	}
};

int main() {
	SavingAccount customer1, customer2, customer3, customer4, customer5;
	customer1 = SavingAccount(50, 0.05);
	cout << "\nBalance of first customer : " << customer1.getBal();
	cout << "\nMonthly interest of first customer is: " << customer1.getMonthlyInterest();

	customer2 = SavingAccount(90, 0.06);
	customer2 = customer1;
	cout << "\n\nMonthly interest of second customer is: " << customer2.getMonthlyInterest();

	customer3 = customer2;
	cout << "\n\nBalance of third customer: " << customer3.getBal();
	cout << "\nMonthly interest of third customer is: " << customer3.getMonthlyInterest();

	cout << "\n\nBalance of second customer: " << customer2.getBal();
	cout << "\nMonthly interest of second customer is: " << customer2.getMonthlyInterest();

	customer4 = SavingAccount(90, 0.07);
	cout << "\n\nBalance of fourth customer: " << customer4.getBal();
	cout << "\nMonthly interest of fourth customer is: " << customer4.getMonthlyInterest();

	customer5 = customer4;
	customer5.setAnIntRate(0.5);
	cout << "\n\nBalance of fifth customer: " << customer5.getBal();
	cout << "\nMonthly interest of fifth customer is: " << customer5.getMonthlyInterest();
	cout << '\n';
	return 0;
}*/

//Task 3 - Invoice 

/*class Invoice {
public:
	string number, description;
	int quantity, price;
	Invoice() {
		number = '0';
		description = '0';
		quantity = 0;
		price = 0;
	}
	Invoice(string no, string desc, int quant, int prc) {
		number = no;
		description = desc;
		quantity = quant;
		price = prc;
		if (quantity < 0)
			quantity = 0;
		if (price < 0)
			price = 0;
	}
	void setNumber(string no) {
		number = no;
	}
	void setDescription(string desc) {
		description = desc;
	}
	void setQuantity(int quant) {
		quantity = quant;
	}
	void setPrice(int prc) {
		price = prc;
	}
	string getNumber() {
		return number;
	}
	string getDescription() {
		return description;
	}
	int getQuantity() {
		return quantity;
	}
	int getPrice() {
		return price;
	}
	int getInvoiceAmount() {
		int out = quantity * price;
		return out;
	}
};

int main() {
	Invoice y;
	y.setNumber("hw5678");
	y.setDescription("Wire cripper");
	y.setQuantity(10);
	y.setPrice(70);
	cout << "\nThe invoice amount of the item is: " << y.getInvoiceAmount();
	Invoice f("hw7890", "screw driver", 2, 100);
	Invoice t = f;
	cout << "\nThe invoice amount of the item is: " << f.getInvoiceAmount();
	Invoice m;
	cout << "\nThe invoice amount of the item is: " << m.getInvoiceAmount();

	return 0;
}*/