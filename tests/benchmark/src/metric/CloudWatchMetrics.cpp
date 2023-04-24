/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <metric/CloudWatchMetrics.h>
#include <aws/monitoring/model/PutMetricDataRequest.h>
#include <algorithm>

using namespace Aws;
using namespace Aws::CloudWatch;
using namespace Aws::CloudWatch::Model;

Benchmark::CloudWatchMetrics::CloudWatchMetrics(
    const std::shared_ptr<Aws::CloudWatch::CloudWatchClient> &cloudWatchClient) : cloudWatchClient(cloudWatchClient) {}

void Benchmark::CloudWatchMetrics::EmitMetricForOp(const std::string &metricName,
    const std::vector<Dimension> &dimensions,
    const std::function<bool()> &op) const {

    auto metrics = CreateMetricsForOp(metricName, dimensions, op);
    std::vector<MetricDatum> data{metrics.size()};
    std::transform(metrics.cbegin(),
        metrics.cend(),
        data.begin(),
        [this](const Metric &metric) -> MetricDatum { return this->ConvertToCloudWatchMetric(metric); });

    this->cloudWatchClient->PutMetricData(PutMetricDataRequest()
        .WithNamespace("AwsCppSdkBenchmarks")
        .WithMetricData(data));
}


Aws::CloudWatch::Model::MetricDatum
Benchmark::CloudWatchMetrics::ConvertToCloudWatchMetric(const Benchmark::Metric &metric) const {
    std::vector<CloudWatch::Model::Dimension> dimensions{metric.dimensions.size()};
    std::transform(metric.dimensions.cbegin(),
        metric.dimensions.cend(),
        dimensions.begin(),
        [](const Benchmark::Dimension &dimension) {
            return CloudWatch::Model::Dimension().WithName(dimension.name).WithValue(dimension.value);
        });

    auto data = MetricDatum().WithDimensions(dimensions);
    if (metric.metricType == SUCCESS) {
        data = data.WithMetricName(metric.name + "Success");
        metric.value == "false" ?
            data = data.WithUnit(StandardUnit::None).WithValue(1) :
            data = data.WithUnit(StandardUnit::None).WithValue(0);
    } else if (metric.metricType == DURATION) {
        data = data.WithMetricName(metric.name + "Latency")
            .WithUnit(StandardUnit::Milliseconds)
            .WithValue(std::atof(metric.value.c_str()));
    }
    return data;
}
