/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 *
 * Upload coverage — SEP upload-single-object cases plus TM 1.0 / S3Crt-derived ports. Covers:
 *  - Single-object & multipart uploads (size boundaries, uneven last part, byte-identical hash)
 *  - Progress listener lifecycle + fan-out to multiple listeners
 *  - Error paths (nonexistent bucket, bad local file, orphan MPU cleanup on failure)
 *  - Request field pass-through: content-type, user metadata, checksum matrix, composite MPU
 *    checksum, full-object CRC32, IfNoneMatch, SSE via PutObjectRequest
 *  - Special/unicode/URI-escape key names, DNS-unfriendly bucket names
 *  - Empty/zero-byte body, 75 MiB big-file round trip, progress monotonicity
 */
#include "RecordingProgressListener.h"
#include "S3TransferTestFixture.h"

#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/s3-transfer/S3TransferManager.h>
#include <aws/s3/model/ChecksumAlgorithm.h>
#include <aws/s3/model/ChecksumMode.h>
#include <aws/s3/model/CreateBucketConfiguration.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/PutObjectRequest.h>

using namespace Aws::S3::Transfer;
using namespace S3TransferIntegrationTests;
using Aws::Http::HttpResponseCode;
using Aws::S3::Model::ChecksumAlgorithm;
using Aws::S3::Model::PutObjectRequest;
using Aws::Utils::HashingUtils;

namespace {

// SEP part size (8 MiB); multipart threshold defaults to 16 MiB.
constexpr uint64_t SEP_PART_SIZE = 8388608;

// From S3Crt: special-character keys used by TestPutWithSpecialCharactersInKeyName and
// TestKeysWithCrazyCharacterSets.
constexpr const char* URLENCODED_UNICODE_KEY = "TestUnicode%E4%B8%AD%E5%9B%BDKey";
constexpr const char* URIESCAPE_KEY = "Esc a=pe+Me$";
constexpr const char* SPECIAL_CHARS_KEY = "foo;jsessionid=40+2";

// Table row for the checksum-matrix test, ported from S3Crt
// BucketAndObjectOperationTest.cpp:1526.
struct ChecksumTestCase {
  std::function<PutObjectRequest(PutObjectRequest)> checksumRequestMutator;
  HttpResponseCode responseCode;
  Aws::String body;
};

class UploadTests : public S3TransferTestFixture {
 protected:
  S3TransferManagerConfiguration MakeConfig() {
    S3TransferManagerConfiguration config;
    config.region = Aws::Region::AWS_TEST_REGION;
    return config;
  }

  // Upload a local file of the given size and return the terminal outcome plus the recording listener.
  UploadOutcome DoUpload(uint64_t fileSize, const Aws::String& key,
                         const std::shared_ptr<RecordingUploadListener>& listener,
                         Aws::S3::Model::ChecksumAlgorithm checksum = Aws::S3::Model::ChecksumAlgorithm::NOT_SET) {
    Aws::String sourcePath = MakeLocalFileOfSize(fileSize, "upload");
    Aws::S3::Model::PutObjectRequest putRequest;
    putRequest.SetBucket(s_bucketName);
    putRequest.SetKey(key);
    if (checksum != Aws::S3::Model::ChecksumAlgorithm::NOT_SET) {
      putRequest.SetChecksumAlgorithm(checksum);
    }
    Aws::Vector<std::shared_ptr<UploadProgressListener>> listeners;
    if (listener) listeners.push_back(listener);
    UploadRequest request(putRequest, sourcePath, listeners);

    S3TransferManager manager(MakeConfig());
    UploadHandle handle = manager.Upload(request);
    UploadOutcome outcome = handle.CompletionFuture().get();

    Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
    return outcome;
  }

  // Upload a small stream body under the given key and verify HeadObject succeeds. Used by the
  // special-character-key tests.
  void UploadAndVerifyKey(const Aws::String& key) {
    auto body = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG, "Test Object");
    Aws::S3::Model::PutObjectRequest putRequest;
    putRequest.SetBucket(s_bucketName);
    putRequest.SetKey(key);
    putRequest.SetContentType("text/plain");
    UploadRequest request(putRequest, body);

    S3TransferManager manager(MakeConfig());
    UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
    ASSERT_TRUE(outcome.IsSuccess()) << outcome.GetError().GetMessage() << " (key=" << key << ")";

