#include <algorithm>
//#include <chrono>
#include <pybind11/pybind11.h>
#include <iostream>
#include <exception>
#include "linear_regression.h"

using namespace std;
namespace py=pybind11;

LinearRegression::LinearRegression(){
    Matrix temp;
    this->a = temp;
}

void LinearRegression::fit(Matrix X, Matrix y){ a = XtX(-1)Xty
    this->a = (X.transpose()*X).ldlt().solve(X.transpose()*y);
}


Matrix LinearRegression::predict(Matrix X){
    return X*this->a;
}

