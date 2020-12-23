#include <string>
#include <iomanip>
#include "format.h"



// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
std::string Format::Format(int time){
  std::string theTime = std::to_string(time);
  return std::string(2 - theTime.length(), '0') + theTime;
}
std::string Format::ElapsedTime(long seconds) { 
 
  int hours = 0, minutes = 0, ss = 0;
  hours = seconds / 3600;
  seconds = seconds % 3600;
  minutes = seconds / 60;
  seconds = seconds % 60;
  ss = seconds;

  return Format(hours) + ":" + Format(minutes) + ":" + Format(ss); 
}