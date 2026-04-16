#include "Vector3D.h"
#include <cmath>

Vector3D::Vector3D() : x(0), y(0), z(0) {}
Vector3D::Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}

Vector3D Vector3D::operator+(const Vector3D& other) const {
    return Vector3D(x + other.x, y + other.y, z + other.z);
}

Vector3D Vector3D::operator-(const Vector3D& other) const {
    return Vector3D(x - other.x, y - other.y, z - other.z);
}

Vector3D Vector3D::operator*(double scalar) const {
    return Vector3D(x * scalar, y * scalar, z * scalar);
}

double Vector3D::dot(const Vector3D& other) const {
    return x * other.x + y * other.y + z * other.z;
}

Vector3D Vector3D::cross(const Vector3D& other) const {
    return Vector3D( y * other.z - z * other.y,
                     z * other.x - x * other.x,
                     x * other.y - y * other.x );
}

double Vector3D::magnitude() const {
    return std::sqrt(x * x + y * y + z * z);
}

Vector3D Vector3D::normalize() const {
    double mag = magnitude();
    if (mag == 0) return Vector3D(0, 0, 0);
    return Vector3D(x / mag, y / mag, z / mag);
}

double Vector3D::angle(const Vector3D& other) const {
    double dot_prod = dot(other);
    double mags = magnitude() * other.magnitude();
    if (mags == 0) return 0; // Avoid division by zero
    return std::acos(dot_prod / mags);
}

Vector3D Vector3D::projection(const Vector3D& other) const {
    double dot_prod = dot(other);
    double other_mag_sq = other.magnitude() * other.magnitude();
    if (other_mag_sq == 0) return Vector3D(0, 0, 0); // Avoid division by zero
    double scalar = dot_prod / other_mag_sq;
    return other * scalar;
}

void Vector3D::print() const {
    std::cout << "Vector3D(" << x << ", " << y << ", " << z << ")" << std::endl;
}