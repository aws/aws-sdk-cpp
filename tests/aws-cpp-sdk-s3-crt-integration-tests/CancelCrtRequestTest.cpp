/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/stream/SimpleStreamBuf.h>
#include <aws/s3-crt/S3CrtClient.h>
#include <aws/s3-crt/model/CreateBucketRequest.h>
#include <aws/s3-crt/model/DeleteBucketRequest.h>
#include <aws/s3-crt/model/DeleteObjectRequest.h>
#include <aws/s3-crt/model/GetObjectRequest.h>
#include <aws/s3-crt/model/HeadBucketRequest.h>
#include <aws/s3-crt/model/ListObjectsRequest.h>
#include <aws/s3-crt/model/PutBucketTaggingRequest.h>
#include <aws/s3-crt/model/PutObjectRequest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <gtest/gtest.h>

#include <random>

#ifdef _WIN32
#pragma warning(disable : 4127)
#ifdef GetObject
#undef GetObject
#endif
#endif

using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::S3Crt;
using namespace Aws::S3Crt::Model;
using namespace Aws::Utils;

namespace {
const char ALLOCATION_TAG[] = "CancelCrtRequestTest";
const char BUCKET_NAME[] = "test-cancel-crt-request";

class CancelCrtRequestTest : public ::testing::Test {
 public:
 protected:
  void SetUp() override {
    S3Crt::ClientConfiguration configuration;
    configuration.region = "us-east-1";
    m_client = Aws::MakeShared<S3CrtClient>(ALLOCATION_TAG, configuration);

    m_bucketName = CalculateBucketName(BUCKET_NAME);
    SCOPED_TRACE(Aws::String("FullBucketName ") + m_bucketName);
    CreateBucketRequest createBucketRequest;
    createBucketRequest.SetBucket(m_bucketName);
    createBucketRequest.SetACL(BucketCannedACL::private_);

    CreateBucketOutcome createBucketOutcome = m_client->CreateBucket(createBucketRequest);
    AWS_EXPECT_SUCCESS(createBucketOutcome);
    EXPECT_TRUE(WaitForBucketToPropagate(m_bucketName));
    TagTestBucket(m_bucketName);
  }

  void TearDown() override {
    DeleteBucket(m_bucketName);
    m_client.reset();
  }

  void EmptyBucket(const Aws::String& bucketName) {
    ListObjectsRequest listObjectsRequest;
    listObjectsRequest.SetBucket(bucketName);

    ListObjectsOutcome listObjectsOutcome = m_client->ListObjects(listObjectsRequest);

    if (!listObjectsOutcome.IsSuccess()) return;

    for (const auto& object : listObjectsOutcome.GetResult().GetContents()) {
      DeleteObjectRequest deleteObjectRequest;
      deleteObjectRequest.SetBucket(bucketName);
      deleteObjectRequest.SetKey(object.GetKey());
      auto deleteOutcome = m_client->DeleteObject(deleteObjectRequest);
      AWS_UNREFERENCED_PARAM(deleteOutcome);
    }
  }

  void WaitForBucketToEmpty(const Aws::String& bucketName) {
    ListObjectsRequest listObjectsRequest;
    listObjectsRequest.SetBucket(bucketName);

    unsigned checkForObjectsCount = 0;
    static const int TIMEOUT_MAX = 20;
    while (checkForObjectsCount++ < TIMEOUT_MAX) {
      ListObjectsOutcome listObjectsOutcome = m_client->ListObjects(listObjectsRequest);
      AWS_ASSERT_SUCCESS(listObjectsOutcome);

      if (!listObjectsOutcome.GetResult().GetContents().empty()) {
        std::this_thread::sleep_for(std::chrono::seconds(5));
      } else {
        break;
      }
    }
  }

