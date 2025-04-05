#include "neuron.h"
#include <vector>

float Neuron::compute(std::vector<float> x, std::vector<float> w, float b, float (*activation_func)(float)) {
    int i;
    float z = 0.0;

    for (i = 0; i < x.size(); i++) {
        z += x[i] * w[i];
    }
    z += b;
    return activation_func(z);
}