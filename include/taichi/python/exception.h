#pragma once

#include <taichi/common/meta.h>
#include <exception>

TC_NAMESPACE_BEGIN

class ExceptionForPython : std::exception {
private:
    std::string msg;

public:
    ExceptionForPython(const std::string &msg) : msg(msg) {}
    char const* what() const throw() { return msg.c_str(); }
};

void raise_assertion_failure_in_python(const std::string &msg);

TC_NAMESPACE_END

