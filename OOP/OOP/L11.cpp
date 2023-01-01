#include<fstream>
#include<iostream>
#include<string>
using namespace std;

//Task 1 - student record

/*class student {
	string name;
	int roll_number;
	float marks;
	char grade;
public:
	student(string n = "", int r = 0, float m = 0, char g = ' ') {
		name = n;
		roll_number = r;
		marks = m;
		grade = g;
	}
	void setName(string n) {
		name = n;
	}
	void setRollNumber(int r) {
		roll_number = r;
	}
	void setMarks(float m) {
		marks = m;
	}
	void setGrade(char g) {
		grade = g;
	}
	string getName() { return name; }
	int getRollNumber() { return roll_number; }
	float getMarks() { return marks; }
	char getGrade() { return grade; }

	void getData() {
		cout << "\nEnter name of student: ";
		cin >> name;
		cout << "\nEnter roll number: ";
		cin >> roll_number;
		cout << "\nEnter CGPA: ";
		cin >> marks;
	}
	void computeGrade() {
		if (marks >= 3.51 && marks <= 4.00)
			grade = 'A';
		else if (marks >= 3.01 && marks <= 3.50)
			grade = 'B';
		else if (marks >= 2.51 && marks <= 3.00)
			grade = 'C';
		else if (marks >= 2.01 && marks <= 2.50)
			grade = 'D';
		else
			grade = 'F';
	}
	void displayGrade() {
		cout << "\nGrade of student " << getName() << " is: " << grade;
	}
	void writeData() {
		ofstream MyFile;
		MyFile.open("student.dat", ios::out||ios::app);
		MyFile.write((char*)this, sizeof(*this));
		MyFile.close();
	}
	void readData() {
		ifstream MyFile;
		MyFile.open("student.dat", ios::in);
		MyFile.read((char*)this, sizeof(*this));
		MyFile.close();
	}
	void displayData() {
		cout << "\nName: " << getName();
		cout << "\nRoll Number: " << getRollNumber();
		cout << "\nCGPA: " << getMarks();
		cout << "\nGrade: " << getGrade();
	}
};

int main() {

	student arr[3], arr2[3];
	for (int i = 0; i < 3; i++) {
		arr[i].getData();
		arr[i].computeGrade();
		arr[i].writeData();
		arr2[i].readData();
		arr2[i].displayData();
	}

	return 0;
}*/


//Task 2 - 