/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <metric/Metrics.h>
#include <chrono>

using namespace std::chrono;

void Benchmark::MetricsEmitter::CreateMetricsForOp(const std::string &metricName,
    const std::vector<Dimension> &dimensions,
    std::vector<Benchmark::Metric> &trackingMetrics,
    const std::function<bool()> &op) {
    std::vector<Metric> metrics;

    auto before = steady_clock::now();
    auto success = op();
    auto after = steady_clock::now();
    auto duration = duration_cast<milliseconds>(after - before);
    if (success) {
        trackingMetrics.push_back({metricName, SUCCESS, dimensions, "true"});
    } else {
        trackingMetrics.push_back({metricName, SUCCESS, dimensions, "false"});
    }
    trackingMetrics.push_back({metricName, DURATION, dimensions, std::to_string(duration.count())});
}
