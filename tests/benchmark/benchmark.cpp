/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/Aws.h>
#include <Configuration.h>
#include <TestDelegator.h>
#include <metric/Metrics.h>
#include <metric/PrintEmbeddedCloudWatchMetrics.h>
#include <metric/CloudWatchMetrics.h>

int main(int argc, char *argv[]) {
    if (1 == argc ||
        (2 == argc && (std::string(argv[1]) == "-h" || std::string(argv[1]) == "--help" )))
    {
        Benchmark::Configuration::PrintHelp();
        return 0;
    }

    Aws::SDKOptions options;
    Aws::InitAPI(options);
    {
        auto configuration = Benchmark::Configuration::FromArgs(argc, argv);
        auto testDelegator = Benchmark::TestDelegator::BuildTestDelegator();
        auto testFunc = testDelegator.GetTestRunForConfiguration(configuration);
        auto metricsEmitter = [&]() -> std::shared_ptr<Benchmark::MetricsEmitter> {
            if (configuration.GetConfiguration().shouldReportToCloudWatch) {
                return std::make_shared<Benchmark::CloudWatchMetrics>();
            }
            return std::make_shared<Benchmark::PrintEmbeddedCloudWatchMetrics>();
        }();
        testFunc(configuration, metricsEmitter);
    }
    Aws::ShutdownAPI(options);
    return 0;
}
