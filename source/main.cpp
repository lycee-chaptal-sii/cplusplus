//  Copyright (c) 2018 Eyad A. Abdellatif

#include <iostream>
#include <my_header.hpp>

int main()
{
	double r1 = 0.0;
	double v1 = 0.0;
	double max = 0.0;
	double tt = 0.0;

	r1 = exo1(10.0);

	exo2(5, 10);
	exo2(0, 10);
	exo2(20, 10);

	v1 = exo3(10.0);

	max = exo4(10, 20, 30);
	printf("%lf", max);

	tt = exo5(105);
	printf("%lf", tt);

    std::cout << "Hello World!" << std::endl;

    return 0;
}
