/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Files.h
 * Author: pablo
 *
 * Created on 28 de mayo de 2017, 04:23 PM
 */

#ifndef FILES_H
#define FILES_H

class Files {
public:
    Files();
    Files(const Files& orig);
    virtual ~Files();
    void readFile();
    void usingSplit();
private:

};

#endif /* FILES_H */
