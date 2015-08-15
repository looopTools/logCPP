#include <iostream>

#include "logcpp.hpp"
namespace logcpp
{
    void log_error(std::string msg)
    {
        std::cout << "error >> " << msg << std::endl;
    }

    void log_info(std::string msg)
    {
        std::cout << "info >> " << msg << std::endl;
    }

    void log_warning(std::string msg)
    {
        std::cout << "warning >> " << msg << std::endl;
    }

    void log_debug(std::string msg)
    {
        std::cout << "debug >> " << msg << std::endl;
    }

    void log_test(std::string msg)
    {
        std::cout << "test >> " << msg << std::endl;
    }
}
