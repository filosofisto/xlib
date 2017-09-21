//
// Created by eduardo on 9/21/17.
//

#ifndef XLIB_FILEALREADYEXISTSEXCEPTION_H
#define XLIB_FILEALREADYEXISTSEXCEPTION_H

#include <iostream>
#include <exception>

using namespace std;

class FileAlreadyExistsException: public exception {
public:
    explicit FileAlreadyExistsException(const string& filename);
    ~FileAlreadyExistsException() override;

    const char *what() const throw() override;

private:
    const string& filename;
};

#endif //XLIB_FILEALREADYEXISTSEXCEPTION_H
