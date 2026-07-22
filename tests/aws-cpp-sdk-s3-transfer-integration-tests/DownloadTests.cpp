/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 *
 * Integration tests for single-object download, derived from the S3 Transfer Manager SEP test cases
 * in download-single-object.json. The SEP cases assert wire-level GETs (part GETs / ranged GETs);
 * TM 2.0 hands a single GET_OBJECT meta request to the CRT, which parallelizes internally. These
 * tests assert the observable SEP "outcomes": success/error, totalBytes, byte-identical content
 * written to the destination file, checksum-validation success, progress lifecycle, and cancel.
 *
 * NOTE: GetObjectResult (and therefore DownloadResponse / DownloadOutcome) is move-only. Never copy
 * the outcome; bind it by value from future::get() (which moves) and read GetResult() by reference.
 */
#include <RecordingProgressListener.h>
#include <S3TransferTestFixture.h>

#include <aws/s3-transfer/S3TransferManager.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/PutObjectRequest.h>

using namespace Aws::S3::Transfer;
using namespace S3TransferIntegrationTests;

namespace {

class DownloadTests : public S3TransferTestFixture {
 protected:
  S3TransferManagerConfiguration MakeConfig() {
    S3TransferManagerConfiguration config;
    config.region = Aws::Region::AWS_TEST_REGION;
    return config;
  }

  // Put an object of `size` deterministic bytes directly via S3 (test setup, not the code under test).
  // Returns the local source path (so the test can compare hashes) and the object key.
  Aws::String SeedObject(uint64_t size, const Aws::String& key) {
    Aws::String sourcePath = MakeLocalFileOfSize(size, "seed");
    Aws::S3::Model::PutObjectRequest put;
    put.SetBucket(s_bucketName);
    put.SetKey(key);
    put.SetBody(Aws::MakeShared<Aws::FStream>(ALLOCATION_TAG, sourcePath.c_str(),
                                              std::ios_base::in | std::ios_base::binary));
    auto outcome = s_s3Client->PutObject(put);
    EXPECT_TRUE(outcome.IsSuccess()) << outcome.GetError().GetMessage();
    return sourcePath;
  }

