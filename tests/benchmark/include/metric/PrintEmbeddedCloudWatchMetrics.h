/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <metric/Metrics.h>

/**
 * Class that prints out metrics in the embedded cloudwatch format
 *
 * https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Embedded_Metric_Format_Specification.html
 */
namespace Benchmark {
    class PrintEmbeddedCloudWatchMetrics : public MetricsEmitter {
    public:
        void EmitMetricForOp(const std::string &metricName,
            const std::vector<Dimension> &dimensions,
            const std::function<bool()> &op) const override;
    private:
        std::string dimensionStringFromVector(const std::vector<Benchmark::Dimension>& dimensions,
            const std::function<std::string (Benchmark::Dimension)>& stringify) const;
    };
}
