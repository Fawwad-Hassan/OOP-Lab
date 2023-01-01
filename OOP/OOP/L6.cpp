#include <iostream>
using namespace std;

//Task 1 - hugeInteger operator overloading

/*class hugeInteger {
	int hugeInt[40];
public:
	//default constructor
	hugeInteger() {
		for (int i = 0; i < 40; i++) {
			hugeInt[i] = 0;
		}
	}
	//parameterized constructor
	hugeInteger(int value[40]) {
		for (int i = 0; i < 40; i++) {
			hugeInt[i] = value[i];
		}
	}
	//setters and getters
	void setHugeInt(int value, int pos) {
		hugeInt[pos] = value;
	}
	int getHugeInt(int pos) {
		return hugeInt[pos];
	}
	//methos to take input
	friend istream & operator>>(istream &in, hugeInteger &toInput) {
		for (int i = 0; i < 40; i++) {
			do {
				cout << "Enter a single digit for entry No. " << i + 1 << ": ";
				in >> toInput.hugeInt[i];
				cout << '\n';
				if (toInput.hugeInt[i] < 0 || toInput.hugeInt[i] > 9) {
					cout << "Not a single digit, try again.\n";
				}
			} while (toInput.hugeInt[i] < 0 || toInput.hugeInt[i] > 9);
		}
		return in;
	}
	//method to display array
	friend ostream &  operator<<(ostream &out, hugeInteger &toDisplay) {
		cout << "\nThe value of this object is: ";
		for (int i = 0; i < 40; i++) {
			out << toDisplay.hugeInt[i];
		}
		cout << '\n';
		return out;
	}
	//method to add 2 objects
	hugeInteger operator+ (hugeInteger &toAdd) {
		hugeInteger out;
		for (int i = 0; i < 40; i++) {
			out.hugeInt[i] = hugeInt[i] + toAdd.hugeInt[i];
		}
		return out;
	}
	//method to subtract 2 objects
	hugeInteger operator-(hugeInteger &toSub) {
		hugeInteger out;
		for (int i = 0; i < 40; i++) {
			out.hugeInt[i] = hugeInt[i] - toSub.hugeInt[i];
		}
		return out;
	}
	//method to check if object is equal to zero or equal to 2nd object
	void operator==(hugeInteger &toCompare) {
		bool zero = 0, equal = 0;
		for (int i = 0; i < 40; i++) {
			zero = 0;
			if (hugeInt[i] == 0) {
				zero = 1;
			}
			else break;
		}
		for (int i = 0; i < 40; i++) {
			equal = 0;
			if (hugeInt[i] == toCompare.hugeInt[i]) {
				equal = 1;
			}
			else break;
		}
		if (zero == 1)
			cout << "\nThe object is equal to zero.";
		else if (equal == 1)
			cout << "\nThe 2 objects are equal.";
		else
			cout << "\nThe object is neither equal to zero nor equal to the compared object.";
	}
	//method to check if 1st objcet is greater than the 2nd
	void operator>(hugeInteger &toCompare) {
		bool greater;
		for (int i = 0; i < 40; i++) {
			greater = 0;
			if (hugeInt[i] > toCompare.hugeInt[i]) {
				greater = 1;
				break;
			}
			else if (hugeInt[i] < toCompare.hugeInt[i]) {
				greater = 0;
				break;
			}
		}
		if (greater == 1)
			cout << "\nThe first object is greater than the second object.";
		else cout << "\nThe first object is not greater than the second object.";
	}
};

int main() {
	hugeInteger g;
	cin >> g;
	hugeInteger h;
	cin >> h;
	hugeInteger f(h);
	hugeInteger add = f + g;
	cout << add;
	hugeInteger sub = f - g;
	cout << sub;
	hugeInteger k(f);
	g == h;
	k == f;
	g > f;
	hugeInteger m, zero;
	m == zero;



	return 0;
}*/


//Task 2 - INT operator overloading