  DownloadRequest MakeDownloadRequest(const Aws::String& key, const Aws::String& destPath,
                                      const std::shared_ptr<RecordingDownloadListener>& listener,
                                      bool checksumEnabled = false) {
    Aws::Vector<std::shared_ptr<DownloadProgressListener>> listeners;
    if (listener) {
      listeners.push_back(listener);
    }
    DownloadRequest request(s_bucketName, key, destPath, listeners);
    if (checksumEnabled) {
      request.SetChecksumMode(Aws::S3::Model::ChecksumMode::ENABLED);
    }
    return request;
  }
};

// SEP: "Test download ... single object download (object size < part size)"
TEST_F(DownloadTests, SingleObjectDownloadBelowPartSize) {
  const uint64_t size = 1048576;  // 1 MiB, matches SEP Content-Length
  const Aws::String key = UniqueKey();
  Aws::String sourcePath = SeedObject(size, key);
  Aws::String sourceHash = FileSha256(sourcePath);

  Aws::String destPath = LocalTempPath("download-small");
  auto listener = Aws::MakeShared<RecordingDownloadListener>(ALLOCATION_TAG);

  S3TransferManager manager(MakeConfig());
  DownloadOutcome outcome = manager.Download(MakeDownloadRequest(key, destPath, listener)).CompletionFuture().get();

  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(size, FileSize(destPath));
  EXPECT_EQ(sourceHash, FileSha256(destPath));
  EXPECT_EQ(size, listener->maxTransferredBytes.load());

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
  Aws::FileSystem::RemoveFileIfExists(destPath.c_str());
}

// SEP: "Test download ... multipart download (object size > part size)"
// 24 MiB > 8 MiB part size => the CRT issues parallel ranged GETs internally; we assert the
// reassembled file is byte-identical.
TEST_F(DownloadTests, MultipartDownloadAbovePartSize) {
  const uint64_t size = 25165824;  // 24 MiB, matches SEP
  const Aws::String key = UniqueKey();
  Aws::String sourcePath = SeedObject(size, key);
  Aws::String sourceHash = FileSha256(sourcePath);

  Aws::String destPath = LocalTempPath("download-mpu");
  auto listener = Aws::MakeShared<RecordingDownloadListener>(ALLOCATION_TAG);

  S3TransferManager manager(MakeConfig());
  DownloadOutcome outcome = manager.Download(MakeDownloadRequest(key, destPath, listener)).CompletionFuture().get();

  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(size, FileSize(destPath));
  EXPECT_EQ(sourceHash, FileSha256(destPath));
  EXPECT_EQ(size, listener->maxTransferredBytes.load());

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
  Aws::FileSystem::RemoveFileIfExists(destPath.c_str());
}

// SEP: "Test download ... multipart download with uneven last part"
TEST_F(DownloadTests, MultipartDownloadUnevenLastPart) {
  const uint64_t size = 10485760;  // 10 MiB with 8 MiB part size => 8 MiB + 2 MiB
  const Aws::String key = UniqueKey();
  Aws::String sourcePath = SeedObject(size, key);
  Aws::String sourceHash = FileSha256(sourcePath);

  Aws::String destPath = LocalTempPath("download-uneven");
  auto listener = Aws::MakeShared<RecordingDownloadListener>(ALLOCATION_TAG);

  S3TransferManager manager(MakeConfig());
  DownloadOutcome outcome = manager.Download(MakeDownloadRequest(key, destPath, listener)).CompletionFuture().get();

  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(size, FileSize(destPath));
  EXPECT_EQ(sourceHash, FileSha256(destPath));

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
  Aws::FileSystem::RemoveFileIfExists(destPath.c_str());
}

// SEP: "Test download ... checksum validation success"
// ChecksumMode=ENABLED on the underlying GetObjectRequest; the CRT validates per-part checksums.
TEST_F(DownloadTests, DownloadWithChecksumValidationSucceeds) {
  const uint64_t size = 1048576;  // 1 MiB
  const Aws::String key = UniqueKey();
  // Seed with a checksum so the object carries one for validation.
  Aws::String sourcePath = MakeLocalFileOfSize(size, "seed-crc");
  Aws::String sourceHash = FileSha256(sourcePath);
  Aws::S3::Model::PutObjectRequest put;
  put.SetBucket(s_bucketName);
  put.SetKey(key);
  put.SetChecksumAlgorithm(Aws::S3::Model::ChecksumAlgorithm::CRC32);
  put.SetBody(Aws::MakeShared<Aws::FStream>(ALLOCATION_TAG, sourcePath.c_str(),
                                            std::ios_base::in | std::ios_base::binary));
  ASSERT_TRUE(s_s3Client->PutObject(put).IsSuccess());

  Aws::String destPath = LocalTempPath("download-crc");
  auto listener = Aws::MakeShared<RecordingDownloadListener>(ALLOCATION_TAG);

  S3TransferManager manager(MakeConfig());
  DownloadOutcome outcome =
      manager.Download(MakeDownloadRequest(key, destPath, listener, /*checksumEnabled*/ true)).CompletionFuture().get();

  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(sourceHash, FileSha256(destPath));

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
  Aws::FileSystem::RemoveFileIfExists(destPath.c_str());
}

// SEP: progress lifecycle for downloads (initiated once, monotonic bytes, single complete).
TEST_F(DownloadTests, ProgressLifecycleOrdering) {
  const uint64_t size = 10485760;  // 10 MiB
  const Aws::String key = UniqueKey();
  Aws::String sourcePath = SeedObject(size, key);

  Aws::String destPath = LocalTempPath("download-progress");
  auto listener = Aws::MakeShared<RecordingDownloadListener>(ALLOCATION_TAG);

  S3TransferManager manager(MakeConfig());
  DownloadOutcome outcome = manager.Download(MakeDownloadRequest(key, destPath, listener)).CompletionFuture().get();

  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(1u, listener->initiatedCount.load());
  EXPECT_GE(listener->bytesTransferredCount.load(), 1u);
  EXPECT_EQ(1u, listener->completeCount.load());
  EXPECT_EQ(0u, listener->failedCount.load());
  EXPECT_FALSE(listener->sawBytesBeforeInitiated.load());
  EXPECT_FALSE(listener->sawNonMonotonic.load());

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
  Aws::FileSystem::RemoveFileIfExists(destPath.c_str());
}

// SEP: "Test download ... error handling" — nonexistent key => failed outcome + transferFailed.
TEST_F(DownloadTests, DownloadNonexistentObjectFails) {
  const Aws::String key = UniqueKey();  // never uploaded
  Aws::String destPath = LocalTempPath("download-missing");
  auto listener = Aws::MakeShared<RecordingDownloadListener>(ALLOCATION_TAG);

  S3TransferManager manager(MakeConfig());
  DownloadOutcome outcome = manager.Download(MakeDownloadRequest(key, destPath, listener)).CompletionFuture().get();

  EXPECT_FALSE(outcome.IsSuccess());
  EXPECT_EQ(1u, listener->failedCount.load());
  EXPECT_EQ(0u, listener->completeCount.load());
  // On failure the destination must not be left as a successful file.
  EXPECT_FALSE(ObjectExists(key));

  Aws::FileSystem::RemoveFileIfExists(destPath.c_str());
}

// SEP request/response mapping: DownloadResponse wraps a GetObjectResult and must carry
// the observable response fields (ContentLength, ETag).
TEST_F(DownloadTests, DownloadResponseCarriesContentLengthAndETag) {
  const uint64_t size = 1048576;  // 1 MiB
  const Aws::String key = UniqueKey();
  Aws::String sourcePath = SeedObject(size, key);

  Aws::String destPath = LocalTempPath("download-response");
  auto listener = Aws::MakeShared<RecordingDownloadListener>(ALLOCATION_TAG);

  S3TransferManager manager(MakeConfig());
  DownloadOutcome outcome = manager.Download(MakeDownloadRequest(key, destPath, listener)).CompletionFuture().get();

  AWS_ASSERT_SUCCESS(outcome);
  const auto& s3Result = outcome.GetResult().GetS3Result();
  EXPECT_EQ(static_cast<int64_t>(size), s3Result.GetContentLength());
  EXPECT_FALSE(s3Result.GetETag().empty());

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
  Aws::FileSystem::RemoveFileIfExists(destPath.c_str());
}

// SEP failure handling for file-based download: if the request fails, the destination file
// must not be left behind.
TEST_F(DownloadTests, DownloadFailureLeavesNoDestinationFile) {
  const Aws::String key = UniqueKey();  // never uploaded
  Aws::String destPath = LocalTempPath("download-failure-cleanup");
  auto listener = Aws::MakeShared<RecordingDownloadListener>(ALLOCATION_TAG);

  S3TransferManager manager(MakeConfig());
  DownloadOutcome outcome = manager.Download(MakeDownloadRequest(key, destPath, listener)).CompletionFuture().get();

  EXPECT_FALSE(outcome.IsSuccess());
  EXPECT_EQ(1u, listener->failedCount.load());
  EXPECT_FALSE(FileExists(destPath)) << "Destination file must not be left behind on failed download";
}

// SEP file write mode: by default, an existing destination file must be overwritten.
TEST_F(DownloadTests, DownloadOverwritesExistingFile) {
  const uint64_t size = 1048576;  // 1 MiB
  const Aws::String key = UniqueKey();
  Aws::String sourcePath = SeedObject(size, key);
  Aws::String sourceHash = FileSha256(sourcePath);

  // Pre-create the destination with unrelated content that is a different size.
  Aws::String destPath = LocalTempPath("download-overwrite");
  {
    Aws::OFStream out(destPath.c_str(), std::ios_base::out | std::ios_base::binary | std::ios_base::trunc);
    const Aws::String preexisting(4096, 'X');
    out.write(preexisting.data(), static_cast<std::streamsize>(preexisting.size()));
  }
  ASSERT_EQ(4096u, FileSize(destPath));

  auto listener = Aws::MakeShared<RecordingDownloadListener>(ALLOCATION_TAG);
  S3TransferManager manager(MakeConfig());
  DownloadOutcome outcome = manager.Download(MakeDownloadRequest(key, destPath, listener)).CompletionFuture().get();

  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(size, FileSize(destPath));
  EXPECT_EQ(sourceHash, FileSha256(destPath));

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
  Aws::FileSystem::RemoveFileIfExists(destPath.c_str());
}

// Ranged GET — SEP download-single-object case "ranged GET single object". S3Crt equivalent:
// TestObjectOperations at BucketAndObjectOperationTest.cpp:564. bytes=128-1024 inclusive => 897.
TEST_F(DownloadTests, DownloadWithByteRangeReturnsRangeSize) {
  const uint64_t objectSize = 1048576;
  const Aws::String key = UniqueKey();
  Aws::String sourcePath = MakeLocalFileOfSize(objectSize, "range-seed");
  Aws::S3::Model::PutObjectRequest put;
  put.SetBucket(s_bucketName);
  put.SetKey(key);
  put.SetBody(Aws::MakeShared<Aws::FStream>(ALLOCATION_TAG, sourcePath.c_str(),
                                            std::ios_base::in | std::ios_base::binary));
  AWS_ASSERT_SUCCESS(s_s3Client->PutObject(put));

  const Aws::String destPath = LocalTempPath("range-dest");
  DownloadRequest request(s_bucketName, key, destPath);
  request.SetRange("bytes=128-1024");

  S3TransferManager manager(MakeConfig());
  DownloadOutcome outcome = manager.Download(request).CompletionFuture().get();

  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(897u, FileSize(destPath));

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
  Aws::FileSystem::RemoveFileIfExists(destPath.c_str());
}

}  // namespace
