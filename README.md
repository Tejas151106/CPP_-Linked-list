# CPP_-Linked-list

# Experiment 17: 

**Name:** Gandluri Sai Tejas
**Class:** ENTC A2
**PRN:** 24070123045
**Title:** Linked List in C++

---

## Aim
To implement and understand the concept of **singly linked lists** in C++ through node creation, traversal, and insertion operations.

---

## Objectives
- To understand how dynamic memory allocation is used in linked lists.  
- To create and connect nodes using pointers.  
- To traverse a linked list and display elements sequentially.  
- To implement insertion operation at the **head** of a linked list.  
- To compare **arrays** and **linked lists** as linear data structures.  

---

## Theory
A **linked list** is a linear data structure where elements (called **nodes**) are stored at non-contiguous memory locations. Each node contains:  

1. **Data field** → stores the actual value.  
2. **Pointer field (next)** → stores the address of the next node.  

In a **singly linked list**, each node points only to its immediate next node, and the last node points to `NULL`.  

### Characteristics:
- Nodes are created dynamically using **pointers**.  
- Traversal is done using a loop until the `NULL` pointer is reached.  
- Insertion and deletion are more flexible compared to arrays.  

### Advantages of Linked List:
- Dynamic memory allocation (no fixed size like arrays).  
- Efficient insertions and deletions without shifting elements.  
- Suitable for implementing stacks, queues, and other data structures.

### Disadvantages of Linked List:
- Requires extra memory for pointer storage.  
- Sequential access (cannot access elements directly like arrays).  
- Reverse traversal is difficult in singly linked lists.  

---

## Comparison: Array vs Linked List

| Feature              | Array                             | Linked List                        |
|----------------------|-----------------------------------|-------------------------------------|
| Memory Allocation    | Static (fixed size)              | Dynamic (grows/shrinks at runtime) |
| Insertion/Deletion   | Costly (shifting required)       | Easy (adjusting pointers)          |
| Access Time          | O(1) (direct index access)       | O(n) (sequential traversal)        |
| Memory Utilization   | May waste memory (unused space)  | Memory efficient (exact usage)     |
| Structure            | Contiguous memory blocks         | Non-contiguous nodes               |

---
### Real-Life Applications:
- Dynamic memory management.  
- Implementing stacks, queues, and hash tables.  
- Used in file systems, social media connections, and operating system scheduling.  


## Algorithms

### 1. Node Creation

### 1.  Program Summary
- Implemented a simple program to **create a single node** of a linked list.  
- Used a constructor to initialize the node with data and set `next = NULL`.  
- Displayed the value and pointer of the created node.  
- Demonstrated the **basic building block** of a linked list.

### Algorithm
1. Start program.  
2. Define `Node` class with `data` and `next` pointer.  
3. Create a new node dynamically using constructor.  
4. Display `data` and `next`.  
5. End.  

### 2. Linked List Traversal
### Program Summary
- Created **three nodes** dynamically (`n1`, `n2`, `n3`).  
- Connected nodes using pointers (`n1->next = n2`, `n2->next = n3`).  
- Implemented traversal using a **temporary pointer** and `while` loop.  
- Displayed the values of all nodes sequentially.  
- Demonstrated **how multiple nodes are linked and accessed** in a singly linked list.

### Algorithm
1. Start program.  
2. Create three nodes dynamically (`n1`, `n2`, `n3`).  
3. Link `n1->next = n2` and `n2->next = n3`.  
4. Initialize a temporary pointer `temp = n1`.  
5. Traverse while `temp != NULL` and print data.  
6. Move to next node `temp = temp->next`.  
7. End.  

### 3. Insertion at Head
### Program Summary
- Implemented **insertion operation at the head** of a singly linked list.  
- Defined a function `insert_head()` to add a new node at the beginning.  
- Displayed the updated linked list after each insertion using `disp()`.  
- Demonstrated how **new nodes can be added dynamically without shifting existing elements**.  
- Showed the advantage of linked lists over arrays in terms of **efficient insertions**.
 

### Algorithm
1. Start program.  
2. Define function `insert_head(head, data)`.  
3. Create a new node with given data.  
4. Make `new_node->next = head`.  
5. Update `head = new_node`.  
6. Repeat insertion multiple times.  
7. Traverse and display linked list.  
8. End.  

---

# Concepts Used

- **Classes and Objects** in C++.  
- **Pointers** for dynamic memory allocation.  
- **Linked List** as a dynamic data structure.  
- **Functions** for modularity (`insert_head`, `disp`).  
- **Control structures** (`while` loop for traversal).  

---

 **Singly linked lists provide flexibility in memory usage and efficient insertion/deletion, making them an essential data structure in computer science.**


# Conclusion

This experiment helped in understanding the concept and implementation of **singly linked lists** in C++.  

We observed that:  
- Nodes are created dynamically using constructors and pointers.  
- Traversal allows sequential access to all elements.  
- Insertion at head is efficient compared to arrays.  
