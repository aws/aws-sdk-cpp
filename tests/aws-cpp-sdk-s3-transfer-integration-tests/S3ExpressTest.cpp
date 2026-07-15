/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 *
 * S3 Express (directory bucket) coverage — mandated by the S3 Transfer Manager SEP:
 * "Testing plans for S3 Transfer Manager features MUST include S3 Express to ensure consistent
 * behavior between general purpose and directory buckets."
 *
 * Adapted from tests/aws-cpp-sdk-s3-crt-integration-tests/S3ExpressTest.cpp — S3Crt drives PutObject
 * / GetObject / MPU against a directory bucket. Here we drive Upload and Download through TM 2.0
 * to prove parity. Covers SEP upload-single-object case #10 and download-single-object case #12.
 *
 * Uses its own suite fixture (not S3TransferTestFixture) because directory buckets have a distinct
 * naming/creation protocol: `<name>--<az>--x-s3` suffix, LocationInfo + BucketInfo config, and
 * an availability-zone location.
 */
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/TestingEnvironment.h>

#include <aws/core/Region.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <aws/s3/S3Client.h>
#include <aws/s3/S3ClientConfiguration.h>
#include <aws/s3/model/BucketInfo.h>
#include <aws/s3/model/BucketType.h>
#include <aws/s3/model/CreateBucketConfiguration.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/DataRedundancy.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/ListObjectsV2Request.h>
#include <aws/s3/model/LocationInfo.h>
#include <aws/s3/model/LocationType.h>
#include <aws/s3/model/PutObjectRequest.h>

#include <aws/s3-transfer/S3TransferManager.h>

using namespace Aws::S3::Transfer;

namespace S3TransferIntegrationTests {

namespace {
constexpr const char* ALLOCATION_TAG = "S3ExpressTM2";
constexpr const char* S3_EXPRESS_SUFFIX = "--use1-az6--x-s3";
constexpr const char* S3_EXPRESS_AZ = "use1-az6";
constexpr const char* S3_EXPRESS_REGION = "us-east-1";  // S3 Express requires us-east-1 (or the AZ's region)
}  // namespace

class S3ExpressTransferTests : public Aws::Testing::AwsCppSdkGTestSuite {
 protected:
  static std::shared_ptr<Aws::S3::S3Client> s_s3Client;
  static Aws::String s_directoryBucket;

  static void SetUpTestSuite() {
    Aws::Testing::AwsCppSdkGTestSuite::SetUpTestSuite();

    Aws::S3::S3ClientConfiguration config;
    config.region = S3_EXPRESS_REGION;
    s_s3Client = Aws::MakeShared<Aws::S3::S3Client>(ALLOCATION_TAG, config);

    s_directoryBucket = ComputeDirectoryBucketName();
    Aws::S3::Model::CreateBucketRequest createBucket;
    createBucket.SetBucket(s_directoryBucket);
    Aws::S3::Model::CreateBucketConfiguration bucketConfig;
    bucketConfig.SetLocation(Aws::S3::Model::LocationInfo()
                                 .WithType(Aws::S3::Model::LocationType::AvailabilityZone)
                                 .WithName(S3_EXPRESS_AZ));
    bucketConfig.SetBucket(Aws::S3::Model::BucketInfo()
                               .WithType(Aws::S3::Model::BucketType::Directory)
                               .WithDataRedundancy(Aws::S3::Model::DataRedundancy::SingleAvailabilityZone));
    createBucket.SetCreateBucketConfiguration(bucketConfig);
    auto outcome = s_s3Client->CreateBucket(createBucket);
    // BucketAlreadyOwnedByYou / OperationAborted are benign in a shared test account.
    if (!outcome.IsSuccess() && outcome.GetError().GetResponseCode() != Aws::Http::HttpResponseCode::CONFLICT) {
      AWS_ASSERT_SUCCESS(outcome);
    }
  }

  static void TearDownTestSuite() {
    if (s_s3Client) {
      EmptyBucket(s_directoryBucket);
      Aws::S3::Model::DeleteBucketRequest deleteBucket;
      deleteBucket.SetBucket(s_directoryBucket);
      s_s3Client->DeleteBucket(deleteBucket);
      s_s3Client = nullptr;
    }
    Aws::Testing::AwsCppSdkGTestSuite::TearDownTestSuite();
  }

  static Aws::String ComputeDirectoryBucketName() {
    Aws::String uuid = Aws::Utils::StringUtils::ToLower(Aws::String(Aws::Utils::UUID::RandomUUID()).c_str());
    uuid.erase(std::remove(uuid.begin(), uuid.end(), '-'), uuid.end());
    return Aws::Testing::GetAwsResourcePrefix() + Aws::String("tm2exp") + uuid.substr(0, 12) + S3_EXPRESS_SUFFIX;
  }

