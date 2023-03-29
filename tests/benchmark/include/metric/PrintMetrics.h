/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <metric/Metrics.h>

namespace Benchmark {
    class PrintMetrics : public MetricsEmitter {
    public:
        void EmitMetric(std::vector<Metric> &&metrics) const override;
    };
}