  void DeleteBucket(const Aws::String& bucketName) {
    HeadBucketRequest headBucketRequest;
    headBucketRequest.SetBucket(bucketName);
    HeadBucketOutcome bucketOutcome = m_client->HeadBucket(headBucketRequest);

    if (bucketOutcome.IsSuccess()) {
      EmptyBucket(bucketName);
      WaitForBucketToEmpty(bucketName);

      DeleteBucketRequest deleteBucketRequest;
      deleteBucketRequest.SetBucket(bucketName);

      auto deleteBucketOutcome =
          CallOperationWithUnconditionalRetry(m_client.get(), &Aws::S3Crt::S3CrtClient::DeleteBucket, deleteBucketRequest);
      AWS_ASSERT_SUCCESS(deleteBucketOutcome);
    }
  }

  bool WaitForBucketToPropagate(const Aws::String& bucketName) {
    unsigned timeoutCount = 0;
    static const int TIMEOUT_MAX = 20;
    while (timeoutCount++ < TIMEOUT_MAX) {
      ListObjectsRequest listObjectsRequest;
      listObjectsRequest.SetBucket(bucketName);
      ListObjectsOutcome listObjectsOutcome = m_client->ListObjects(listObjectsRequest);
      if (listObjectsOutcome.IsSuccess()) {
        return true;
      }

      std::this_thread::sleep_for(std::chrono::seconds(10));
    }

    return false;
  }

  void TagTestBucket(const Aws::String& bucketName) {
    ASSERT_TRUE(!bucketName.empty());
    ASSERT_TRUE(m_client);

    PutBucketTaggingRequest taggingRequest;
    taggingRequest.SetBucket(bucketName);
    Tag tag;
    static const char* TEST_BUCKET_TAG = "IntegrationTestResource";
    tag.SetKey(TEST_BUCKET_TAG);
    tag.SetValue(TEST_BUCKET_TAG);
    Tagging tagging;
    tagging.AddTagSet(tag);
    taggingRequest.SetTagging(tagging);

    auto taggingOutcome = CallOperationWithUnconditionalRetry(m_client.get(), &Aws::S3Crt::S3CrtClient::PutBucketTagging, taggingRequest);
    AWS_ASSERT_SUCCESS(taggingOutcome);
  }

  static Aws::String CalculateBucketName(const Aws::String& bucketPrefix) { return Aws::Testing::GetAwsResourcePrefix() + bucketPrefix; }

  static Aws::String randomString() { return StringUtils::ToLower(Aws::String(UUID::RandomUUID()).c_str()); }

