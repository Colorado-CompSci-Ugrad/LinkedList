#ifndef LINKEDLIST_H__
#define LINKEDLIST_H__

#include <string>
#include <memory>

using namespace std;

struct node {
  int data;               // data: the value of this node
  share_ptr<node> next;   // next: pointer to the next node in the list, or NULL if this is the last node.
};

// Linked List Invariant: following the 'next' links in a linked list
// node must eventually lead to a NULL reference signifying the end of
// the list. (E.g. no circular references are allowed.)
class LinkedList {
public:
    // constructor, initialize class variables and pointers here if need.
    LinkedList();

    //deconstructor,
    ~LinkedList();

    // init_node creates a new node structure from heap memory. It points
    // to NULL and holds the provided integer. The function returns a
    // pointer to that new node.
    shared_ptr<node> init_node(int data);

    // report creates a space-separated string representing the contents
    // of the list, in the same order they are found beginning from the
    // top of the list. return that string object.  For example, this
    // might return "" (the empty string) if the list is empty, or it
    // might return "1 7 3" or "1 7 3 " (note the space at the end, you
    // can have that there and it is OK).
    std::string report();


    

    // you can add more public member variables and member functions here if you need

private:
    shared_ptr<node> top_ptr;

    // you can add add more private member variables and member functions here if you need
};

#endif  // LINKEDLIST_H__



//   _ _       _            _   _ _     _       
//  | (_)     | |          | | | (_)   | |      
//  | |_ _ __ | | _____  __| | | |_ ___| |_ ___ 
//  | | | '_ \| |/ / _ \/ _` | | | / __| __/ __|
//  | | | | | |   <  __/ (_| | | | \__ \ |_\__ \
//  |_|_|_| |_|_|\_\___|\__,_| |_|_|___/\__|___/
//                                              
//

#include <iostream>
#include <string>



// node is the basic node structure for a linked list.
struct node {
  int data;    // data: the value of this node
  node* next;  // next: pointer to the next node in the list, or NULL
	       // if this is the last node.
};

// init_node creates a new node structure from heap memory. It points
// to NULL and holds the provided integer. The function returns a
// pointer to that new node.
node* init_node(int data);

