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
#include <malloc.h>
#include <stdlib.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    CircularList myList;
    myList.insertIntoHead('a');
    myList.insertIntoHead('b');
    myList.insertIntoHead('c');
    myList.insertIntoTail('d');
    printf("lista original\n\n");
    myList.printList();
    
    myList.updateList('d','z');
    printf("lista actualizada\n\n");
    myList.printList();
    myList.deleteToList('c');
    printf("lista despues de eliminar\n\n");
    myList.printList();
    return 0;
}