/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/memory/stl/AWSString.h>
#include <performance-tests/services/cloudwatch/CloudWatchTestConfig.h>

#include <array>
#include <cstddef>
#include <map>

namespace PerformanceTest {
namespace Services {
namespace CloudWatch {
namespace TestConfig {

const std::array<const char*, 3> TestOperations = {"PutMetricData", "GetMetricData", "ListMetrics"};

static std::map<Aws::String, Aws::String> OperationMap = {
  {"PutMetricData", "Put metric data"},
  {"GetMetricData", "Get metric data"},
  {"ListMetrics", "List metrics"},
};

const std::array<TestCase, 4> TestMatrix = {
    {{.metricCount = MetricCount::M16}, 
     {.metricCount = MetricCount::M64}, 
     {.metricCount = MetricCount::M256}, 
     {.metricCount = MetricCount::M1000}}};

const char* OutputFilename = "cloudwatch-performance-test-results.json";

size_t GetMetricCountValue(MetricCount count) {
  switch (count) {
    case MetricCount::M16:
      return 16;
    case MetricCount::M64:
      return 64;
    case MetricCount::M256:
      return 256;
    case MetricCount::M1000:
      return 1000;
  }
}

Aws::String GetMetricCountLabel(MetricCount count) {
  switch (count) {
    case MetricCount::M16:
      return "16";
    case MetricCount::M64:
      return "64";
    case MetricCount::M256:
      return "256";
    case MetricCount::M1000:
      return "1000";
  }
}

}  // namespace TestConfig
}  // namespace CloudWatch
}  // namespace Services
}  // namespace PerformanceTest