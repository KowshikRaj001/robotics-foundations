# Robotics C++ Foundations

A modular and extensible C++ library implementing core linear algebra primitives used in robotics, including 2D/3D vectors, matrices, and rigid body transformations.

---

## Overview

This project provides a clean, from-scratch implementation of the mathematical building blocks required for robotics systems such as motion planning, kinematics, and coordinate frame transformations.

The focus is on:

* clarity of implementation
* mathematical correctness
* extensibility toward real robotics frameworks (e.g., ROS2)

---

## Features

### 🔹 Vector2D

* Vector arithmetic (addition, subtraction, scaling)
* Dot product and 2D cross product
* Magnitude and normalization
* Angle between vectors
* Vector projection

---

### 🔹 Matrix2D

* 2×2 matrix representation
* Matrix–matrix multiplication
* Matrix–vector transformation
* Determinant and inverse
* Identity matrix
* 2D rotation matrices

---

### 🔹 Transform2D

* Rigid body transformation in 2D (SE(2))
* Composition of transformations
* Rotation + translation abstraction
* Point transformation across coordinate frames

---

### 🔹 Vector3D (NEW)

* 3D vector representation (x, y, z)
* Dot product (alignment & projection)
* Cross product (orthogonal vector generation)
* Magnitude and normalization
* Angle computation between vectors
* Vector projection in 3D space

---

## Concepts Covered

* Linear Algebra for Robotics
* Euclidean Vector Spaces (ℝ², ℝ³)
* Rotation Matrices
* Rigid Body Transformations (SE(2))
* Geometric Interpretation of Dot & Cross Products

---

## Project Structure

```id="projstruct"
robotics-cpp-foundations/
├── include/
│   ├── Vector2D.h
│   ├── Matrix2D.h
│   ├── Transform2D.h
│   └── Vector3D.h
├── src/
│   ├── Vector2D.cpp
│   ├── Matrix2D.cpp
│   ├── Transform2D.cpp
│   └── Vector3D.cpp
├── main.cpp
├── CMakeLists.txt
└── README.md
```

---

## Build Instructions

### Prerequisites

* C++17 compatible compiler (GCC/Clang)
* CMake ≥ 3.10
* Linux (recommended for robotics workflows)

---

### Build & Run

```bash id="buildrun"
git clone <your-repo-url>
cd robotics-cpp-foundations

mkdir build && cd build
cmake ..
make

./robotic_cpp
```

---

## Example Output

```id="outputblock"
Cross product: (0, 0, 1)

Rotated vector: (0, 1)

Final transformed point: (2, 4)
```

---

## Applications in Robotics

This library directly maps to real-world robotics systems:

* **Mobile Robotics**
  Motion modeling and velocity transformations

* **Manipulator Kinematics**
  Joint transformations and coordinate mapping

* **ROS2 TF System**
  Frame transformations and pose representation

* **Perception Systems**
  Sensor data transformation between coordinate frames

---

## Numerical Considerations

* Floating-point operations may introduce small precision errors
* Comparisons should use tolerances (e.g., `1e-6`) instead of exact equality
* Designed for learning and correctness, not optimized for high-performance computing

---

## Roadmap

* Matrix3D (3×3 rotation matrices)
* Transform3D (SE(3) representation)
* Homogeneous transformation matrices (4×4)
* Integration with ROS2 geometry messages
* Unit testing (GoogleTest)
* Benchmarking and optimization

---

## Author

**Kowshik Raj**
B.Tech Artificial Intelligence & Machine Learning
Focused on Robotics Systems and Autonomous Machines

---

## License

This project is open-source and intended for educational and research purposes.
