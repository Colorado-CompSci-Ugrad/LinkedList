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

// Linked List Invariant: following the 'next' links in a linked list
// node must eventually lead to a NULL reference signifying the end of
// the list. (E.g. no circular references are allowed.)

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

// report creates a space-separated string representing the contents
// of the list, in the same order they are found beginning from the
// top of the list. return that string object.  For example, this
// might return "" (the empty string) if the list is empty, or it
// might return "1 7 3" or "1 7 3 " (note the space at the end, you
// can have that there and it is OK).
std::string report(node* head);

// append_data adds a node onto the end of the list pointed to by
// top. the resulting list is one element longer, and the newly
// appended node has the given data value. consider using the 'append'
// function to help.
void append_data(node** top, int data);

// append is the same as append_data, except we're adding a node, rather
// than a value. 
void append(node** top, node* new_node);

// insert_data inserts a new node that contains the given data value,
// such that the new node occupies the offset indicated. Any nodes
// that were already in the list at that offset and beyond are shifted
// down by one. For example if the list contains 23, 74, 93, and we
// insert 42 at index 1, the resulting list should be 23, 42, 74, 93.
//
// If an offset is beyond the end of the list, this function should
// have no effect.
//
// Inserting at the end of the list should have the same effect as
// appending.
void insert_data(node** top, int offset, int data);

// insert is the same as insert_data, except we're inserting a node,
// rather than a value.
void insert(node** top, int offset, node* new_node);

// remove removes the node indicated by the given offset and frees its
// memory. For example if our list contains 23, 74, 93, and we remove
// offset 1, the resulting list should then contain 23, 93.
//
// If an invalid offset is given (e.g. negative or beyond the end of
// the list), this function has no effect.
void remove(node** top, int offset);

// size returns the number of nodes in the linked list reachable by
// head before (but not including) the terminating NULL link. E.g., an
// empty list has size 0, a list with one item has size 1, etc.
int size(node* head);

// contains returns true if the linked list pointed to by head
// contains a node with the specified value, false otherwise.
bool contains(node* head, int data);

