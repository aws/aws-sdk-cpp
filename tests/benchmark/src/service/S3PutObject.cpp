/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <service/S3PutObject.h>
#include <service/S3Utils.h>
#include <Util.h>
#include <metric/Metrics.h>
#include <aws/core/utils/UUID.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <iostream>
#include <chrono>
#include <memory>

using namespace Aws;
using namespace Aws::Utils;
using namespace Aws::S3;
using namespace Aws::S3::Model;
using namespace std::chrono;

Benchmark::TestFunction Benchmark::S3PutObject::CreateTestFunction() {
    return [](const Configuration &configuration, const std::shared_ptr<MetricsEmitter> metricsEmitter) -> void {
        //Create Bucket
        const auto dimensions = configuration.GetConfiguration().dimensions;
        auto s3 = S3Utils::makeClient(dimensions);
        const auto bucketName = "put-bucket-benchmark-" +
                                StringUtils::ToLower(static_cast<Aws::String>(UUID::RandomUUID()).c_str()).substr(10) +
                                S3Utils::getBucketPrefix(dimensions);
        metricsEmitter->EmitMetricForOp("CreateBucket",
            S3Utils::getMetricDimensions(dimensions, {{"Service", "S3"}, {"Operation", "CreateBucket"}}),
            [&]() -> bool {
                auto response = s3->CreateBucket(CreateBucketRequest().WithBucket(bucketName));
                if (!response.IsSuccess()) {
                    std::cout << "Create Bucket Failed With: "
                              << response.GetError().GetMessage()
                              << "\n";
                }
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
            metricsEmitter->EmitMetricForOp(
                "PutObject",
                S3Utils::getMetricDimensions(dimensions, {{"Service", "S3"}, {"Operation", "PutObject"}}),
                [&]() -> bool {
                    auto response = s3->PutObject(putObjectRequest);
                    if (!response.IsSuccess()) {
                        std::cout << "Put Failed With: "
                                  << response.GetError().GetMessage()
                                  << "\n";;
                    }
                    return response.IsSuccess();
                });
        }

        // Clean up
        std::for_each(keysToDelete.begin(), keysToDelete.end(), [&](const std::string &key) {
            metricsEmitter->EmitMetricForOp("DeleteObject",
                S3Utils::getMetricDimensions(dimensions, {{"Service", "S3"}, {"Operation", "DeleteObject"}}),
                [&]() -> bool {
                    auto response = s3->DeleteObject(DeleteObjectRequest().WithBucket(bucketName).WithKey(key));
                    if (!response.IsSuccess()) {
                        std::cout << "Delete Object Failed With: "
                                  << response.GetError().GetMessage()
                                  << "\n";;
                    }
                    return response.IsSuccess();
                });
        });

        metricsEmitter->EmitMetricForOp(
            "DeleteBucket",
            S3Utils::getMetricDimensions(dimensions, {{"Service", "S3"}, {"Operation", "DeleteBucket"}}),
            [&]() -> bool {
                auto response = s3->DeleteBucket(DeleteBucketRequest().WithBucket(bucketName));
                if (!response.IsSuccess()) {
                    std::cout << "Delete Bucket Failed With: "
                              << response.GetError().GetMessage()
                              << "\n";;
                }
                return response.IsSuccess();
            });
    };
}
