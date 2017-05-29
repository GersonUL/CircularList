/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Files.cpp
 * Author: pablo
 * 
 * Created on 28 de mayo de 2017, 04:23 PM
 */

#include "Files.h"
#include <iostream> // Para entrada y salida, cout cin
#include <sstream> //para usar el stringstream
#include <string> //para usar el string
#include <fstream> // para el archivo
using namespace std;

Files::Files() {
}

Files::Files(const Files& orig) {
}
Files::~Files() {
}

void Files::readFile() {
    ifstream file("datos.csv"); // Abre el archivo en modo salida
    string line = "";
    while (getline(file, line)) { //getline va linea por linea
        stringstream read(line); // el stringstream convierte todo lo leido a string
        string word = "";
        while (getline(read, word, ';'))
            cout << word << '\n';
    }
}

