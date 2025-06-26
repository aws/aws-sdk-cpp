/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Aws.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/monitoring/MonitoringFactory.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <performance-tests/reporting/JsonReportingMetrics.h>
#include <performance-tests/services/dynamodb/DynamoDBPerformanceTest.h>
#include <performance-tests/services/dynamodb/DynamoDBTestConfig.h>

#include <string>

int main(int argc, char** argv) {
  Aws::String region = "us-east-1";
  Aws::String commitId = "unknown";
  int iterations = 10;

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
  Aws::SDKOptions::SDKVersion const version;
  Aws::String const versionStr = Aws::Utils::StringUtils::to_string(static_cast<int>(version.major)) + "." +
                                 Aws::Utils::StringUtils::to_string(static_cast<int>(version.minor)) + "." +
                                 Aws::Utils::StringUtils::to_string(static_cast<int>(version.patch));

  options.monitoringOptions.customizedMonitoringFactory_create_fn = {[&]() -> Aws::UniquePtr<Aws::Monitoring::MonitoringFactory> {
    return Aws::MakeUnique<PerformanceTest::Reporting::JsonReportingMetricsFactory>(
        "JsonReportingMetricsFactory", PerformanceTest::Services::DynamoDB::TestConfig::Operations, "cpp1", versionStr, commitId,
        PerformanceTest::Services::DynamoDB::TestConfig::OutputFilename);
  }};

  Aws::InitAPI(options);

  {
    Aws::Client::ClientConfiguration cfg;
    cfg.region = region;

    Aws::DynamoDB::DynamoDBClient dynamodb(cfg);
    for (const auto& config : PerformanceTest::Services::DynamoDB::TestConfig::TestMatrix) {
      PerformanceTest::Services::DynamoDB::RunTest(dynamodb, config, iterations);
    }
  }

  Aws::ShutdownAPI(options);
  return 0;
}