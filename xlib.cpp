#include "xlib.h"

namespace xlib {

    string IO::version()
    {
        return "1.0.0";
    }

    /*template<typename charT, typename traits>
    void copy(basic_ostream<charT, traits> &out, basic_istream<charT, traits> &in) {
        out << in.rdbuf();
    };*/
}
/*
template<typename charT, typename traits>
void copy(basic_ostream<charT, traits>& out, basic_istream<charT, traits>& in, unsigned int bufsize)
{
    auto_ptr<charT> buffer(new charT[bufsize]);
    while (in) {
        in.read(buffer.get(), bufsize);
        out.write(buffer.get(), in.gcount());
    }
};*/
