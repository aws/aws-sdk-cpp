/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <string>
#include <map>

namespace Benchmark {
    struct RunConfiguration {
        std::string service;
        std::string api;
        long durationMillis;
        bool shouldReportToCloudWatch;
        std::map<std::string, std::string> dimensions;
    };

    class Configuration {
    public:
        static Configuration FromArgs(int argc, char *argv[]);
        inline RunConfiguration GetConfiguration() const { return this->runConfiguration; }
    private:
        explicit Configuration(RunConfiguration runConfiguration);
        static char* GetCmdOption(char **begin, char **end, const std::string &option);
        static std::map<std::string, std::string> GetCmdOptions(char** begin, char** end, const std::string& option);
        static bool CmdOptionExists(char** begin, char** end, const std::string& option);
        RunConfiguration runConfiguration;
    };
}

