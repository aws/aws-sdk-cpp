#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

import datetime
import os
import re
import shutil
import subprocess
import tempfile


MODELS_SRC_GIT_REPO = "https://github.com/aws/aws-models"

CODE_GENERATION_LOCATION = "./code-generation/"
CLIENTS_MODELS_LOCATION = CODE_GENERATION_LOCATION + "api-descriptions/"
ENDPOINT_RULES_LOCATION = CODE_GENERATION_LOCATION + "endpoints/"

PARTITIONS_FILE_LOCATION = CODE_GENERATION_LOCATION + "partitions/partitions.json"
DEFAULTS_FILE_LOCATION = CODE_GENERATION_LOCATION + "defaults/sdk-default-configuration.json"


# Regexp to parse C2J model filename to extract service name and date version
SERVICE_MODEL_FILENAME_PATTERN = re.compile(
    "^"
    "(?P<service>.+)-"                                      # service name
    "(?P<date>[0-9][0-9][0-9][0-9]-[0-9][0-9]-[0-9][0-9])"  # model date
    ".normal.json$"
)

AWS_MODELS_DATE = re.compile(
    "^"
    "(?P<date>[0-9][0-9][0-9][0-9]-[0-9][0-9]-[0-9][0-9])"  # model date
    "$"
)

ENDPOINT_RULESET_FILENAME_PATTERN = re.compile(
    "^"
    "(?P<service>.+)-"                                      # service name
    "(?P<date>[0-9][0-9][0-9][0-9]-[0-9][0-9]-[0-9][0-9])"  # model date
    ".endpoint-rule-set.json$"
)

ENDPOINT_TESTS_FILENAME_PATTERN = re.compile(
    "^"
    "(?P<service>.+)-"                                      # service name
    "(?P<date>[0-9][0-9][0-9][0-9]-[0-9][0-9]-[0-9][0-9])"  # model date
    ".endpoint-tests.json$"
)


def clone_models(temp_dir: tempfile.TemporaryDirectory):
    git_cmd = [shutil.which("git"), "clone", MODELS_SRC_GIT_REPO]
    git_cmd += ["--depth", "1"]
    git_cmd += ["--j", str(max(8, int(os.cpu_count())))]
    process = subprocess.run(git_cmd, cwd=temp_dir.name, timeout=5*60, check=True)
    process.check_returncode()
    return 0


def _dir_name_to_date(dir_name: str):
    if dir_name == "smithy":
        return None
    return datetime.datetime.strptime(re.search(AWS_MODELS_DATE, dir_name).group(), "%Y-%m-%d").date()


def _copy_models(aws_reference_models_dir: str,
                 destination_dir: str,
                 destination_suffix: str,
                 source_filename: str,
                 filtering_regex_pattern: re.Pattern):
    if not os.path.exists(destination_dir):
        os.makedirs(destination_dir)
    existing_rules = os.listdir(destination_dir)
    existing_rules_set = {filename for filename in existing_rules
                          if os.path.isfile("/".join([destination_dir, filename])) and re.search(filtering_regex_pattern, filename)}

    cloned_items = os.listdir(aws_reference_models_dir)
    for cloned_item in cloned_items:
        if not cloned_item.startswith(".") and os.path.isdir(aws_reference_models_dir + "/" + cloned_item):
            aws_model_name = cloned_item
            aws_model_dirs = os.listdir(aws_reference_models_dir + "/" + cloned_item)

            try:
                latest_c2j_model_date = str(max(d for d in aws_model_dirs if isinstance(_dir_name_to_date(d), datetime.date)))
                dst_model_name = f"{aws_model_name}-{latest_c2j_model_date}.{destination_suffix}"

                if dst_model_name not in existing_rules_set:
                    print(f"New model file: {dst_model_name}")
                shutil.copyfile(f"{aws_reference_models_dir}/{aws_model_name}/{latest_c2j_model_date}/{source_filename}", f"{destination_dir}/{dst_model_name}")

                # remove all models with this name
                existing_rules_for_this_service = {item for item in existing_rules_set if filtering_regex_pattern.match(item).group("service") == aws_model_name}
                existing_rules_set -= existing_rules_for_this_service

            except Exception as exc:
                print(f"Error: Unexpected folder structure at {destination_dir} {cloned_item}: {exc}")
    if existing_rules_set:
        print(f"Warning: Extra SDK Models not present in the reference models repo:\n    {sorted(existing_rules_set)}")


def copy_c2j_models(aws_reference_models_dir: str):
    try:
        _copy_models(aws_reference_models_dir, CLIENTS_MODELS_LOCATION, "normal.json", "service-2.json", SERVICE_MODEL_FILENAME_PATTERN)
    except Exception as exc:
        print(f"Error: failed to copy c2j models: {exc}")


def copy_endpoints20_rules(aws_reference_models_dir: str):
    try:
        _copy_models(aws_reference_models_dir, ENDPOINT_RULES_LOCATION, "endpoint-rule-set.json", "endpoint-rule-set-1.json", ENDPOINT_RULESET_FILENAME_PATTERN)
    except Exception as exc:
        print(f"Error: failed to copy endpoint rules: {exc}")
    try:
        _copy_models(aws_reference_models_dir, ENDPOINT_RULES_LOCATION, "endpoint-tests.json", "endpoint-tests-1.json", ENDPOINT_TESTS_FILENAME_PATTERN)
    except Exception as exc:
        print(f"Error: failed to copy endpoint tests: {exc}")


def copy_defaults_configuration(aws_reference_models_dir: str):
    try:
        destination_dir = DEFAULTS_FILE_LOCATION.rsplit('/', 1)[0]
        if not os.path.exists(destination_dir):
            os.makedirs(destination_dir)
        shutil.copyfile(f"{aws_reference_models_dir}/default-configuration.json", DEFAULTS_FILE_LOCATION)
    except Exception as exc:
        print(f"Error: failed to copy defaults configuration: {exc}")


def copy_partitions(aws_reference_models_dir: str):
    try:
        destination_dir = PARTITIONS_FILE_LOCATION.rsplit('/', 1)[0]
        if not os.path.exists(destination_dir):
            os.makedirs(destination_dir)
        shutil.copyfile(f"{aws_reference_models_dir}/partitions.json", PARTITIONS_FILE_LOCATION)
    except Exception as exc:
        print(f"Error: failed to copy partitions: {exc}")


def main():
    temp_dir = tempfile.TemporaryDirectory()
    clone_models(temp_dir)
    aws_reference_models_dir = temp_dir.name + "/" + "aws-models"

    copy_c2j_models(aws_reference_models_dir)
    copy_endpoints20_rules(aws_reference_models_dir)
    copy_defaults_configuration(aws_reference_models_dir)
    copy_partitions(aws_reference_models_dir)

    return 0


if __name__ == "__main__":
    ret_code = main()
    exit(ret_code)

