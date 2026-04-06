#include "hardware_controller.hpp"
#include <iostream>
#include <iomanip> // For std::hex and std::setw

// Implementation of the Constructor
HardwareController::HardwareController(int device_id) 
    : id(device_id) {
    std::cout << "[INIT] HardwareController initialized for Device ID: " << id << std::endl;
}

// Implementation of the write_register method
void HardwareController::write_register(int address, int value) {
    // We simulate a hardware write here. 
    // In a real ASIC environment, this might involve memory-mapped I/O (MMIO).
    std::cout << "[WRITE] Device " << id 
              << " | Register: 0x" << std::hex << std::uppercase << std::setfill('0') << std::setw(4) << address 
              << " | Value: 0x" << value << std::dec << std::endl;
}

// Implementation of the get_status method
std::string HardwareController::get_status() {
    // This could eventually check a real hardware status register
    return "Device " + std::to_string(id) + " Status: ACTIVE_READY";
}
