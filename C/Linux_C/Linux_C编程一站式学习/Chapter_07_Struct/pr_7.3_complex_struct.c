/*
 * 2015-05-19 14:40
 */

#include<stdio.h>
#include<math.h>

//RECTANGULAR 直角坐标; POLAR 极坐标
enum coordinate_type {RECTANGULAR, POLAR}; 
struct complex_struct {
	enum coordinate_type t;
	double a;
	double b;
};

struct complex_struct make_from_real_img(double x, double y) {
		struct complex_struct z;
		z.t = RECTANGULAR;
		z.a = x;
		z.b = y;
		return z;
}

struct complex_struct make_from_mag_ang(double r, double A) {
	struct complex_struct z;
	z.t = POLAR;
	z.a = r;
	z.b = A;
	return z;
}

double real_part(struct complex_struct z) {
	if (z.t == RECTANGULAR) {
		return z.a;
	} else {
		return z.a * cos(z.b);
	}
}

double img_part(struct complex_struct z) {
	if (z.t == RECTANGULAR) {
		return z.b;
	} else {
		return z.a * sin(z.b);
	}
}

double magnitude(struct complex_struct z) {
	if (z.t == RECTANGULAR) {
		return sqrt(z.a * z.a + z.b * z.b);
	} else {
		return z.a;
	}
}

double angle(struct complex_struct z) {
	if (z.t == RECTANGULAR) {
		return atan2(z.b, z.a);
	} else {
		return z.b;
	}
}

struct complex_struct add_complex(struct complex_struct z1, struct complex_struct z2) {
	return make_from_real_img(real_part(z1) + real_part(z2), img_part(z1) + img_part(z2));
}

struct complex_struct sub_complex(struct complex_struct z1, struct complex_struct z2) {
	return make_from_real_img(real_part(z1) - real_part(z2), img_part(z1) - img_part(z2));
}

struct complex_struct mul_complex(struct complex_struct z1, struct complex_struct z2) {
	return make_from_mag_ang(magnitude(z1) * magnitude(z2), angle(z1) + angle(z2));
}

struct complex_struct div_complex(struct complex_struct z1, struct complex_struct z2) {
	return make_from_mag_ang(magnitude(z1) / magnitude(z2), angle(z1) - angle(z2));
}

int main(void) {


	return 0;
}




