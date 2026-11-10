#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

"""
Runs clang-tidy on the lines changed between --base and --head, as the clang-tidy-check
workflow does.

Running locally (from the repo root, with submodules checked out). Needs git, cmake and clang-tidy:

    pip install clang-tidy        # or a system clang-tidy (apt install clang-tidy, brew install llvm)
    git fetch origin
    python3 tools/scripts/run_clang_tidy.py         # checks commits since origin/main; see --help

On macOS the script passes the SDK path from `xcrun --show-sdk-path` to clang-tidy, so system
headers are found without extra flags.

Steps:
  1. Pick BUILD_ONLY: s3, plus the services whose tests or high-level libraries changed
     (and their test dependencies), using the lists in cmake/sdksCommon.cmake.
  2. Configure CMake to produce compile_commands.json, with tests on and unity builds off
     so that every source file has its own compile command.
  3. Keep only changed files that have a compile command. Headers and tests of services
     that were not configured would fail with missing-include errors, so they are skipped.
  4. Run clang-tidy on those files with -line-filter set to the added or modified lines, so
     only diagnostics on those lines are reported. The line filter is built here from the diff
     rather than by LLVM's clang-tidy-diff.py, so the clang-tidy binary is the only dependency:
     whether and where clang-tidy-diff.py is installed varies between apt, Homebrew and pip
     packages (some pip versions don't ship it at all).
"""
import argparse
import contextlib
import json
import os
import re
import secrets
import shutil
import subprocess
import sys

DEFAULT_SERVICES = ["s3"]
CHECKED_EXTENSIONS = (".cpp", ".h")
# Hunk header of a -U0 diff, e.g. "@@ -10,0 +11,3 @@": 3 lines added starting at line 11.
HUNK_HEADER = re.compile(r"^@@ -\S+ \+(\d+)(?:,(\d+))? @@", re.MULTILINE)
# e.g. "/path/File.cpp:1575:101: error: the parameter 'x' is copied ... [performance-unnecessary-value-param]"
DIAGNOSTIC = re.compile(r"^(.+?):(\d+):(\d+): (warning|error|note): (.+)$")
# clang's summary lines, e.g. "51527 warnings generated." or "Suppressed 12 warnings (12 in non-user code)."
CLANG_COUNTERS = re.compile(
    r"^(\d+ (warnings?|errors?)( and \d+ errors?)? generated\.|Suppressed \d+ warnings|Use -header-filter)")


def parse_arguments() -> dict:
    """Parse arguments and/or print help

    :return: dict with parsed arguments
    """
    parser = argparse.ArgumentParser(description="Run clang-tidy on changed lines for AWS-SDK-CPP")
    parser.add_argument("--base", default="origin/main",
                        help="Base ref or commit to diff against (default: origin/main)")
    parser.add_argument("--head", default="HEAD", help="Ref or commit with the changes (default: HEAD)")
    parser.add_argument("--build_dir", default="build", help="CMake build directory (default: build)")
    parser.add_argument("--clang_tidy", default="clang-tidy", help="clang-tidy binary (default: clang-tidy)")
    return vars(parser.parse_args())


def main():
    # Keep our output in order with clang-tidy's when stdout is a pipe (e.g. in CI).
    sys.stdout.reconfigure(line_buffering=True)
    args = parse_arguments()
    repo_root = git("rev-parse", "--show-toplevel", cwd=os.getcwd()).strip()
    build_dir = os.path.abspath(args["build_dir"])
    diff_range = f"{args['base']}...{args['head']}"

    clang_tidy = shutil.which(args["clang_tidy"])
    if not clang_tidy:
        error(f"{args['clang_tidy']} not found; install it (e.g. pip install clang-tidy) or pass --clang_tidy")
        return 1
    print(clang_tidy_version(clang_tidy))

    changed = git("diff", "--name-only", "--diff-filter=d", diff_range, cwd=repo_root).splitlines()
    services = select_services(changed, repo_root)
    print(f"Configuring CMake with BUILD_ONLY={';'.join(services)}")
    configured, cmake_output = configure(repo_root, build_dir, services)
    if not configured:
        with workflow_commands_paused():
            print(cmake_output, end="")
        error("CMake configure failed; see the output above")
        return 1

    compiled = compiled_files(repo_root, build_dir)
    # Core is always built; if none of its sources map back into the repo, every changed file
    # would be skipped and the check would pass without analyzing anything.
    if not any(path.startswith("src/aws-cpp-sdk-core/source/") for path in compiled):
        error(f"compile_commands.json in {build_dir} has no core sources under {repo_root}")
        return 1

    candidates = [path for path in changed
                  if path.endswith(CHECKED_EXTENSIONS) and not path.startswith("generated/")]
    to_check = [path for path in candidates if path in compiled]
    skipped = [path for path in candidates if path not in compiled]
    if skipped:
        print_paths("Skipped (no compile command):", skipped)
    if not to_check:
        print("No changed files to check.")
        return 0
    line_filter = changed_line_ranges(repo_root, diff_range, to_check)
    if not line_filter:
        print("No added or modified lines to check.")
        return 0
    print_paths("Running clang-tidy on changed lines of:", [entry["name"] for entry in line_filter])

    tidy_command = [clang_tidy, "-p", build_dir, "--quiet", f"--line-filter={json.dumps(line_filter)}",
                    *macos_sysroot_args(), *(entry["name"] for entry in line_filter)]
    with workflow_commands_paused():
        returncode, errors, hidden_warnings = run_clang_tidy(tidy_command, repo_root)
    if hidden_warnings:
        print(f"{hidden_warnings} warning(s) on changed lines not shown; only errors fail this check.")
    if returncode == 0:
        print("No errors on changed lines.")
        return 0
    if not errors:
        error(f"clang-tidy exited with {returncode}; see the output above")
        return returncode

    print(f"\nclang-tidy reported {len(errors)} error(s) on changed lines:")
    for path, line, column, message in errors:
        print(f"  - {path}:{line}:{column}: {message}")
        if os.environ.get("GITHUB_ACTIONS"):
            # Shown on the PR's "Files changed" tab, next to the offending line.
            print(f"::error file={annotation_escape(path, True)},line={line},col={column}::"
                  f"{annotation_escape(message)}")
    return returncode


