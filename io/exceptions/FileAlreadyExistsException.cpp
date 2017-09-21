//
// Created by eduardo on 9/21/17.
//

#include "FileAlreadyExistsException.h"

FileAlreadyExistsException::FileAlreadyExistsException(const string &filename):
        exception(), filename(filename)
{

}

FileAlreadyExistsException::~FileAlreadyExistsException()
{

}

const char* FileAlreadyExistsException::what() const throw()
{
    return filename.c_str();
}

