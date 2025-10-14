/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Aws.h>
#include <aws/core/Version.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/monitoring/MonitoringFactory.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <performance-tests/reporting/JsonReportingMetric.h>
#include <performance-tests/services/cloudwatch/CloudWatchPerformanceTest.h>
#include <performance-tests/services/cloudwatch/CloudWatchTestConfig.h>

#include <cxxopts.hpp>
#include <string>

int main(int argc, char** argv) {
  cxxopts::Options options("cloudwatch-perf-test", "CloudWatch Performance Test");
  options.add_options()("r,region", "AWS region", cxxopts::value<std::string>()->default_value("us-east-1"))(
      "i,iterations", "Number of iterations", cxxopts::value<int>()->default_value("1"))(
      "c,commit-id", "Commit ID", cxxopts::value<std::string>()->default_value("unknown"))(
      "b,build-mode", "Build mode", cxxopts::value<std::string>()->default_value("unknown"));

  auto const result = options.parse(argc, argv);

  Aws::String const region = Aws::Utils::StringUtils::to_string(result["region"].as<std::string>());
  Aws::String const commitId = Aws::Utils::StringUtils::to_string(result["commit-id"].as<std::string>());
  Aws::String const buildMode = Aws::Utils::StringUtils::to_string(result["build-mode"].as<std::string>());
  int const iterations = result["iterations"].as<int>();

  Aws::SDKOptions sdkOptions;
  sdkOptions.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Debug;
  Aws::String const versionStr = Aws::Version::GetVersionString();

  Aws::InitAPI(sdkOptions);

  {
    for (const auto& testConfig : PerformanceTest::Services::CloudWatch::TestConfig::TestMatrix) {
      const size_t metricCount = PerformanceTest::Services::CloudWatch::TestConfig::GetMetricCountValue(testConfig.metricCount);
      const Aws::String outputFile = "cloudwatch-" + std::to_string(metricCount) + "-metrics-performance-test-results.json";

      // Reinitialize SDK with new monitoring factory for each test
      Aws::ShutdownAPI(sdkOptions);

      sdkOptions.monitoringOptions.customizedMonitoringFactory_create_fn = {[&, metricCount, outputFile]() -> Aws::UniquePtr<Aws::Monitoring::MonitoringFactory> {
        Aws::Set<Aws::String> operations;
        for (const auto& operation : PerformanceTest::Services::CloudWatch::TestConfig::TestOperations) {
          operations.insert(operation);
        }
        return Aws::MakeUnique<PerformanceTest::Reporting::JsonReportingMetricFactory>(
            "JsonReportingMetricFactory", operations, outputFile);
      }};

      Aws::InitAPI(sdkOptions);

      Aws::Client::ClientConfiguration clientConfig;
      clientConfig.region = region;
      PerformanceTest::Services::CloudWatch::CloudWatchPerformanceTest performanceTest(clientConfig, testConfig, iterations);
      auto setupOutcome = performanceTest.Setup();
      if (setupOutcome.IsSuccess()) {
        performanceTest.Run();
      } else {
        AWS_LOG_ERROR("PerformanceTest", setupOutcome.GetError().c_str());
      }
      performanceTest.TearDown();
    }
  }

  Aws::ShutdownAPI(sdkOptions);
  return 0;
}