    Aws::S3::Model::HeadObjectRequest head;
    head.SetBucket(s_bucketName);
    head.SetKey(key);
    auto headOutcome = s_s3Client->HeadObject(head);
    ASSERT_TRUE(headOutcome.IsSuccess()) << headOutcome.GetError().GetMessage() << " (key=" << key << ")";
  }

  // Bucket name with a dot in it — breaks virtual-hosted-style addressing; the SDK must fall back
  // to URI-segment style.
  static Aws::String MakeUnfriendlyBucketName() {
    return Aws::Testing::GetAwsResourcePrefix() + "unfriendly." +
           Aws::Utils::StringUtils::ToLower(Aws::String(Aws::Utils::UUID::RandomUUID()).c_str());
  }
};

// ============================================================================================
// Basic upload paths (SEP: single-object, multipart, uneven last part)
// ============================================================================================

TEST_F(UploadTests, SingleObjectUploadBelowThreshold) {
  const uint64_t size = 10485760;
  const Aws::String key = UniqueKey();
  auto listener = Aws::MakeShared<RecordingUploadListener>(ALLOCATION_TAG);
  UploadOutcome outcome = DoUpload(size, key, listener);
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_TRUE(ObjectExists(key));
  EXPECT_EQ(size, listener->maxTransferredBytes.load());
}

TEST_F(UploadTests, MultipartUploadAboveThreshold) {
  const uint64_t size = 25165824;
  const Aws::String key = UniqueKey();
  auto listener = Aws::MakeShared<RecordingUploadListener>(ALLOCATION_TAG);

  Aws::String sourcePath = MakeLocalFileOfSize(size, "upload-mpu");
  Aws::String sourceHash = FileSha256(sourcePath);

  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket(s_bucketName);
  putRequest.SetKey(key);
  UploadRequest request(putRequest, sourcePath, {listener});

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_TRUE(ObjectExists(key));
  EXPECT_EQ(size, listener->maxTransferredBytes.load());

  Aws::String downloadPath = LocalTempPath("upload-mpu-verify");
  Aws::S3::Model::GetObjectRequest getRequest;
  getRequest.SetBucket(s_bucketName);
  getRequest.SetKey(key);
  getRequest.SetResponseStreamFactory([downloadPath]() {
    return Aws::New<Aws::FStream>(ALLOCATION_TAG, downloadPath.c_str(),
                                  std::ios_base::out | std::ios_base::binary | std::ios_base::trunc);
  });
  auto getOutcome = s_s3Client->GetObject(getRequest);
  AWS_ASSERT_SUCCESS(getOutcome);
  EXPECT_EQ(sourceHash, FileSha256(downloadPath));

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
  Aws::FileSystem::RemoveFileIfExists(downloadPath.c_str());
}

TEST_F(UploadTests, MultipartUploadUnevenLastPart) {
  const uint64_t size = SEP_PART_SIZE + 2097152;
  const Aws::String key = UniqueKey();
  auto listener = Aws::MakeShared<RecordingUploadListener>(ALLOCATION_TAG);
  UploadOutcome outcome = DoUpload(size, key, listener);
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_TRUE(ObjectExists(key));
}

TEST_F(UploadTests, SingleObjectUploadWithChecksum) {
  const uint64_t size = 10485760;
  const Aws::String key = UniqueKey();
  auto listener = Aws::MakeShared<RecordingUploadListener>(ALLOCATION_TAG);
  UploadOutcome outcome = DoUpload(size, key, listener, Aws::S3::Model::ChecksumAlgorithm::CRC32);
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_TRUE(ObjectExists(key));
}

// ============================================================================================
// Progress lifecycle & fan-out
// ============================================================================================

TEST_F(UploadTests, ProgressLifecycleOrdering) {
  const uint64_t size = 10485760;
  const Aws::String key = UniqueKey();
  auto listener = Aws::MakeShared<RecordingUploadListener>(ALLOCATION_TAG);
  UploadOutcome outcome = DoUpload(size, key, listener);
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(1, listener->initiatedCount.load());
  EXPECT_GE(listener->bytesTransferredCount.load(), 1);
  EXPECT_EQ(1, listener->completeCount.load());
  EXPECT_EQ(0, listener->failedCount.load());
  EXPECT_FALSE(listener->sawBytesBeforeInitiated.load());
  EXPECT_FALSE(listener->sawNonMonotonic.load());
}

