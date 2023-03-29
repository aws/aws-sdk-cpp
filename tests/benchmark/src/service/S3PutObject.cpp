/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <service/S3PutObject.h>
#include <Util.h>
#include <metric/Metrics.h>
#include <aws/core/Aws.h>
#include <aws/core/utils/UUID.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <iostream>
#include <chrono>

using namespace Aws;
using namespace Aws::Utils;
using namespace Aws::S3;
using namespace Aws::S3::Model;
using namespace std::chrono;

const static char *ALLOC_TAG = "PUT_OBJECT_BENCHMARK";

Benchmark::TestFunction Benchmark::S3PutObject::CreateTestFunction() {
    return [](const Configuration &configuration) -> std::vector<Metric> {
        std::vector<Metric> metrics;

        //Create Bucket
        auto s3 = Aws::MakeUnique<S3Client>(ALLOC_TAG);
        const auto bucketName = "put-bucket-benchmark-" + RandomString(8);
        Benchmark::MetricsEmitter::CreateMetricsForOp("CreateBucket",
            {{"Service", "S3"}, {"Operation", "CreateBucket"}},
            metrics,
            [&]() -> bool {
                auto response = s3->CreateBucket(CreateBucketRequest().WithBucket(bucketName));
                return response.IsSuccess();
            });

        //Make put requests
        const auto randomBody64K = RandomString(64000);
        std::vector<std::string> keysToDelete;
        const auto timeToEnd = duration_cast<milliseconds>(steady_clock::now().time_since_epoch()).count() +
                               configuration.GetConfiguration().durationMillis;
        while (duration_cast<milliseconds>(steady_clock::now().time_since_epoch()).count() < timeToEnd) {
            auto key = RandomString(8);
            keysToDelete.push_back(key);
            auto putObjectRequest = PutObjectRequest().WithBucket(bucketName).WithKey(key);
            const std::shared_ptr<Aws::IOStream> inputData = Aws::MakeShared<Aws::StringStream>("");
            *inputData << randomBody64K.c_str();
            putObjectRequest.SetBody(inputData);
            Benchmark::MetricsEmitter::CreateMetricsForOp(
                "PutObject",
                {{"Service", "S3"}, {"Operation", "PutObject"}},
                metrics,
                [&]() -> bool {
                    auto response = s3->PutObject(putObjectRequest);
                    return response.IsSuccess();
                });
        }

        // Clean up
        std::for_each(keysToDelete.begin(), keysToDelete.end(), [&](const std::string &key) {
            Benchmark::MetricsEmitter::CreateMetricsForOp("DeleteObject",
                {{"Service", "S3"}, {"Operation", "DeleteObject"}},
                metrics,
                [&]() -> bool {
                    auto response = s3->DeleteObject(DeleteObjectRequest().WithKey(key));
                    return response.IsSuccess();
                });
        });

        Benchmark::MetricsEmitter::CreateMetricsForOp(
            "DeleteBucket",
            {{"Service", "S3"}, {"Operation", "DeleteBucket"}}, metrics, [&]() -> bool {
                auto response = s3->DeleteBucket(DeleteBucketRequest().WithBucket(bucketName));
                return response.IsSuccess();
            });

        return metrics;
    };
}
