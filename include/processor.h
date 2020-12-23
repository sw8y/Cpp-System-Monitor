#ifndef PROCESSOR_H
#define PROCESSOR_H

class Processor {
 public:
  float Utilization();  // TODO: See src/processor.cpp
  
  // TODO: Declare any necessary private members
 private:
    long xsJiffies = 0;
    long asJiffies = 0;
    long xeJiffies = 0;
    long aeJiffies = 0;
};

#endif