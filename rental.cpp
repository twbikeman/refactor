#include <string>
#include <vector>

class Movie {

public:
  static const int CHILDRENS = 2;
  static const int REGULAR = 0;
  static const int NEW_RELEASE = 1;

  Movie(std::string title, int priceCode) : _title(title), _priceCode(priceCode) {}

  int getPriceCode() {
    return _priceCode;
  }

  void setPriceCode(int arg) {
    _priceCode = arg;
  }

  std::string getTitle() {
    return _title;
  }


private:
  std::string _title;
  int _priceCode;

};

class Rental {
public:

  Rental(Movie * movie, int daysRented) {
    _movie = movie;
    _daysRented = daysRented;
  }

  int getDaysRented() {
    return _daysRented;
  }

  Movie * getMovie() {
    return _movie;
  }

private:

  Movie * _movie;
  int _daysRented;

};

class Customer {
public:

  Customer(std::string name) {
    _name = name;
  }
  void addRental(Rental * arg) {
      _rentals.push_back(arg);
  }

  std::string getName() {
    return _name;
  }

  std::string statement() {
    double totalAmount = 0;
    int frequentRentedPoints = 0;
    std::string result = "Rental Record for " + getName()  + "\n";
    for(std::vector<Rental *>::iterator it = _rentals.begin(); it != _rentals.end(); it++){
    static double thisAmount = 0;
    switch((*it)->getMovie()->getPriceCode()) {
      case Movie::REGULAR:
        thisAmount += 2;
        if ((*it)->getDaysRented() > 2)
        thisAmount += ((*it)->getDaysRented() - 2) * 1.5;
        break;
      case Movie::NEW_RELEASE:
        thisAmount += (*it)->getDaysRented() * 3;
        break;
      case Movie::CHILDRENS:
        thisAmount += 1.5;
        if ((*it)->getDaysRented() > 3)
        thisAmount += ((*it)->getDaysRented() - 3) * 1.5;
        break;
    }
    frequentRentedPoints++;
    if ((*it)->getMovie()->getPriceCode() == Movie::NEW_RELEASE && (*it)->getDaysRented() > 1) frequentRentedPoints++;
    result += "\t" + (*it)->getMovie()->getTitle() + "\t" + std::to_string(thisAmount) + "\n";
    totalAmount += thisAmount;
    result += "Amount owed is " + std::to_string(totalAmount) + "\n";
    result += "You earned" + std::to_string(frequentRentedPoints) + " frequent renter points";
    return result;
  }

  }

private:
  std::vector<Rental *> _rentals;
  std::string _name;
};