def error(message: str):
    """Print an error, as a GitHub annotation when running in Actions."""
    prefix = "::error::" if os.environ.get("GITHUB_ACTIONS") else "ERROR: "
    print(f"{prefix}{message}", file=sys.stderr)


def git(*args: str, cwd: str) -> str:
    return subprocess.run(["git", *args], cwd=cwd, check=True, capture_output=True, text=True).stdout


def read_cmake_flatmap(sdks_common: str, list_name: str) -> dict:
    """Read a list such as SDK_TEST_PROJECT_LIST from cmake/sdksCommon.cmake.

    Entries look like `list(APPEND SDK_TEST_PROJECT_LIST "s3-crt:tests/a-tests,tests/b-tests")`.

    :return: dict of key to list of values, e.g. {"s3-crt": ["tests/a-tests", "tests/b-tests"]}
    """
    result = {}
    for key, values in re.findall(rf'{list_name} "([^":]+):([^"]*)"', sdks_common):
        result.setdefault(key, []).extend(v for v in values.split(",") if v)
    return result


def select_services(changed_files: list, repo_root: str) -> list:
    """Return the BUILD_ONLY services needed to get compile commands for the changed files."""
    with open(os.path.join(repo_root, "cmake", "sdksCommon.cmake")) as sdks_common_file:
        sdks_common = sdks_common_file.read()
    test_projects = read_cmake_flatmap(sdks_common, "SDK_TEST_PROJECT_LIST")
    test_dependencies = read_cmake_flatmap(sdks_common, "TEST_DEPENDENCY_LIST")
    service_by_test_dir = {project: service for service, projects in test_projects.items() for project in projects}

    services = set(DEFAULT_SERVICES)
    for top_dir in {"/".join(path.split("/")[:2]) for path in changed_files}:
        service = service_by_test_dir.get(top_dir)
        # src/ holds core and the high-level libraries, whose BUILD_ONLY name is the directory name
        # after the prefix (src/aws-cpp-sdk-transfer -> transfer). Service clients under generated/ are ignored.
        if service is None and top_dir.startswith("src/aws-cpp-sdk-"):
            service = top_dir.removeprefix("src/aws-cpp-sdk-")
        if service is None or service == "core":
            continue
        services.add(service)
        # CMake drops a test project unless its test dependencies are also in BUILD_ONLY.
        services.update(test_dependencies.get(service, []))
    services.discard("core")  # always built
    # Set order varies between Python runs; a stable order keeps BUILD_ONLY identical across reruns,
    # so CMake doesn't see a changed cache value and the logged value is reproducible.
    return sorted(services)


def clang_tidy_version(clang_tidy: str) -> str:
    output = subprocess.run([clang_tidy, "--version"], capture_output=True, text=True).stdout
    version = next((line.strip() for line in output.splitlines() if "version" in line), "unknown version")
    return f"Using {clang_tidy} ({version})"


