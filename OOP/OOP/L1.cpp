#include <iostream>
#include <string>
using namespace std;


//Task 0

/*class Foo {
private:
	int data;
public:
	void setData(int val) { data = val; }
	int getData() { return data; }
};

int main() {

	Foo s1, s2;
	s1.setData(1066);
	s2.setData(1776);
	cout << s1.getData() << "\n";
	cout << s2.getData() << "\n";

	return 0;
}*/


//Task 1 - complex

/*class Complex {
private:
	float realData, imgData;
public:
	void setReal(float real) { realData = real; }
	float getReal() { return realData; }
	void setImg(float img) { imgData = img; }
	float getImg() { return imgData; }
	void display(Complex c) {
		if (c.getImg() > 0)
			cout << c.getReal() << "+" << c.getImg() << "i";
		else if (c.getImg() == 0)
			cout << c.getReal();
		else
			cout << c.getReal() << c.getImg() << "i";
	}
	void add(Complex c1, Complex c2) {
		Complex out;
		out.setReal(c1.getReal() + c2.getReal());
		out.setImg(c1.getImg() + c2.getImg());
		cout << "\nAddition of ";
		display(c1);
		cout << " and ";
		display(c2);
		cout << " is: ";
		display(out); cout << "\n";
	}
	void sub(Complex c1, Complex c2) {
		Complex out;
		out.setReal(c1.getReal() - c2.getReal());
		out.setImg(c1.getImg() - c2.getImg());
		cout << "\nDifference between ";
		display(c1);
		cout << " and ";
		display(c2);
		cout << " is: ";
		display(out); cout << "\n";
	}
	
};

	int main() {
		Complex num1, num2, added, subbed;
		num1.setReal(4);
		num1.setImg(7);
		cout << num1.getReal() << '\n';
		cout << num1.getImg() << '\n';

		num2.setReal(5);
		num2.setImg(-8);
		cout << num2.getReal() << '\n';
		cout << num2.getImg() << '\n';

		num1.display(num1); cout << '\n';
		num2.display(num2); cout << '\n';

		added.add(num1, num2);
		subbed.sub(num1, num2);

		return 0;
	}*/

//Task 2 - Bank Account

/*class BankAccount {
private:
	float balance;
public:
	void setBalance() {
		float setBalance;
		cout << "Please enter the amount with which you would like to open your bank account.\n";
		cin >> setBalance;
		balance = setBalance;
	}
	float getBalance() {
		return balance;
	}
	void deposit() {
		float depositAmount;
		cout << "Enter the amount that you would like to deposit.\n";
		cin >> depositAmount;
		balance += depositAmount;
	}
	void withdraw() {
		float withdrawAmount, tempBalance;
		char option;
		do {
			option = 'n';
			cout << "Enter the amount that you would like to withdraw.\n";
			cin >> withdrawAmount;
			tempBalance = balance;
			tempBalance -= withdrawAmount;
			if (tempBalance < 0) {
				cout << "You do not have the specified amount available in your bank account.\n ";
				cout << "Would you like to withdraw another amount ? (y / n)\n";
				cin >> option;
			}
			else balance = tempBalance;
		} while (option == 'y' || option == 'Y');

	}
	void display() {
		cout << "The current balance in your account is: " << balance << '\n';
	}
};
int main() {
	BankAccount account;
	int choiceForSwitch = 5, repeatForInvalid = 1;
	account.setBalance();
	do {
		do {
			int repeatForInvalid = 1;
			cout << "\nPlease enter the number that is before the action you would like to do.\n";
			cout << "1. Deposit money in your account.\n";
			cout << "2. Withdraw money from your account.\n";
			cout << "3. Check your current balance.\n";
			cout << "0. Exit from the aplication.\n";
			cin >> choiceForSwitch;
			if (choiceForSwitch < 0 && choiceForSwitch > 3) {
				cout << "Invalid input, pelase try again.\n";
				repeatForInvalid = 0;
			}
		} while (repeatForInvalid == 0);

		switch (choiceForSwitch) {
		case (1): {
			account.deposit();
			break;
		}
		case (2): {
			account.withdraw();
			break;
		}
		case(3): {
			account.display();
			break;
		}
		}

	} while (choiceForSwitch != 0);

	return 0;
}*/

//Task 3 - Student Record - incomplete

