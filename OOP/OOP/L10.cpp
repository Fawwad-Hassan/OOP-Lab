#include <iostream>
#include <string>
#include <math.h>
using namespace std;

//Task 1 - factors

/*class integers {
	int numbers[5];
	string sound[5];
public:
	integers() {
		for (int i = 0; i < 5; i++) {
			numbers[i] = 0;
		}
		for (int i = 0; i < 5; i++) {
			sound[i] = "";
		}
	}
	integers(int n[5], string s[5]) {
		for (int i = 0; i < 5; i++) {
			numbers[i] = n[i];
		}
		for (int i = 0; i < 5; i++) {
			sound[i] = s[i];
		}
	}

	void inputs() {
		cout << "\nEnter 5 numbers\n";
		for (int i = 0; i < 5; i++) {
			cin >> numbers[i];
		}
	}

	void factors() {
			for (int i = 0; i < 5; i++) {
					if (numbers[i] == 0) {
						sound[i] = "Number can't be zero";
						throw"\nNumber can't be zero";
					}
				if (numbers[i] % 3 == 0) {
					sound[i] += "Pling";
				}
				if (numbers[i] % 5 == 0) {
					sound[i] += "Plang";
				}
				if (numbers[i] % 7 == 0) {
					sound[i] += "Pl0ng";
				}
				if (!(numbers[i] % 7 == 0 || numbers[i] % 5 == 0 || numbers[i] % 3 == 0)) {
					sound[i] += to_string(numbers[i]);
				}
				
			}
		}

	void displaySounds() {
		for (int i = 0; i < 5; i++) {
			cout << "\nSounds for number " << numbers[i] <<  " are: ";
			cout << sound[i];
		}
	}

};

int main() {
	integers test;
		test.inputs();
		try {
			test.factors();
		}
		catch (const char* msg) {
			cout <<'\n';
		}
		test.displaySounds();
	
	return 0;
}*/

//Task 2 - location

/*class location {
	int latitude;
	int longitude;
	bool visited;
public:
	location(int la = 0, int lo = 0, bool v = 0) {
		latitude = la;
		longitude = lo;
		visited = v;
	}

	void inputs() {
		cout << "\nEnter latitude.";
		cin >> latitude;
		cout << "\nEnter longitude.";
		cin >> longitude;
		cout << "\nIs this location visited?(y/n)";
		char mark;
		cin >> mark;
		if (mark == 'y' || mark == 'Y')
			visited = 1;
		else visited = 0;
	}

	int distance(location second) {
		int temp;
			if (visited == 0 || second.visited == 0){
				throw " location not visited, aborting....";
			}
			else {
				temp = sqrt(pow(second.longitude - longitude, 2) + pow(second.latitude - latitude, 2));
			}
			return temp;
	}
};

int main() {

	location first, second, third;
	cout << "\nFirst location: ";
	first.inputs();
	cout << "\nSecond location: ";
	second.inputs();
	cout << "\nThird location: ";
	third.inputs();

	try {
		cout << "\nDistance between first and second location is: ";
		cout << first.distance(second);
		cout << "\nDistance between first and third location is: ";
		cout << first.distance(third);
	}
	catch (const char* msg) {
		cout << msg;
	}


	return 0;
}*/