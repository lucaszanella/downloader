#pragma once

#include <memory>
#include <vector>

constexpr size_t BUFFER_SIZE = 1024;

class Buffer {
public:
    Buffer(size_t size = BUFFER_SIZE);

    char* data();
    const char* data() const;
    size_t size();
    size_t find(char c, size_t pos) const;

    void append(const std::string& data);

private:
    size_t max_size_;
    size_t size_;
    std::vector<char> data_;
};