/*class Student {
	string studentName, fatherName, department;
	int registrationNum, degree;
public:
	void setData() {
		cin.ignore(100, '\n');
		cout << "\nEnter name of student: ";
		getline(cin, studentName);
		cout << "\nEnter name of student's father: ";
		getline(cin, fatherName);
		cout << "\nEnter student's registration number: ";
		cin >> registrationNum;
		cout << "\nEnter student's department: ";
		getline(cin, department);
		cout << "\n Enter student's degree: ";
		cin >> degree;
	}
	void display() {
		cout << "\nName of student: " << studentName;
		cout << "\nFather's name: " << fatherName;
		cout << "\nStudent's registration number: " << registrationNum;
		cout << "\n Student's department: " << department;
		cout << "\n Student's degree: " << degree;
	}
	void deleteData() {
		int rDelete = 0;
		cout << "Enter registration number of student whose data is to be erased: ";
		cin >> rDelete;
		if (rDelete == registrationNum) {
			studentName = '0';
			fatherName = '0';
			department = '0';
			registrationNum = 0;
			degree = 0;
		}
	}
	void searchStudent() {
		int rSearch;
		cout << "Enter registration number of student whose data is to be displaeyd ";
		cin >> rSearch;
		if (rSearch == registrationNum) {
			display();
		}
	}
};
int main() {
	int choice;
	Student data[2];
	do {
		choice = 10;
		cout << "Enter the number of the action you would like to perform.\n";
		cout << "1. Inset student data.\n";
		cout << "2. Search for student data using registration number.\n";
		cout << "3. Delete student data using registration number.\n";
		cout << "4. Display all student data.\n";
		cout << "5. Exit program\n";
		cin >> choice;

		switch (choice) {
		case (1):
			for (int i = 0; i < 2; i++) {
				data[i].setData();
			}
			break;
		case(2): 
			for (int i = 0; i < 2; i++) {
				data[i].searchStudent();
			}
			break; 
		case(3):
			for (int i = 0; i < 2; i++) {
				data[i].deleteData();
			}
			break;
		case(4):
			for (int i = 0; i < 2; i++) {
				data[i].display();
			}
			break;
		}

	} while (choice != 5);

	return 0;
}*/


//Task 4 - Rational

/*class Rational {
	int numerator;
	int denomenator;
public:
	void setvalue(int num, int den) {
		numerator = num;
		denomenator = den;
	}
	int getNum() {
		return numerator;
	}
	int getDen() {
		return denomenator;
	}
		
	void addition(Rational toAdd) {
		int addedNum, addedDen;
		addedNum = numerator + toAdd.getNum();
		addedDen = denomenator + toAdd.getDen();
		int hcf = 1;
		for (int i = 1; i <= addedNum || i <= addedDen; i++) {
			if (addedNum % i == 0 && addedDen % i == 0)
				hcf = i;
		}
		addedNum /= hcf;
		addedDen /= hcf;
		cout << "Addition of the 2 rational numbers in reduced form is: " << addedNum << '/' << addedDen << '\n';
	}
	void subtraction(Rational toSub) {
		int subNum, subDen;
		subNum = numerator - toSub.getNum();
		subDen = denomenator - toSub.getDen();
		int hcf = 1;
		for (int i = 1; i <= subNum || i <= subDen; i++) {
			if (subNum % i == 0 && subDen % i == 0)
				hcf = i;
		}
		subNum /= hcf;
		subDen /= hcf;
		cout << "Difference between the 2 rational numbers in reduced form is: " << subNum << '/' << subDen << '\n';
	}
	void multiplication(Rational toMult) {
		int multNum, multDen;
		multNum = numerator * toMult.getNum();
		multDen = denomenator * toMult.getDen();
		int hcf = 1;
		for (int i = 1; i <= multNum || i <= multDen; i++) {
			if (multNum % i == 0 && multDen % i == 0)
				hcf = i;
		}
		multNum /= hcf;
		multDen /= hcf;
		cout << "Multiplication of the 2 rational numbers in reduced form is: " << multNum << '/' << multDen << '\n';
	}
	void division(Rational toDiv) {
		int divNum, divDen;
		divNum = numerator / toDiv.getNum();
		divDen = denomenator / toDiv.getDen();
		int hcf = 1;
		for (int i = 1; i <= divNum || i <= divDen; i++) {
			if (divNum % i == 0 && divDen % i == 0)
				hcf = i;
		}
		divNum /= hcf;
		divDen /= hcf;
		cout << "Division of the 2 rational numbers in reduced form is: " << divNum << '/' << divDen << '\n';
	}

	void rationalFloat() {
		float numFloat, denFloat, out;
		numFloat = (float)numerator;
		denFloat = (float)denomenator;
		out = numFloat / denFloat;
		cout << "The rational number " << numerator << '/' << denomenator << " in floating points is: " << out << '\n';
	}
};
	int main() {
		Rational num1, num2;
		num1.setvalue(4, 8);
		num2.setvalue(3, 15);
		num1.addition(num2);
		num1.subtraction(num2);
		num1.multiplication(num2);
		num1.division(num2);
		num1.rationalFloat();
		return 0;
	}*/



	
