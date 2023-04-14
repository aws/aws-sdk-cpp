/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <service/S3PutObject.h>
#include <service/S3GetObject.h>
#include <TestDelegator.h>
#include <iostream>

Benchmark::TestDelegator::TestDelegator(const std::map<StringPair, TestFunction> &testFunctionMap) :
    testFunctionMap(testFunctionMap) {}

Benchmark::TestFunction
Benchmark::TestDelegator::GetTestRunForConfiguration(const Benchmark::Configuration &configuration) const {
    auto it = this->testFunctionMap.find(std::make_pair(configuration.GetConfiguration().service,
        configuration.GetConfiguration().api));
    if (it != testFunctionMap.end()) {
        return it->second;
    }
    return [](const Benchmark::Configuration &configuration, const std::shared_ptr<MetricsEmitter> metricsEmitter) -> void {
        (void) metricsEmitter;
        std::cout << "Could not find test to run for service: " << configuration.GetConfiguration().service
                  << "and api: " << configuration.GetConfiguration().api << "\n";
        return;
    };
}

Benchmark::TestDelegator Benchmark::TestDelegator::BuildTestDelegator() {
    return Benchmark::TestDelegator({
        {std::make_pair("s3", "PutObject"), S3PutObject::CreateTestFunction()},
        {std::make_pair("s3", "GetObject"), S3GetObject::CreateTestFunction()}
    });
}
