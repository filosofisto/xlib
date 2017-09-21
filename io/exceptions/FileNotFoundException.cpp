//
// Created by eduardo on 9/21/17.
//

#include "FileNotFoundException.h"

FileNotFoundException::FileNotFoundException(const string &filename):
    exception(), filename(filename)
{

}

FileNotFoundException::~FileNotFoundException()
{

}

const char* FileNotFoundException::what() const throw()
{
    return filename.c_str();
}
