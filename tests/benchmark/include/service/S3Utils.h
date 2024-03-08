/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/s3/S3Client.h>
#include <metric/Metrics.h>
#include <string>
#include <map>

namespace Benchmark {
    class S3Utils final {
    public:
        S3Utils() = delete;

        static std::unique_ptr<Aws::S3::S3Client> makeClient(const std::map<std::string, std::string> &cliDimensions);

        static std::string getBucketPrefix(const std::map<std::string, std::string> &cliDimensions);

        static std::vector<Dimension> getMetricDimensions(
            const std::map<std::string, std::string> &cliDimensions,
            const std::vector<Dimension> &metricDimension);
    };
}