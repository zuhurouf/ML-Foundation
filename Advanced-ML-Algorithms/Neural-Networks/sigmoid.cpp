#include "sigmoid.h"
#include <cmath>


float Sigmoid::activation_func(float z) {
    return 1.0 / (1.0 + std::exp(-z));
}