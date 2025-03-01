#include <linear-regression.h>
#include <mean-squared-error.h>
#include <iostream>
#include <vector>


double Linear_Regression::derivative_cost_w(std::vector<double> predictions) {
    double summation = 0.0;
    for (int i = 0; i < Linear_Regression::n; i++) {
        summation += (predictions[i] - Linear_Regression::y[i]) * Linear_Regression::x[i];
    }
    return (1 / Linear_Regression::n) * summation;
}


double Linear_Regression::derivative_cost_b(std::vector<double> predictions) {
    double summation = 0.0;
    for (int i = 0; i < Linear_Regression::n; i++) {
        summation += (predictions[i] - Linear_Regression::y[i]);
    }
    return (1 / Linear_Regression::n) * summation;
}

void Linear_Regression::optimize(double cost, std::vector<double> predictions) {
    double temp_w, temp_c;

    for (int i = 0; i < Linear_Regression::n; i++) {
        temp_w = Linear_Regression::w;
        temp_c = Linear_Regression::c;
        Linear_Regression::w = temp_w - Linear_Regression::learning_rate * Linear_Regression::derivative_cost_w(predictions);
        Linear_Regression::c = temp_c - Linear_Regression::learning_rate * Linear_Regression::derivative_cost_b(predictions);
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
        Linear_Regression::optimize(cost, predictions);
}