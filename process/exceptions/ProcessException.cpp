//
// Created by eduardo on 9/21/17.
//

#include "ProcessException.h"

ProcessException::ProcessException(const string &cause):
        exception(), cause(cause)
{

}

ProcessException::~ProcessException()
{

}

const char* ProcessException::what() const throw()
{
    return cause.c_str();
}
