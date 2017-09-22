/* Written by Peter Brennan 8/3/17
  This program prints the lyrics of the song "The twelve days of christmas" using
  iteration and a switch statement
*/

#include <iostream>

int main() {
  // The first day there is no "and" so this line is printed separately
  std::cout << "On the First day of Christmas my true love sent to me\na Partridge in a Pear Tree.\n\n";

  // Iterates through all 12 days
  for(int day{2}; day <= 12; day++){

    std::cout << "On the ";
    // Prints the word for the corresponding day
    switch (day) {
      case 2: std::cout << "Second";
        break;
      case 3: std::cout << "Third";
        break;
      case 4: std::cout << "Fourth";
        break;
      case 5: std::cout << "Fifth";
        break;
      case 6: std::cout << "Sixth";
        break;
      case 7: std::cout << "Seventh";
        break;
      case 8: std::cout << "Eighth";
        break;
      case 9: std::cout << "Ninth";
        break;
      case 10: std::cout << "Tenth";
        break;
      case 11: std::cout << "Eleventh";
        break;
      case 12: std::cout << "Twelfth";
        break;
      default:
        break;
    }

    std::cout << " day of Christmas my true love sent to me\n";

    int gift = day;

    while (gift >= 1) {

      switch (gift) {
        case 1: std::cout << "and a Partridge in a Pear Tree.\n\n";
          break;
        case 2: std::cout << "Two Turtle Doves\n";
          break;
        case 3: std::cout << "Three French Hens,\n";
          break;
        case 4: std::cout << "4 Calling Birds,\n";
          break;
        case 5: std::cout << "5 Gold Rings,\n";
          break;
        case 6: std::cout << "6 Geese a-Laying,\n";
          break;
        case 7: std::cout << "7 Swans a-Swimming,\n";
          break;
        case 8: std::cout << "8 Maids a-Milking,\n";
          break;
        case 9: std::cout << "9 Ladies Dancing,\n";
          break;
        case 10: std::cout << "10 Lords a-Leaping,\n";
          break;
        case 11: std::cout << "11 Pipers Piping,\n";
          break;
        case 12: std::cout << "12 Drummers Drumming,\n";
        default:
          break;
      }

      gift--;
    }
  }
}
