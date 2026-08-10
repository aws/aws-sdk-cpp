/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/TestingEnvironment.h>

#include <aws/core/Region.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/crypto/Hash.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/platform/FileSystem.h>

#include <aws/s3/S3Client.h>
#include <aws/s3/S3ClientConfiguration.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/CreateBucketConfiguration.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/ListMultipartUploadsRequest.h>
#include <aws/s3/model/AbortMultipartUploadRequest.h>
#include <aws/s3/model/ListObjectsV2Request.h>
#include <aws/s3/model/BucketLocationConstraint.h>

#include <chrono>
#include <fstream>
#include <thread>

namespace S3TransferIntegrationTests {

static const char ALLOCATION_TAG[] = "S3TransferIntegrationTest";
static const char TEST_BUCKET_BASE[] = "s3transfertests";
static const unsigned WAIT_MAX_RETRIES = 20;

/**
 * Shared base fixture for Transfer Manager 2.0 integration tests. Owns a plain S3Client used only
 * for test scaffolding (bucket lifecycle + verifying objects); the code under test (S3TransferManager)
 * is constructed per-test. One bucket is created per test suite and torn down at the end.
 *
 * Inherits AwsCppSdkGTestSuite so Aws::InitAPI/ShutdownAPI and memory-leak checks run per suite.
 */
class S3TransferTestFixture : public Aws::Testing::AwsCppSdkGTestSuite {
 protected:
  static std::shared_ptr<Aws::S3::S3Client> s_s3Client;
  static Aws::String s_bucketName;

  static Aws::String ComputeBucketName() {
    static const Aws::String suffix = Aws::String(Aws::Utils::UUID::RandomUUID()).c_str();
    Aws::StringStream s;
    s << Aws::Testing::GetAwsResourcePrefix() << TEST_BUCKET_BASE << suffix;
    return Aws::Utils::StringUtils::ToLower(s.str().c_str());
  }

  static void SetUpTestSuite() {
    Aws::Testing::AwsCppSdkGTestSuite::SetUpTestSuite();

    Aws::S3::S3ClientConfiguration config;
    config.region = Aws::Region::AWS_TEST_REGION;
    config.connectTimeoutMs = 5000;
    config.requestTimeoutMs = 60000;
    s_s3Client = Aws::MakeShared<Aws::S3::S3Client>(
        ALLOCATION_TAG, Aws::MakeShared<Aws::Auth::DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), nullptr, config);

    s_bucketName = ComputeBucketName();
    Aws::S3::Model::CreateBucketRequest createBucket;
    createBucket.SetBucket(s_bucketName);
    // us-east-1 does not accept a LocationConstraint; every other region requires one.
    if (Aws::String(Aws::Region::AWS_TEST_REGION) != Aws::Region::US_EAST_1) {
      Aws::S3::Model::CreateBucketConfiguration bucketConfig;
      bucketConfig.SetLocationConstraint(
          Aws::S3::Model::BucketLocationConstraintMapper::GetBucketLocationConstraintForName(Aws::Region::AWS_TEST_REGION));
      createBucket.SetCreateBucketConfiguration(bucketConfig);
    }
    auto outcome = s_s3Client->CreateBucket(createBucket);
    AWS_ASSERT_SUCCESS(outcome);
    ASSERT_TRUE(WaitForBucketToPropagate(s_bucketName));
  }

  static void TearDownTestSuite() {
    if (s_s3Client) {
      EmptyBucket(s_bucketName);
      Aws::S3::Model::DeleteBucketRequest deleteBucket;
      deleteBucket.SetBucket(s_bucketName);
      s_s3Client->DeleteBucket(deleteBucket);
      s_s3Client = nullptr;
    }
    Aws::FileSystem::DeepDeleteDirectory(GetTestFilesDirectory().c_str());
    Aws::Testing::AwsCppSdkGTestSuite::TearDownTestSuite();
  }

