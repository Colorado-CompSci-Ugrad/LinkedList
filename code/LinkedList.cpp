/*

  linked_list.cpp

 */

// AUTHOR: TODO
// WHAT: CSCI 2270 Assignment 1
// COLLABORATORS: TODO

#include "linked_list.h"

using namespace std;

// create a new node structure that points to NULL and holds the
// provided integer. return a pointer to that new node.
node* init_node(int data) {
  return NULL; // TODO
}

// create a space-separated string representing the contents of the
// list, in the same order they are found beginning from the head of
// the list. return that string object.  For example, this might
// return "" (the empty string) if the list is empty, or it might
// return "1 7 3" or "1 7 3 " (note the space at the end, you can have
// that there and it is OK).
string report(node* head) {
  return ""; // TODO
}

// insert an integer into the list pointed to by top. the resulting
// list is one element longer, and the newly appended node has the
// given data value. consider using the 'append' function to help.
void append_data(node** top, int data) {
  // TODO
}

// this is the same as append_data, except we're adding a node, rather
// than a value. 
void append(node** top, node* new_node) {
  // TODO
}

// similar to append_data. insert a new node that contains the given
// data value, such that the new node occupies the offset
// indicated. Any nodes that were already in the list at that offset
// and beyond are shifted down by one. For example if the list
// contains 23, 74, 93, and we insert 42 at index 1, the resulting
// list should be 23, 42, 74, 93.
void insert_data(node** top, int offset, int data) {
  // TODO
}

// this is the same as insert_data, except we're inserting a node,
// rather than a value.
void insert(node** top, int offset, node* new_node) {
  // TODO
}

// remove the node indicated by the given offset. For example if our
// list contains 23, 74, 93, and we remove offset 1, the resulting
// list should then contain 23, 93.
void remove(node** top, int offset) {
  // TODO
}

// report the number of nodes in the linked list pointed to by head.
int size(node* head) {
  return 0; // TODO
}

// return true if the linked list pointed to by head contains a node
// with the specified value.
bool contains(node* head, int data) {
  return false; // TODO
}