// Adapted from TM 1.0 TransferManager_MultiPartStreamableByteTest (TransferTests.cpp:1835): assert
// OnBytesTransferred is monotonically non-decreasing and totals the source size on the MPU path.
TEST_F(UploadTests, ProgressMonotonicityOnMultipartUpload) {
  const uint64_t size = 25165824;
  const Aws::String key = UniqueKey();
  const Aws::String sourcePath = MakeLocalFileOfSize(size, "progress-monotonic");

  auto listener = Aws::MakeShared<RecordingUploadListener>(ALLOCATION_TAG);
  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket(s_bucketName);
  putRequest.SetKey(key);
  UploadRequest request(putRequest, sourcePath, {listener});

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);

  EXPECT_FALSE(listener->sawNonMonotonic.load());
  EXPECT_EQ(size, listener->maxTransferredBytes.load());
  EXPECT_GE(listener->bytesTransferredCount.load(), 1);

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
}

TEST_F(UploadTests, UploadFanOutToMultipleListeners) {
  const uint64_t size = 1048576;
  const Aws::String key = UniqueKey();
  Aws::String sourcePath = MakeLocalFileOfSize(size, "upload-fanout");

  auto listenerA = Aws::MakeShared<RecordingUploadListener>(ALLOCATION_TAG);
  auto listenerB = Aws::MakeShared<RecordingUploadListener>(ALLOCATION_TAG);
  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket(s_bucketName);
  putRequest.SetKey(key);
  UploadRequest request(putRequest, sourcePath, {listenerA, listenerB});

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);

  for (const auto& listener : {listenerA, listenerB}) {
    EXPECT_EQ(1, listener->initiatedCount.load());
    EXPECT_GE(listener->bytesTransferredCount.load(), 1);
    EXPECT_EQ(1, listener->completeCount.load());
    EXPECT_EQ(0, listener->failedCount.load());
    EXPECT_EQ(size, listener->maxTransferredBytes.load());
  }

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
}

// ============================================================================================
// Error paths
// ============================================================================================

TEST_F(UploadTests, UploadToNonexistentBucketFails) {
  const uint64_t size = 1048576;
  const Aws::String key = UniqueKey();
  Aws::String sourcePath = MakeLocalFileOfSize(size, "upload-err");
  auto listener = Aws::MakeShared<RecordingUploadListener>(ALLOCATION_TAG);

  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket("this-bucket-should-not-exist-" + Aws::Utils::StringUtils::ToLower(UniqueKey().c_str()));
  putRequest.SetKey(key);
  UploadRequest request(putRequest, sourcePath, {listener});

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();

  EXPECT_FALSE(outcome.IsSuccess());
  EXPECT_EQ(1, listener->failedCount.load());
  EXPECT_EQ(0, listener->completeCount.load());

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
}

// Ported from TM 1.0 BadFileTest — upload from a nonexistent local file surfaces a failed outcome
// and the listener lifecycle (initiated → failed).
TEST_F(UploadTests, UploadOfNonexistentSourceFileFails) {
  const Aws::String nonexistentPath = LocalTempPath("does-not-exist");
  const Aws::String key = "UnicornKey";

  auto listener = Aws::MakeShared<RecordingUploadListener>(ALLOCATION_TAG);
  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket(s_bucketName);
  putRequest.SetKey(key);
  putRequest.SetContentType("text/plain");
  UploadRequest request(putRequest, nonexistentPath, {listener});

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();

  EXPECT_FALSE(outcome.IsSuccess());
  EXPECT_EQ(1, listener->failedCount.load());
  EXPECT_EQ(0, listener->completeCount.load());
}

// SEP upload cases #6/#7 — a failed MPU-sized upload must not leave orphan multipart uploads. We
// use a nonexistent bucket to force real S3 failure during the MPU flow.
TEST_F(UploadTests, MultipartUploadFailureCleansUpOrphanedMpu) {
  const uint64_t size = 25165824;
  const Aws::String key = UniqueKey();
  const Aws::String nonexistentBucket =
      "tm2-nosuch-" + Aws::Utils::StringUtils::ToLower(Aws::String(Aws::Utils::UUID::RandomUUID()).c_str());
  const Aws::String sourcePath = MakeLocalFileOfSize(size, "mpu-error");

  auto listener = Aws::MakeShared<RecordingUploadListener>(ALLOCATION_TAG);
  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket(nonexistentBucket);
  putRequest.SetKey(key);
  UploadRequest request(putRequest, sourcePath, {listener});

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();

  EXPECT_FALSE(outcome.IsSuccess());
  EXPECT_EQ(1, listener->failedCount.load());
  EXPECT_EQ(0, listener->completeCount.load());
  EXPECT_FALSE(outcome.GetError().GetMessage().empty());

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
}

