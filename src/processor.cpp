#include "processor.h"
#include <unistd.h>

#include "linux_parser.h"

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() { 
    long cActive, cTotal;
    xsJiffies = LinuxParser::Jiffies();
    asJiffies = LinuxParser::ActiveJiffies();
    usleep(10000);
    xeJiffies = LinuxParser::Jiffies();
    aeJiffies = LinuxParser::ActiveJiffies();

    cTotal = xeJiffies - xsJiffies;
    cActive = aeJiffies - asJiffies;

    return ((float)cActive / (float)cTotal);
}
