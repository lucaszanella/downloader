#pragma once

#include "lib/Data.hh"

#include <string>


class Writer {
public:
    Writer(std::string filename);

    void write(const Data& data);

private:
    std::string filename_;
};