  static bool WaitForBucketToPropagate(const Aws::String& bucketName) {
    for (unsigned i = 0; i < WAIT_MAX_RETRIES; ++i) {
      Aws::S3::Model::ListObjectsV2Request request;
      request.SetBucket(bucketName);
      if (s_s3Client->ListObjectsV2(request).IsSuccess()) {
        return true;
      }
      std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return false;
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

  // ---- local file helpers ----

  static Aws::String UniqueKey() { return Aws::String(Aws::Utils::UUID::RandomUUID()).c_str(); }

  // Per-suite local scratch directory (created on demand, deep-deleted in TearDownTestSuite).
  static Aws::String GetTestFilesDirectory() {
    Aws::String directory = "S3TransferTests";
    Aws::FileSystem::CreateDirectoryIfNotExists(directory.c_str());
    return directory;
  }

  static Aws::String LocalTempPath(const Aws::String& tag) {
    Aws::String fileName = tag + "-" + Aws::String(Aws::Utils::UUID::RandomUUID());
    return Aws::FileSystem::Join(GetTestFilesDirectory(), fileName);
  }

  // Write a file of exactly `size` deterministic bytes; returns the path.
  static Aws::String MakeLocalFileOfSize(uint64_t size, const Aws::String& tag) {
    Aws::String path = LocalTempPath(tag);
    Aws::OFStream out(path.c_str(), std::ios_base::out | std::ios_base::binary | std::ios_base::trunc);
    const Aws::String chunk(64 * 1024, '\0');
    Aws::String buffer = chunk;
    for (size_t i = 0; i < buffer.size(); ++i) {
      buffer[i] = static_cast<char>(i % 251);  // deterministic, non-trivial pattern
    }
    uint64_t written = 0;
    while (written < size) {
      const uint64_t toWrite = std::min<uint64_t>(buffer.size(), size - written);
      out.write(buffer.data(), static_cast<std::streamsize>(toWrite));
      written += toWrite;
    }
    out.close();
    return path;
  }

  static uint64_t FileSize(const Aws::String& path) {
    Aws::IFStream in(path.c_str(), std::ios_base::binary | std::ios_base::ate);
    if (!in.good()) {
      return 0;
    }
    return static_cast<uint64_t>(in.tellg());
  }

  // No dedicated exists()/stat() helper in Aws::FileSystem for C++11; the SDK's own pattern is to
  // open the path and check the stream. Matches how FileSize probes above.
  static bool FileExists(const Aws::String& path) {
    Aws::IFStream in(path.c_str(), std::ios_base::in | std::ios_base::binary);
    return in.is_open();
  }

  // SHA256 of a file's contents, base64-encoded, for byte-identical round-trip comparison.
  // CalculateSHA256 takes an IOStream&, so open the file as an FStream (in|binary qualifies).
  static Aws::String FileSha256(const Aws::String& path) {
    Aws::FStream in(path.c_str(), std::ios_base::in | std::ios_base::binary);
    Aws::Utils::ByteBuffer digest = Aws::Utils::HashingUtils::CalculateSHA256(in);
    return Aws::Utils::HashingUtils::Base64Encode(digest);
  }

  // RAII wrapper around a local scratch file. Constructor writes `size` deterministic bytes at a
  // unique path (via MakeLocalFileOfSize); destructor deletes the file. Adapted from TM 1.0's
  // ScopedTestFile pattern in tests/aws-cpp-sdk-transfer-tests/TransferTests.cpp — replaces the
  // MakeLocalFileOfSize + RemoveFileIfExists pair with a single stack object per test.
  class ScopedTestFile {
   public:
    ScopedTestFile(uint64_t size, const Aws::String& tag)
        : m_path(MakeLocalFileOfSize(size, tag)) {}

    // Same shape as above but creates a path only (no bytes written) — useful as a scratch
    // destination for downloads that will populate the file themselves.
    explicit ScopedTestFile(const Aws::String& tag) : m_path(LocalTempPath(tag)) {}

    ~ScopedTestFile() { Aws::FileSystem::RemoveFileIfExists(m_path.c_str()); }

    ScopedTestFile(const ScopedTestFile&) = delete;
    ScopedTestFile& operator=(const ScopedTestFile&) = delete;

    const Aws::String& Path() const { return m_path; }
    operator const Aws::String&() const { return m_path; }

   private:
    Aws::String m_path;
  };

  static bool ObjectExists(const Aws::String& key) {
    Aws::S3::Model::HeadObjectRequest head;
    head.SetBucket(s_bucketName);
    head.SetKey(key);
    return s_s3Client->HeadObject(head).IsSuccess();
  }

  // Byte-identical file comparator via SHA256. Adapted from TM 1.0's AreFilesSame helper
  // (tests/aws-cpp-sdk-transfer-tests/TransferTests.cpp).
  static bool AreFilesSame(const Aws::String& lhs, const Aws::String& rhs) {
    if (!FileExists(lhs) || !FileExists(rhs)) {
      return false;
    }
    if (FileSize(lhs) != FileSize(rhs)) {
      return false;
    }
    return FileSha256(lhs) == FileSha256(rhs);
  }

  // Poll HeadObject until the object is visible (or timeout). Mirrors TM 1.0's
  // WaitForObjectToPropagate; supports SSE-C by taking an optional configurator that stamps the
  // customer-provided-key headers onto the HeadObject request.
  static bool WaitForObjectToPropagate(
      const Aws::String& key,
      const std::function<void(Aws::S3::Model::HeadObjectRequest&)>& configureRequest = nullptr) {
    for (unsigned i = 0; i < WAIT_MAX_RETRIES; ++i) {
      Aws::S3::Model::HeadObjectRequest head;
      head.SetBucket(s_bucketName);
      head.SetKey(key);
      if (configureRequest) {
        configureRequest(head);
      }
      if (s_s3Client->HeadObject(head).IsSuccess()) {
        return true;
      }
      std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return false;
  }

  // Returns the number of in-progress multipart uploads for `key` in the shared test bucket.
  // Used by cancel tests to assert the CRT aborts the MPU on the server side when cancelled.
  static size_t CountInProgressMultipartUploads(const Aws::String& key) {
    Aws::S3::Model::ListMultipartUploadsRequest listRequest;
    listRequest.SetBucket(s_bucketName);
    listRequest.SetPrefix(key);
    auto outcome = s_s3Client->ListMultipartUploads(listRequest);
    if (!outcome.IsSuccess()) {
      return 0;
    }
    size_t count = 0;
    for (const auto& upload : outcome.GetResult().GetUploads()) {
      if (upload.GetKey() == key) {
        ++count;
      }
    }
    return count;
  }

  // Best-effort cleanup: abort any lingering multipart uploads under `key` so the bucket teardown
  // can succeed even if a test intentionally left an MPU pending (e.g. after a failed abort).
  static void AbortAnyInProgressMultipartUploads(const Aws::String& key) {
    Aws::S3::Model::ListMultipartUploadsRequest listRequest;
    listRequest.SetBucket(s_bucketName);
    listRequest.SetPrefix(key);
    auto outcome = s_s3Client->ListMultipartUploads(listRequest);
    if (!outcome.IsSuccess()) {
      return;
    }
    for (const auto& upload : outcome.GetResult().GetUploads()) {
      if (upload.GetKey() != key) {
        continue;
      }
      Aws::S3::Model::AbortMultipartUploadRequest abort;
      abort.SetBucket(s_bucketName);
      abort.SetKey(upload.GetKey());
      abort.SetUploadId(upload.GetUploadId());
      s_s3Client->AbortMultipartUpload(abort);
    }
  }
};

}  // namespace S3TransferIntegrationTests
