/*
* Description: Project 1 (cold calling system)
*
* Author: Owen, Mason, James, Zach, Sam
*
* Date of last update: 2/1/2020
*
* Notes: Project currently under construction
*
*/

#include <iostream>

#include "../ColdCallClassList.h"
#include "../ColdCallClass.h"
#include "../ColdCallQueue.h"

int main(int argc, char const *argv[])
{
  //calling a random seed for random generator using current time
  srand(time(0));

  ColdCallClassList list;

  // Add the classes to the list
  list.loadClasses();
  list.addClass("CIS 422 P1G5");
  list.addClass("Ordered");
  class ColdCallClass * class0 = list.getClass("CIS 422 P1G5");
  class ColdCallClass * class1 = list.getClass("Ordered");
  // Load in the data for the classes
  class0->loadRoster("../rosters/sample.tsv");
  class1->loadRoster("../rosters/ordered.tsv");

  std::vector<struct Student *> added;
  std::vector<std::pair<struct Student *,struct Student *>> modified;
  std::vector<struct Student *> removed;

  added.clear();
  modified.clear();
  removed.clear();
  class0->compareRoster(&added, &modified, &removed);
  std::cout << class0->getClassName() << " AMR: " << added.size() << ' ' << modified.size() << ' ' << removed.size() << '\n';
  class0->updateRoster(true);

  added.clear();
  modified.clear();
  removed.clear();
  class1->compareRoster(&added, &modified, &removed);
  std::cout << class1->getClassName() << "AMR: " << added.size() << ' ' << modified.size() << ' ' << removed.size() << '\n';
  class1->updateRoster(true);


  return 0;
}
