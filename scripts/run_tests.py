import subprocess
import sys

def run_command(command):
    print(f"Executing: {command}")
    result = subprocess.run(command, shell=True)
    if result.returncode != 0:
        print(f"Error executing {command}")
        sys.exit(1)

def main():
    print("--- Starting Automation Script ---")
    # Step 1: Configure
    run_command("cmake -B build -S .")
    # Step 2: Build
    run_command("cmake --build build")
    # Step 3: Test
    run_command("ctest --test-dir build")
    print("--- Pipeline Completed Successfully ---")

if __name__ == "__main__":
    main()
