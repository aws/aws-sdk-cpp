/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include "performance_tests/services/s3/S3PerformanceTest.h"

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/BucketInfo.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/DataRedundancy.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/PutObjectRequest.h>

#include <iostream>
#include <string>
#include <utility>

#include "performance_tests/reporting/JsonReportingMetrics.h"

bool PerformanceTest::Services::S3::RunTest(Aws::S3::S3Client& s3, const TestCase& config, const Aws::String& availabilityZoneId,
                                            int iterations) {
  Aws::Vector<std::pair<Aws::String, Aws::String>> dimensions;
  dimensions.push_back(std::make_pair("Size", config.sizeLabel));
  dimensions.push_back(std::make_pair("BucketType", config.bucketTypeLabel));
  PerformanceTest::Reporting::JsonReportingMetrics::SetTestContext(dimensions);

  Aws::String bucketName;
  Aws::S3::Model::CreateBucketRequest cbr;
  Aws::String raw_uuid = static_cast<Aws::String>(Aws::Utils::UUID::RandomUUID());
  Aws::String id = Aws::Utils::StringUtils::ToLower(raw_uuid.c_str()).substr(0, 8);

  if (config.bucketTypeLabel == "s3-express") {
    bucketName = "perf-express-" + id + "--" + availabilityZoneId + "--x-s3";
    cbr.SetBucket(bucketName);
    Aws::S3::Model::CreateBucketConfiguration bucketConfig;
    bucketConfig.SetLocation(
        Aws::S3::Model::LocationInfo().WithType(Aws::S3::Model::LocationType::AvailabilityZone).WithName(availabilityZoneId));

    bucketConfig.SetBucket(Aws::S3::Model::BucketInfo()
                               .WithType(Aws::S3::Model::BucketType::Directory)
                               .WithDataRedundancy(Aws::S3::Model::DataRedundancy::SingleAvailabilityZone));

    cbr.SetCreateBucketConfiguration(bucketConfig);
  } else {
    bucketName = "perf-standard-" + id;
    cbr.SetBucket(bucketName);
  }

  auto createOutcome = s3.CreateBucket(cbr);
  if (!createOutcome.IsSuccess()) {
    std::cerr << "[ERROR] CreateBucket failed for " << bucketName << ": " << createOutcome.GetError().GetMessage() << std::endl;
    return false;
  }

  Aws::String payload(config.sizeBytes, 'x');

  // Run PutObject multiple times
  for (int i = 0; i < iterations; i++) {
    auto stream = Aws::MakeShared<Aws::StringStream>("PerfStream");
    *stream << payload;

    Aws::S3::Model::PutObjectRequest por;
    por.WithBucket(bucketName).WithKey("test-object-" + std::to_string(i)).SetBody(stream);
    if (!s3.PutObject(por).IsSuccess()) {
      std::cerr << "[ERROR] PutObject failed!" << std::endl;
    }
  }

  // Run GetObject multiple times
  for (int i = 0; i < iterations; i++) {
    Aws::S3::Model::GetObjectRequest gor;
    gor.WithBucket(bucketName).WithKey("test-object-" + std::to_string(i));
    if (!s3.GetObject(gor).IsSuccess()) {
      std::cerr << "[ERROR] GetObject failed!" << std::endl;
    }
  }

  for (int i = 0; i < iterations; i++) {
    s3.DeleteObject(Aws::S3::Model::DeleteObjectRequest().WithBucket(bucketName).WithKey("test-object-" + std::to_string(i)));
  }
  s3.DeleteBucket(Aws::S3::Model::DeleteBucketRequest().WithBucket(bucketName));

  return true;
}