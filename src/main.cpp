#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
    std::vector<std::string> args(argv, argv + argc);

    if (args.size() > 1 && args[1] == "--test") {
        std::cout << "[TEST] Starting Automated Validation..." << std::endl;
        
        bool all_passed = true; // Track overall status

        // --- Test 1 ---
        int result1 = 2 + 2;
        if (result1 == 4) {
            std::cout << "[PASS] Test 1: 2 + 2 = 4" << std::endl;
        } else {
            std::cout << "[FAIL] Test 1: Logic Error!" << std::endl;
            all_passed = false;
        }

        // --- Test 2 (The one designed to fail) ---
        int result2 = 3 * 2;
        if (result2 == 6) { // This is false (6 != 5)
            std::cout << "[PASS] Test 2: 3 * 2 = 5" << std::endl;
        } else {
            std::cout << "[FAIL] Test 2: Expected 5 but got " << result2 << std::endl;
            all_passed = false;
        }

        // Final Decision
        if (all_passed) {
            return 0; // Pipeline stays Green
        } else {
            return 1; // Pipeline turns Red
        }
    }

    std::cout << "Standard Application Mode: Hello!" << std::endl;
    return 0;
}
