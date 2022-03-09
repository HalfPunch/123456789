#include <iostream>
//fas
class vector
{
public:

	vector(double new_x, double new_y, double new_z)
		:x(new_x), y(new_y), z(new_z) {}

	void set_xyz(double new_x, double new_y, double new_z) {
		x = new_x;
		y = new_y;
		z = new_z;
	}

	double get_x() {
		return x;
	}

	double get_y() {
		return y;
	}

	double get_z() {
		return z;
	}

	double vectorLen() {
		return sqrt(x * x + y * y + z * z);
	}

private:
	double x = 0;
	double y = 0;
	double z = 0;
};

vector sum(vector vector1, vector vector2) {
	return vector(vector1.get_x() + vector2.get_x(), vector1.get_y() + vector2.get_y(), vector1.get_z() + vector2.get_z());
}

vector sub(vector vector1, vector vector2) {
	return vector(vector1.get_x() - vector2.get_x(), vector1.get_y() - vector2.get_y(), vector1.get_z() - vector2.get_z());
}

double multScale(vector vector1, vector vector2) {
	return vector1.get_x() * vector2.get_x() + vector1.get_y() * vector2.get_y(), vector1.get_z()* vector2.get_z();
}

vector multVector(vector vector1, vector vector2) {
	return vector(
					vector1.get_y() * vector2.get_z() - vector1.get_z() * vector2.get_y(), 
					(-1) * (vector1.get_x() * vector2.get_z() - vector1.get_z() * vector2.get_x()), 
					vector1.get_x() * vector2.get_y() - vector1.get_y() * vector2.get_x()
				 );
}