  static void EmptyBucket(const Aws::String& bucketName) {
    Aws::S3::Model::ListObjectsV2Request listRequest;
    listRequest.SetBucket(bucketName);
    auto listOutcome = s_s3Client->ListObjectsV2(listRequest);
    if (!listOutcome.IsSuccess()) {
      return;
    }
    for (const auto& object : listOutcome.GetResult().GetContents()) {
      Aws::S3::Model::DeleteObjectRequest deleteRequest;
      deleteRequest.SetBucket(bucketName);
      deleteRequest.SetKey(object.GetKey());
      s_s3Client->DeleteObject(deleteRequest);
    }
  }

  S3TransferManagerConfiguration MakeConfig() {
    S3TransferManagerConfiguration config;
    config.region = S3_EXPRESS_REGION;
    return config;
  }

  static Aws::String UniqueKey() { return Aws::String(Aws::Utils::UUID::RandomUUID()).c_str(); }
};

std::shared_ptr<Aws::S3::S3Client> S3ExpressTransferTests::s_s3Client = nullptr;
Aws::String S3ExpressTransferTests::s_directoryBucket;

// SEP upload-single-object #10: single-part upload to an S3 Express directory bucket succeeds.
TEST_F(S3ExpressTransferTests, DirectoryBucketSinglePartUpload) {
  const uint64_t size = 5ULL * 1024 * 1024;  // 5 MiB, matches SEP case size
  const Aws::String key = UniqueKey();

  auto body = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
  const Aws::String chunk(64 * 1024, 'a');
  for (uint64_t written = 0; written < size; written += chunk.size()) {
    body->write(chunk.data(), static_cast<std::streamsize>(std::min<uint64_t>(chunk.size(), size - written)));
  }

  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket(s_directoryBucket);
  putRequest.SetKey(key);
  UploadRequest request(putRequest, body);

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);

  Aws::S3::Model::HeadObjectRequest head;
  head.SetBucket(s_directoryBucket);
  head.SetKey(key);
  auto headOutcome = s_s3Client->HeadObject(head);
  AWS_ASSERT_SUCCESS(headOutcome);
  EXPECT_EQ(static_cast<int64_t>(size), headOutcome.GetResult().GetContentLength());
}

// SEP download-single-object #12: single-part download from an S3 Express directory bucket succeeds.
TEST_F(S3ExpressTransferTests, DirectoryBucketSinglePartDownload) {
  const uint64_t size = 5ULL * 1024 * 1024;
  const Aws::String key = UniqueKey();

  // Seed the object via the plain S3 client.
  auto seedBody = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
  const Aws::String chunk(64 * 1024, 'b');
  for (uint64_t written = 0; written < size; written += chunk.size()) {
    seedBody->write(chunk.data(), static_cast<std::streamsize>(std::min<uint64_t>(chunk.size(), size - written)));
  }
  Aws::S3::Model::PutObjectRequest put;
  put.SetBucket(s_directoryBucket);
  put.SetKey(key);
  put.SetBody(seedBody);
  auto putOutcome = s_s3Client->PutObject(put);
  AWS_ASSERT_SUCCESS(putOutcome);

  // Download via TM 2.0 with a DataReceiver to avoid needing on-disk temp files.
  class CountingReceiver : public DownloadDataReceiver {
   public:
    void OnDataReceived(S3DownloadBuffer buffer) override { m_bytes += buffer.GetData().len; }
    uint64_t Bytes() const { return m_bytes.load(); }
   private:
    std::atomic<uint64_t> m_bytes{0};
  };
  auto receiver = Aws::MakeShared<CountingReceiver>(ALLOCATION_TAG);

  Aws::S3::Model::GetObjectRequest getRequest;
  getRequest.SetBucket(s_directoryBucket);
  getRequest.SetKey(key);
  DownloadRequest request(getRequest, receiver);

  S3TransferManager manager(MakeConfig());
  DownloadOutcome outcome = manager.Download(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(size, receiver->Bytes());
}

// Multipart upload to a directory bucket exercises the CRT's CreateMultipartUpload /
// UploadPart / CompleteMultipartUpload path through the S3 Express signer.
TEST_F(S3ExpressTransferTests, DirectoryBucketMultipartUpload) {
  const uint64_t size = 24ULL * 1024 * 1024;  // above the 16 MiB threshold
  const Aws::String key = UniqueKey();

  auto body = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
  const Aws::String chunk(64 * 1024, 'c');
  for (uint64_t written = 0; written < size; written += chunk.size()) {
    body->write(chunk.data(), static_cast<std::streamsize>(std::min<uint64_t>(chunk.size(), size - written)));
  }

  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket(s_directoryBucket);
  putRequest.SetKey(key);
  UploadRequest request(putRequest, body);

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);

  Aws::S3::Model::HeadObjectRequest head;
  head.SetBucket(s_directoryBucket);
  head.SetKey(key);
  auto headOutcome = s_s3Client->HeadObject(head);
  AWS_ASSERT_SUCCESS(headOutcome);
  EXPECT_EQ(static_cast<int64_t>(size), headOutcome.GetResult().GetContentLength());
}

}  // namespace S3TransferIntegrationTests
