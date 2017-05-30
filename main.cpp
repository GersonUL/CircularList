/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: gerson
 *
 * Created on 25 de mayo de 2017, 08:09 PM
 */
#include "CircularList.h"
#include "Files.h"
#include <malloc.h>
#include <stdlib.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    CircularList myList;
    Files myFile;
    
    //Métodos de la lista
    myList.insertIntoHead('a');
    myList.insertIntoHead('b');
    myList.insertIntoHead('c');
    myList.insertIntoTail('z');
    printf("lista original\n");
    myList.printList();
    myList.updateList('z','X');
    myList.deleteToList('b');
    printf("\n");
    myList.printList();
    printf("\n");
    //prueba para punteros
    printf("%c", myList.tailNode->prevPtr->data);
    
    
    //Métodos del archivo
    myFile.readFile();
    myFile.usingSplit();
    
    return 0;
}