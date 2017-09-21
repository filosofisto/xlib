#ifndef XLIB_LIBRARY_H
#define XLIB_LIBRARY_H

#include <unistd.h>
#include <iostream>
#include <ostream>
#include <fstream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/sysinfo.h>

#include "io/exceptions/FileNotFoundException.h"
#include "io/exceptions/FileAlreadyExistsException.h"

#include "process/exceptions/ProcessException.h"

#include "memory/exceptions/MemoryException.h"

using namespace std;

namespace xlib
{
    class IO
    {
    public:
        static bool exists(const string& filename);

        static bool exists(const char *filename);

        static void copy(const string& out_filename, const string& in_filename, bool overwrite = true)
            throw(FileNotFoundException, FileAlreadyExistsException);
    };

    class Process
    {
    public:
        static pid_t pid();
        static pid_t parent_pid();
        static int running() throw(ProcessException);
    };

    class Memory {
    public:
        Memory();
        ~Memory();

        long long virtual_memory() throw(MemoryException);
        long long virtual_memory_used() throw(MemoryException);
        double usage() throw(MemoryException);

    private:
        void read_stat() throw(MemoryException);

        struct sysinfo mem_info;
        bool readed;
    };
}

#endif