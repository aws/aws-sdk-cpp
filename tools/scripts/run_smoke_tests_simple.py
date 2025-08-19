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

    print(f"--testDir:{args}")
    print(f"Test directory: {args.testDir}")
    print(f"Current working directory: {os.getcwd()}")
    print(f"Smoke tests directory: {smoke_tests_dir}")

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
    
    print(f"Found {len(services)} smoke test services")
    print("=" * 50)
    
    passed = 0
    failed = 0
    
    for service in services:
        executable = os.path.join(smoke_tests_dir, service, f"{service}-smoke-tests")
        
        print(f"Running {service}... ", end="", flush=True)
        try:
            result = subprocess.run([executable], stdout=subprocess.PIPE, stderr=subprocess.PIPE, timeout=60, text=True)
            if result.returncode == 0:
                print("PASSED")
                passed += 1
            else:
                print(f"FAILED (exit code {result.returncode})")
                if result.stderr.strip():
                    print(f"  Error: {result.stderr.strip()}")
                failed += 1
        except subprocess.TimeoutExpired:
            print("TIMEOUT")
            failed += 1
        except Exception as e:
            print(f"ERROR: {e}")
            failed += 1

    print("=" * 50)
    print(f"Results: {passed} passed, {failed} failed")
    return 0 if failed == 0 else 1

if __name__ == "__main__":
    main()