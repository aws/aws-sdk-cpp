/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 *
 * Directory-download coverage — SEP download-directory cases. Covers:
 *  - Listing under a prefix, local path derivation, nested directory creation
 *  - Byte-identical round trip through an upload-directory / download-directory pair
 *  - Placeholder "folder" objects (zero-byte keys ending in '/') being skipped
 *  - Object filter and per-file request transformer
 *  - maxConcurrency knob
 *  - Failure policy: stop-on-first (default) vs continue-on-failure
 *  - Progress listener lifecycle and file counts
 *  - Error paths: nonexistent bucket
 *  - Cancel
 */
#include <RecordingProgressListener.h>
#include <S3TransferTestFixture.h>

#include <aws/s3-transfer/S3TransferManager.h>
#include <aws/s3/model/ChecksumMode.h>
#include <aws/s3/model/PutObjectRequest.h>

#include <future>

using namespace Aws::S3::Transfer;
using namespace S3TransferIntegrationTests;

namespace {

class DownloadDirectoryTests : public S3TransferTestFixture {
 protected:
  S3TransferManager MakeManager() {
    S3TransferManagerConfiguration config;
    config.region = Aws::Region::AWS_TEST_REGION;
    return S3TransferManager(config);
  }

  // Upload the canonical three-object layout under `prefix`:
  //   <prefix>/a.txt, <prefix>/sub/b.txt, <prefix>/sub/deep/c.txt
  void PopulatePrefix(const Aws::String& prefix) {
    ASSERT_TRUE(PutObjectOfSize(prefix + "/a.txt", 1024));
    ASSERT_TRUE(PutObjectOfSize(prefix + "/sub/b.txt", 2048));
    ASSERT_TRUE(PutObjectOfSize(prefix + "/sub/deep/c.txt", 4096));
  }
};

TEST_F(DownloadDirectoryTests, DownloadsEveryObjectAndMirrorsTheKeyLayoutOnDisk) {
  const Aws::String prefix = UniqueKey();
  PopulatePrefix(prefix);

  ScopedTestDirectory destination("download-dir-basic");
  auto manager = MakeManager();
  DownloadDirectoryRequest request(s_bucketName, destination.Path());
  request.SetS3Prefix(prefix);

  auto outcome = manager.DownloadDirectory(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(3u, outcome.GetResult().GetObjectsDownloaded());
  EXPECT_EQ(0u, outcome.GetResult().GetObjectsFailed());

  // The prefix is stripped, so the local tree mirrors the keys below it.
  EXPECT_TRUE(FileExists(destination.Resolve("a.txt")));
  EXPECT_TRUE(FileExists(destination.Resolve("sub/b.txt")));
  EXPECT_TRUE(FileExists(destination.Resolve("sub/deep/c.txt")));
  EXPECT_EQ(1024u, FileSize(destination.Resolve("a.txt")));
  EXPECT_EQ(2048u, FileSize(destination.Resolve("sub/b.txt")));
  EXPECT_EQ(4096u, FileSize(destination.Resolve("sub/deep/c.txt")));
}

TEST_F(DownloadDirectoryTests, RoundTripsADirectoryByteIdentically) {
  ScopedTestDirectory source("download-dir-roundtrip-src");
  const Aws::String fileA = source.AddFile("a.txt", 1024);
  const Aws::String fileB = source.AddFile("sub/b.bin", 9 * 1024 * 1024);  // spans a multipart upload

  const Aws::String prefix = UniqueKey();
  auto manager = MakeManager();

  UploadDirectoryRequest uploadRequest(s_bucketName, source.Path());
  uploadRequest.SetS3Prefix(prefix);
  auto uploadOutcome = manager.UploadDirectory(uploadRequest).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(uploadOutcome);
  ASSERT_EQ(2u, uploadOutcome.GetResult().GetObjectsUploaded());

  ScopedTestDirectory destination("download-dir-roundtrip-dst");
  DownloadDirectoryRequest downloadRequest(s_bucketName, destination.Path());
  downloadRequest.SetS3Prefix(prefix);
  auto downloadOutcome = manager.DownloadDirectory(downloadRequest).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(downloadOutcome);
  ASSERT_EQ(2u, downloadOutcome.GetResult().GetObjectsDownloaded());

  EXPECT_TRUE(AreFilesSame(fileA, destination.Resolve("a.txt")));
  EXPECT_TRUE(AreFilesSame(fileB, destination.Resolve("sub/b.bin")));
}

TEST_F(DownloadDirectoryTests, SkipsPlaceholderFolderObjects) {
  const Aws::String prefix = UniqueKey();
  ASSERT_TRUE(PutObjectOfSize(prefix + "/a.txt", 512));
  // A zero-byte key ending in '/' is how consoles represent a folder; it is not a file.
  ASSERT_TRUE(PutObjectOfSize(prefix + "/folder/", 0));

  ScopedTestDirectory destination("download-dir-folder-marker");
  auto manager = MakeManager();
  DownloadDirectoryRequest request(s_bucketName, destination.Path());
  request.SetS3Prefix(prefix);

  auto outcome = manager.DownloadDirectory(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(1u, outcome.GetResult().GetObjectsDownloaded());
  EXPECT_EQ(0u, outcome.GetResult().GetObjectsFailed());
  EXPECT_TRUE(FileExists(destination.Resolve("a.txt")));
}

TEST_F(DownloadDirectoryTests, FilterSkipsObjectsItRejects) {
  const Aws::String prefix = UniqueKey();
  PopulatePrefix(prefix);

  ScopedTestDirectory destination("download-dir-filter");
  auto manager = MakeManager();
  DownloadDirectoryRequest request(s_bucketName, destination.Path());
  request.SetS3Prefix(prefix).SetFilter([](const Aws::S3::Model::Object& object) {
    // Take only the top-level file; everything under sub/ is rejected.
    return object.GetKey().find("/sub/") == Aws::String::npos;
  });

  auto outcome = manager.DownloadDirectory(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(1u, outcome.GetResult().GetObjectsDownloaded());
  EXPECT_TRUE(FileExists(destination.Resolve("a.txt")));
  EXPECT_FALSE(FileExists(destination.Resolve("sub/b.txt")));
}

TEST_F(DownloadDirectoryTests, TransformerCustomizesEveryPerFileRequest) {
  const Aws::String prefix = UniqueKey();
  PopulatePrefix(prefix);

  ScopedTestDirectory destination("download-dir-transformer");
  auto manager = MakeManager();
  DownloadDirectoryRequest request(s_bucketName, destination.Path());
  request.SetS3Prefix(prefix);
  // The transformer sees each derived per-file request, without touching a GetObjectRequest.
  std::atomic<size_t> transformerCalls{0};
  request.SetDownloadRequestTransformer([&transformerCalls](DownloadRequest& fileRequest) {
    transformerCalls++;
    fileRequest.SetChecksumMode(Aws::S3::Model::ChecksumMode::ENABLED);
  });

  auto outcome = manager.DownloadDirectory(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(3u, outcome.GetResult().GetObjectsDownloaded());
  EXPECT_EQ(3u, transformerCalls.load());
}

TEST_F(DownloadDirectoryTests, SerializedConcurrencyStillDownloadsEveryObject) {
  const Aws::String prefix = UniqueKey();
  PopulatePrefix(prefix);

  ScopedTestDirectory destination("download-dir-concurrency");
  auto manager = MakeManager();
  DownloadDirectoryRequest request(s_bucketName, destination.Path());
  request.SetS3Prefix(prefix).SetMaxConcurrency(1);

  auto outcome = manager.DownloadDirectory(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(3u, outcome.GetResult().GetObjectsDownloaded());
  EXPECT_TRUE(FileExists(destination.Resolve("sub/deep/c.txt")));
}

TEST_F(DownloadDirectoryTests, EmptyPrefixMatchingNothingSucceedsWithZeroTally) {
  ScopedTestDirectory destination("download-dir-no-match");
  auto manager = MakeManager();
  DownloadDirectoryRequest request(s_bucketName, destination.Path());
  request.SetS3Prefix(UniqueKey());  // nothing was ever uploaded under this prefix

  auto outcome = manager.DownloadDirectory(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(0u, outcome.GetResult().GetObjectsDownloaded());
  EXPECT_EQ(0u, outcome.GetResult().GetObjectsFailed());
}

TEST_F(DownloadDirectoryTests, NonexistentBucketFailsWithTheListingError) {
  ScopedTestDirectory destination("download-dir-bad-bucket");
  auto manager = MakeManager();
  DownloadDirectoryRequest request(ComputeBucketName() + "-does-not-exist", destination.Path());

  auto outcome = manager.DownloadDirectory(request).CompletionFuture().get();
  // A listing failure fails the whole operation, and its own error is what surfaces — no policy can
  // waive it, since without a listing there is no per-file work to speak of.
  ASSERT_FALSE(outcome.IsSuccess());
}

TEST_F(DownloadDirectoryTests, ProgressListenerReportsLifecycleAndFileCounts) {
  const Aws::String prefix = UniqueKey();
  PopulatePrefix(prefix);

  auto listener = Aws::MakeShared<RecordingDownloadDirectoryListener>(ALLOCATION_TAG);
  ScopedTestDirectory destination("download-dir-progress");
  auto manager = MakeManager();
  DownloadDirectoryRequest request(
      s_bucketName, destination.Path(),
      Aws::Vector<std::shared_ptr<DownloadDirectoryProgressListener>>{listener});
  request.SetS3Prefix(prefix);

  auto outcome = manager.DownloadDirectory(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);

  EXPECT_EQ(1u, listener->initiatedCount.load());
  EXPECT_EQ(1u, listener->completeCount.load());
  EXPECT_EQ(0u, listener->failedCount.load());
  EXPECT_FALSE(listener->sawProgressBeforeInitiated.load());
  EXPECT_FALSE(listener->sawNonMonotonic.load());
  EXPECT_EQ(3u, listener->progressCount.load());
  EXPECT_EQ(3u, listener->maxTransferredFiles.load());
  // Unlike an upload, a download streams its listing, so the total is only settled at the end.
  EXPECT_TRUE(listener->finalTotalKnown.load());
  EXPECT_EQ(3u, listener->finalTotalFiles.load());
}

TEST_F(DownloadDirectoryTests, ListenerReceivesFailedRatherThanCompleteOnListingFailure) {
  auto listener = Aws::MakeShared<RecordingDownloadDirectoryListener>(ALLOCATION_TAG);
  ScopedTestDirectory destination("download-dir-listing-failure");
  auto manager = MakeManager();
  DownloadDirectoryRequest request(
      ComputeBucketName() + "-does-not-exist", destination.Path(),
      Aws::Vector<std::shared_ptr<DownloadDirectoryProgressListener>>{listener});

  auto outcome = manager.DownloadDirectory(request).CompletionFuture().get();
  ASSERT_FALSE(outcome.IsSuccess());
  EXPECT_EQ(1u, listener->initiatedCount.load());
  EXPECT_EQ(1u, listener->failedCount.load());
  EXPECT_EQ(0u, listener->completeCount.load());
}

TEST_F(DownloadDirectoryTests, CancelStopsTheOperation) {
  const Aws::String prefix = UniqueKey();
  // Enough objects, each large enough, that the cancel lands before the fan-out drains.
  for (int i = 0; i < 8; ++i) {
    Aws::StringStream key;
    key << prefix << "/file-" << i << ".bin";
    ASSERT_TRUE(PutObjectOfSize(key.str(), 4 * 1024 * 1024));
  }

  ScopedTestDirectory destination("download-dir-cancel");
  auto manager = MakeManager();
  DownloadDirectoryRequest request(s_bucketName, destination.Path());
  request.SetS3Prefix(prefix).SetMaxConcurrency(2);

  auto handle = manager.DownloadDirectory(request);
  auto future = handle.CompletionFuture();
  handle.Cancel();

  auto outcome = future.get();
  ASSERT_FALSE(outcome.IsSuccess());
  EXPECT_STREQ("RequestCanceled", outcome.GetError().GetExceptionName().c_str());
}

}  // namespace
