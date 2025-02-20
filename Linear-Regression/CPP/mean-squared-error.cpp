#include <iostream>
#include <vector>
#include <cmath>

/* 
    Mean Squared Error: Compares the difference between the predicted value to the actual value and gives the estimated error
    for a given values of the modal parameters. The formula is,
    J(p1, p2,..., pn) = (1/2m)*(sum((prediction[i] - true_value[i])**2))
*/
class Mean_Squared_Error {
    private:
        std::vector<double>y, y_hat;
        double m;

        double calculate_error() {
            m = y.size();
            double error = 0;
            double square_difference = 0;

            for (int i = 0; i < m; i++) {
                square_difference += std::pow(y_hat[i] - y[i], 2);
            }
            error = (1 / (2 * m)) * square_difference;
            
            return error;
        }
};