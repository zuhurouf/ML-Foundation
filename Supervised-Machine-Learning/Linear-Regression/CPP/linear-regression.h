#include <vector>

#ifndef LINEARREGRESSION_H
#define LINEARREGRESSION_H

class Linear_Regression {
    private:
        int n;
    
    public:
        int epoch;
        float w, c, learning_rate;
        std::vector<float> x = {}, y = {};

        void train();

        void optimize(float cost, std::vector<float> predictions);

        float derivative_cost_w(std::vector<float> predictions);

        float derivative_cost_b(std::vector<float> predictions);
};

#endif