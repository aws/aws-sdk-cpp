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

    # Check if smoke tests directory exists
    if not os.path.exists(smoke_tests_dir):
        print(f"Error: Smoke tests directory not found: {smoke_tests_dir}")
        return 1
    
    # Get all service directories that have executable tests
    services = []
    for d in os.listdir(smoke_tests_dir):
        service_dir = os.path.join(smoke_tests_dir, d)
        if os.path.isdir(service_dir):
            executable = os.path.join(service_dir, f"{d}-smoke-tests")
            if os.path.exists(executable):
                services.append(d)
    services.sort()
    
    print(f"1..{len(services)}")
    
    passed = 0
    failed = 0
    
    for service in services:
        executable = os.path.join(smoke_tests_dir, service, f"{service}-smoke-tests")
        
        try:
            result = subprocess.run([executable], stdout=subprocess.PIPE, stderr=subprocess.PIPE, timeout=60, text=True)
            if result.returncode == 0:
                print(f"ok {service} SmokeTest - no error expected from service")
                passed += 1
            else:
                print(f"not ok {service} SmokeTest - no error expected from service")
                if result.stderr.strip():
                    for line in result.stderr.strip().split('\n'):
                        print(f"# {line}")
                failed += 1
        except subprocess.TimeoutExpired:
            print(f"not ok {service} SmokeTest - no error expected from service")
            print("# Test timeout after 60 seconds")
            failed += 1
        except Exception as e:
            print(f"not ok {service} SmokeTest - no error expected from service")
            print(f"# Error: {e}")
            failed += 1
    return 0 if failed == 0 else 1

if __name__ == "__main__":
    main()