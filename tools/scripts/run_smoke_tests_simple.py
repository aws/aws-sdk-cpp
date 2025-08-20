#!/usr/bin/env python3
import os
import subprocess
import argparse

GREEN = '\033[32m'
BOLD = '\033[1m'
RESET = '\033[0m'

def should_run_service(service):
    service_ids = os.environ.get('AWS_SMOKE_TEST_SERVICE_IDS', '')
    if not service_ids:
        return True
    allowed_services = service_ids.split(',')
    return service in allowed_services

def main():
    parser = argparse.ArgumentParser(description='Run smoke tests')
    parser.add_argument('--testDir', default='./build', help='Path to build directory')
    args = parser.parse_args()

    smoke_tests_dir = os.path.join(args.testDir, "generated/smoke-tests")

    if not os.path.exists(smoke_tests_dir):
        print(f"Error: Smoke tests directory not found: {smoke_tests_dir}")
        return 1

    services = []
    for d in os.listdir(smoke_tests_dir):
        service_dir = os.path.join(smoke_tests_dir, d)
        if os.path.isdir(service_dir):
            executable = os.path.join(service_dir, f"{d}-smoke-tests")
            if os.path.exists(executable):
                services.append(d)
    services.sort()

    total_tests = 0
    test_cases = {}  # Dictionary to group tests by service

    # First, collect all tests
    for service in services:
        executable = os.path.join(smoke_tests_dir, service, f"{service}-smoke-tests")
        list_command = [executable, '--gtest_list_tests']
        result = subprocess.run(list_command, capture_output=True, text=True)

        test_suite = None
        if service not in test_cases:
            test_cases[service] = []

        for line in result.stdout.splitlines():
            if not line.startswith('  '):
                test_suite = line.strip()
            else:
                test_name = line.strip()
                if test_suite and test_name:
                    total_tests += 1
                    test_cases[service].append((test_suite, test_name))

    print(f"1..{total_tests}")

    for service in services:
        if not test_cases[service]:
            continue

        print(f"# {service} tests")

        if not should_run_service(service):
            for _, test_name in test_cases[service]:
                print(f"ok {service} {test_name} # skip")
            continue

        executable = os.path.join(smoke_tests_dir, service, f"{service}-smoke-tests")

        for test_suite, test_name in test_cases[service]:
            full_test_name = f"{test_suite}{test_name}"
            try:
                test_command = [executable, f'--gtest_filter={full_test_name}']
                test_result = subprocess.run(test_command, capture_output=True, text=True)

                if test_result.returncode == 0:
                    print(f"ok {service} {test_name} - {GREEN}no{RESET} error expected {BOLD}from service{RESET}")
                else:
                    print(f"{BOLD}not{RESET} ok {service} {test_name} - error expected {BOLD}from service{RESET}")
                    print(f"# Error details for {service} {test_name}:")
                    if test_result.stderr.strip():
                        print(f"# stderr: {test_result.stderr.strip()}")
                    if test_result.stdout.strip():
                        print(f"# stdout: {test_result.stdout.strip()}")
                    if not test_result.stderr.strip() and not test_result.stdout.strip():
                        print(f"# No output captured (return code: {test_result.returncode})")
            except Exception as e:
                print(f"{BOLD}not{RESET} ok {service} {test_name} - error expected {BOLD}from service{RESET}")
                print(f"# Exception occurred: {str(e)}")

    return 0

if __name__ == "__main__":
    main()