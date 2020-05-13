#include <stdio.h>
#include <math.h>

#define to_rad(x) ((x)/180.0)*(acos(-1.0))

struct Rect{
	double x;
	double y;
};

struct Rate{
	double r;
	double delta;
};

struct Rect to_rect(struct Rate *);

struct Rect to_rect(struct Rate * rate) {
	struct Rect rect;
	rect.x = rate->r * cos(rate->delta);
	rect.y = rate->r * sin(rate->delta);
	return rect;
}

int main() {
	printf("%f\n", to_rad(30.0));
	struct Rate r = { 5.0, to_rad(30.0) };
	struct Rect re = to_rect(&r);
	printf("x: %f\ny: %f\n", re.x, re.y);
	return 0;
}
