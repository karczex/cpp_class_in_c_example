#include <cstdlib>

#include "logger.h"
#include "clogger.h"

#ifdef __cplusplus
extern "C" {
#endif

struct logger *new_logger(size_t loglevel) {
	return new logger(loglevel);
}

void logger_print(struct logger *logger_instance, const char *name) {
	logger_instance->print(name);
}

#ifdef __cplusplus
}
#endif


