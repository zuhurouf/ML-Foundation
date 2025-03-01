#include <linear-regression.h>
#include <mean-squared-error.h>
#include <iostream>
#include <vector>


float Linear_Regression::derivative_cost_w(std::vector<float> predictions) {
    float slope = 0.0;
    float summation = 0.0;
    for (int i = 0; i < Linear_Regression::n; i++) {
        summation += (predictions[i] - Linear_Regression::y[i]) * Linear_Regression::x[i];
    }
    slope = (summation / Linear_Regression::n); 
    return slope;
}


float Linear_Regression::derivative_cost_b(std::vector<float> predictions) {
    float slope = 0.0;
    float summation = 0.0;
    for (int i = 0; i < Linear_Regression::n; i++) {
        summation += (predictions[i] - Linear_Regression::y[i]);
    }
    slope = (summation / Linear_Regression::n); 
    return slope;
}

void Linear_Regression::optimize(float cost, std::vector<float> predictions) {
    float temp_w, temp_c;
    temp_w = Linear_Regression::w;
    temp_c = Linear_Regression::c;
    Linear_Regression::w = temp_w - Linear_Regression::learning_rate * Linear_Regression::derivative_cost_w(predictions);
    Linear_Regression::c = temp_c - Linear_Regression::learning_rate * Linear_Regression::derivative_cost_b(predictions);
}


void Linear_Regression::train() {
    Linear_Regression::n = Linear_Regression::x.size();
    float y_hat, cost;
    std::vector<float> predictions = {};
    Mean_Squared_Error mse;

    for (int i = 1; i <= Linear_Regression::epoch; i++) {
        predictions.clear();
        for (double x_i: Linear_Regression::x) {
            y_hat = (Linear_Regression::w * x_i) + Linear_Regression::c;
            predictions.push_back(y_hat);
        }
        cost = mse.calculate_error(predictions, y);
        Linear_Regression::optimize(cost, predictions);
        std::cout << "Epoch: " << i << "  Cost: " << cost << "  w: " << Linear_Regression::w << "  c: " << Linear_Regression::c << std::endl;
    }
}