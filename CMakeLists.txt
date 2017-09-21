cmake_minimum_required(VERSION 3.8)
project(xlib)

set(CMAKE_CXX_STANDARD 11)

#--------------------------------------------
# IO Files
#--------------------------------------------
set(IO_EXCEPTION_FILES io/exceptions/FileNotFoundException.cpp io/exceptions/FileNotFoundException.h io/exceptions/FileAlreadyExistsException.cpp io/exceptions/FileAlreadyExistsException.h)
set(IO_FILES io/io.cpp ${IO_EXCEPTION_FILES})
#--------------------------------------------

#--------------------------------------------
# Process
#--------------------------------------------
set(PROCESS_EXCEPTION_FILES process/exceptions/ProcessException.cpp process/exceptions/ProcessException.h)
set(PROCESS_FILES process/process.cpp ${PROCESS_EXCEPTION_FILES})
#--------------------------------------------

#--------------------------------------------
# Memory
#--------------------------------------------
set(MEMORY_EXCEPTION_FILES memory/exceptions/MemoryException.cpp memory/exceptions/MemoryException.h)
set(MEMORY_FILES memory/Memory.cpp ${MEMORY_EXCEPTION_FILES})
#--------------------------------------------

set(SOURCE_FILES xlib.h ${IO_FILES} ${PROCESS_FILES} ${MEMORY_FILES})
add_library(xlib STATIC ${SOURCE_FILES})
