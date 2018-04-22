//
// Created by xxvms on 08/04/18.
//

#ifndef SECTION5BUILD_CLASSES_PERSON_H
#define SECTION5BUILD_CLASSES_PERSON_H

#include "Resource.h"
#include <string>
#include <memory>

class Person {
private:
  std::string firstName;
  std::string lastName;
  int arbitraryNumber;
  std::shared_ptr<Resource> pResource;

public:
  Person(std::string first, std::string last, int arbitrary);
  //Person(Person const & person); // this is copy constructor it takes copy of another person as const ref
  //Person& operator=(const Person& person);  // copy assignment or operator =

  std::string getName() const;
  int getNumber() const;
  void setNumber(int x);
  void setFirstName(std::string first);
  void addResource();
  std::string getResourceName() const { return pResource ? pResource->getName() : "";}
};

inline bool operator<(const Person &p0, const Person &p1) {
  return p0.getNumber() < p1.getNumber();
}

inline bool operator<(const int i, const Person &person) {
  return i < person.getNumber();
}
#endif // SECTION5BUILD_CLASSES_PERSON_H
