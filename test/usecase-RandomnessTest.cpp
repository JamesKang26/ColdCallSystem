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

  // Load in new data if needed
  list.loadClasses();
  list.addClass("Random");
  // Get the classe and its queue
  class ColdCallClass * classRandom = list.getClass("Random");
  classRandom->loadRoster("../rosters/ordered.tsv");
  classRandom->updateRoster(true);
  class ColdCallQueue * queueRandom = classRandom->getQueue();

  // Remove from on deck many times
  for (unsigned int i = 0; i < 10000; i++)
  {
    queueRandom->removeOnDeck(0, ' ');
  }


  return 0;
}
