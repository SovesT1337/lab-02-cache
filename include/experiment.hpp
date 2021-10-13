// Copyright 2021 SovesT
// Created by sovest on 11.10.2021.
//

#ifndef INCLUDE_EXPERIMENT_HPP_
#define INCLUDE_EXPERIMENT_HPP_

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

#endif  // INCLUDE_EXPERIMENT_HPP_
