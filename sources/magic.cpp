// Copyright 2021 SovesT
// Created by sovest on 13.10.2021.
//

#include <experiment.hpp>

void print(size_t number, size_t size, size_t mode) {
  int MbinKb = 1024 * 1024 * 8 / 32;
  cout << "  - experiment:" << endl
       << "    number: " << number << endl
       << "    input_data: " << endl
       << "      buffer_size: " << size << " mb" << endl
       << "    results: " << endl
       << "      duration: ";
  if (mode == 1) cout << experiment_forward(size * MbinKb) / 1000 << endl;
  if (mode == 2) cout << experiment_backward(size * MbinKb) / 1000 << endl;
  if (mode == 3) cout << experiment_random(size * MbinKb) / 1000 << endl;
}

void magic() {
  cout << "investigation: " << endl << "  travel variant: forward" << endl;
  print(1, 1, 1);
  print(2, 2, 1);
  print(3, 4, 1);
  print(4, 8, 1);
  print(5, 12, 1);
  cout << "investigation: " << endl << "  travel variant: backward" << endl;
  print(6, 1, 2);
  print(7, 2, 2);
  print(8, 4, 2);
  print(9, 8, 2);
  print(10, 12, 2);
  cout << "investigation: " << endl << "  travel variant: random" << endl;
  print(11, 1, 3);
  print(12, 2, 3);
  print(13, 4, 3);
  print(14, 8, 3);
  print(15, 12, 3);
}
