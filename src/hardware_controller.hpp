#pragma once
#include <string>
#include <iostream>

class HardwareController {
    public:
          HardwareController(int device_id) : id(device_id) {}

          void write_register(int address, int value) {
              std::cout << "Device " << id << ": Writing " << value 
                  << " to address " << std::hex << address << std::endl;
          }

          std::string get_status() {
              return "Device " + std::to_string(id) + " is Operational";
          }

    private:
         int id;
};
