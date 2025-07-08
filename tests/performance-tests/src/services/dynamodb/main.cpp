/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Aws.h>
#include <aws/core/Version.h>
#include <aws/core/monitoring/MonitoringFactory.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <performance-tests/reporting/JsonReportingMetrics.h>
#include <performance-tests/services/dynamodb/DynamoDBPerformanceTest.h>
#include <performance-tests/services/dynamodb/DynamoDBTestConfig.h>

#include <cxxopts.hpp>
#include <string>

int main(int argc, char** argv) {
  cxxopts::Options options("dynamodb-perf-test", "DynamoDB Performance Test");
  options.add_options()("r,region", "AWS region", cxxopts::value<std::string>()->default_value("us-east-1"))(
      "i,iterations", "Number of iterations", cxxopts::value<int>()->default_value("10"))(
      "c,commit-id", "Commit ID", cxxopts::value<std::string>()->default_value("unknown"));

  auto const result = options.parse(argc, argv);

  Aws::String const region = Aws::Utils::StringUtils::to_string(result["region"].as<std::string>());
  Aws::String const commitId = Aws::Utils::StringUtils::to_string(result["commit-id"].as<std::string>());
  int const iterations = result["iterations"].as<int>();

  Aws::SDKOptions sdkOptions;
  Aws::String const versionStr = Aws::Version::GetVersionString();

  sdkOptions.monitoringOptions.customizedMonitoringFactory_create_fn = {[&]() -> Aws::UniquePtr<Aws::Monitoring::MonitoringFactory> {
    Aws::Set<Aws::String> operations;
    for (const auto& operation : PerformanceTest::Services::DynamoDB::TestConfig::TestOperations) {
      operations.insert(operation);
    }
    return Aws::MakeUnique<PerformanceTest::Reporting::JsonReportingMetricsFactory>(
        "JsonReportingMetricsFactory", operations, "cpp1", versionStr, commitId,
        PerformanceTest::Services::DynamoDB::TestConfig::OutputFilename);
  }};

  Aws::InitAPI(sdkOptions);

  {
    for (const auto& config : PerformanceTest::Services::DynamoDB::TestConfig::TestMatrix) {
      auto performanceTest = Aws::MakeUnique<PerformanceTest::Services::DynamoDB::DynamoDBPerformanceTest>("DynamoDBPerformanceTest",
                                                                                                           region, config, iterations);
      performanceTest->Setup();
      performanceTest->Run();
      performanceTest->TearDown();
    }
  }

  Aws::ShutdownAPI(sdkOptions);
  return 0;
}