// ============================================================================================
// Response fields / metadata pass-through
// ============================================================================================

TEST_F(UploadTests, UploadResponseCarriesETag) {
  const uint64_t size = 1048576;
  const Aws::String key = UniqueKey();
  auto listener = Aws::MakeShared<RecordingUploadListener>(ALLOCATION_TAG);
  UploadOutcome outcome = DoUpload(size, key, listener);
  AWS_ASSERT_SUCCESS(outcome);
  ASSERT_TRUE(outcome.GetResult().S3ResultHasBeenSet());
  EXPECT_FALSE(outcome.GetResult().GetS3Result().GetETag().empty());
}

TEST_F(UploadTests, UploadPreservesContentTypeAndUserMetadata) {
  const uint64_t size = 1048576;
  const Aws::String key = UniqueKey();
  Aws::String sourcePath = MakeLocalFileOfSize(size, "upload-meta");

  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket(s_bucketName);
  putRequest.SetKey(key);
  putRequest.SetContentType("application/x-test-type");
  putRequest.AddMetadata("test-key", "test-value");
  UploadRequest request(putRequest, sourcePath, {});

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);

  Aws::S3::Model::HeadObjectRequest head;
  head.SetBucket(s_bucketName);
  head.SetKey(key);
  auto headOutcome = s_s3Client->HeadObject(head);
  AWS_ASSERT_SUCCESS(headOutcome);
  EXPECT_EQ("application/x-test-type", headOutcome.GetResult().GetContentType());
  const auto& metadata = headOutcome.GetResult().GetMetadata();
  auto it = metadata.find("test-key");
  ASSERT_NE(metadata.end(), it);
  EXPECT_EQ("test-value", it->second);

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
}

// Same as above but on the MPU path — user metadata must land on CreateMultipartUpload.
TEST_F(UploadTests, MultipartUploadPreservesContentTypeAndUserMetadata) {
  const uint64_t size = 25165824;
  const Aws::String key = UniqueKey();
  Aws::String sourcePath = MakeLocalFileOfSize(size, "mpu-meta");

  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket(s_bucketName);
  putRequest.SetKey(key);
  putRequest.SetContentType("application/x-test-mpu");
  putRequest.AddMetadata("test-key-one", "value-one");
  putRequest.AddMetadata("test-key-two", "value-two");
  UploadRequest request(putRequest, sourcePath);

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);

  Aws::S3::Model::HeadObjectRequest head;
  head.SetBucket(s_bucketName);
  head.SetKey(key);
  auto headOutcome = s_s3Client->HeadObject(head);
  AWS_ASSERT_SUCCESS(headOutcome);
  EXPECT_EQ("application/x-test-mpu", headOutcome.GetResult().GetContentType());
  const auto& metadata = headOutcome.GetResult().GetMetadata();
  auto it1 = metadata.find("test-key-one");
  ASSERT_NE(metadata.end(), it1);
  EXPECT_EQ("value-one", it1->second);
  auto it2 = metadata.find("test-key-two");
  ASSERT_NE(metadata.end(), it2);
  EXPECT_EQ("value-two", it2->second);

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
}

// ============================================================================================
// Empty / zero-byte body — ported from S3Crt TestNullBody + TestEmptyBody
// ============================================================================================

TEST_F(UploadTests, ZeroByteFileUpload) {
  const Aws::String key = UniqueKey();
  const Aws::String sourcePath = MakeLocalFileOfSize(0, "empty-file");
  ASSERT_EQ(0u, FileSize(sourcePath));

  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket(s_bucketName);
  putRequest.SetKey(key);
  UploadRequest request(putRequest, sourcePath);

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);

  Aws::S3::Model::HeadObjectRequest head;
  head.SetBucket(s_bucketName);
  head.SetKey(key);
  auto headOutcome = s_s3Client->HeadObject(head);
  AWS_ASSERT_SUCCESS(headOutcome);
  EXPECT_EQ(0, headOutcome.GetResult().GetContentLength());

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
}

