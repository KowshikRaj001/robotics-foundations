#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <iostream>

class Vector3D {
public:
    double x, y, z;
    // the values
    Vector3D();
    Vector3D(double x, double y, double z);

    // Basic operations
    Vector3D operator+(const Vector3D& other) const;
    Vector3D operator-(const Vector3D& other) const;
    Vector3D operator*(double scalar) const;

    //dot and cross products
    double dot(const Vector3D& other) const;
    Vector3D cross(const Vector3D& other) const;

    // Magnitude and normalization
    double magnitude() const;
    Vector3D normalize() const;

    // Angle between vectors (radians)
    double angle(const Vector3D& other) const;
    Vector3D projection(const Vector3D& other) const;

    // Print
    void print() const;
};

#endif