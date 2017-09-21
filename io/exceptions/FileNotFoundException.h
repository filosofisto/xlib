//
// Created by eduardo on 9/21/17.
//

#ifndef XLIB_FILENOTFOUNDEXCEPTION_H
#define XLIB_FILENOTFOUNDEXCEPTION_H

#include <iostream>
#include <exception>

using namespace std;

class FileNotFoundException: public exception {
public:
    explicit FileNotFoundException(const string& filename);
    ~FileNotFoundException() override;

    const char *what() const throw() override;

private:
    const string& filename;
};


#endif //XLIB_FILENOTFOUNDEXCEPTION_H