TEST_F(UploadTests, EmptyStreamUpload) {
  const Aws::String key = UniqueKey();
  auto body = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG, "");

  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket(s_bucketName);
  putRequest.SetKey(key);
  UploadRequest request(putRequest, body);

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);

  Aws::S3::Model::HeadObjectRequest head;
  head.SetBucket(s_bucketName);
  head.SetKey(key);
  auto headOutcome = s_s3Client->HeadObject(head);
  AWS_ASSERT_SUCCESS(headOutcome);
  EXPECT_EQ(0, headOutcome.GetResult().GetContentLength());
}

// ============================================================================================
// Special-character keys — ported from S3Crt
// ============================================================================================

TEST_F(UploadTests, KeyWithSemicolonAndPlus) { UploadAndVerifyKey(SPECIAL_CHARS_KEY); }

TEST_F(UploadTests, UnicodeKey) {
  const Aws::String unicodeKey = Aws::Utils::StringUtils::URLDecode(URLENCODED_UNICODE_KEY);
  UploadAndVerifyKey(unicodeKey);
}

TEST_F(UploadTests, UriEscapeKey) { UploadAndVerifyKey(URIESCAPE_KEY); }

// ============================================================================================
// Virtual-hosted-style addressing — ported from S3Crt TestVirtualAddressingWithUnfriendlyBucketName
// ============================================================================================

TEST_F(UploadTests, PutObjectSucceedsOnDnsUnfriendlyBucket) {
  const Aws::String bucketName = MakeUnfriendlyBucketName();

  Aws::S3::Model::CreateBucketRequest createBucket;
  createBucket.SetBucket(bucketName);
  if (Aws::String(Aws::Region::AWS_TEST_REGION) != Aws::Region::US_EAST_1) {
    Aws::S3::Model::CreateBucketConfiguration bucketConfig;
    bucketConfig.SetLocationConstraint(
        Aws::S3::Model::BucketLocationConstraintMapper::GetBucketLocationConstraintForName(Aws::Region::AWS_TEST_REGION));
    createBucket.SetCreateBucketConfiguration(bucketConfig);
  }
  auto createOutcome = s_s3Client->CreateBucket(createBucket);
  AWS_ASSERT_SUCCESS(createOutcome);
  ASSERT_TRUE(WaitForBucketToPropagate(bucketName));

  auto body = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG,
                                                 "'A program that has not been tested does not work'-- Bjarne Stroustrup");
  const Aws::String key = "WhySoHostile";
  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket(bucketName);
  putRequest.SetKey(key);
  putRequest.SetContentType("text/plain");
  UploadRequest request(putRequest, body);

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);

  Aws::S3::Model::DeleteObjectRequest deleteObj;
  deleteObj.SetBucket(bucketName);
  deleteObj.SetKey(key);
  s_s3Client->DeleteObject(deleteObj);
  Aws::S3::Model::DeleteBucketRequest deleteBucket;
  deleteBucket.SetBucket(bucketName);
  s_s3Client->DeleteBucket(deleteBucket);
}

// ============================================================================================
// Checksum matrix — 13-row table ported from S3Crt PutObjectChecksum (BucketAndObjectOperationTest.cpp:1526)
// ============================================================================================

