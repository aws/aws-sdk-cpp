/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Aws.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <performance_tests/reporting/JsonReportingMetrics.h>
#include <performance_tests/services/dynamodb/DynamoDBPerformanceTest.h>
#include <performance_tests/services/dynamodb/DynamoDBTestConfig.h>

#include <string>

int main(int argc, char** argv) {
  Aws::String region = "us-east-1";
  Aws::String commitId = "unknown";
  int iterations = 3;

  for (int i = 1; i < argc; ++i) {
    Aws::String const arg = argv[i];
    if (arg == "--region" && i + 1 < argc) {
      region = argv[++i];
    } else if (arg == "--iterations" && i + 1 < argc) {
      iterations = std::stoi(argv[++i]);
    } else if (arg == "--commit-id" && i + 1 < argc) {
      commitId = argv[++i];
    }
  }

  Aws::SDKOptions options;
  options.monitoringOptions.customizedMonitoringFactory_create_fn.emplace_back(
      []() { return Aws::MakeUnique<PerformanceTest::Reporting::JsonReportingMetricsFactory>("JsonReportingMetricsFactory"); });

  Aws::InitAPI(options);

  PerformanceTest::Reporting::JsonReportingMetrics::RegisterOperationsToMonitor(
      PerformanceTest::Services::DynamoDB::TestConfig::OPERATIONS);

  Aws::SDKOptions::SDKVersion const version;
  Aws::String const versionStr = std::to_string(version.major) + "." + std::to_string(version.minor) + "." + std::to_string(version.patch);
  PerformanceTest::Reporting::JsonReportingMetrics::SetProductInfo("cpp1", versionStr, commitId);
  PerformanceTest::Reporting::JsonReportingMetrics::SetOutputFilename("dynamodb-perf-results.json");

  {
    Aws::Client::ClientConfiguration cfg;
    cfg.region = region;

    Aws::DynamoDB::DynamoDBClient dynamodb(cfg);
    for (const auto& config : PerformanceTest::Services::DynamoDB::TestConfig::TEST_MATRIX) {
      PerformanceTest::Services::DynamoDB::RunTest(dynamodb, config, iterations);
    }
  }

  Aws::ShutdownAPI(options);
  return 0;
}