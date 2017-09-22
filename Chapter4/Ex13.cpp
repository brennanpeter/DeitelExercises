/* Written by Peter Brennan 7/6/17
  This program is for calculating the average gas milage of a driver for
  a series of trips they take. Displays the mpg of each trip and and the total
  mpg
*/

#include <iostream>

int main(){
  int numberOfTrips{1}; // This is a counter variable for calculating the totalMPG
  int tripMiles{0}; // This stores the MPG for the current trip
  int tripGallons{0}; // This stores the number of gallons used for the current trip
  int totalMiles{0}; // This stores the total number of miles traveled
  int totalGallons{0}; // This stores the total number of Gallons of gas used
  double tripMPG{0};
  double totalMPG{0};

  // Because we are
  // This prompts the user for the number of miles traveled in the trip
  std::cout << "Enter miles driven (-1 to quit): ";
  std::cin >> tripMiles;

  while (tripMiles != -1) {
    // This prompts the user for the number of gallons of gas used in the trip
    std::cout << "Enter gallons used: ";
    std::cin >> tripGallons;

    totalMiles += tripMiles;
    totalGallons += tripGallons;
    tripMPG = static_cast<double>(tripMiles) / tripGallons;
    totalMPG = static_cast<double>(totalMiles) / totalGallons;
    std::cout << "MPG for this trip: " << tripMPG;
    std::cout << "\nTotal MPG: " << totalMPG;

    // This prompts the user for the number of miles traveled in the trip
    std::cout << "\n\nEnter miles driven (-1 to quit): ";
    std::cin >> tripMiles;

  }
}
