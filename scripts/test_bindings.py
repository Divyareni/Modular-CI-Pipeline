import sys
import os

# Point Python to the build folder where the .so or .pyd file lives
sys.path.append(os.path.abspath("build"))

try:
    import hw_lib
    
    # Use keyword arguments (Pythonic!)
    driver = hw_lib.HardwareController(id=101)
    print(driver.get_status())
    
    driver.write_register(address=0x4000, value=255)
    print("[SUCCESS] Python bindings are working correctly.")

except ImportError as e:
    print(f"[ERROR] Could not find the hw_lib module: {e}")
    sys.exit(1)
