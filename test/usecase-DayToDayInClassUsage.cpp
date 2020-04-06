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


  // Load the existing data
  list.loadClasses();
  // Get the classe and its queue
  class ColdCallClass * class422 = list.getClass("Ordered");
  if (class422 == nullptr)
  {
    std::cerr << "Failed to get the class" << '\n';
    return 1;
  }
  class ColdCallQueue * queue422 = class422->getQueue();
  if (class422 == nullptr)
  {
    std::cerr << "Failed to get the queue" << '\n';
    return 1;
  }

  std::vector<struct Student *> on_deck;

  // Get the students currently on deck
  on_deck = queue422->getOnDeck(4);

  std::cout << "On Deck (" << on_deck.size() << "):" << '\n';
  for (std::vector<struct Student *>::const_iterator cit = on_deck.cbegin(); cit != on_deck.cend(); cit++)
  {
    std::cout << (*cit)->first_name << " " << (*cit)->last_name << '\n';
  }

  // Remove one of the On Deck
  queue422->removeOnDeck(3, ' ');

  // Get the updated students on deck
  on_deck = queue422->getOnDeck(4);

  std::cout << "On Deck (" << on_deck.size() << "):" << '\n';
  for (std::vector<struct Student *>::const_iterator cit = on_deck.cbegin(); cit != on_deck.cend(); cit++)
  {
    std::cout << (*cit)->first_name << " " << (*cit)->last_name << '\n';
  }


  return 0;
}
