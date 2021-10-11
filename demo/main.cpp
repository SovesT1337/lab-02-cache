#include <experiment.hpp>
#include <iostream>

int main() {
  std::cout << "1 MByte" << std::endl;
  std::cout << "Forward: " << experiment_forward(1 * 1024 * 1024 * 8 / 32) << std::endl;
  std::cout << "Backward: " << experiment_backward(1 * 1024 * 1024 * 8 / 32) << std::endl;
  std::cout << "Random: " << experiment_random(1 * 1024 * 1024 * 8 / 32) << std::endl;
  std::cout << "2 MByte" << std::endl;
  std::cout << "Forward: " << experiment_forward(2 * 1024 * 1024 * 8 / 32) << std::endl;
  std::cout << "Backward: " << experiment_backward(2 * 1024 * 1024 * 8 / 32) << std::endl;
  std::cout << "Random: " << experiment_random(2 * 1024 * 1024 * 8 / 32) << std::endl;
  std::cout << "4 MByte" << std::endl;
  std::cout << "Forward: " << experiment_forward(4 * 1024 * 1024 * 8 / 32) << std::endl;
  std::cout << "Backward: " << experiment_backward(4 * 1024 * 1024 * 8 / 32) << std::endl;
  std::cout << "Random: " << experiment_random(4 * 1024 * 1024 * 8 / 32) << std::endl;
  std::cout << "8 MByte" << std::endl;
  std::cout << "Forward: " << experiment_forward(8 * 1024 * 1024 * 8 / 32) << std::endl;
  std::cout << "Backward: " << experiment_backward(8 * 1024 * 1024 * 8 / 32) << std::endl;
  std::cout << "Random: " << experiment_random(8 * 1024 * 1024 * 8 / 32) << std::endl;
  std::cout << "12 MByte" << std::endl;
  std::cout << "Forward: " << experiment_forward(12 * 1024 * 1024 * 8 / 32) << std::endl;
  std::cout << "Backward: " << experiment_backward(12 * 1024 * 1024 * 8 / 32) << std::endl;
  std::cout << "Random: " << experiment_random(12 * 1024 * 1024 * 8 / 32) << std::endl;
}