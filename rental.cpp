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
    double totalsAmount = 0;
    for(std::vector<Rental *>::iterator it = _rentals.begin(); i != _rentals.end(); i++)
    static double thisAmount = 0;
    switch((*it)->getMovie().getPriceCode()) {
      case Movie.REGULAR:
        thisAmount += 2;
        if ((*it)->getDaysRented() > 2)
        thisAmount += ((*it)->getDaysRented() - 2) * 1.5
    }

  }

private:
  std::vector<Rental *> _rentals;
  std::string _name;
};
