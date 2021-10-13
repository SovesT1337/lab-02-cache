//
// Created by sovest on 11.10.2021.
//

#ifndef TEMPLATE_EXPERIMENT_HPP
#define TEMPLATE_EXPERIMENT_HPP

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

size_t experiment_forward(size_t);

size_t experiment_backward(size_t);

size_t experiment_random(size_t);

void print(size_t, size_t, size_t);

void magic();

#endif  // TEMPLATE_EXPERIMENT_HPP
