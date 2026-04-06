#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
    // Convert arguments to a vector for easy searching
    std::vector<std::string> args(argv, argv + argc);

    // Check if the --test flag was passed by CMake/Python
    if (args.size() > 1 && args[1] == "--test") {
        std::cout << "[TEST] Starting Automated Validation..." << std::endl;
        
        // Simple Logic Test: Is 2+2 still 4? 
        // In a real scenario, this would be a register check or API call.
        int result = 2 + 2;
        if (result == 4) {
            std::cout << "[PASS] Basic Arithmetic Test Successful." << std::endl;
            return 0; // Success
        } else {
            std::cout << "[FAIL] Logic Error Detected!" << std::endl;
            return 1; // Failure
        }
    }

    std::cout << "Standard Application Mode: Hello from the Pipeline!" << std::endl;
    return 0;
}