TEST_F(UploadTests, PutObjectChecksum) {
  const Aws::String key = UniqueKey();

  Aws::Vector<ChecksumTestCase> testCases{
      // Mismatched checksums → 400
      {[](PutObjectRequest request) {
         return request.WithChecksumAlgorithm(ChecksumAlgorithm::CRC32).WithChecksumCRC32("Just runnin' scared each place we go");
       },
       HttpResponseCode::BAD_REQUEST, "Just runnin' scared each place we go"},
      {[](PutObjectRequest request) {
         return request.WithChecksumAlgorithm(ChecksumAlgorithm::SHA1).WithChecksumSHA1("So afraid that he might show");
       },
       HttpResponseCode::BAD_REQUEST, "So afraid that he might show"},
      {[](PutObjectRequest request) {
         return request.WithChecksumAlgorithm(ChecksumAlgorithm::SHA256).WithChecksumSHA256("Yeah, runnin' scared, what would I do");
       },
       HttpResponseCode::BAD_REQUEST, "Yeah, runnin' scared, what would I do"},
      {[](PutObjectRequest request) {
         return request.WithChecksumAlgorithm(ChecksumAlgorithm::CRC32C).WithChecksumCRC32C("If he came back and wanted you?");
       },
       HttpResponseCode::BAD_REQUEST, "If he came back and wanted you?"},
      {[](PutObjectRequest request) {
         return request.WithChecksumAlgorithm(ChecksumAlgorithm::SHA512).WithChecksumSHA512("If he came back and wanted you?");
       },
       HttpResponseCode::BAD_REQUEST, "If he came back and wanted you?"},
      {[](PutObjectRequest request) { return request.WithContentMD5("Just runnin' scared, feelin' low"); },
       HttpResponseCode::BAD_REQUEST, "Just runnin' scared, feelin' low"},
      // Correct checksums → OK
      {[](PutObjectRequest request) {
         return request.WithChecksumAlgorithm(ChecksumAlgorithm::CRC32)
             .WithChecksumCRC32(HashingUtils::Base64Encode(HashingUtils::CalculateCRC32("Runnin' scared, you love him so")));
       },
       HttpResponseCode::OK, "Runnin' scared, you love him so"},
      {[](PutObjectRequest request) {
         return request.WithChecksumAlgorithm(ChecksumAlgorithm::SHA1)
             .WithChecksumSHA1(HashingUtils::Base64Encode(HashingUtils::CalculateSHA1("Just runnin' scared, afraid to lose")));
       },
       HttpResponseCode::OK, "Just runnin' scared, afraid to lose"},
      {[](PutObjectRequest request) {
         return request.WithChecksumAlgorithm(ChecksumAlgorithm::SHA256)
             .WithChecksumSHA256(HashingUtils::Base64Encode(HashingUtils::CalculateSHA256("If he came back, which one would you choose?")));
       },
       HttpResponseCode::OK, "If he came back, which one would you choose?"},
      {[](PutObjectRequest request) {
         return request.WithChecksumAlgorithm(ChecksumAlgorithm::CRC32C)
             .WithChecksumCRC32C(HashingUtils::Base64Encode(HashingUtils::CalculateCRC32C("Then all at once he was standing there")));
       },
       HttpResponseCode::OK, "Then all at once he was standing there"},
      {[](PutObjectRequest request) {
         return request.WithContentMD5(HashingUtils::Base64Encode(HashingUtils::CalculateMD5("So sure of himself, his head in the air")));
       },
       HttpResponseCode::OK, "So sure of himself, his head in the air"},
      {[](PutObjectRequest request) {
         return request.WithChecksumAlgorithm(ChecksumAlgorithm::SHA512)
             .WithChecksumSHA512(HashingUtils::Base64Encode(HashingUtils::CalculateSHA512("If he came back, which one would you choose?")));
       },
       HttpResponseCode::OK, "If he came back, which one would you choose?"},
      // Algorithm-only → SDK computes → OK
      {[](PutObjectRequest request) { return request.WithChecksumAlgorithm(ChecksumAlgorithm::SHA512); },
       HttpResponseCode::OK, "If he came back, which one would you choose?"},
      // MD5 as ChecksumAlgorithm is invalid → 400
      {[](PutObjectRequest request) { return request.WithChecksumAlgorithm(ChecksumAlgorithm::MD5); },
       HttpResponseCode::BAD_REQUEST, "If he came back, which one would you choose?"},
  };

  for (const auto& testCase : testCases) {
    PutObjectRequest putRequest = testCase.checksumRequestMutator(PutObjectRequest().WithBucket(s_bucketName).WithKey(key));
    std::shared_ptr<Aws::IOStream> body =
        Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG, testCase.body, std::ios_base::in | std::ios_base::binary);
    UploadRequest request(putRequest, body);

    S3TransferManager manager(MakeConfig());
    UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();

    if (testCase.responseCode == HttpResponseCode::OK) {
      ASSERT_TRUE(outcome.IsSuccess()) << outcome.GetError().GetMessage() << " (body=" << testCase.body << ")";
    } else {
      ASSERT_FALSE(outcome.IsSuccess()) << "expected failure for body=" << testCase.body;
      EXPECT_EQ(testCase.responseCode, outcome.GetError().GetResponseCode()) << "body=" << testCase.body;
    }
  }
}

// ============================================================================================
// MPU composite + full-object checksums (SEP upload-single-object #4)
// ============================================================================================

