/*
* Description: Project 1 (cold calling system)
*
* Author: Owen, Mason, James, Zach, Sam
*
* Date of last update: 1/31/2020
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


  // Load the existing data
  list.loadClasses();

  std::vector<std::string> class_names = list.getClassList();
  for (std::vector<std::string>::const_iterator class_name_it = class_names.cbegin(); class_name_it != class_names.cend(); class_name_it++)
  {
    // Get the class
    class ColdCallClass * cold_call_class = list.getClass(*class_name_it);
    // Generate the reports
    cold_call_class->exportReport((*class_name_it) + "-report.txt");
  }

  std::cout << "SUCCESS" << '\n';
  return 0;
}
