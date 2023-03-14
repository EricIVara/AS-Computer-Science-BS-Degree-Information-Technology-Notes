#ifndef CLASSDEFINITION_H
#define CLASSDEFINITION_H
#include <string>
using namespace std;

// class definition
class Restaurant {
public:
  // mutator member functions
  void SetName(string restaurantName);
  void SetRating(int userRating);

  // accessor memeber functions
  string GetName() const;
  int GetRating() const;
  void Print() const;

  // private helper functions
  private:
  string name = "In-N-Out";
  int rating = 5;
};

#endif