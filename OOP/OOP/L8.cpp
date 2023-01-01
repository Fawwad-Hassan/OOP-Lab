/*#include <iostream>
#include <cmath>
using namespace std;

class Point {
	float x_coordinate, y_coordinate;
public:
	Point(float x = 0, float y = 0) {
		x_coordinate = x;
		y_coordinate = y;
	}
	void setX(float x) {
		x_coordinate = x;
	}
	void setY(float y) {
		y_coordinate = y;
	}
	float getX() {
		return x_coordinate;
	}
	float getY(){
		return y_coordinate;
		}

	float distance_between_points(Point second_point) {
		float out;
		out = sqrt(pow(second_point.x_coordinate - x_coordinate, 2) + pow(second_point.y_coordinate - y_coordinate, 2));
		return out;
	}
	~Point() {}
};

class Line {
	Point first_point, second_point;
public:
	Line() {};
	Line(Point f, Point s) {
		first_point = f;
		second_point = s;
	}
	void setFirst(Point f) {
		first_point = f;
	}
	void setSecond(Point s) {
		second_point = s;
	}
	Point getFirst() {
		return first_point;
	}
	Point getSecond() {
		return second_point;
	}

	float length() {
		float out;
		out = first_point.distance_between_points(second_point);
		return out;
	}

	bool compare(Line toCompare) {
		cout << "\nIs first line equal to second line? (1 = yes, 0 = no): ";
		if (length() == toCompare.length())
			return true;
		else return false;
		
	}
	~Line(){}
};


int main() {

	float xi, yi, xj, yj;
	cout << "\nEnter coordinates of point i (x,y): \n";
	cin >> xi >> yi;
	Point i(xi, yi);

	cout << "\nEnter coordinates of point j (x,y): \n";
	cin >> xj >> yj;
	Point j(xj, yj);

	Line h(i, j);
	cout << "\nLength of line h: " << h.length();
	Line r;

	cout << "\nLength of line r: " << r.length();
	cout << "\nComparing h to r:" << h.compare(r);

	Line c(i, j);
	cout << "\nLength of line c: " << c.length();
	cout << "\nComparing c to h:" << c.compare(h);

	return 0;
}*/