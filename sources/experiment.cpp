// COpyright 2021 SovesT
// Created by sovest on 11.10.2021.
//

#include <experiment.hpp>

void heat(const int *buffer, size_t size) {
  [[maybe_unused]] int k = 0;
  for (size_t i = 0; i < size; i += 16) {
    k = buffer[i];
  }
}

void circle(const int *buffer, size_t size) {
  [[maybe_unused]] int k = 0;
  for (size_t j = 0; j < 1000; ++j) {
    for (size_t i = 0; i < size; i += 16) {
      k = buffer[i];
    }
  }
}

void circle_back(const int *buffer, size_t size) {
  [[maybe_unused]] int k = 0;
  for (size_t j = 0; j < 1000; ++j) {
    for (size_t i = 0; i < size; i += 16) {
      k = buffer[size - i - 1];
    }
  }
}

void create_order(int *order, size_t size) {
  for (size_t i = 0; i < size / 16; ++i) {
    order[i] = i * 16;
  }
  for (size_t i = 0; i < size / 16; ++i) {
    std::swap(order[i], order[rand() % (size / 16)]);
  }
}

void circle_rand(const int *buffer, size_t size, const int *order) {
  [[maybe_unused]] int k = 0;
  for (size_t j = 0; j < 1000; ++j) {
    for (size_t i = 0; i < size / 16; ++i) {
      k = buffer[order[i]];
    }
  }
}

size_t experiment_forward(size_t size) {
  size_t start, end;
  int *buffer = new int[size];
  heat(buffer, size);
  start = clock();
  circle(buffer, size);
  end = clock();
  delete[] buffer;
  return end - start;
}

size_t experiment_backward(size_t size) {
  size_t start, end;
  int *buffer = new int[size];
  heat(buffer, size);
  start = clock();
  circle_back(buffer, size);
  end = clock();
  delete[] buffer;
  return end - start;
}

size_t experiment_random(size_t size) {
  size_t start, end;
  int *buffer = new int[size], *order = new int[size / 16];
  create_order(order, size);
  heat(buffer, size);
  start = clock();
  circle_rand(buffer, size, order);
  end = clock();
  delete[] buffer;
  delete[] order;
  return end - start;
}
