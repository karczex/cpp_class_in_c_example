#include "logger.h"

void logger::print(std::string message){
		std::cout << level << message << std::endl;
}

logger::logger(size_t loglevel){
	if(loglevel != 0){
	       level = "DEBUG: ";
	}
}


