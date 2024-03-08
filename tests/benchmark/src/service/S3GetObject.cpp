/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/core/utils/UUID.h>
#include <service/S3GetObject.h>
#include <service/S3Utils.h>
#include <Util.h>
#include <memory>

using namespace Aws;
using namespace Aws::Utils;
using namespace Aws::S3;
using namespace Aws::S3::Model;
using namespace std::chrono;

Benchmark::TestFunction Benchmark::S3GetObject::CreateTestFunction() {
    return [](const Configuration &configuration, const std::shared_ptr<MetricsEmitter> metricsEmitter) -> void {
        // Create Bucket
        const auto dimensions = configuration.GetConfiguration().dimensions;
        auto s3 = S3Utils::makeClient(dimensions);
        const auto bucketName = "get-bucket-benchmark-" +
                                StringUtils::ToLower(static_cast<Aws::String>(UUID::RandomUUID()).c_str()).substr(10) +
                                S3Utils::getBucketPrefix(dimensions);
        metricsEmitter->EmitMetricForOp("CreateBucket",
            S3Utils::getMetricDimensions(dimensions, {{"Service", "S3"}, {"Operation", "CreateBucket"}}),
            [&]() -> bool {
                auto response = s3->CreateBucket(CreateBucketRequest().WithBucket(bucketName));
                if (!response.IsSuccess()) {
                    std::cout << "Create Bucket Failed With: "
                              << response.GetError().GetMessage()
                              << "\n";;
                }
                return response.IsSuccess();
            });

        // Setup object to get
        const auto testObjectKey = "BenchmarkTestObjectKey";
        const auto randomBody64K = RandomString(64000);
        auto putObjectRequest = PutObjectRequest().WithBucket(bucketName).WithKey(testObjectKey);
        const std::shared_ptr<Aws::IOStream> inputData = Aws::MakeShared<Aws::StringStream>("");
        *inputData << randomBody64K.c_str();
        putObjectRequest.SetBody(inputData);
        metricsEmitter->EmitMetricForOp(
            "PutObject",
            S3Utils::getMetricDimensions(dimensions, {{"Service", "S3"}, {"Operation", "PutObject"}}),
            [&]() -> bool {
                auto response = s3->PutObject(putObjectRequest);
                if (!response.IsSuccess()) {
                    std::cout << "Put Object Failed With: "
                              << response.GetError().GetMessage()
                              << "\n";;
                }
                return response.IsSuccess();
            });

        // Run GetObject requests
        const auto timeToEnd = duration_cast<milliseconds>(steady_clock::now().time_since_epoch()).count() +
                               configuration.GetConfiguration().durationMillis;
        auto getObjectRequest = GetObjectRequest().WithBucket(bucketName).WithKey(testObjectKey);
        while (duration_cast<milliseconds>(steady_clock::now().time_since_epoch()).count() < timeToEnd) { ;
            metricsEmitter->EmitMetricForOp(
                "GetObject",
                S3Utils::getMetricDimensions(dimensions, {{"Service", "S3"}, {"Operation", "GetObject"}}),
                [&]() -> bool {
                    auto response = s3->GetObject(getObjectRequest);
                    if (!response.IsSuccess()) {
                        std::cout << "Get Object Failed With: "
                                  << response.GetError().GetMessage()
                                  << "\n";;
                    }
                    return response.IsSuccess();
                });
        }

        // Clean up
        metricsEmitter->EmitMetricForOp("DeleteObject",
            S3Utils::getMetricDimensions(dimensions, {{"Service", "S3"}, {"Operation", "DeleteObject"}}),
            [&]() -> bool {
                auto response = s3->DeleteObject(DeleteObjectRequest().WithBucket(bucketName).WithKey(testObjectKey));
                if (!response.IsSuccess()) {
                    std::cout << "Delete Object Failed With: "
                              << response.GetError().GetMessage()
                              << "\n";;
                }
                return response.IsSuccess();
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
