#include "LinkedList.h"

// constructor, initialize class variables and pointers here if need.
LinkedList::LinkedList(){
  // Your code here
}

//deconstructor, delete heap memory here if you need.
LinkedList::~LinkedList(){
  // Your code here
}


shared_ptr<node> LinkedList::InitNode(int data){
  // Your code here
}

std::string LinkedList::Report(){
  // Your code here
}

void LinkedList::AppendData(int data){
  // Your code here
}

void LinkedList::Append(node* new_node){
  // Your code here
}

void LinkedList::InsertData(int offset, int data){
  // Your code here
}

void LinkedList::Insert(int offset, node* new_node){
  // Your code here
}

void LinkedList::Remove(int offset){
  // Your code here
}

int LinkedList::Size(shared_ptr<node> head){
  // Your code here
}

bool LinkedList::Contains(shared_ptr<node> head, int data){
  // Your code here
}

// This function is implemented for you
// Returns the top pointer
shared_ptr<node> LinkedList::GetTop(){
  return top_ptr_;
}

// This function is implemented for you
// sets a given pointer as the top pointer
void LinkedList::SetTop(shared_ptr<node> top_ptr){
  top_ptr_ = top_ptr;
}
