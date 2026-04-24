#!/usr/bin/env python3
import os
import subprocess
import argparse
import tempfile
import json
from collections import defaultdict

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
    all_results = defaultdict(list)
    skipped_services = []
    service_id = os.environ.get('AWS_SMOKE_TEST_SERVICE_IDS', '').strip().lower().replace(' ', '-') if os.environ.get('AWS_SMOKE_TEST_SERVICE_IDS', '').strip() else []
    if service_id:
        skipped_services = [s for s in services if s not in service_id]
        services = [s for s in services if s in service_id]

    for service in services:
        executable = os.path.join(smoke_tests_dir, service, f"{service}-smoke-tests")

        fd, json_output_path = tempfile.mkstemp(suffix='.json')
        os.close(fd)  # Close the file descriptor so subprocess can write
        
        try:
            test_command = [executable, f'--gtest_output=json:{json_output_path}']
            subprocess.run(test_command, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)

            with open(json_output_path, 'r') as f:
                test_results = json.load(f)
        except (FileNotFoundError, json.JSONDecodeError) as e:
            test_results = {}
        finally:
            os.unlink(json_output_path)

            for test_suite in test_results.get('testsuites', []):
                total_tests += test_suite['tests']
                for test in test_suite.get('testsuite', []):
                    failure_msg = None
                    if 'failures' in test and test['failures']:
                        failure_msg = test['failures'][0].get('failure', '')
                    all_results[service].append({
                        'service': service,
                        'name': test['name'],
                        'status': test['status'],
                        'failure': failure_msg,
                    })

    # Count skipped tests
    for service in skipped_services:
        executable = os.path.join(smoke_tests_dir, service, f"{service}-smoke-tests")
        if os.path.exists(executable):
            result = subprocess.run([executable, '--gtest_list_tests'], 
                                  capture_output=True, text=True)
            if result.returncode == 0:
                lines = result.stdout.strip().split('\n')
                for line in lines[1:]:
                    test_name = f"{line.strip()}"
                    total_tests += 1
                    all_results[service].append({
                        'service': service,
                        'name': test_name,
                        'status': 'SKIPPED',
                        'failure': None,
                    })

    print(f"1..{total_tests}")
    
    for service in all_results.keys():
        print(f"# {service} tests")
        for result in all_results[service]:
            service = result['service']
            test_name = result['name']
            status = result['status']
            failure = result['failure']
            error_expected = "error expected from service" if "Failure" in test_name or "Error" in test_name else "no error expected from service"

            if status == 'SKIPPED':
                print(f"ok {service} {test_name} # SKIP")
            elif status == 'RUN' and not failure:
                print(f"ok {service} {test_name} - {error_expected}")
            else:
                print(f"not ok {service} {test_name}")
                if failure:
                    for line in failure.split('\n'):
                        if line.strip():
                            print(f"# {line}")

    return 0

if __name__ == "__main__":
    main()