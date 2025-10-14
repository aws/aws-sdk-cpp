/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>

#include <array>
#include <cstddef>

namespace PerformanceTest {
namespace Services {
namespace CloudWatch {
namespace TestConfig {

/**
 * Metric counts for CloudWatch performance tests.
 */
enum class MetricCount { M16, M64, M256, M1000 };

/**
 * Configuration for CloudWatch performance test cases.
 */
struct TestCase {
  MetricCount metricCount;
};

/**
 * Get the metric count value for a given MetricCount enum.
 * @param metricCount The MetricCount enum value
 * @return Number of metrics
 */
size_t GetMetricCountValue(MetricCount metricCount);

/**
 * Get the string label for a given MetricCount enum.
 * @param metricCount The MetricCount enum value
 * @return String label (e.g., "16", "64", "256", "1000")
 */
Aws::String GetMetricCountLabel(MetricCount metricCount);

/** Operations tested in CloudWatch performance tests. */
extern const std::array<const char*, 3> TestOperations;

/** Array of all test case combinations. */
extern const std::array<TestCase, 4> TestMatrix;

/** Output filename for test results. */
extern const char* OutputFilename;

}  // namespace TestConfig
}  // namespace CloudWatch
}  // namespace Services
}  // namespace PerformanceTest