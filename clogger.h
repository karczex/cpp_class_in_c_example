#ifndef CLOGGER_H
#define CLOGGER_H
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

struct logger;

struct logger* new_logger(size_t loglevel);
void logger_print(struct logger *instance, const char *name);

#ifdef __cplusplus
}
#endif
#endif


