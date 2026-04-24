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
        virtual ~MetricsEmitter() = default;
        virtual void EmitMetricForOp(const std::string &metricName,
            const std::vector<Dimension> &dimensions,
            const std::function<bool()> &op) const = 0;
    protected:
        std::vector<Benchmark::Metric> CreateMetricsForOp(const std::string &metricName,
            const std::vector<Dimension> &dimensions,
            const std::function<bool()> &op) const;
    };
}
