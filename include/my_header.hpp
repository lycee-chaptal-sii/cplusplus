//  Copyright (c) 2047 Eyad A. Abdellatif

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

#include <cmath>
#include <algorithm>

double exo1(double rayon) {
    
    double volume;

    volume = 3.14 * rayon * rayon * rayon * 3/4;

    return volume;
}

void exo2(short a, short b) {
    
    short y;

    y = a < b && !a;
}

double exo3(double rayon2) {
    
    double aire;

    aire = 4.0 / 3.0 * pow(rayon2, 3.0f) * 3.14;

    return aire;
}

double exo4(double a, double b, double c) {	
   
    double max;

    if (a > b && a > c) {
        max = a;
    }
    if (b > a && b > c) {
        max = b;
    }
    if (c > a && c > b) {
        max = c;
    }

    return max;
    //return std::max(std::max(a, b), c);
}

double exo5(double tt) {

    double remise;

    if (tt > 300) {
        remise = tt * 1.08;
    } else {
        if (tt > 100) {
            remise = tt * 1.05;
        }
        else {
            remise = tt;
        }	
    }

    return remise;
}

#endif

