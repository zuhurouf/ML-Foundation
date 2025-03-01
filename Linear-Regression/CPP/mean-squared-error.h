#include <vector>

#ifndef MEANSQUAREDERROR_H
#define MEANSQUAREDERROR_H

class Mean_Squared_Error {
    public:
        float calculate_error(std::vector<float> y_hat, std::vector<float> y);
};

#endif