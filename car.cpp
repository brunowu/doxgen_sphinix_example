#include "car.hpp"

int main() {
  Car car1("BMW", "X5", 1999);
  Car car2("Ford", "Mustang", 1969);

  car1.Display();
  car2.Display();

  return 0;
}