def configure(repo_root: str, build_dir: str, services: list) -> tuple:
    """Configure CMake.

    :return: (whether it succeeded, its combined output, which main() prints only on failure)
    """
    result = subprocess.run(["cmake", "-S", repo_root, "-B", build_dir,
                             "-DCMAKE_EXPORT_COMPILE_COMMANDS=ON",
                             f"-DBUILD_ONLY={';'.join(services)}",
                             "-DENABLE_UNITY_BUILD=OFF",
                             "-DENABLE_TESTING=ON"], stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)
    return result.returncode == 0, result.stdout


def compiled_files(repo_root: str, build_dir: str) -> set:
    """Return the repo-relative paths of files that have a compile command."""
    with open(os.path.join(build_dir, "compile_commands.json")) as compile_commands_file:
        compile_commands = json.load(compile_commands_file)
    real_root = os.path.realpath(repo_root)
    files = set()
    for entry in compile_commands:
        path = os.path.realpath(os.path.join(entry["directory"], entry["file"]))
        if path.startswith(real_root + os.sep):
            files.add(os.path.relpath(path, real_root))
    return files


def changed_line_ranges(repo_root: str, diff_range: str, paths: list) -> list:
    """Return clang-tidy's -line-filter entries for the lines added or modified in each path.

    :return: list such as [{"name": "src/a.cpp", "lines": [[11, 13]]}]
    """
    line_filter = []
    for path in paths:
        diff = git("diff", "--no-ext-diff", "--no-color", "-U0", diff_range, "--", path, cwd=repo_root)
        lines = []
        for start, count in HUNK_HEADER.findall(diff):
            count = 1 if count == "" else int(count)
            if count:  # count 0 means the hunk only deletes lines
                lines.append([int(start), int(start) + count - 1])
        if lines:
            line_filter.append({"name": path, "lines": lines})
    return line_filter


def macos_sysroot_args() -> list:
    """On macOS, point clang-tidy at the SDK so it finds the system headers."""
    if sys.platform != "darwin" or not shutil.which("xcrun"):
        return []
    sdk = subprocess.run(["xcrun", "--show-sdk-path"], capture_output=True, text=True).stdout.strip()
    return [f"--extra-arg=-isysroot{sdk}"] if sdk else []


@contextlib.contextmanager
def workflow_commands_paused():
    """Stop GitHub Actions from interpreting PR-controlled output (CMake, clang-tidy) as workflow commands."""
    token = secrets.token_hex(16) if os.environ.get("GITHUB_ACTIONS") else None
    if token:
        print(f"::stop-commands::{token}")
    try:
        yield
    finally:
        if token:
            print("Resuming workflow commands (GitHub masks the token below):")
            print(f"::{token}::")


def print_paths(title: str, paths: list):
    # The "- " prefix keeps a crafted file name such as "::add-mask::x.cpp" from starting a line.
    print(title + "".join(f"\n  - {path}" for path in paths))


def annotation_escape(value: str, is_property: bool = False) -> str:
    """Escape a message (or a property such as file=) for a GitHub workflow command."""
    value = value.replace("%", "%25").replace("\r", "%0D").replace("\n", "%0A")
    return value.replace(":", "%3A").replace(",", "%2C") if is_property else value


def run_clang_tidy(command: list, repo_root: str) -> tuple:
    """Run clang-tidy, echoing errors (with their code snippets and notes) as they arrive.

    Warnings don't fail the check, so they and clang's "N warnings generated" counters are not printed.

    :return: (exit code, list of (path, line, column, message) for each distinct error, number of hidden warnings)
    """
    process = subprocess.Popen(command, cwd=repo_root, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)
    real_root = os.path.realpath(repo_root)
    errors = []
    hidden_warnings = 0
    showing = True  # whether the current diagnostic (and its snippet and notes) is printed
    for line in process.stdout:
        text = line.rstrip("\n")
        if CLANG_COUNTERS.match(text):
            continue
        match = DIAGNOSTIC.match(text)
        # Real diagnostics start with an absolute path; snippet lines are indented, so a source line
        # containing "x.cpp:1:1: error: ..." is never taken for one.
        if match and os.path.isabs(match[1]):
            path, line_number, column, level, message = match.groups()
            if level == "warning":
                showing = False
                hidden_warnings += 1
            elif level == "error":
                showing = True
                real_path = os.path.realpath(path)
                entry = (os.path.relpath(real_path, real_root), line_number, column, message)
                # Only errors inside the repo become annotations; a header can be reported once per
                # file that includes it.
                if real_path.startswith(real_root + os.sep) and entry not in errors:
                    errors.append(entry)
            # A note belongs to the diagnostic before it, so it keeps that one's visibility.
        elif not text.startswith((" ", "\t")):
            showing = True  # other messages, such as "Error while processing ...", are always shown
        if showing:
            print(line, end="")
    return process.wait(), errors, hidden_warnings


if __name__ == "__main__":
    sys.exit(main())
