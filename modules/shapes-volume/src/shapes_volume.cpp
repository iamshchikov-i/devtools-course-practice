// Copyright 2019 Evdokimov Artem

#define _USE_MATH_DEFINES
#include <cmath>

#include "include/shapes_volume.h"

double ShapesVolume::SphereVolume(double radius) {
    return 4.0 / 3.0 * M_PI * pow(radius , 3.0);
}

double ShapesVolume::CylinderVolume(double radius , double height) {
    return M_PI * pow(2 , radius) * height ;
}

double ShapesVolume::CubeVolume(double a) {
    return pow(a , 3.0);
}

double ShapesVolume::ParallelepipedVolume(double a , double b , double c) {
    return a * b * c ;
}

double ShapesVolume::ConeVolume(double radius , double height) {
    return 1.0 / 3.0 * M_PI * pow(radius , 2.0) * height;
}

double ShapesVolume::TetrahedronVolume(double a) {
    return (pow(a , 3.0) * sqrt(2)) / 12.0 ;
}
