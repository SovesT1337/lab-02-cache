#include <experiment.hpp>
#include <iostream>

using std::cout;
using std::endl;

void print(size_t number, size_t size, size_t mode) {
  cout << "  - experiment:" << endl;
  cout << "    number: " << number << endl;
  cout << "    input_data: " << endl;
  cout << "      buffer_size: " << size << " mb" << endl;
  cout << "    results: " << endl;
  if (mode == 1)
    cout << "      duration: " << experiment_forward(size * 1024 * 1024 * 8 / 32)
         << endl;
  if (mode == 2)
    cout << "      duration: " << experiment_backward(size * 1024 * 1024 * 8 / 32)
         << endl;
  if (mode == 3)
    cout << "      duration: " << experiment_random(size * 1024 * 1024 * 8 / 32)
         << endl;
}

void magic() {
  cout << "investigation: " << endl;
  cout << "  travel variant: forward" << endl;
  print(1, 1, 1);
  print(2, 2, 1);
  print(3, 4, 1);
  print(4, 8, 1);
  print(5, 12, 1);
  cout << "investigation: " << endl;
  cout << "  travel variant: backward" << endl;
  print(6, 1, 2);
  print(7, 2, 2);
  print(8, 4, 2);
  print(9, 8, 2);
  print(10, 12, 2);
  cout << "investigation: " << endl;
  cout << "  travel variant: random" << endl;
  print(11, 1, 3);
  print(12, 2, 3);
  print(13, 4, 3);
  print(14, 8, 3);
  print(15, 12, 3);
}

int main() {
  magic();
}