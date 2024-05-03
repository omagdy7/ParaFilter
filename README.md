# ParaFilter

## Description
ParaFilter is a project aimed at implementing a low pass filter on images using different implmenations which are sequential, using openmp and using MPI.

## Prerequisites
- C++ compiler
- CMake (version 3.1.0)
- Make (if using Makefile)
- GTest (needed for testing)

## How to Build
### Clone the repository to your local machine
```bash
git clone https://github.com/omagdy7/ParaFilter.git
```
### Navigate to the project directory
```bash
cd ParaFilter
```
### Create a build directory:
```bash
mkdir build && cd build
```
### Generate build files using CMake:
```bash
cmake ..
```
### Build the project:
```bash
cmake --build . --target bin-debug
```

