#pragma once

#include <iostream>
#include <string>

class Car {
  public:
      Car(std::string x, std::string y, int z);
      void Display();
  private:
      std::string brand;
      std::string model;
      int year;
};

Car::Car(std::string x, std::string y, int z) {
    brand = x;
    model = y;
    year = z;
}

void Car::Display(){
    std::cout << this->brand << " " << this->model << " " << this->year << std::endl;
}



