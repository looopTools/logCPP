#include <string>

namespace log
{
    // Used for logging of error's
    void log_error(std::string msg);

    // Used for logging of general information
    void log_info(std::string msg);

    // Used for logging of warning's
    void log_warning(std::string msg);

    // Used for logging of debug messages
    void log_debug(std::string msg);

    // Used for logging of debug messages
    void log_test(std::string msg);
}
