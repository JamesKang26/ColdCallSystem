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
  list.addClass("Adjustment");
  class ColdCallClass * class0 = list.getClass("Adjustment");
  // Load in the data for the classes
  class0->loadRoster("../rosters/sample.tsv");

  std::vector<struct Student *> added;
  std::vector<std::pair<struct Student *,struct Student *>> modified;
  std::vector<struct Student *> removed;

  added.clear();
  modified.clear();
  removed.clear();
  class0->compareRoster(&added, &modified, &removed);
  std::cout << class0->getClassName() << " AMR: " << added.size() << ' ' << modified.size() << ' ' << removed.size() << '\n';
  class0->updateRoster(true);

  // Display the initial roster
  std::vector<struct Student *> class_roster = class0->getStudents();
  class_roster = class0->getStudents();
  std::cout << "In class (" << class_roster.size() << "):" << '\n';
  for (std::vector<struct Student *>::const_iterator cit = class_roster.cbegin(); cit != class_roster.cend(); cit++)
  {
    std::cout << (*cit)->first_name << " " << (*cit)->last_name << '\n';
  }

  // Load an updated roster
  class0->loadRoster("../rosters/samplemod.tsv");
  added.clear();
  modified.clear();
  removed.clear();
  class0->compareRoster(&added, &modified, &removed);
  std::cout << class0->getClassName() << "AMR: " << added.size() << ' ' << modified.size() << ' ' << removed.size() << '\n';
  class0->updateRoster(true);

  // Display the updated roster
  class_roster = class0->getStudents();
  std::cout << "In class (" << class_roster.size() << "):" << '\n';
  for (std::vector<struct Student *>::const_iterator cit = class_roster.cbegin(); cit != class_roster.cend(); cit++)
  {
    std::cout << (*cit)->first_name << " " << (*cit)->last_name << '\n';
  }

  return 0;
}
