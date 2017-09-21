//
// Created by eduardo on 9/21/17.
//

#include "../xlib.h"

namespace xlib
{
    pid_t Process::pid()
    {
        return getpid();
    }

    pid_t Process::parent_pid()
    {
        return getppid();
    }

    int Process::running() throw(ProcessException)
    {
        int ret = -1;
        FILE *fp = popen("ps aux | wc -l", "r");

        if (fp != nullptr) {
            char output[1024];

            fgets(output, sizeof(output)-1, fp);
            ret = atoi(output);
        }

        pclose(fp);

        if (ret == -1)
            throw ProcessException("Erro ao abrir o pipe");

        return ret;
    }
}