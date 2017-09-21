//
// Created by eduardo on 9/21/17.
//

#include "MemoryException.h"

MemoryException::MemoryException() {

}

MemoryException::~MemoryException() {

}

const char *MemoryException::what() const throw()
{
    return exception::what();
}
