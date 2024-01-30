#ifndef LAB3_H
#define LAB3_H

#include <iostream>
#include <string>

using namespace std;

class Vehicle {
public:
    Vehicle() {}

    virtual double CalculateTime(double distance) = 0;

    virtual double CalculateCost(double distance) = 0;
};

class Car : public Vehicle {
public:
    Car() {}

    double CalculateTime(double distance) override {
        return distance / 100;
    }

    double CalculateCost(double distance) override {
        return distance * 0.5;
    }
};

class Bicycle : public Vehicle {
public:
    Bicycle() {}

    double CalculateTime(double distance) override {
        return distance / 20;
    }

    double CalculateCost(double distance) override {
        return distance * 0.2;
    }
};

class Cart : public Vehicle {
public:
    Cart() {}

    double CalculateTime(double distance) override {
        return distance / 50;
    }

    double CalculateCost(double distance) override {
        return distance * 0.1;
    }
};

#endif