#include "clogger.h"
#include <stddef.h>

int main() {
	struct logger *debug_logger = new_logger(1);
	struct logger *info_logger = new_logger(0);
	logger_print(debug_logger, "foo");
	logger_print(info_logger, "bar");
}
