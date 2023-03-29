/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <vector>
#include <string>
#include <chrono>
#include <tuple>
#include <functional>

namespace Benchmark {
    enum METRIC_TYPE {
        DURATION,
        SUCCESS
    };

    struct Dimension {
        std::string name;
        std::string value;
    };

    struct Metric {
        std::string name;
        METRIC_TYPE metricType;
        std::vector<Dimension> dimensions;
        std::string value;
    };

    class MetricsEmitter {
    public:
        static void CreateMetricsForOp(
            const std::string &metricName,
            const std::vector<Dimension> &dimensions,
            std::vector<Benchmark::Metric> &trackingMetrics,
            const std::function<bool()> &op);

        virtual ~MetricsEmitter() = default;

        virtual void EmitMetric(std::vector<Metric> &&metrics) const = 0;
    };
}
