/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 *
 * Cross-cutting S3TransferManager behavior: cancel semantics (including server-side orphan MPU
 * cleanup), concurrent transfers on a shared manager, SSE-KMS round trip, and error surface
 * (parsed error types, RequestId presence, IfNoneMatch → 304).
 */
#include <RecordingProgressListener.h>
#include <S3TransferTestFixture.h>

#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/s3-transfer/S3TransferManager.h>
#include <aws/s3/S3Errors.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/ServerSideEncryption.h>

#include <chrono>
#include <thread>

using namespace Aws::S3::Transfer;
using namespace S3TransferIntegrationTests;

namespace {

class TransferManagerTests : public S3TransferTestFixture {
 protected:
  S3TransferManagerConfiguration MakeConfig() {
    S3TransferManagerConfiguration config;
    config.region = Aws::Region::AWS_TEST_REGION;
    return config;
  }
};

// -------- from CancelTests.cpp --------
TEST_F(TransferManagerTests, UploadCancelViaHandle) {
  const uint64_t size = 100 * 1024 * 1024;  // 100 MiB — large enough that cancel typically wins
  const Aws::String key = UniqueKey();
  Aws::String sourcePath = MakeLocalFileOfSize(size, "cancel-upload");

  auto listener = Aws::MakeShared<RecordingUploadListener>(ALLOCATION_TAG);
  UploadRequest request(s_bucketName, key, sourcePath, {listener});

  S3TransferManager manager(MakeConfig());
  UploadHandle handle = manager.Upload(request);
  handle.Cancel();
  UploadOutcome outcome = handle.CompletionFuture().get();

  if (!outcome.IsSuccess()) {
    EXPECT_EQ(1u, listener->failedCount.load());
    EXPECT_EQ(0u, listener->completeCount.load());
  } else {
    // The transfer beat the cancel — lifecycle must still be coherent.
    EXPECT_EQ(1u, listener->completeCount.load());
    EXPECT_EQ(0u, listener->failedCount.load());
  }

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
}

TEST_F(TransferManagerTests, DownloadCancelViaHandle) {
  const uint64_t size = 100 * 1024 * 1024;  // 100 MiB
  const Aws::String key = UniqueKey();

  // Seed the object first so the cancel-during-download path is exercised.
  Aws::String sourcePath = MakeLocalFileOfSize(size, "cancel-seed");
  Aws::S3::Model::PutObjectRequest put;
  put.SetBucket(s_bucketName);
  put.SetKey(key);
  put.SetBody(Aws::MakeShared<Aws::FStream>(ALLOCATION_TAG, sourcePath.c_str(),
                                            std::ios_base::in | std::ios_base::binary));
  ASSERT_TRUE(s_s3Client->PutObject(put).IsSuccess());

  Aws::String destPath = LocalTempPath("cancel-download");
  auto listener = Aws::MakeShared<RecordingDownloadListener>(ALLOCATION_TAG);
  DownloadRequest request(s_bucketName, key, destPath, {listener});

  S3TransferManager manager(MakeConfig());
  DownloadHandle handle = manager.Download(request);
  handle.Cancel();
  DownloadOutcome outcome = handle.CompletionFuture().get();

  if (!outcome.IsSuccess()) {
    EXPECT_EQ(1u, listener->failedCount.load());
    EXPECT_EQ(0u, listener->completeCount.load());
    // Per SEP: destination file must not be left behind on failed download.
    EXPECT_FALSE(FileExists(destPath));
  } else {
    EXPECT_EQ(1u, listener->completeCount.load());
    EXPECT_EQ(0u, listener->failedCount.load());
  }

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
  Aws::FileSystem::RemoveFileIfExists(destPath.c_str());
}

// -------- from CancelOrphanMpuTests.cpp --------
TEST_F(TransferManagerTests, CancelAbortsServerSideMultipartUpload) {
  const uint64_t size = 200 * 1024 * 1024;  // 200 MiB
  const Aws::String key = UniqueKey();
  Aws::String sourcePath = MakeLocalFileOfSize(size, "cancel-orphan");

  auto listener = Aws::MakeShared<RecordingUploadListener>(ALLOCATION_TAG);
  UploadRequest request(s_bucketName, key, sourcePath, {listener});

  S3TransferManager manager(MakeConfig());
  UploadHandle handle = manager.Upload(request);

  // Wait until the CRT has actually initiated the transfer before cancelling; on a fast machine an
  // immediate cancel can arrive before the CRT even opens the file, which the CRT then reports as
  // a synchronous success with no MPU. Waiting for `initiatedCount>=1` (or a short timeout) lines
  // us up to hit the MPU path.
  for (int i = 0; i < 50 && listener->initiatedCount.load() == 0; ++i) {
    std::this_thread::sleep_for(std::chrono::milliseconds(20));
  }
  handle.Cancel();
  UploadOutcome outcome = handle.CompletionFuture().get();

  // If the transfer beat the cancel, the object should exist and there's nothing to leak. That's
  // a coherent success and not what this test targets — skip the orphan assertion.
  if (outcome.IsSuccess()) {
    EXPECT_TRUE(ObjectExists(key));
    Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
    return;
  }

  // The CRT aborts the MPU server-side asynchronously; give it a few seconds to converge.
  size_t leaked = 0;
  for (unsigned i = 0; i < 30; ++i) {
    leaked = CountInProgressMultipartUploads(key);
    if (leaked == 0) {
      break;
    }
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
  EXPECT_EQ(0u, leaked) << "cancelled upload left " << leaked << " orphan multipart upload(s) on the server";

  // Best-effort teardown so bucket teardown succeeds even if the assertion above failed.
  AbortAnyInProgressMultipartUploads(key);
  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
}

// -------- from ConcurrencyTests.cpp --------
TEST_F(TransferManagerTests, ParallelUploadsShareManagerCleanly) {
  const size_t kNumTransfers = 8;
  // Size is a mix — a couple below the multipart threshold and a couple above — so the manager
  // has both single-object and multipart meta-requests in flight at the same time.
  const uint64_t sizes[kNumTransfers] = {
      2ULL * 1024 * 1024,
      2ULL * 1024 * 1024,
      6ULL * 1024 * 1024,
      6ULL * 1024 * 1024,
      20ULL * 1024 * 1024,
      20ULL * 1024 * 1024,
      24ULL * 1024 * 1024,
      24ULL * 1024 * 1024,
  };

  S3TransferManager manager(MakeConfig());

  Aws::Vector<Aws::String> sourcePaths(kNumTransfers);
  Aws::Vector<Aws::String> keys(kNumTransfers);
  Aws::Vector<std::shared_ptr<RecordingUploadListener>> listeners(kNumTransfers);
  Aws::Vector<UploadHandle> handles;
  handles.reserve(kNumTransfers);

  // Dispatch all uploads without waiting for any of them — the manager must keep per-transfer
  // state cleanly separated across concurrent meta-requests.
  for (size_t i = 0; i < kNumTransfers; ++i) {
    Aws::StringStream tag;
    tag << "concurrent-" << i;
    sourcePaths[i] = MakeLocalFileOfSize(sizes[i], tag.str());
    keys[i] = UniqueKey();
    listeners[i] = Aws::MakeShared<RecordingUploadListener>(ALLOCATION_TAG);

    UploadRequest request(s_bucketName, keys[i], sourcePaths[i], {listeners[i]});
    handles.emplace_back(manager.Upload(request));
  }

  // Collect all outcomes.
  Aws::Vector<UploadOutcome> outcomes;
  outcomes.reserve(kNumTransfers);
  for (auto& handle : handles) {
    outcomes.emplace_back(handle.CompletionFuture().get());
  }

  // Per-transfer assertions.
  for (size_t i = 0; i < kNumTransfers; ++i) {
    ASSERT_TRUE(outcomes[i].IsSuccess())
        << "transfer " << i << " failed: " << outcomes[i].GetError().GetMessage();
    EXPECT_EQ(1u, listeners[i]->initiatedCount.load()) << "transfer " << i;
    EXPECT_EQ(1u, listeners[i]->completeCount.load()) << "transfer " << i;
    EXPECT_EQ(0u, listeners[i]->failedCount.load()) << "transfer " << i;
    EXPECT_FALSE(listeners[i]->sawBytesBeforeInitiated.load()) << "transfer " << i;
    EXPECT_FALSE(listeners[i]->sawNonMonotonic.load()) << "transfer " << i;
    EXPECT_EQ(sizes[i], listeners[i]->maxTransferredBytes.load()) << "transfer " << i;

    // Verify the object S3 actually stored has the size we asked to upload.
    Aws::S3::Model::HeadObjectRequest head;
    head.SetBucket(s_bucketName);
    head.SetKey(keys[i]);
    auto headOutcome = s_s3Client->HeadObject(head);
    ASSERT_TRUE(headOutcome.IsSuccess()) << "transfer " << i;
    EXPECT_EQ(static_cast<int64_t>(sizes[i]), headOutcome.GetResult().GetContentLength())
        << "transfer " << i << " — object content-length must match the source it was uploaded from "
        << "(if this fails, the manager is interleaving bodies across transfers)";
  }

  for (const auto& path : sourcePaths) {
    Aws::FileSystem::RemoveFileIfExists(path.c_str());
  }
}

TEST_F(TransferManagerTests, ParallelDownloadsShareManagerCleanly) {
  const size_t kNumTransfers = 6;
  const uint64_t sizes[kNumTransfers] = {
      1ULL * 1024 * 1024,
      3ULL * 1024 * 1024,
      6ULL * 1024 * 1024,
      10ULL * 1024 * 1024,
      15ULL * 1024 * 1024,
      20ULL * 1024 * 1024,
  };

  // Seed all objects up front via the plain S3 client, one at a time.
  Aws::Vector<Aws::String> sourcePaths(kNumTransfers);
  Aws::Vector<Aws::String> sourceHashes(kNumTransfers);
  Aws::Vector<Aws::String> keys(kNumTransfers);
  for (size_t i = 0; i < kNumTransfers; ++i) {
    Aws::StringStream tag;
    tag << "concurrent-dl-seed-" << i;
    sourcePaths[i] = MakeLocalFileOfSize(sizes[i], tag.str());
    sourceHashes[i] = FileSha256(sourcePaths[i]);
    keys[i] = UniqueKey();
    Aws::S3::Model::PutObjectRequest put;
    put.SetBucket(s_bucketName);
    put.SetKey(keys[i]);
    put.SetBody(Aws::MakeShared<Aws::FStream>(ALLOCATION_TAG, sourcePaths[i].c_str(),
                                              std::ios_base::in | std::ios_base::binary));
    AWS_ASSERT_SUCCESS(s_s3Client->PutObject(put));
  }

  S3TransferManager manager(MakeConfig());

  Aws::Vector<Aws::String> destPaths(kNumTransfers);
  Aws::Vector<std::shared_ptr<RecordingDownloadListener>> listeners(kNumTransfers);
  Aws::Vector<DownloadHandle> handles;
  handles.reserve(kNumTransfers);

  for (size_t i = 0; i < kNumTransfers; ++i) {
    Aws::StringStream tag;
    tag << "concurrent-dl-" << i;
    destPaths[i] = LocalTempPath(tag.str());
    listeners[i] = Aws::MakeShared<RecordingDownloadListener>(ALLOCATION_TAG);

    DownloadRequest request(s_bucketName, keys[i], destPaths[i], {listeners[i]});
    handles.emplace_back(manager.Download(request));
  }

  Aws::Vector<DownloadOutcome> outcomes;
  outcomes.reserve(kNumTransfers);
  for (auto& handle : handles) {
    outcomes.emplace_back(handle.CompletionFuture().get());
  }

  for (size_t i = 0; i < kNumTransfers; ++i) {
    ASSERT_TRUE(outcomes[i].IsSuccess())
        << "transfer " << i << " failed: " << outcomes[i].GetError().GetMessage();
    EXPECT_EQ(1u, listeners[i]->initiatedCount.load()) << "transfer " << i;
    EXPECT_EQ(1u, listeners[i]->completeCount.load()) << "transfer " << i;
    EXPECT_EQ(0u, listeners[i]->failedCount.load()) << "transfer " << i;
    EXPECT_EQ(sourceHashes[i], FileSha256(destPaths[i]))
        << "transfer " << i << " — downloaded body must match its source "
        << "(if this fails, the manager is routing bytes to the wrong destination)";
  }

  for (const auto& path : sourcePaths) {
    Aws::FileSystem::RemoveFileIfExists(path.c_str());
  }
  for (const auto& path : destPaths) {
    Aws::FileSystem::RemoveFileIfExists(path.c_str());
  }
}

// -------- from ServerSideEncryptionTests.cpp --------
TEST_F(TransferManagerTests, SseKmsRoundTrip) {
  const uint64_t size = 1048576;  // 1 MiB
  const Aws::String key = UniqueKey();

  Aws::String sourcePath = MakeLocalFileOfSize(size, "sse-kms");
  const Aws::String sourceHash = FileSha256(sourcePath);

  // Upload with SSE-KMS (aws_kms). No KMS key ID means S3 uses the account-default aws/s3 CMK.
  UploadRequest uploadRequest(s_bucketName, key, sourcePath);
  uploadRequest.SetServerSideEncryption(Aws::S3::Model::ServerSideEncryption::aws_kms);

  S3TransferManager manager(MakeConfig());
  UploadOutcome uploadOutcome = manager.Upload(uploadRequest).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(uploadOutcome);
  EXPECT_EQ(Aws::S3::Model::ServerSideEncryption::aws_kms, uploadOutcome.GetResult().GetS3Result().GetServerSideEncryption());

  // HeadObject via the plain S3 client (no SSE headers needed for SSE-KMS — S3 decrypts server-side).
  Aws::S3::Model::HeadObjectRequest head;
  head.SetBucket(s_bucketName);
  head.SetKey(key);
  auto headOutcome = s_s3Client->HeadObject(head);
  AWS_ASSERT_SUCCESS(headOutcome);
  EXPECT_EQ(Aws::S3::Model::ServerSideEncryption::aws_kms, headOutcome.GetResult().GetServerSideEncryption());

  // Download. Because SSE-KMS decrypts server-side, no encryption headers are needed on GetObject.
  Aws::String destPath = LocalTempPath("sse-kms-dest");
  DownloadRequest downloadRequest(s_bucketName, key, destPath);

  DownloadOutcome downloadOutcome = manager.Download(downloadRequest).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(downloadOutcome);
  EXPECT_EQ(sourceHash, FileSha256(destPath));
  EXPECT_EQ(Aws::S3::Model::ServerSideEncryption::aws_kms, downloadOutcome.GetResult().GetS3Result().GetServerSideEncryption());

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
  Aws::FileSystem::RemoveFileIfExists(destPath.c_str());
}

// -------- from ErrorTests.cpp --------
TEST_F(TransferManagerTests, UploadToNonexistentBucketSurfacesParsedError) {
  const Aws::String nonexistentBucket =
      "tm2-nonexistent-" + Aws::Utils::StringUtils::ToLower(Aws::String(Aws::Utils::UUID::RandomUUID()).c_str());
  auto body = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG, "Test Object");

  UploadRequest request(nonexistentBucket, "some-key", body);

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();

  ASSERT_FALSE(outcome.IsSuccess());
  EXPECT_EQ(Aws::S3::S3Errors::NO_SUCH_BUCKET, outcome.GetError().GetErrorType());
  EXPECT_FALSE(outcome.GetError().GetRequestId().empty());
}

TEST_F(TransferManagerTests, DownloadOfNonexistentKeySurfacesParsedError) {
  const Aws::String key = UniqueKey();  // never uploaded
  const Aws::String destPath = LocalTempPath("nosuchkey");

  DownloadRequest request(s_bucketName, key, destPath);

  S3TransferManager manager(MakeConfig());
  DownloadOutcome outcome = manager.Download(request).CompletionFuture().get();

  ASSERT_FALSE(outcome.IsSuccess());
  // aws-c-s3 drops the XML error body on recv_filepath 4xx, so we fall back to CoreErrorsMapper's
  // status mapping (404 -> RESOURCE_NOT_FOUND). Upgrade to NO_SUCH_KEY once aws-c-s3 preserves it.
  EXPECT_EQ(Aws::S3::S3Errors::RESOURCE_NOT_FOUND, outcome.GetError().GetErrorType());
  EXPECT_FALSE(outcome.GetError().GetRequestId().empty());
}

TEST_F(TransferManagerTests, DownloadWithIfNoneMatchReturns304) {
  const Aws::String key = UniqueKey();

  // Seed the object and capture its ETag.
  auto body = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG, "Test never modified!");
  Aws::S3::Model::PutObjectRequest put;
  put.SetBucket(s_bucketName);
  put.SetKey(key);
  put.SetContentType("text/plain");
  put.SetBody(body);
  auto putOutcome = s_s3Client->PutObject(put);
  AWS_ASSERT_SUCCESS(putOutcome);
  const Aws::String etag = putOutcome.GetResult().GetETag();
  ASSERT_FALSE(etag.empty());

  // Conditional GET with the same ETag must produce HTTP 304 (as an error outcome).
  const Aws::String destPath = LocalTempPath("not-modified");
  DownloadRequest request(s_bucketName, key, destPath);
  request.SetIfNoneMatch(etag);

  S3TransferManager manager(MakeConfig());
  DownloadOutcome outcome = manager.Download(request).CompletionFuture().get();

  ASSERT_FALSE(outcome.IsSuccess());
  EXPECT_EQ(Aws::Http::HttpResponseCode::NOT_MODIFIED, outcome.GetError().GetResponseCode());
}


}  // namespace
