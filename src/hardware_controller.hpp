#pragma once
#include <string>

class HardwareController {
public:
    // Only declarations here (no { } blocks with logic)
    HardwareController(int device_id);

    void write_register(int address, int value);

    std::string get_status();

private:
    int id;
};
