//
// Created by eduardo on 9/19/17.
//

#include "../xlib.h"

namespace xlib
{
    bool IO::exists(const string& filename)
    {
        return exists(filename.c_str());
    };

    bool IO::exists(const char *filename)
    {
        return access(filename, F_OK) != -1;
    };

    void IO::copy(const string& out_filename, const string& in_filename, bool overwrite)
        throw(FileNotFoundException, FileAlreadyExistsException)
    {
        if (!exists(in_filename))
            throw FileNotFoundException(in_filename);

        if (!overwrite && exists(out_filename))
            throw FileAlreadyExistsException(out_filename);

        ifstream in(in_filename);
        ofstream out(out_filename);

        out << in.rdbuf();
    };
}

