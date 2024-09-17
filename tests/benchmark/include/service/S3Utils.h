/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#ifdef AWS_SDK_BENCHMARK_USE_CRT
#include <aws/s3-crt/S3CrtClient.h>
using S3Client = Aws::S3Crt::S3CrtClient;
#else
#include <aws/s3/S3Client.h>
using S3Client = Aws::S3::S3Client;
#endif

#include <metric/Metrics.h>
#include <string>

namespace Benchmark {

    class S3Utils final {
    public:
        S3Utils() = delete;
        static std::unique_ptr<S3Client> makeClient(const std::map<std::string, std::string> &cliDimensions);

        static std::string getBucketPrefix(const std::map<std::string, std::string> &cliDimensions);

        static std::vector<Dimension> getMetricDimensions(
            const std::map<std::string, std::string> &cliDimensions,
            const std::vector<Dimension> &metricDimension);
    };
}