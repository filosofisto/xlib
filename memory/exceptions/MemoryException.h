//
// Created by eduardo on 9/21/17.
//

#ifndef XLIB_MEMORYEXCEPTION_H
#define XLIB_MEMORYEXCEPTION_H

#include <iostream>
#include <exception>

using namespace std;

class MemoryException: public exception {
public:
    MemoryException();
    ~MemoryException() override;

    const char *what() const throw() override;
};


#endif //XLIB_MEMORYEXCEPTION_H
