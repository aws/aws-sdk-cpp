#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

import concurrent.futures
import fileinput
import multiprocessing
import os
import shutil
import subprocess


def run_doc_gen():
    # Create output directory
    shutil.copytree("tools/doxygen", "doxygen")
    os.makedirs("doxygen/output", exist_ok=True)

    # Create dependency tree
    os.makedirs("build", exist_ok=True)
    subprocess.run(["cmake", "-GNinja", "-Bbuild", "--graphviz=build/aws-cpp-sdk.dot", "."])
    dependency_map = create_dependency_map()
    subprocess.run(["rm -rf build"], shell=True)

    # Update layout file with correct modules
    print('Creating layout file')
    shutil.copy("tools/doxygen/modules/template/layout-template.xml", "doxygen/DoxygenLayout.xml")
    for line in fileinput.input("doxygen/DoxygenLayout.xml", inplace=True):
        if "<!--SDK_CUSTOM_TABS-->" in line:
            for module in sorted(dependency_map.keys()):
                print(f'\t\t\t<tab type="user" url="../../{module}/html/annotated.html" title="{module}"/>')
        else:
            print('{}'.format(line), end='')

    # Generate clients blocking when a dependency needed
    doc_gen_thread_pool = concurrent.futures.ThreadPoolExecutor(max_workers=multiprocessing.cpu_count())
    client_futures = {}
    for client in dependency_map.keys():
        if client not in client_futures.keys():
            client_futures[client] = process_one_client(dependency_map, client, doc_gen_thread_pool, client_futures)

    # Generate root last
    print(f'Running doc generation for root of documentation site')
    client_futures["root"] = doc_gen_thread_pool.submit(subprocess.run,
                                                        ["doxygen", "./tools/doxygen/modules/static/root.config"])

    # Wait for all generation to complete
    for client, future in client_futures.items():
        future.result()


def create_dependency_map():
    # Format dot file
    subprocess.run([("cat build/aws-cpp-sdk.dot | "
                     "grep \"\-> aws-cpp\|\-> aws-crt-cpp\" | "
                     "grep -v \"test\" | "
                     "grep -v \"sample\" | "
                     "sed -e\"s/.*\/\///g\" > build/aws-cpp-sdk-formatted.dot")], shell=True)

    dependency_map = {}
    for line in fileinput.input("build/aws-cpp-sdk-formatted.dot", inplace=True):
        line = line.replace(" ", "")
        dependency_tuple = line.split('->')
        if "crt" in dependency_tuple[1]:
            dependency_map[dependency_tuple[0]] = []
        elif dependency_tuple[0] in dependency_map:
            dependency_map[dependency_tuple[0]].append(dependency_tuple[1].strip())
        else:
            dependency_map[dependency_tuple[0]] = [dependency_tuple[1].strip()]
    return dependency_map


def tag_file(name): return f'doxygen/output/{name}/{name}.tag=../../{name}/html'


def process_one_client(dependency_map, client_name, thread_pool, client_futures):
    # Wait for dependencies to be processed
    for dependency in dependency_map.get(client_name, []):
        if dependency not in client_futures.keys():
            client_futures[dependency] = process_one_client(dependency_map, dependency, thread_pool, client_futures)

    for dependency in dependency_map.get(client_name, []):
        client_futures[dependency].result()

    if client_name in ["aws-cpp-sdk-core", "aws-cpp-sdk-access-management",
                       "aws-cpp-sdk-s3-encryption", "aws-cpp-sdk-text-to-speech",
                       "aws-cpp-sdk-identity-management", "aws-cpp-sdk-transfer",
                       "aws-cpp-sdk-queues"]:
        client_src = f"src/{client_name}"
    else:
        client_src = f"generated/src/{client_name}"
    # Copy main readme to service dir.
    shutil.copy("README.md", f'{client_src}/README.md')
    shutil.copy("CHANGELOG.md", f'{client_src}/CHANGELOG.md')
    shutil.copy("CODE_OF_CONDUCT.md", f'{client_src}/CODE_OF_CONDUCT.md')
    shutil.copy("CONTRIBUTING.md", f'{client_src}/CONTRIBUTING.md')
    shutil.copytree("docs", f'{client_src}/Docs')

    # Create client tag files
    shutil.copy("tools/doxygen/modules/template/module-template.config", f'doxygen/modules/{client_name}.config')
    for line in fileinput.input(f'doxygen/modules/{client_name}.config', inplace=True):
        line = line.replace("#CLIENT_NAME", f'{client_name}')
        line = line.replace("#CLIENT_DIR", f'{client_src}')
        line = line.replace("#DEPENDENCIES", "\\\n".join(list(map(tag_file, dependency_map.get(client_name, [])))))
        print('{}'.format(line), end='')

    # In parallel generate clients
    print(f'Running doc generation in parallel for: {client_name}')
    return thread_pool.submit(
        lambda client: subprocess.run(["doxygen", f'./doxygen/modules/{client}.config']), client_name)


# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    run_doc_gen()
