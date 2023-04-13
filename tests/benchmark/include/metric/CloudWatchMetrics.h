/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/monitoring/CloudWatchClient.h>
#include <aws/monitoring/model/MetricDatum.h>
#include <metric/Metrics.h>

static const char *ALLOC_TAG = "CloudWatchMetrics";

namespace Benchmark {
    class CloudWatchMetrics : public MetricsEmitter {
    public:
        explicit CloudWatchMetrics(const std::shared_ptr<Aws::CloudWatch::CloudWatchClient> &cloudWatchClient =
                Aws::MakeShared<Aws::CloudWatch::CloudWatchClient>(ALLOC_TAG));
        void EmitMetric(std::vector<Metric> &&metrics) const override;
    private:
        std::shared_ptr<Aws::CloudWatch::CloudWatchClient> cloudWatchClient;
        Aws::CloudWatch::Model::MetricDatum ConvertToCloudWatchMetric(const Benchmark::Metric &metric) const;
        std::vector<std::vector<Aws::CloudWatch::Model::MetricDatum>>
        divideIntoSizedChunks(const std::vector<Aws::CloudWatch::Model::MetricDatum>& data, int chunkSize = 1000) const;
    };
}