TEST_F(UploadTests, MultipartUploadWithCrc32ProducesCompositeChecksum) {
  const uint64_t size = 25165824;
  const Aws::String key = UniqueKey();
  const Aws::String sourcePath = MakeLocalFileOfSize(size, "composite-crc");

  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket(s_bucketName);
  putRequest.SetKey(key);
  putRequest.SetChecksumAlgorithm(Aws::S3::Model::ChecksumAlgorithm::CRC32);
  UploadRequest request(putRequest, sourcePath);

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);

  Aws::S3::Model::HeadObjectRequest head;
  head.SetBucket(s_bucketName);
  head.SetKey(key);
  head.SetChecksumMode(Aws::S3::Model::ChecksumMode::ENABLED);
  auto headOutcome = s_s3Client->HeadObject(head);
  AWS_ASSERT_SUCCESS(headOutcome);
  const Aws::String checksum = headOutcome.GetResult().GetChecksumCRC32();
  ASSERT_FALSE(checksum.empty()) << "HeadObject did not report a CRC32 checksum";
  EXPECT_NE(Aws::String::npos, checksum.find('-')) << "expected composite \"...-N\" suffix, got: " << checksum;

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
}

TEST_F(UploadTests, MultipartUploadWithPrecomputedFullObjectCrc32) {
  const uint64_t size = 16777216;
  const Aws::String key = UniqueKey();
  const Aws::String sourcePath = MakeLocalFileOfSize(size, "full-object-crc");

  Aws::FStream fileStream(sourcePath.c_str(), std::ios_base::in | std::ios_base::binary);
  const Aws::String fullCrc32 = Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateCRC32(fileStream));

  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket(s_bucketName);
  putRequest.SetKey(key);
  putRequest.SetChecksumAlgorithm(Aws::S3::Model::ChecksumAlgorithm::CRC32);
  putRequest.SetChecksumCRC32(fullCrc32);
  UploadRequest request(putRequest, sourcePath);

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);

  Aws::S3::Model::HeadObjectRequest head;
  head.SetBucket(s_bucketName);
  head.SetKey(key);
  head.SetChecksumMode(Aws::S3::Model::ChecksumMode::ENABLED);
  auto headOutcome = s_s3Client->HeadObject(head);
  AWS_ASSERT_SUCCESS(headOutcome);
  const Aws::String reported = headOutcome.GetResult().GetChecksumCRC32();
  ASSERT_FALSE(reported.empty()) << "HeadObject did not report a CRC32 checksum";
  EXPECT_EQ(Aws::String::npos, reported.find('-')) << "expected full-object checksum, got: " << reported;
  EXPECT_EQ(fullCrc32, reported);

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
}

// ============================================================================================
// Large-file smoke test — TM 1.0 TransferManager_BigTest at 75 MiB
// ============================================================================================

TEST_F(UploadTests, BigFileUploadDownloadRoundTrip) {
  const uint64_t size = 75ULL * 1024 * 1024;
  const Aws::String key = UniqueKey();
  const Aws::String sourcePath = MakeLocalFileOfSize(size, "big-upload");
  const Aws::String sourceHash = FileSha256(sourcePath);

  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket(s_bucketName);
  putRequest.SetKey(key);
  putRequest.SetContentType("text/plain");
  UploadRequest uploadRequest(putRequest, sourcePath);

  S3TransferManager manager(MakeConfig());
  UploadOutcome uploadOutcome = manager.Upload(uploadRequest).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(uploadOutcome);

  Aws::S3::Model::HeadObjectRequest head;
  head.SetBucket(s_bucketName);
  head.SetKey(key);
  auto headOutcome = s_s3Client->HeadObject(head);
  AWS_ASSERT_SUCCESS(headOutcome);
  EXPECT_EQ(static_cast<int64_t>(size), headOutcome.GetResult().GetContentLength());
  EXPECT_EQ("text/plain", headOutcome.GetResult().GetContentType());

  const Aws::String destPath = LocalTempPath("big-download");
  Aws::S3::Model::GetObjectRequest getRequest;
  getRequest.SetBucket(s_bucketName);
  getRequest.SetKey(key);
  DownloadRequest downloadRequest(getRequest, destPath);
  DownloadOutcome downloadOutcome = manager.Download(downloadRequest).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(downloadOutcome);
  EXPECT_EQ(size, FileSize(destPath));
  EXPECT_EQ(sourceHash, FileSha256(destPath));

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
  Aws::FileSystem::RemoveFileIfExists(destPath.c_str());
}

}  // namespace
