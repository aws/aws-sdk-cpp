/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
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

#include <cstring>

PerformanceTest::Services::S3::S3PerformanceTest::S3PerformanceTest(const Aws::String& region, const TestCase& config,
                                                                    const Aws::String& availabilityZoneId, int iterations)
    : m_config(config), m_region(region), m_availabilityZoneId(availabilityZoneId), m_iterations(iterations) {}

void PerformanceTest::Services::S3::S3PerformanceTest::Setup() {
  Aws::Client::ClientConfiguration cfg;
  cfg.region = m_region;
  m_s3 = Aws::MakeUnique<Aws::S3::S3Client>("S3PerformanceTest", cfg);

  Aws::S3::Model::CreateBucketRequest cbr;
  Aws::String const bucketId = PerformanceTest::Utils::GenerateUniqueId();

  if (strcmp(m_config.bucketTypeLabel, "s3-express") == 0) {
    m_bucketName = "perf-express-" + bucketId + "--" + m_availabilityZoneId + "--x-s3";
    cbr.SetBucket(m_bucketName);
    Aws::S3::Model::CreateBucketConfiguration bucketConfig;
    bucketConfig.SetLocation(
        Aws::S3::Model::LocationInfo().WithType(Aws::S3::Model::LocationType::AvailabilityZone).WithName(m_availabilityZoneId));

    bucketConfig.SetBucket(Aws::S3::Model::BucketInfo()
                               .WithType(Aws::S3::Model::BucketType::Directory)
                               .WithDataRedundancy(Aws::S3::Model::DataRedundancy::SingleAvailabilityZone));

    cbr.SetCreateBucketConfiguration(bucketConfig);
  } else {
    m_bucketName = "perf-standard-" + bucketId;
    cbr.SetBucket(m_bucketName);
  }

  auto createOutcome = m_s3->CreateBucket(cbr);
  if (!createOutcome.IsSuccess()) {
    AWS_LOG_ERROR("PerformanceTest", ("S3:CreateBucket failed: " + createOutcome.GetError().GetMessage()).c_str());
    m_bucketName.clear();
  }
}

void PerformanceTest::Services::S3::S3PerformanceTest::Run() {
  if (m_bucketName.empty()) {
    AWS_LOG_ERROR("PerformanceTest", "S3:Run - Bucket setup failed, skipping test");
    return;
  }

  const auto randomPayload = PerformanceTest::Utils::RandomString(m_config.sizeBytes);

  // Run PutObject multiple times
  for (int i = 0; i < m_iterations; i++) {
    auto stream = Aws::MakeShared<Aws::StringStream>("PerfStream");
    *stream << randomPayload;

    Aws::S3::Model::PutObjectRequest por;
    por.WithBucket(m_bucketName).WithKey("test-object-" + Aws::Utils::StringUtils::to_string(i)).SetBody(stream);
    por.SetAdditionalCustomHeaderValue("test-dimension-size", m_config.sizeLabel);
    por.SetAdditionalCustomHeaderValue("test-dimension-bucket-type", m_config.bucketTypeLabel);
    auto putOutcome = m_s3->PutObject(por);
    if (!putOutcome.IsSuccess()) {
      AWS_LOG_ERROR("PerformanceTest", ("S3:PutObject failed: " + putOutcome.GetError().GetMessage()).c_str());
    }
  }

  // Run GetObject multiple times
  for (int i = 0; i < m_iterations; i++) {
    Aws::S3::Model::GetObjectRequest gor;
    gor.WithBucket(m_bucketName).WithKey("test-object-" + Aws::Utils::StringUtils::to_string(i));
    gor.SetAdditionalCustomHeaderValue("test-dimension-size", m_config.sizeLabel);
    gor.SetAdditionalCustomHeaderValue("test-dimension-bucket-type", m_config.bucketTypeLabel);
    auto getOutcome = m_s3->GetObject(gor);
    if (!getOutcome.IsSuccess()) {
      AWS_LOG_ERROR("PerformanceTest", ("S3:GetObject failed: " + getOutcome.GetError().GetMessage()).c_str());
    }
  }
}

void PerformanceTest::Services::S3::S3PerformanceTest::TearDown() {
  if (m_bucketName.empty()) {
    AWS_LOG_ERROR("PerformanceTest", "S3:TearDown - No bucket to clean up, setup likely failed");
    return;
  }

  for (int i = 0; i < m_iterations; i++) {
    auto deleteObjectOutcome = m_s3->DeleteObject(
        Aws::S3::Model::DeleteObjectRequest().WithBucket(m_bucketName).WithKey("test-object-" + Aws::Utils::StringUtils::to_string(i)));
    if (!deleteObjectOutcome.IsSuccess()) {
      AWS_LOG_ERROR("PerformanceTest", ("S3:DeleteObject failed: " + deleteObjectOutcome.GetError().GetMessage()).c_str());
    }
  }

  auto deleteBucketOutcome = m_s3->DeleteBucket(Aws::S3::Model::DeleteBucketRequest().WithBucket(m_bucketName));
  if (!deleteBucketOutcome.IsSuccess()) {
    AWS_LOG_ERROR("PerformanceTest", ("S3:DeleteBucket failed: " + deleteBucketOutcome.GetError().GetMessage()).c_str());
  }
}