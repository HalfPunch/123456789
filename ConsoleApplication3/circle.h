#include <iostream>
#include "vector.h"
class circle
{
public:
	/*
	circle(double new_x, double new_y, double new_z, double new_r)
		:x(new_x), y(new_y), z(new_z), r(new_r){}

	void set_centre(double x, double y, double z) {
	}
	*/

	void set_r(double new_r) {
		r = new_r;
	}

	int get_r() {
		return r;
	}
	/*
	double get_x() {
		return x;
	}

	double get_y() {
		return y;
	}

	double get_z() {
		return z;
	}
	*/
	double circleSqr() {
		return 2 * r * 3.14;
	}

private:
	//double x;
	//double y;
	//double z;
	vector centre;
	double r;
};
