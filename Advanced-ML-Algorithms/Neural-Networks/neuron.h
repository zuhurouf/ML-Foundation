#include <vector>
#include <functional>

#ifndef NEURON_H
#define NEURON_H

class Neuron {
    public:
        std::vector<float> x;
        std::vector<float> w;
        float b;
    
    private:
        float compute(std::vector<float> x, std::vector<float> w, float b, float (*activation_func)(float));
};


#endif