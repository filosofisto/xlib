//
// Created by eduardo on 9/21/17.
//

#include "../xlib.h"

namespace xlib {

    Memory::Memory(): readed(false)
    {

    }

    Memory::~Memory()
    {

    }

    long long Memory::virtual_memory() throw(MemoryException)
    {
        if (!readed)
            read_stat();

        long long total_virtual_mem = mem_info.totalram;
        total_virtual_mem += mem_info.totalswap;
        total_virtual_mem *= mem_info.mem_unit;

        return total_virtual_mem;
    }

    long long Memory::virtual_memory_used() throw(MemoryException)
    {
        if (!readed)
            read_stat();

        long long total_virtual_mem_used = mem_info.totalram - mem_info.freeram;
        total_virtual_mem_used += mem_info.totalswap - mem_info.freeswap;
        total_virtual_mem_used *= mem_info.mem_unit;

        return total_virtual_mem_used;
    }

    double Memory::usage() throw(MemoryException) {
        if (!readed)
            read_stat();

        return static_cast<double>(virtual_memory_used()) / static_cast<double>(virtual_memory())
               * 100.0;
    }

    void Memory::read_stat() throw(MemoryException)
    {
        if (sysinfo(&mem_info) < 0)
            throw MemoryException();

        readed = true;
    }
}