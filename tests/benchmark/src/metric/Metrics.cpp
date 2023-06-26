/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <metric/Metrics.h>
#include <chrono>

using namespace std::chrono;

std::vector<Benchmark::Metric> Benchmark::MetricsEmitter::CreateMetricsForOp(const std::string &metricName,
    const std::vector<Dimension> &dimensions,
    const std::function<bool()> &op) const {
    std::vector<Metric> metrics;

    auto before = steady_clock::now();
    auto success = op();
    auto after = steady_clock::now();
    auto duration = duration_cast<milliseconds>(after - before);
    if (success) {
        metrics.push_back({metricName, SUCCESS, dimensions, "true"});
    } else {
        metrics.push_back({metricName, SUCCESS, dimensions, "false"});
    }
    metrics.push_back({metricName, DURATION, dimensions, std::to_string(duration.count())});
    return metrics;
}
