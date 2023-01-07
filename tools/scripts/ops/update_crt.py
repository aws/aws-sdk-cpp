#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
"""
This is a script to update CRT submodule to the latest tagged (~released) version and update prefetch_crt_dependency.sh
script to point to the latest released packages of the CRT.
"""

import os
import shutil
import subprocess
import time

import jinja2

PREFETCH_DEPS_SH_NAME = "prefetch_crt_dependency.sh"
CRT_DIR = "./crt/aws-crt-cpp"
GIT_EXE = shutil.which("git")


PREFETCH_DEPS_TEMPLATE = \
"""#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/{{ t_crt_cpp_hash }}  # {{ t_crt_cpp_tag }}

{% for t_crt_module in t_crt_modules -%}
{{ t_crt_module.var_name }}_URI=${CRT_URI_PREFIX}/{{ t_crt_module.file_path }}/zip/{{ t_crt_module.hash }}  # {{ t_crt_module.tag }}
{% endfor %}

echo "Removing CRT"
rm -rf crt

echo "Downloading and expanding CRT CPP"
mkdir -p crt/tmp
curl ${CRT_URI} --output crt/tmp/crt.zip
unzip crt/tmp/crt -d crt
CRT_DIR_TMP=`ls -d crt/aws-crt-cpp*`
mv ${CRT_DIR_TMP} crt/aws-crt-cpp

echo "Downloading and expanding CRT dependencies"
{% for t_crt_module in t_crt_modules -%}
curl {% raw %}${{% endraw %}{{ t_crt_module.var_name }}_URI{% raw %}}{% endraw %} --output crt/tmp/{{loop.index}}.zip
{% endfor %}

for a in `seq 1 {{ t_crt_modules_len }}`; do
    unzip crt/tmp/${a} -d crt/tmp
done

rm -rf crt/aws-crt-cpp/crt
mkdir crt/aws-crt-cpp/crt

for a in `ls crt/tmp |grep -v '.zip$' |grep -v aws-crt-cpp`; do
    mv crt/tmp/$a "crt/aws-crt-cpp/crt/"`echo $a | sed 's/-[0-9a-f]\{40\}$//'`
done

echo "Adjust S2N location"
mv crt/aws-crt-cpp/crt/s2n-tls crt/aws-crt-cpp/crt/s2n

echo "To complete setup run cmake -Bbuild; cmake --build build; cmake --build --target install"

"""


def call_git(cwd: str, timeout: int, command: str):
    git_cmd = [GIT_EXE]
    git_cmd += command.split(" ")
    process = subprocess.run(git_cmd, cwd=cwd, timeout=timeout, check=True, capture_output=True)
    output = process.stdout.decode().replace("\n", "")
    if "pull" in command:
        time.sleep(3)  # Avoid throttling
    return output


def main():
    if not os.path.isfile(os.getcwd() + "/" + PREFETCH_DEPS_SH_NAME) or not os.path.isdir(os.getcwd() + "/" + CRT_DIR):
        print(f"Please run this script from root of the repo, {PREFETCH_DEPS_SH_NAME} or CRT are not found")
        return -1

    call_git(cwd=".", timeout=60, command="checkout crt --recurse-submodules")
    current_crt_version = call_git(cwd=CRT_DIR, timeout=10, command="describe --abbrev=0 --tags")
    print(f"Currently set CRT version: {current_crt_version}")

    call_git(cwd=CRT_DIR, timeout=60, command="checkout main --recurse-submodules")
    call_git(cwd=CRT_DIR, timeout=60, command="pull --recurse-submodules")
    latest_crt_version = call_git(cwd=CRT_DIR, timeout=10, command="describe --abbrev=0 --tags")

    call_git(cwd=CRT_DIR, timeout=60, command=f"checkout {latest_crt_version} --recurse-submodules")
    print(f"Updated submodule to the latest CRT tag: {latest_crt_version}")

    print(f"Now updating script {PREFETCH_DEPS_SH_NAME}")

    crt_cpp_hash = call_git(cwd=CRT_DIR, timeout=10, command=f"rev-parse HEAD")

    crt_cpp_c_module_dirs = sorted(os.listdir(f"{CRT_DIR}/crt"))
    crt_cpp_c_modules = list()
    for c_module_dir in crt_cpp_c_module_dirs:
        crt_c_module_git_dir = f"{CRT_DIR}/crt/{c_module_dir}"
        c_module_hash = call_git(cwd=crt_c_module_git_dir, timeout=10, command="rev-parse HEAD")
        c_module_tag = call_git(cwd=crt_c_module_git_dir, timeout=10, command="describe --abbrev=0 --tags")
        sh_var_name = c_module_dir.upper().replace("-", "_")
        crt_cpp_c_modules.append({"var_name": sh_var_name, "file_path": c_module_dir, "hash": c_module_hash, "tag": c_module_tag})

    jinja2_env = jinja2.Environment()
    jinja2_template = jinja2_env.from_string(PREFETCH_DEPS_TEMPLATE)
    rendered_script = jinja2_template.render(t_crt_cpp_hash=crt_cpp_hash,
                                             t_crt_cpp_tag=latest_crt_version,
                                             t_crt_modules=crt_cpp_c_modules,
                                             t_crt_modules_len=len(crt_cpp_c_modules))

    with open(f"{PREFETCH_DEPS_SH_NAME}", mode="w", encoding="utf-8") as prefetch_script_f:
        prefetch_script_f.write(rendered_script)

    print(f"CRT submodule is updated to {latest_crt_version}\n"
          f"Script {PREFETCH_DEPS_SH_NAME} content is updated.")

    print("Don't forget to git add, commit, and push:\n")
    print(f"    git checkout -b updateCrt/{latest_crt_version} && "
          f"git add {CRT_DIR} {PREFETCH_DEPS_SH_NAME} && "
          f"git commit -m \"Update CRT to {latest_crt_version}\" && "
          f"git push origin updateCrt/{latest_crt_version}")

    return 0


if __name__ == "__main__":
    ret_code = main()
    exit(ret_code)
