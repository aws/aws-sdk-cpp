/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 *
 * Directory-upload coverage — SEP upload-directory cases. Covers:
 *  - Recursive walk, key derivation from the relative path, s3Prefix joining
 *  - Empty subdirectories producing no objects; an empty tree succeeding with a zero tally
 *  - maxDepth and maxConcurrency knobs
 *  - Per-file request customization through the upload transformer
 *  - Failure policy: stop-on-first (default) vs continue-on-failure
 *  - Progress listener lifecycle, and the file total being known from the first event
 *  - Error paths: nonexistent source directory, nonexistent bucket
 *  - Cancel
 */
#include <RecordingProgressListener.h>
#include <S3TransferTestFixture.h>

#include <aws/s3-transfer/S3TransferManager.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/StorageClass.h>

#include <future>

using namespace Aws::S3::Transfer;
using namespace S3TransferIntegrationTests;

namespace {

class UploadDirectoryTests : public S3TransferTestFixture {
 protected:
  // Every test drives one manager against the shared test bucket.
  S3TransferManager MakeManager() {
    S3TransferManagerConfiguration config;
    config.region = Aws::Region::AWS_TEST_REGION;
    return S3TransferManager(config);
  }

  // Build the canonical three-file tree used by most tests:
  //   a.txt, sub/b.txt, sub/deep/c.txt
  static void PopulateTree(const S3TransferTestFixture::ScopedTestDirectory& dir) {
    dir.AddFile("a.txt", 1024);
    dir.AddFile("sub/b.txt", 2048);
    dir.AddFile("sub/deep/c.txt", 4096);
  }
};

TEST_F(UploadDirectoryTests, UploadsEveryFileRecursivelyWithDerivedKeys) {
  ScopedTestDirectory source("upload-dir-recursive");
  PopulateTree(source);

  const Aws::String prefix = UniqueKey();
  auto manager = MakeManager();
  UploadDirectoryRequest request(s_bucketName, source.Path());
  request.SetS3Prefix(prefix);

  auto handle = manager.UploadDirectory(request);
  auto outcome = handle.CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(3u, outcome.GetResult().GetObjectsUploaded());
  EXPECT_EQ(0u, outcome.GetResult().GetObjectsFailed());

  // Keys mirror the relative paths, joined under the prefix with '/' separators.
  const Aws::Vector<Aws::String> keys = ListKeysUnderPrefix(prefix);
  ASSERT_EQ(3u, keys.size());
  EXPECT_EQ(prefix + "/a.txt", keys[0]);
  EXPECT_EQ(prefix + "/sub/b.txt", keys[1]);
  EXPECT_EQ(prefix + "/sub/deep/c.txt", keys[2]);
}

TEST_F(UploadDirectoryTests, WithoutPrefixKeysMirrorTheDirectoryLayout) {
  ScopedTestDirectory source("upload-dir-no-prefix");
  // A unique leading component keeps this test's keys from colliding with the shared bucket's
  // other objects, since an empty prefix maps the tree to the bucket root.
  const Aws::String root = UniqueKey();
  source.AddFile(root + "/a.txt", 512);
  source.AddFile(root + "/nested/b.txt", 512);

  auto manager = MakeManager();
  UploadDirectoryRequest request(s_bucketName, source.Path());

  auto outcome = manager.UploadDirectory(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(2u, outcome.GetResult().GetObjectsUploaded());

  const Aws::Vector<Aws::String> keys = ListKeysUnderPrefix(root);
  ASSERT_EQ(2u, keys.size());
  EXPECT_EQ(root + "/a.txt", keys[0]);
  EXPECT_EQ(root + "/nested/b.txt", keys[1]);
}

TEST_F(UploadDirectoryTests, PrefixEndingInSlashDoesNotDoubleTheSeparator) {
  ScopedTestDirectory source("upload-dir-slash-prefix");
  source.AddFile("a.txt", 256);

  const Aws::String prefix = UniqueKey();
  auto manager = MakeManager();
  UploadDirectoryRequest request(s_bucketName, source.Path());
  request.SetS3Prefix(prefix + "/");

  auto outcome = manager.UploadDirectory(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);

  const Aws::Vector<Aws::String> keys = ListKeysUnderPrefix(prefix);
  ASSERT_EQ(1u, keys.size());
  EXPECT_EQ(prefix + "/a.txt", keys[0]);
}

TEST_F(UploadDirectoryTests, EmptySubdirectoriesProduceNoObjects) {
  ScopedTestDirectory source("upload-dir-empty-subdir");
  source.AddFile("a.txt", 128);
  source.AddEmptySubdirectory("empty");
  source.AddEmptySubdirectory("also/empty");

  const Aws::String prefix = UniqueKey();
  auto manager = MakeManager();
  UploadDirectoryRequest request(s_bucketName, source.Path());
  request.SetS3Prefix(prefix);

  auto outcome = manager.UploadDirectory(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  // Only the one regular file becomes an object; directories are structure, not content.
  EXPECT_EQ(1u, outcome.GetResult().GetObjectsUploaded());
  EXPECT_EQ(1u, ListKeysUnderPrefix(prefix).size());
}

TEST_F(UploadDirectoryTests, EmptyDirectorySucceedsWithZeroTally) {
  ScopedTestDirectory source("upload-dir-empty");

  const Aws::String prefix = UniqueKey();
  auto manager = MakeManager();
  UploadDirectoryRequest request(s_bucketName, source.Path());
  request.SetS3Prefix(prefix);

  auto outcome = manager.UploadDirectory(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(0u, outcome.GetResult().GetObjectsUploaded());
  EXPECT_EQ(0u, outcome.GetResult().GetObjectsFailed());
  EXPECT_TRUE(ListKeysUnderPrefix(prefix).empty());
}

TEST_F(UploadDirectoryTests, MaxDepthLimitsHowDeepTheWalkDescends) {
  ScopedTestDirectory source("upload-dir-maxdepth");
  PopulateTree(source);  // a.txt at depth 1, sub/b.txt at 2, sub/deep/c.txt at 3

  const Aws::String prefix = UniqueKey();
  auto manager = MakeManager();
  UploadDirectoryRequest request(s_bucketName, source.Path());
  request.SetS3Prefix(prefix).SetMaxDepth(1);

  auto outcome = manager.UploadDirectory(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(1u, outcome.GetResult().GetObjectsUploaded());

  const Aws::Vector<Aws::String> keys = ListKeysUnderPrefix(prefix);
  ASSERT_EQ(1u, keys.size());
  EXPECT_EQ(prefix + "/a.txt", keys[0]);
}

TEST_F(UploadDirectoryTests, SerializedConcurrencyStillUploadsEveryFile) {
  ScopedTestDirectory source("upload-dir-concurrency");
  PopulateTree(source);

  const Aws::String prefix = UniqueKey();
  auto manager = MakeManager();
  UploadDirectoryRequest request(s_bucketName, source.Path());
  // A window of one forces each file to finish before the next is dispatched.
  request.SetS3Prefix(prefix).SetMaxConcurrency(1);

  auto outcome = manager.UploadDirectory(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(3u, outcome.GetResult().GetObjectsUploaded());
  EXPECT_EQ(3u, ListKeysUnderPrefix(prefix).size());
}

TEST_F(UploadDirectoryTests, TransformerCustomizesEveryPerFileRequest) {
  ScopedTestDirectory source("upload-dir-transformer");
  PopulateTree(source);

  const Aws::String prefix = UniqueKey();
  auto manager = MakeManager();
  UploadDirectoryRequest request(s_bucketName, source.Path());
  request.SetS3Prefix(prefix);
  // The transformer sees each derived per-file request and sets fields on it directly, without ever
  // touching a PutObjectRequest.
  std::atomic<size_t> transformerCalls{0};
  request.SetUploadRequestTransformer([&transformerCalls](UploadRequest& fileRequest) {
    transformerCalls++;
    fileRequest.SetContentType("text/plain").AddMetadata("origin", "directory-upload");
  });

  auto outcome = manager.UploadDirectory(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(3u, outcome.GetResult().GetObjectsUploaded());
  EXPECT_EQ(3u, transformerCalls.load());

  // The customization reached S3, not just the local request object.
  Aws::S3::Model::HeadObjectRequest head;
  head.SetBucket(s_bucketName);
  head.SetKey(prefix + "/a.txt");
  auto headOutcome = s_s3Client->HeadObject(head);
  AWS_ASSERT_SUCCESS(headOutcome);
  EXPECT_EQ("text/plain", headOutcome.GetResult().GetContentType());
  const auto& metadata = headOutcome.GetResult().GetMetadata();
  ASSERT_TRUE(metadata.find("origin") != metadata.end());
  EXPECT_EQ("directory-upload", metadata.at("origin"));
}

TEST_F(UploadDirectoryTests, NonexistentSourceDirectoryFailsTheOperation) {
  auto manager = MakeManager();
  UploadDirectoryRequest request(s_bucketName, LocalTempPath("does-not-exist"));

  auto outcome = manager.UploadDirectory(request).CompletionFuture().get();
  ASSERT_FALSE(outcome.IsSuccess());
  // A traversal failure is not a per-file failure, so no policy can waive it.
  EXPECT_STREQ("DirectoryTraversalFailure", outcome.GetError().GetExceptionName().c_str());
}

TEST_F(UploadDirectoryTests, NonexistentBucketFailsUnderTheDefaultPolicy) {
  ScopedTestDirectory source("upload-dir-bad-bucket");
  PopulateTree(source);

  auto manager = MakeManager();
  UploadDirectoryRequest request(ComputeBucketName() + "-does-not-exist", source.Path());

  auto outcome = manager.UploadDirectory(request).CompletionFuture().get();
  // The default CancelAllFailurePolicy stops on the first per-file failure.
  ASSERT_FALSE(outcome.IsSuccess());
}

TEST_F(UploadDirectoryTests, ContinueOnFailurePolicyAttemptsEveryFileAndTalliesFailures) {
  ScopedTestDirectory source("upload-dir-continue-on-failure");
  PopulateTree(source);

  auto manager = MakeManager();
  UploadDirectoryRequest request(ComputeBucketName() + "-does-not-exist", source.Path());
  request.SetFailurePolicy(Aws::MakeShared<ContinueOnFailurePolicy>(ALLOCATION_TAG));

  auto outcome = manager.UploadDirectory(request).CompletionFuture().get();
  // Every file is attempted and every one fails, but the operation itself reports the tally rather
  // than an error, because the policy waived each failure.
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(0u, outcome.GetResult().GetObjectsUploaded());
  EXPECT_EQ(3u, outcome.GetResult().GetObjectsFailed());
}

TEST_F(UploadDirectoryTests, FailurePolicySeesTheFailingKeyAndLocalPath) {
  ScopedTestDirectory source("upload-dir-failure-context");
  const Aws::String localPath = source.AddFile("a.txt", 256);

  // A policy that records what it was told, then lets the operation continue.
  class RecordingPolicy final : public FailurePolicy {
   public:
    Aws::Vector<Aws::String> keys;
    Aws::Vector<Aws::String> localPaths;

    bool ShouldContinue(const FailureContext& context) override {
      keys.push_back(context.key);
      localPaths.push_back(context.localPath);
      return true;
    }
  };
  auto policy = Aws::MakeShared<RecordingPolicy>(ALLOCATION_TAG);

  const Aws::String prefix = UniqueKey();
  auto manager = MakeManager();
  UploadDirectoryRequest request(ComputeBucketName() + "-does-not-exist", source.Path());
  request.SetS3Prefix(prefix).SetFailurePolicy(policy);

  auto outcome = manager.UploadDirectory(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  ASSERT_EQ(1u, policy->keys.size());
  EXPECT_EQ(prefix + "/a.txt", policy->keys[0]);
  EXPECT_EQ(localPath, policy->localPaths[0]);
}

TEST_F(UploadDirectoryTests, ProgressListenerReportsLifecycleAndAKnownFileTotal) {
  ScopedTestDirectory source("upload-dir-progress");
  PopulateTree(source);

  auto listener = Aws::MakeShared<RecordingUploadDirectoryListener>(ALLOCATION_TAG);
  const Aws::String prefix = UniqueKey();
  auto manager = MakeManager();
  UploadDirectoryRequest request(
      s_bucketName, source.Path(),
      Aws::Vector<std::shared_ptr<UploadDirectoryProgressListener>>{listener});
  request.SetS3Prefix(prefix);

  auto outcome = manager.UploadDirectory(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);

  EXPECT_EQ(1u, listener->initiatedCount.load());
  EXPECT_EQ(1u, listener->completeCount.load());
  EXPECT_EQ(0u, listener->failedCount.load());
  EXPECT_FALSE(listener->sawProgressBeforeInitiated.load());
  EXPECT_FALSE(listener->sawNonMonotonic.load());
  // One progress event per file that finished, ending at the full count.
  EXPECT_EQ(3u, listener->progressCount.load());
  EXPECT_EQ(3u, listener->maxTransferredFiles.load());
  // The upload walk completes before anything is dispatched, so the total is known throughout.
  EXPECT_TRUE(listener->finalTotalKnown.load());
  EXPECT_EQ(3u, listener->finalTotalFiles.load());
}

TEST_F(UploadDirectoryTests, ListenerReceivesFailedRatherThanCompleteOnTraversalFailure) {
  auto listener = Aws::MakeShared<RecordingUploadDirectoryListener>(ALLOCATION_TAG);
  auto manager = MakeManager();
  UploadDirectoryRequest request(
      s_bucketName, LocalTempPath("does-not-exist"),
      Aws::Vector<std::shared_ptr<UploadDirectoryProgressListener>>{listener});

  auto outcome = manager.UploadDirectory(request).CompletionFuture().get();
  ASSERT_FALSE(outcome.IsSuccess());
  // Every terminal path fires a listener event before setting the promise, including this one.
  EXPECT_EQ(1u, listener->initiatedCount.load());
  EXPECT_EQ(1u, listener->failedCount.load());
  EXPECT_EQ(0u, listener->completeCount.load());
}

TEST_F(UploadDirectoryTests, CancelStopsTheOperation) {
  ScopedTestDirectory source("upload-dir-cancel");
  // Enough files, each large enough, that the cancel lands before the fan-out drains.
  for (int i = 0; i < 12; ++i) {
    Aws::StringStream name;
    name << "file-" << i << ".bin";
    source.AddFile(name.str(), 4 * 1024 * 1024);
  }

  const Aws::String prefix = UniqueKey();
  auto manager = MakeManager();
  UploadDirectoryRequest request(s_bucketName, source.Path());
  request.SetS3Prefix(prefix).SetMaxConcurrency(2);

  auto handle = manager.UploadDirectory(request);
  auto future = handle.CompletionFuture();
  handle.Cancel();

  auto outcome = future.get();
  // A cancel fails the operation; the tally of what happened to land is not asserted, since the
  // race between the cancel and the in-flight children is inherently timing-dependent.
  ASSERT_FALSE(outcome.IsSuccess());
  EXPECT_STREQ("RequestCanceled", outcome.GetError().GetExceptionName().c_str());
}

}  // namespace
