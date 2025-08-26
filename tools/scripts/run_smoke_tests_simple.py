#!/usr/bin/env python3
import os
import subprocess
import argparse
import tempfile
import json
from collections import defaultdict

def should_run_service(services):
    service_ids = os.environ.get('AWS_SMOKE_TEST_SERVICE_IDS', '')
    print("AWS_SMOKE_TEST_SERVICE_IDS:",service_ids)
    if not service_ids:
        return services
    allowed_services = service_ids.split(',')
    return [service for service in services if service in allowed_services]

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

    services=should_run_service(services)

    for service in services:
        executable = os.path.join(smoke_tests_dir, service, f"{service}-smoke-tests")
        
        with tempfile.NamedTemporaryFile(mode='w+', suffix='.json', delete=False) as temp_file:
            json_output_path = temp_file.name
        
        try:
            test_command = [executable, f'--gtest_output=json:{json_output_path}']
            subprocess.run(test_command, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
            
            with open(json_output_path, 'r') as f:
                test_results = json.load(f)
            
            for test_suite in test_results.get('testsuites', []):
                total_tests += test_suite['tests']
                for test in test_suite.get('testsuite', []):
                        all_results[service].append({
                            'service': service,
                            'name': test['name'],
                            'status': test['status'],
                            'failure': test.get('failure'),
                            
                        })
        finally:
            os.unlink(json_output_path)

    print(f"1..{total_tests}")
    
    for service in all_results.keys():
        print(f"# {service} tests")
        for result in all_results[service]:
            service = result['service']
            test_name = result['name']
            status = result['status']
            failure = result['failure']
            error_expected = "error expected from service" if "Failure" in test_name or "Error" in test_name else "no error expected from service"

            if status == 'RUN':
                print(f"ok {service} {test_name} - {error_expected}")
            else:
                print(f"not ok {service} {test_name}")
                if failure:
                    print(f"# {failure}")

    return 0

if __name__ == "__main__":
    main()