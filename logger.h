#ifndef logger_H
#define logger_H

#include <iostream>
#include <string>

class logger {
private:
	std::string level = "INFO: ";
public:
	logger(size_t loglevel);
	void print(std::string message);
};

#endif /* logger_H */

