/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <metric/PrintMetrics.h>
#include <metric/Metrics.h>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <iterator>

const char *const delim = ", ";

void Benchmark::PrintMetrics::EmitMetric(std::vector<Metric> &&metrics) const {
    std::for_each(metrics.cbegin(), metrics.cend(), [](const Metric &metric) {
        std::vector<std::string> dimensionStrings{metric.dimensions.size()};
        std::transform(metric.dimensions.cbegin(),
            metric.dimensions.cend(),
            dimensionStrings.begin(),
            [](const Dimension &dimension) {
                return "{ name: " + dimension.name + ", value: " + dimension.value + "}";
            });
        std::ostringstream dimensionString;
        std::copy(dimensionStrings.cbegin(),
            dimensionStrings.cend(),
            std::ostream_iterator<std::string>(dimensionString, delim));
        std::cout << "Metric:" << "{ "
                  << metric.name
                  << ", "
                  << dimensionString.str()
                  << metric.metricType
                  << ", "
                  << metric.value
                  << "}\n";
    });
}