/*class INT {
	int value;
public:
	//default constructor
	INT() {
		value = 0;
	}
	//parameterized constructor
	INT(int v) {
		value = v;
	}
	friend ostream& operator<< (ostream& out, INT &toOut) {
		out << '\n' << toOut.value;
		return out;
	}
	friend istream& operator>> (istream& in, INT& toIn) {
		cout << "\nEnter an integer value.";
		in >> toIn.value;
		return in;
	}
	//method to overload +
	INT operator+(INT toAdd) {
		INT out;
		out.value = value + toAdd.value;
		return out;
	}
	//method to overload -
	INT operator-(INT toSub) {
		INT out;
		out.value = value - toSub.value;
		return out;
	}
	//method to overload *
	INT operator*(INT toMult) {
		INT out;
		out.value = value * toMult.value;
		return out;
	}
	//method to overload /
	INT operator/(INT toDiv) {
		INT out;
		out.value = value / toDiv.value;
		return out;
	}
};

int main() {

	INT first, second, add, sub, mult, div;
	cin >> first;
	cin >> second;

	add = (first + second);
	sub = (first - second);
	mult = (first * second);
	div = (first / second);
	cout << "\nAddition of the two objects is equal to: ";
	cout << add;
	cout << "\nSubtraction between the two objects is equal to: ";
	cout << sub;
	cout << "\nMultiplication of the two objects is equal to: ";
	cout << mult;
	cout << "\nDivision of the two objects is equal to: ";
	cout << div;

	return 0;
}*/


//Task 3 - Time operator overloading

/*class Time {
	int hour, minute, second;
public:
	//default constructor
	Time() {
		hour = 0;
		minute = 0;
		second = 0;
	}
	//parameterized constructor
	Time(int h, int m, int s) {
		hour = h;
		minute = m;
		second = s;
		if (hour < 0 || hour > 11)
			hour = 0;
		if (minute < 0 || minute > 59)
			minute = 0;
		if (second < 1 || second > 59)
			second = 0;
	}
	//setters and getters
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

	//method to display time
	void display() {
		cout << '\n' << hour << ':' << minute << ':' << second;
	}
	//method to overload +
	Time operator+(Time toAdd) {
		Time out;
		out.hour = hour + toAdd.hour;
		out.minute = minute + toAdd.minute;
		out.second = second + toAdd.second;
		if (out.second > 59) {
			out.minute += 1;
			out.second -= 60;
		}
		if (out.minute > 59) {
			out.hour += 1;
			out.minute -= 60;
		}
		if (out.hour > 11) {
			out.hour -= 12;
		}
		return out;
	}
	//method to overload pre++
	void operator++() {
		second++;
		if (second > 59) {
			minute += 1;
			second -= 60;
		}
		if (minute > 59) {
			hour += 1;
			minute -= 60;
		}
		if (hour > 11) {
			hour -= 12;
		}
	}
	//method to overload post++
	void operator++(int) {
		second++;
		if (second > 59) {
			minute += 1;
			second -= 60;
		}
		if (minute > 59) {
			hour += 1;
			minute -= 60;
		}
		if (hour > 11) {
			hour -= 12;
		}
	}
	//method to overload pre--
	void operator--() {
		second--;
		if (second < 0) {
			minute -= 1;
			second += 60;
		}
		if (minute < 0) {
			hour -= 1;
			minute += 60;
		}
		if (hour < 0) {
			hour += 12;
		}
	}
	//method to overload post--
	void operator--(int) {
		second--;
		if (second < 0) {
			minute -= 1;
			second += 60;
		}
		if (minute < 0) {
			hour -= 1;
			minute += 60;
		}
		if (hour < 0) {
			hour += 12;
		}
	}
};

int main() {

	Time first(4,20,55), second(11,10,15), third;
	third = first + second;
	third.display();

	++third;
	third++;
	third.display();

	--third;
	--third;
	third--;
	third.display();

	return 0;
}*/