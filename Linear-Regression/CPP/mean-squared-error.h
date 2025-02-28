#include <vector>

#ifndef MEANSQUAREDERROR_H
#define MEANSQUAREDERROR_H

class Mean_Squared_Error {
    public:
        double calculate_error(std::vector<double> y_hat, std::vector<double> y);
};

#endif