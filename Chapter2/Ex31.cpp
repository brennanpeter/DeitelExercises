/* Written by Peter Brennan on 6/29/17
   This program is a car pooling cost/benefit anaylsis tool for carpooling
*/

#include <iostream>

int main(){
  int totalDrivenMilesPerDay{0}; // This will store the total miles driven without carpooling
  int costOfGasPerGallon{0}; // This will store the cost of gas
  int AverageMilesPerGallon{0}; // This will store the average gas mileage of the car
  int ParkingFeesPerDay{0}; // This will store the cost of parking one day
  int tollsPerDay{0}; // This will store the cost of tolls for one day

  int totalCostWithoutCarpool{0}; // Stores the total for one day of not carpooling


  int numberOfPeopleInCarpool{0}; // This will store the number of people in the carpool
  int costPerPerson{0}; // This will be the cost per person when carpooling


  std::cout << "Enter the total amount of miles you have to drive to and from work: ";
  std::cin >> totalDrivenMilesPerDay;
  std::cout <<  "Enter the cost of gas per gallon: ";
  std::cin >> costOfGasPerGallon;
  std::cout << "Enter the Average gas mileage of the car you drive: ";
  std::cin >> AverageMilesPerGallon;
  std::cout << "Enter the cost of parking daily: ";
  std::cin >> ParkingFeesPerDay;
  std::cout << "Enter the toll cost per day: ";
  std::cin >> tollsPerDay;

  // This line calculates the predicted total cost per day of driving without carpooling
  totalCostWithoutCarpool = totalDrivenMilesPerDay * (1/AverageMilesPerGallon)
                            * costOfGasPerGallon + ParkingFeesPerDay + tollsPerDay;
  std::cout << "The estimated cost of driving without carpooling is: $"
            << totalCostWithoutCarpool << std::endl;


  std::cout << "Enter the number of people you would be carpooling with: ";
  std::cin >> numberOfPeopleInCarpool;
  costPerPerson = totalCostWithoutCarpool / numberOfPeopleInCarpool;
  std::cout << "The cost per person in the carpool is now: $"
            << costPerPerson << std::endl;
  std::cout << "This will save each person $" << totalCostWithoutCarpool -
                costPerPerson << std::endl;

}
