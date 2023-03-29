/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <metric/Metrics.h>
#include <Configuration.h>
#include <functional>
#include <map>
#include <vector>

namespace Benchmark {
    using TestFunction = std::function<std::vector<Benchmark::Metric>(const Benchmark::Configuration &configuration)>;
    using StringPair = std::pair<std::string, std::string>;

    class TestDelegator {
    public:
        static TestDelegator BuildTestDelegator();
        TestFunction GetTestRunForConfiguration(const Benchmark::Configuration &configuration) const;
    private:
        explicit TestDelegator(const std::map<StringPair, TestFunction> &testFunctionMap);
        std::map<StringPair, TestFunction> testFunctionMap;
    };
}

