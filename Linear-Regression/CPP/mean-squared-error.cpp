#include <mean-squared-error.h>
#include <iostream>
#include <vector>
#include <cmath>

/* 
    Mean Squared Error: Compares the difference between the predicted value to the actual value and gives the estimated error
    for a given values of the modal parameters. The formula is,
    J(p1, p2,..., pn) = (1/2m)*(sum((prediction[i] - true_value[i])**2))
*/
float Mean_Squared_Error::calculate_error(std::vector<float> y_hat, std::vector<float> y) {
    float m = y.size();
    float error = 0, square_diff = 0;
    
    for (int i = 0; i < m; i++) {
        square_diff += std::pow(y_hat[i] - y[i], 2);

    }
    error = (1 / (2 * m)) * square_diff;
    return error;
}