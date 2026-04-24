/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <metric/PrintEmbeddedCloudWatchMetrics.h>
#include <metric/Metrics.h>
#include <algorithm>
#include <chrono>
#include <iostream>
#include <sstream>

using namespace std::chrono;

void Benchmark::PrintEmbeddedCloudWatchMetrics::EmitMetricForOp(const std::string &metricName,
    const std::vector<Dimension> &dimensions,
    const std::function<bool()> &op) const {

    auto metrics = CreateMetricsForOp(metricName, dimensions, op);
    std::for_each(metrics.cbegin(), metrics.cend(), [this](const Metric &metric) {
        auto fullDimensions = this->dimensionStringFromVector(metric.dimensions, [](const Dimension &dimension) {
            return "\"" + dimension.name + "\":" + " \"" + dimension.value + "\"";
        });

        auto dimensionNames = this->dimensionStringFromVector(metric.dimensions, [](const Dimension &dimension) {
            return "\"" + dimension.name + "\"";
        });

        auto name = [&]() -> std::string {
            if (metric.metricType == METRIC_TYPE::DURATION) {
                return metric.name + "Latency";
            }
            return metric.name + "Success";
        }();

        auto unit = [&]() -> std::string {
            if (metric.metricType == METRIC_TYPE::DURATION) {
                return R"("Milliseconds")";
            }
            return R"("None")";
        }();

        auto value = [&]() -> std::string {
            if (metric.metricType == METRIC_TYPE::SUCCESS) {
                auto successCount = metric.value == "true" ? "1" : "0";
                return successCount;
            }
            return metric.value;
        }();

        std::cout << "{" << fullDimensions << ", "
                  << R"("_aws": { )"
                  << R"("Timestamp": )"
                  << duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count() << ", "
                  << R"("CloudWatchMetrics": [ )"
                  << "{"
                  << R"("Namespace": "AwsCppSdkBenchmarks", )"
                  << R"("Dimensions": [[)" << dimensionNames << R"(]], )"
                  << R"("Metrics": [{ "Name": ")" << name << R"(", "Unit": )" << unit << R"(}])"
                  << "}"
                  << "]}"
                  << ", \"" << name << "\": " << value
                  << "}\n";
    });
}

std::string Benchmark::PrintEmbeddedCloudWatchMetrics::dimensionStringFromVector(const std::vector<Benchmark::Dimension> &dimensions,
    const std::function<std::string(Benchmark::Dimension)> &stringify) const {
    std::ostringstream stringStream;
    for (size_t i = 0; i < dimensions.size() - 1; ++i) {
        stringStream << stringify(dimensions.at(i)) << ",";
    }
    stringStream << stringify(dimensions.at(dimensions.size() - 1));
    return stringStream.str();
}
