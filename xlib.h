#ifndef XLIB_LIBRARY_H
#define XLIB_LIBRARY_H

#include <iostream>
#include <ostream>

using namespace std;

namespace xlib
{
    class IO
    {
    public:
        static string version();

        /*template<typename charT, typename traits>
        void copy(basic_ostream<charT, traits> &out, basic_istream<charT, traits> &in);*/
    };
}

#endif