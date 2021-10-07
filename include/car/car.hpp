#pragma once

#include <iostream>
#include <string>

//!  A car class.
/*!
  This class define a car by the brand, the model and year.
*/

class Car {
  public:
    //! A constructor of Class car.
    /*!
      This constructor creates an object of car by the brand, model and year.
    * @param[in] x The brand
    * @param[in] y The model
    * @param[in] z  The year
   */
      Car(std::string x, std::string y, int z);      

    //! A destructor for Class car.
    /*!
      This is the destructor for Class car.
    */

      ~Car(){};

    //! A member function for Class car.
    /*!
      \sa Display()
      This function is to display the brand, year and model of a Car object.
    */
      void Display();
  protected:
    //! A protected variable.
    /*!
      The brand of a car object.
    */
      std::string brand;
    //! A protected variable.
    /*!
      The model of a car object.
    */      
      std::string model;
    //! A protected variable.
    /*!
      The year of a car object.
    */      
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



