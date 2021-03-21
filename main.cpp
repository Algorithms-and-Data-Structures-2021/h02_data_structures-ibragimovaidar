#include <iostream>

#include "array_list.hpp"
#include "linked_list.hpp"

using namespace itis;

int main(int argc, char **argv) {
  std::cout << "Hello, stranger!" << std::endl;

  auto array_list = new ArrayList();

  delete array_list;

  auto linked_list = new LinkedList();

  linked_list->Add(Element::DRAGON_BALL);
  linked_list->Add(Element::BEAUTIFUL_FLOWERS);
  linked_list->Insert(1, Element::CHERRY_PIE);

  bool result = Element::CHERRY_PIE == linked_list->Get(1);
  if (result){
    std::cout << "OK";
  }
  delete linked_list;
  return 0;
}