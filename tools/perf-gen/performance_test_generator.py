#!/usr/bin/env python3

import os
import json
from jinja2 import Environment, FileSystemLoader
import argparse

def generate_performance_test(config_path, template_dir, output_dir):
    with open(config_path, 'r', encoding='utf-8') as f:
        config = json.load(f)

    service_name = config['service']
    service_lower = config['service_lower']

    env = Environment(
        loader=FileSystemLoader(template_dir),
        trim_blocks=True,
        lstrip_blocks=True
    )

    service_src_dir = os.path.join(output_dir, f"performance-tests/src/services/{service_lower}")
    service_include_dir = os.path.join(output_dir, f"performance-tests/include/performance-tests/services/{service_lower}")

    os.makedirs(service_src_dir, exist_ok=True)
    os.makedirs(service_include_dir, exist_ok=True)

    templates_to_render = {
        'main.cpp.j2': os.path.join(service_src_dir, 'main.cpp'),
        'PerformanceTest.h.j2': os.path.join(service_include_dir, f'{service_name}PerformanceTest.h'),
        'PerformanceTest.cpp.j2': os.path.join(service_src_dir, f'{service_name}PerformanceTest.cpp'),
        'TestConfig.h.j2': os.path.join(service_include_dir, f'{service_name}TestConfig.h'),
        'TestConfig.cpp.j2': os.path.join(service_src_dir, f'{service_name}TestConfig.cpp'),
    }

    for template_file, output_path in templates_to_render.items():
        template = env.get_template(template_file)
        rendered_content = template.render(config)
        with open(output_path, 'w', encoding='utf-8') as f:
            f.write(rendered_content)
        print(f"Successfully generated file: {output_path}")

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Generate a performance test framework for the AWS C++ SDK.')
    parser.add_argument('--config', required=True, help='Path to the service JSON configuration file.')
    parser.add_argument('--templates', default='templates', help='Path to the directory containing Jinja2 templates.')
    parser.add_argument('--output', default='.', help='The root output directory for the generated code.')
    
    args = parser.parse_args()

    if not os.path.exists(args.config):
        print(f"Error: Configuration file '{args.config}' not found.")
        exit(1)
        
    generate_performance_test(args.config, args.templates, args.output)