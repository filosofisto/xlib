//
// Created by eduardo on 9/21/17.
//

#ifndef XLIB_PROCESSEXCEPTION_H
#define XLIB_PROCESSEXCEPTION_H

#include <iostream>
#include <exception>

using namespace std;

class ProcessException : public exception {
public:
    explicit ProcessException(const string& cause);
    ~ProcessException() override;

    const char *what() const throw() override;

private:
    const string& cause;
};


#endif //XLIB_PROCESSEXCEPTION_H
