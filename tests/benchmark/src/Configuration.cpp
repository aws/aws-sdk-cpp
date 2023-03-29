/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <Configuration.h>
#include <algorithm>
#include <utility>

Benchmark::Configuration::Configuration(Benchmark::RunConfiguration runConfiguration) :
    runConfiguration(std::move(runConfiguration)) {}

Benchmark::Configuration Benchmark::Configuration::FromArgs(int argc, char *argv[]) {
    return Benchmark::Configuration({
        Benchmark::Configuration::GetCmdOption(argv, argv + argc, "--service"),
        Benchmark::Configuration::GetCmdOption(argv, argv + argc, "--api"),
        std::stol(Benchmark::Configuration::GetCmdOption(argv, argv + argc, "--durationMillis")),
        Benchmark::Configuration::CmdOptionExists(argv, argv + argc, "--withMetrics"),
    });
}

char *Benchmark::Configuration::GetCmdOption(char **begin, char **end, const std::string &option) {
    char **itr = std::find(begin, end, option);
    if (itr != end && ++itr != end) {
        return *itr;
    }
    return nullptr;
}

bool Benchmark::Configuration::CmdOptionExists(char **begin, char **end, const std::string &option) {
    return std::find(begin, end, option) != end;
}
