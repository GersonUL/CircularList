/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CircularList.cpp
 * Author: gerson
 * 
 * Created on 25 de mayo de 2017, 08:09 PM
 */
#include "CircularList.h"
#include <malloc.h>
#include <stdlib.h>
CircularList::CircularList() {
    headNode=NULL;
}

CircularList::CircularList(const CircularList& orig) {
}

CircularList::~CircularList() {
}
void CircularList::insertIntoHead(char value){
    NODEPTR newPtr,tempPtr;
    newPtr=(NODEPTR)malloc(sizeof(NODE));
    newPtr->data=value;
    tempPtr=headNode;
    newPtr->nextPtr=NULL;
   if(tempPtr==NULL){
        headNode=newPtr;
        tailNode=newPtr;
        headNode->nextPtr=tailNode;
        tailNode->nextPtr=headNode;       
    }
    else{ 
       tempPtr=headNode;
       headNode=newPtr;
       headNode->nextPtr=tempPtr;
       tempPtr->prevPtr=headNode;       
       tailNode->nextPtr=headNode;
       headNode->prevPtr=tailNode;
    } 
}    

void CircularList::insertIntoTail(char value){
    NODEPTR newPtr,tempPtr;
    newPtr=(NODEPTR)malloc(sizeof(NODE));
    newPtr->data=value;
    newPtr->nextPtr=NULL;
   if(headNode==NULL){
        headNode=newPtr;
        tailNode=headNode;        
    }
    else{ 
       tailNode->nextPtr=newPtr;
       newPtr->prevPtr=tailNode;
       newPtr->nextPtr=headNode;
       headNode->prevPtr=newPtr;
       tailNode=newPtr;
    }
} 
void CircularList::updateList(char value, char newValue){
    NODEPTR newPtr,tempPtr,previousPtr;
    newPtr =(NODEPTR)malloc(sizeof(NODE));
    newPtr->data=newValue;//-> simbolo para punteros  
    tempPtr=headNode;
    if(headNode->data==value){
        headNode=newPtr;
        headNode->nextPtr=tempPtr->nextPtr;//para que cuando se cambie la cabeza ésta no pierda el ->next
        tempPtr->nextPtr->prevPtr=headNode;//para que cuando se cambie la cabeza ésta no pierda el ->prev
    }
    while(tempPtr !=NULL && tempPtr->data!=value){
        previousPtr=tempPtr;
        tempPtr = tempPtr->nextPtr;
    }
    (tempPtr->prevPtr)->nextPtr=newPtr; 
    newPtr->nextPtr=tempPtr->nextPtr;
    if(tailNode->data==value){//si se actualiza la cola
        tailNode->prevPtr->nextPtr=newPtr;
        tailNode=newPtr;
        
    }
}//upDateList
void CircularList::insertIntoOrder(char value){
//    NODEPTR newPtr,tempPtr, prevPtr;
//    newPtr=(NODEPTR)malloc(sizeof(NODE));
//    newPtr->data=value;
//    tempPtr=headNode->nextPtr;
//    while(tempPtr!=headNode && tempPtr->data!=value){
//        if(newPtr->data> tempPtr->data){
//            prevPtr->nextPtr=newPtr;
//            newPtr->nextPtr=tempPtr;
//        }
//        prevPtr=tempPtr->nextPtr;
//        tempPtr=tempPtr->nextPtr;
//    }
//    
}//insertIntoOrder
void CircularList::deleteToList(char value){
    NODEPTR tempPtr;   
    tempPtr=headNode;    
    if(tempPtr==NULL){
        printf("The list is empty.\n\n");
    }
    if(headNode->data==value){
            headNode->prevPtr->nextPtr=headNode->nextPtr;
            headNode->nextPtr->prevPtr=headNode->prevPtr;            
            headNode=tempPtr->nextPtr;
            tempPtr=NULL;
        }//if(headNode->data==value)
            while(tempPtr!=NULL){
            if(tempPtr->data==value){
                tempPtr->prevPtr->nextPtr=tempPtr->nextPtr;
                tempPtr->nextPtr->prevPtr=tempPtr->prevPtr;
                tempPtr=NULL;
            }else{
                tempPtr = tempPtr->nextPtr;
//                if(tailNode->data==value){
//                    tailNode->nextPtr->prevPtr=headNode;
//                    tailNode->nextPtr->prevPtr=tailNode->prevPtr;
//                    tailNode=tailNode->prevPtr;
//                   
//                }
//                if(tempPtr == tailNode){
//                    printf("Node do not exist.\n\n");
//                    break;
//                }                
//                else{
////                }//else                
            }//else
        }//while(tempPtr!=NULL)
    
}//deleteToList

void CircularList::printList(){
    NODEPTR tempNode = headNode;
     printf("%c--> ", tempNode->data);
     tempNode=tempNode->nextPtr;
     while(tempNode!=headNode){
          printf("%c--> ", tempNode->data);
         tempNode=tempNode->nextPtr;
     }
}
