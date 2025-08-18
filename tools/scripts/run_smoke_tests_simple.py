#!/usr/bin/env python3
import os
import subprocess
import argparse

def main():
    parser = argparse.ArgumentParser(description='Run smoke tests')
    parser.add_argument('--testDir', default='./build', help='Path to build directory')
    args = parser.parse_args()
    
    # Path to built smoke tests
    smoke_tests_dir = os.path.join(args.testDir, "generated/smoke-tests")

    # Get all service directories
    services = [d for d in os.listdir(smoke_tests_dir) if os.path.isdir(os.path.join(smoke_tests_dir, d))]
    services.sort()
    
    print(f"Found {len(services)} smoke test services")
    print("=" * 50)
    
    passed = 0
    failed = 0
    
    for service in services:
        executable = os.path.join(smoke_tests_dir, service, f"{service}-smoke-tests")
        
        if os.path.exists(executable):
            print(f"Running {service}... ", end="", flush=True)
            try:
                result = subprocess.run([executable], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, timeout=60)
                if result.returncode == 0:
                    print("PASSED")
                    passed += 1
                else:
                    print("FAILED")
                    failed += 1
            except:
                print("ERROR")
                failed += 1
        else:
            print(f"Skipping {service} (executable not found)")

    print("=" * 50)
    print(f"Results: {passed} passed, {failed} failed")

if __name__ == "__main__":
    main()