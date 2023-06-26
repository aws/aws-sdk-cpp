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
#include <memory>

namespace Benchmark {
    using TestFunction = std::function<void(const Benchmark::Configuration &configuration,
        const std::shared_ptr<MetricsEmitter> metricsEmitter)>;
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

