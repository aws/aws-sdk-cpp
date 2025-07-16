/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/Outcome.h>
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
#include <performance-tests/services/s3/S3TestConfig.h>

#include <cassert>

PerformanceTest::Services::S3::S3PerformanceTest::S3PerformanceTest(const Aws::Client::ClientConfiguration& clientConfig,
                                                                    const TestConfig::TestCase& testConfig, int iterations,
                                                                    const Aws::String& availabilityZoneId)
    : m_s3(Aws::MakeUnique<Aws::S3::S3Client>("S3PerformanceTest", clientConfig)),
      m_testConfig(testConfig),
      m_iterations(iterations),
      m_bucketName(testConfig.bucketType == TestConfig::BucketType::Express
                       ? "perf-express-" + PerformanceTest::Utils::GenerateUniqueId() + "--" + availabilityZoneId + "--x-s3"
                       : "perf-standard-" + PerformanceTest::Utils::GenerateUniqueId()),
      m_availabilityZoneId(availabilityZoneId) {
  assert(m_s3 && "S3 client not initialized");
}

Aws::Utils::Outcome<Aws::NoResult, Aws::String> PerformanceTest::Services::S3::S3PerformanceTest::Setup() {
  Aws::S3::Model::CreateBucketRequest cbr;
  cbr.SetBucket(m_bucketName);

  if (m_testConfig.bucketType == TestConfig::BucketType::Express) {
    Aws::S3::Model::CreateBucketConfiguration bucketConfig;
    bucketConfig.SetLocation(
        Aws::S3::Model::LocationInfo().WithType(Aws::S3::Model::LocationType::AvailabilityZone).WithName(m_availabilityZoneId));

    bucketConfig.SetBucket(Aws::S3::Model::BucketInfo()
                               .WithType(Aws::S3::Model::BucketType::Directory)
                               .WithDataRedundancy(Aws::S3::Model::DataRedundancy::SingleAvailabilityZone));

    cbr.SetCreateBucketConfiguration(bucketConfig);
  }

  auto createOutcome = m_s3->CreateBucket(cbr);
  if (!createOutcome.IsSuccess()) {
    return "S3 Setup() - CreateBucket failed: " + createOutcome.GetError().GetMessage();
  }
  return Aws::NoResult();
}

void PerformanceTest::Services::S3::S3PerformanceTest::Run() {
  const auto randomPayload = PerformanceTest::Utils::RandomString(TestConfig::GetPayloadSizeInBytes(m_testConfig.payloadSize));

  // Run PutObject multiple times
  for (int i = 0; i < m_iterations; i++) {
    const auto stream = Aws::MakeShared<Aws::StringStream>("PerfStream", randomPayload);

    Aws::S3::Model::PutObjectRequest por;
    por.WithBucket(m_bucketName).WithKey("test-object-" + Aws::Utils::StringUtils::to_string(i)).SetBody(stream);
    por.SetAdditionalCustomHeaderValue("test-dimension-size", TestConfig::GetPayloadSizeLabel(m_testConfig.payloadSize));
    por.SetAdditionalCustomHeaderValue("test-dimension-bucket-type", TestConfig::GetBucketTypeLabel(m_testConfig.bucketType));
    auto putOutcome = m_s3->PutObject(por);
    if (!putOutcome.IsSuccess()) {
      AWS_LOG_ERROR("PerformanceTest", ("S3 Run() - PutObject failed: " + putOutcome.GetError().GetMessage()).c_str());
    }
  }

  // Run GetObject multiple times
  for (int i = 0; i < m_iterations; i++) {
    Aws::S3::Model::GetObjectRequest gor;
    gor.WithBucket(m_bucketName).WithKey("test-object-" + Aws::Utils::StringUtils::to_string(i));
    gor.SetAdditionalCustomHeaderValue("test-dimension-size", TestConfig::GetPayloadSizeLabel(m_testConfig.payloadSize));
    gor.SetAdditionalCustomHeaderValue("test-dimension-bucket-type", TestConfig::GetBucketTypeLabel(m_testConfig.bucketType));
    auto getOutcome = m_s3->GetObject(gor);
    if (!getOutcome.IsSuccess()) {
      AWS_LOG_ERROR("PerformanceTest", ("S3 Run() - GetObject failed: " + getOutcome.GetError().GetMessage()).c_str());
    }
  }
}

void PerformanceTest::Services::S3::S3PerformanceTest::TearDown() {
  for (int i = 0; i < m_iterations; i++) {
    auto deleteObjectOutcome = m_s3->DeleteObject(
        Aws::S3::Model::DeleteObjectRequest().WithBucket(m_bucketName).WithKey("test-object-" + Aws::Utils::StringUtils::to_string(i)));
    if (!deleteObjectOutcome.IsSuccess()) {
      AWS_LOG_ERROR("PerformanceTest", ("S3 TearDown() - DeleteObject failed: " + deleteObjectOutcome.GetError().GetMessage()).c_str());
    }
  }

  auto deleteBucketOutcome = m_s3->DeleteBucket(Aws::S3::Model::DeleteBucketRequest().WithBucket(m_bucketName));
  if (!deleteBucketOutcome.IsSuccess()) {
    AWS_LOG_ERROR("PerformanceTest", ("S3 TearDown() - DeleteBucket failed: " + deleteBucketOutcome.GetError().GetMessage()).c_str());
  }
}