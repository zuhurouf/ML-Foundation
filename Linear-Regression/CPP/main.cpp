#include <iostream>
#include <vector>
#include <linear-regression.h>


int main() {
    std::vector<float> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<float> y = {20, 35, 40, 55, 60, 75, 80, 85, 90, 95};

    Linear_Regression lr;
    lr.x = x;
    lr.y = y;

    lr.w = 6;
    lr.c = 10;
    lr.learning_rate = 0.05;
    lr.epoch = 1000;
    lr.train();

    return 0;
}