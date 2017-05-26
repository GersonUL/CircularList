/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CircularList.h
 * Author: gerson
 *
 * Created on 25 de mayo de 2017, 08:09 PM
 */

#ifndef CIRCULARLIST_H
#define CIRCULARLIST_H

class CircularList {
public:
    CircularList();
    CircularList(const CircularList& orig);
    virtual ~CircularList();

void insertIntoHead(char value);
void insertIntoTail(char value);
void insertIntoOrder(char value);
void deleteToList(char value);
void updateList(char value,char newValue);
void printList();
private:
    struct node{
    char data;
    struct node *nextPtr,*prevPtr;
};
typedef struct node NODE;
typedef NODE *NODEPTR;

NODEPTR headNode, tailNode;
};
#endif /* LIST_H */