  std::shared_ptr<S3CrtClient> m_client;
  Aws::String m_bucketName;
};

TEST_F(CancelCrtRequestTest, ShouldCancelCrtRequest) {
  const char TEST_KEY[] = "should-cancel-crt-request";
  // Put something
  {
    PutObjectRequest putObjectRequest1;
    putObjectRequest1.SetBucket(m_bucketName);
    std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("CancelCrtRequestTest");
    *objectStream << "Test Object First Call";
    putObjectRequest1.SetBody(objectStream);
    putObjectRequest1.SetKey(TEST_KEY);
    putObjectRequest1.SetContentType("text/plain");

    PutObjectOutcome putObjectOutcome1 = m_client->PutObject(putObjectRequest1);
    AWS_ASSERT_SUCCESS(putObjectOutcome1);
  }

  // Try to put something else but abort the operation
  {
    /**
     * Just a test StreamBuf that won't give anything until "ready"
     */
    class NotifyingTestStream : public Aws::Utils::Stream::SimpleStreamBuf {
     public:
      std::function<void()> m_onReadCallback;

      explicit NotifyingTestStream(const Aws::String& value, std::function<void()>&& onReadCallback)
          : SimpleStreamBuf(value), m_onReadCallback(std::move(onReadCallback)) {}

     protected:
      std::streamsize xsgetn(char_type* s, std::streamsize count) override {
        m_onReadCallback();

        return SimpleStreamBuf::xsgetn(s, count);
      }
    };

    PutObjectRequest putObjectRequest2;
    putObjectRequest2.SetBucket(m_bucketName);
    putObjectRequest2.SetKey(TEST_KEY);
    std::atomic<bool> shouldContinueAtomic{true};
    putObjectRequest2.SetContinueRequestHandler([&shouldContinueAtomic](const HttpRequest*) { return shouldContinueAtomic.load(); });

    static const uint32_t tenMB = 5 * 1024 * 1024;
    Aws::String largePayloadToBeSplitIntoMultiPart;
    while (largePayloadToBeSplitIntoMultiPart.size() < tenMB) {
      largePayloadToBeSplitIntoMultiPart += "Test Object Second Call\n";
    }
    NotifyingTestStream testStream(largePayloadToBeSplitIntoMultiPart, [&shouldContinueAtomic]() { shouldContinueAtomic.store(false); });
    std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::IOStream>("CancelCrtRequestTest", &testStream);

    putObjectRequest2.SetBody(objectStream);
    putObjectRequest2.SetContentType("text/plain");

    PutObjectOutcome putObjectOutcome2;
    std::mutex mtx;
    std::condition_variable cv;
    bool handlerCalled = false;
    auto asyncHandler = [&putObjectOutcome2, &mtx, &cv, &handlerCalled](const S3CrtClient*, const Model::PutObjectRequest&,
                                                                        const Model::PutObjectOutcome& outcome,
                                                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) {
      std::unique_lock<std::mutex> lock(mtx);

      putObjectOutcome2 = outcome;
      handlerCalled = true;
      cv.notify_one();
    };
    m_client->PutObjectAsync(putObjectRequest2, asyncHandler);
    if (!handlerCalled) {
      std::unique_lock<std::mutex> lock(mtx);
      cv.wait_for(lock, std::chrono::seconds(60), [&handlerCalled]() { return handlerCalled; });
    }
    ASSERT_TRUE(handlerCalled) << "User handler of async operatioin PutObjectAsync was not called within 60 seconds!";

    ASSERT_FALSE(putObjectOutcome2.IsSuccess());
    ASSERT_EQ((CoreErrors)putObjectOutcome2.GetError().GetErrorType(), CoreErrors::USER_CANCELLED);
    ASSERT_EQ(putObjectOutcome2.GetError().GetMessage(), "Request successfully cancelled (aws-c-s3: AWS_ERROR_S3_CANCELED)");
  }

  // Try to get already cancelled request
  {
    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(m_bucketName);
    getObjectRequest.SetKey(TEST_KEY);
    std::atomic<bool> shouldContinueAtomic{false};
    getObjectRequest.SetContinueRequestHandler([&shouldContinueAtomic](const HttpRequest*) { return shouldContinueAtomic.load(); });

    GetObjectOutcome getObjectOutcome;
    std::mutex mtx;
    std::condition_variable cv;
    bool handlerCalled = false;
    auto asyncHandler = [&getObjectOutcome, &mtx, &cv, &handlerCalled](const S3CrtClient*, const Model::GetObjectRequest&,
                                                                       const Model::GetObjectOutcome& outcome,
                                                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) {
      std::unique_lock<std::mutex> lock(mtx);

      getObjectOutcome = outcome.GetError();
      handlerCalled = true;
      cv.notify_one();
    };
    m_client->GetObjectAsync(getObjectRequest, asyncHandler);
    if (!handlerCalled) {
      std::unique_lock<std::mutex> lock(mtx);
      cv.wait_for(lock, std::chrono::seconds(60), [&handlerCalled]() { return handlerCalled; });
    }
    ASSERT_TRUE(handlerCalled) << "User handler of async operatioin GetObjectAsync was not called within 60 seconds!";

    ASSERT_FALSE(getObjectOutcome.IsSuccess());
    ASSERT_EQ((CoreErrors)getObjectOutcome.GetError().GetErrorType(), CoreErrors::USER_CANCELLED);
    ASSERT_EQ(getObjectOutcome.GetError().GetMessage(), "Request successfully cancelled (aws-c-s3: AWS_ERROR_S3_CANCELED)");
  }
}
}  // namespace
