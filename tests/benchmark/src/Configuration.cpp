/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <Configuration.h>
#include <sstream>
#include <algorithm>
#include <utility>
#include <vector>

Benchmark::Configuration::Configuration(Benchmark::RunConfiguration runConfiguration) :
    runConfiguration(std::move(runConfiguration)) {}

Benchmark::Configuration Benchmark::Configuration::FromArgs(int argc, char *argv[]) {
    return Benchmark::Configuration({
        Benchmark::Configuration::GetCmdOption(argv, argv + argc, "--service"),
        Benchmark::Configuration::GetCmdOption(argv, argv + argc, "--api"),
        std::stol(Benchmark::Configuration::GetCmdOption(argv, argv + argc, "--durationMillis")),
        Benchmark::Configuration::CmdOptionExists(argv, argv + argc, "--withMetrics"),
        Benchmark::Configuration::GetCmdOptions(argv, argv + argc, "--dimensions")
    });
}

char *Benchmark::Configuration::GetCmdOption(char **begin, char **end, const std::string &option) {
    char **itr = std::find(begin, end, option);
    if (itr != end && ++itr != end) {
        return *itr;
    }
    return nullptr;
}

std::map<std::string, std::string> Benchmark::Configuration::GetCmdOptions(char **begin, char **end, const std::string &option) {
    char **itr = std::find(begin, end, option);
    auto value = ++itr;
    if (itr != end && value != end) {
        //check to make sure the next entry is not another arg
        std::string nextArg(*value);
        if (nextArg.find("--") != std::string::npos){
            return {};
        }
        std::stringstream args(*itr);
        std::map<std::string, std::string> result;
        std::string tuple;
        while (std::getline(args, tuple, ',')) {
            auto k = tuple.substr(0, tuple.find(':'));
            auto v = tuple.substr(tuple.find(':') + 1);
            result.insert({k, v});
        }
        return result;
    }
    return {};
}

bool Benchmark::Configuration::CmdOptionExists(char **begin, char **end, const std::string &option) {
    return std::find(begin, end, option) != end;
}
