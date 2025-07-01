/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Aws.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/monitoring/MonitoringFactory.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/S3Client.h>
#include <performance-tests/Utils.h>
#include <performance-tests/reporting/JsonReportingMetrics.h>
#include <performance-tests/services/s3/S3PerformanceTest.h>
#include <performance-tests/services/s3/S3TestConfig.h>

#include <string>

int main(int argc, char** argv) {
  Aws::String region = "us-east-1";
  Aws::String availabilityZoneId = "use1-az4";
  Aws::String commitId = "unknown";
  int iterations = 10;

  for (int i = 1; i < argc; ++i) {
    Aws::String const arg = argv[i];
    if (arg == "--region" && i + 1 < argc) {
      region = argv[++i];
    } else if (arg == "--az-id" && i + 1 < argc) {
      availabilityZoneId = argv[++i];
    } else if (arg == "--iterations" && i + 1 < argc) {
      iterations = std::stoi(argv[++i]);
    } else if (arg == "--commit-id" && i + 1 < argc) {
      commitId = argv[++i];
    }
  }

  Aws::SDKOptions options;
  Aws::String const versionStr = PerformanceTest::Utils::GetSDKVersionString();

  options.monitoringOptions.customizedMonitoringFactory_create_fn = {[&]() -> Aws::UniquePtr<Aws::Monitoring::MonitoringFactory> {
    return Aws::MakeUnique<PerformanceTest::Reporting::JsonReportingMetricsFactory>(
        "JsonReportingMetricsFactory", PerformanceTest::Services::S3::TestConfig::TestOperations, "cpp1", versionStr, commitId,
        PerformanceTest::Services::S3::TestConfig::OutputFilename);
  }};

  Aws::InitAPI(options);

  {
    Aws::Client::ClientConfiguration cfg;
    cfg.region = region;

    Aws::S3::S3Client s3(cfg);
    for (const auto& config : PerformanceTest::Services::S3::TestConfig::TestMatrix) {
      PerformanceTest::Services::S3::RunTest(s3, config, availabilityZoneId, iterations);
    }
  }

  Aws::ShutdownAPI(options);
  return 0;
}