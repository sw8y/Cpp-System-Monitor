#include <unistd.h>
#include <cctype>
#include <sstream>
#include <string>
#include <vector>

#include "process.h"
#include "linux_parser.h"

using std::string;
using std::to_string;
using std::vector;

Process::Process(int pid){ 
  	pid_= pid;
  	user_ = LinuxParser::User(pid_);
  	command_ = LinuxParser::Command(pid_);
};

// TODO: Return this process's ID
int Process::Pid() { return pid_; }

// TODO: Return this process's CPU utilization
float Process::CpuUtilization() {
    long eJiffies, euptime;
	// long suptime,sJiffies, delta;

	// sJiffies = LinuxParser::ActiveJiffies(pid_);
  	// suptime = LinuxParser::UpTime(pid_);
	usleep(1000);
	eJiffies = LinuxParser::ActiveJiffies(pid_);
	euptime = LinuxParser::UpTime(pid_);
	

	// delta = euptime - suptime;

	return (float)(eJiffies) / sysconf(_SC_CLK_TCK) / (float)(euptime);
}

// TODO: Return the command that generated this process
string Process::Command() { return command_; }

// TODO: Return this process's memory utilization
string Process::Ram() { return LinuxParser::Ram(pid_); }

//int Process::getRam() const { return xRam; }
// TODO: Return the user (name) that generated this process
string Process::User() { return user_; }

// TODO: Return the age of this process (in seconds)
long int Process::UpTime() { return LinuxParser::UpTime(pid_); }

// TODO: Overload the "less than" comparison operator for Process objects
// REMOVE: [[maybe_unused]] once you define the function
bool Process::operator<(Process const& a) const { 
    long ram_a = stol(LinuxParser::Ram(pid_));
	long ram_b = stol(LinuxParser::Ram(a.pid_));

	if (ram_a > ram_b) {
		return true;
	}
	return false;
}