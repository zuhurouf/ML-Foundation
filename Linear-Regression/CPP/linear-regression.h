#include <vector>

#ifndef LINEARREGRESSION_H
#define LINEARREGRESSION_H

class Linear_Regression {
    private:
        int n, epoch;
    
    public:
        double w, c, learning_rate;
        std::vector<double> x = {}, y = {};

        void train();

        void optimize(double cost);
};

#endif