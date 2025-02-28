#include <linear-regression.h>
#include <mean-squared-error.h>
#include <iostream>
#include <vector>


void Linear_Regression::optimize(double cost) {
    for (int i = 0; i < Linear_Regression::n; i++) {
        Linear_Regression::w = Linear_Regression::w - (Linear_Regression::learning_rate * ());
    }
}


void Linear_Regression::train() {
    double y_hat, cost;
    std::vector<double> predictions = {};
    Mean_Squared_Error mse;

    for (int i = 1; i <= Linear_Regression::epoch; i++) {
        for (double x_i: Linear_Regression::x) {
            y_hat = (Linear_Regression::w * x_i) + Linear_Regression::c;
            predictions.push_back(y_hat);
        }
    }

        cost = mse.calculate_error(predictions, y);
        Linear_Regression::optimize(cost);
}