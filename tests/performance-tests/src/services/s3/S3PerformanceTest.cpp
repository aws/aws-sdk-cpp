/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/BucketInfo.h>
#include <aws/s3/model/BucketType.h>
#include <aws/s3/model/CreateBucketConfiguration.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/DataRedundancy.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/LocationType.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <performance-tests/Utils.h>
#include <performance-tests/services/s3/S3PerformanceTest.h>

void PerformanceTest::Services::S3::RunTest(Aws::S3::S3Client& s3, const TestCase& config, const Aws::String& availabilityZoneId,
                                            int iterations) {
  auto bucketName = SetupBucket(s3, config, availabilityZoneId);
  if (bucketName.empty()) {
    return;
  }

  RunOperations(s3, bucketName, config, iterations);
  CleanupResources(s3, bucketName, iterations);
}

Aws::String PerformanceTest::Services::S3::SetupBucket(Aws::S3::S3Client& s3, const TestCase& config,
                                                       const Aws::String& availabilityZoneId) {
  Aws::String bucketName;
  Aws::S3::Model::CreateBucketRequest cbr;
  Aws::String const bucketId = PerformanceTest::Utils::GenerateUniqueId();

  if (config.bucketTypeLabel == "s3-express") {
    bucketName = "perf-express-" + bucketId + "--" + availabilityZoneId + "--x-s3";
    cbr.SetBucket(bucketName);
    Aws::S3::Model::CreateBucketConfiguration bucketConfig;
    bucketConfig.SetLocation(
        Aws::S3::Model::LocationInfo().WithType(Aws::S3::Model::LocationType::AvailabilityZone).WithName(availabilityZoneId));

    bucketConfig.SetBucket(Aws::S3::Model::BucketInfo()
                               .WithType(Aws::S3::Model::BucketType::Directory)
                               .WithDataRedundancy(Aws::S3::Model::DataRedundancy::SingleAvailabilityZone));

    cbr.SetCreateBucketConfiguration(bucketConfig);
  } else {
    bucketName = "perf-standard-" + bucketId;
    cbr.SetBucket(bucketName);
  }

  auto createOutcome = s3.CreateBucket(cbr);
  if (!createOutcome.IsSuccess()) {
    PerformanceTest::Utils::LogError("S3", "CreateBucket", createOutcome.GetError().GetMessage());
    return "";
  }

  return bucketName;
}

void PerformanceTest::Services::S3::RunOperations(Aws::S3::S3Client& s3, const Aws::String& bucketName, const TestCase& config,
                                                  int iterations) {
  const auto randomPayload = PerformanceTest::Utils::RandomString(config.sizeBytes);

  // Run PutObject multiple times
  for (int i = 0; i < iterations; i++) {
    auto stream = Aws::MakeShared<Aws::StringStream>("PerfStream");
    *stream << randomPayload;

    Aws::S3::Model::PutObjectRequest por;
    por.WithBucket(bucketName).WithKey("test-object-" + Aws::Utils::StringUtils::to_string(i)).SetBody(stream);
    por.SetAdditionalCustomHeaderValue("test-dimension-size", config.sizeLabel);
    por.SetAdditionalCustomHeaderValue("test-dimension-bucket-type", config.bucketTypeLabel);
    auto putOutcome = s3.PutObject(por);
    if (!putOutcome.IsSuccess()) {
      PerformanceTest::Utils::LogError("S3", "PutObject", putOutcome.GetError().GetMessage());
    }
  }

  // Run GetObject multiple times
  for (int i = 0; i < iterations; i++) {
    Aws::S3::Model::GetObjectRequest gor;
    gor.WithBucket(bucketName).WithKey("test-object-" + Aws::Utils::StringUtils::to_string(i));
    gor.SetAdditionalCustomHeaderValue("test-dimension-size", config.sizeLabel);
    gor.SetAdditionalCustomHeaderValue("test-dimension-bucket-type", config.bucketTypeLabel);
    auto getOutcome = s3.GetObject(gor);
    if (!getOutcome.IsSuccess()) {
      PerformanceTest::Utils::LogError("S3", "GetObject", getOutcome.GetError().GetMessage());
    }
  }
}

void PerformanceTest::Services::S3::CleanupResources(Aws::S3::S3Client& s3, const Aws::String& bucketName, int iterations) {
  for (int i = 0; i < iterations; i++) {
    auto deleteObjectOutcome = s3.DeleteObject(
        Aws::S3::Model::DeleteObjectRequest().WithBucket(bucketName).WithKey("test-object-" + Aws::Utils::StringUtils::to_string(i)));
    if (!deleteObjectOutcome.IsSuccess()) {
      PerformanceTest::Utils::LogError("S3", "DeleteObject", deleteObjectOutcome.GetError().GetMessage());
    }
  }

  auto deleteBucketOutcome = s3.DeleteBucket(Aws::S3::Model::DeleteBucketRequest().WithBucket(bucketName));
  if (!deleteBucketOutcome.IsSuccess()) {
    PerformanceTest::Utils::LogError("S3", "DeleteBucket", deleteBucketOutcome.GetError().GetMessage());
  }
}