#include <cstdlib>

#include "logger.h"
#include "clogger.h"

#ifdef __cplusplus
extern "C" {
#endif

static logger *logger_instance = NULL;

void logger_new() {
	if(logger_instance == NULL) {
		logger_instance = new logger();
	}
}

void logger_print(const char *name) {
	logger_instance->print(name);
}

#ifdef __cplusplus
}
#endif


