/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/Scheme.h>
#include <aws/core/utils/threading/PooledThreadExecutor.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>

namespace Aws {
namespace Testing {
/**
 * A helper template to get the Request and Outcome types given the generated Operation method.
 * i.e. given Aws::S3::S3Client, will extract PutBucketTaggingRequest and PutBucketTagginOutcome types if used as
 * GetOpTypes<typename S3ClientT::PutBucketTagging>
 * @tparam OperationFuncT a method of the generated Client
 *
 * Mainly needed only to allow to include this header at any arbitrary point in .cpp, not only after S3 model headers included
 */
template <typename OperationFuncT>
struct GetOpTypes : GetOpTypes<decltype(&OperationFuncT::operator())> {};

template <typename ReturnT, typename ClassT, typename RequestT>
struct GetOpTypes<ReturnT (ClassT::*)(RequestT) const> {
  using RequestType = typename std::remove_const<typename std::remove_reference<RequestT>::type>::type;
  using ReturnType = typename std::remove_const<typename std::remove_reference<ReturnT>::type>::type;
};

/**
 * A set of common test utilities for generated S3 Clients (legacy and CRT) used across different tests
 */
class S3TestUtils {
 public:
  template <typename S3ClientT>
  static void TagTestBucket(const S3ClientT& client, const Aws::String& bucketName) {
    ASSERT_TRUE(!bucketName.empty());
    using PutBucketTaggingRequest = typename GetOpTypes<decltype(&S3ClientT::PutBucketTagging)>::RequestType;
    PutBucketTaggingRequest taggingRequest;
    taggingRequest.SetBucket(bucketName);

    using Tagging = typename std::remove_const<typename std::remove_reference<decltype((taggingRequest.GetTagging)())>::type>::type;
    Tagging tagging;
    using Tag = typename std::remove_const<typename std::remove_reference<decltype((tagging.GetTagSet)()[0])>::type>::type;
    Tag tag;
    static const char* TEST_BUCKET_TAG = "IntegrationTestResource";
    tag.SetKey(TEST_BUCKET_TAG);
    tag.SetValue(TEST_BUCKET_TAG);

    tagging.AddTagSet(tag);
    taggingRequest.SetTagging(tagging);

    auto taggingOutcome = CallOperationWithUnconditionalRetry(&client, &S3ClientT::PutBucketTagging, taggingRequest);
    AWS_ASSERT_SUCCESS(taggingOutcome);
  }

  template <typename S3ClientT>
  static void TagTestBucket(const std::shared_ptr<S3ClientT>& client, const Aws::String& bucketName) {
    ASSERT_TRUE(client);
    return TagTestBucket(*client.get(), bucketName);
  }

  template <typename S3ClientT>
  static bool WaitForBucketToPropagate(const S3ClientT& client, const Aws::String& bucketName) {
    EXPECT_TRUE(!bucketName.empty());

    static const int TIMEOUT_MAX = 20;
    unsigned timeoutCount = 0;
    using ListObjectsRequest = typename GetOpTypes<decltype(&S3ClientT::ListObjects)>::RequestType;
    using ListObjectsOutcome = typename GetOpTypes<decltype(&S3ClientT::ListObjects)>::ReturnType;
    while (timeoutCount++ < TIMEOUT_MAX) {
      ListObjectsRequest listObjectsRequest;
      listObjectsRequest.SetBucket(bucketName);
      ListObjectsOutcome listObjectsOutcome = client.ListObjects(listObjectsRequest);
      if (listObjectsOutcome.IsSuccess()) {
        return true;
      }

      std::this_thread::sleep_for(std::chrono::seconds(10));
    }

    return false;
  }

  template <typename S3ClientT>
  static bool WaitForBucketToPropagate(const std::shared_ptr<S3ClientT>& client, const Aws::String& bucketName) {
    EXPECT_TRUE(client);
    return WaitForBucketToPropagate(*client, bucketName);
  }

  template <typename S3ClientT>
  static bool WaitForObjectToPropagate(const S3ClientT& client, const Aws::String& bucketName, const char* objectKey) {
    EXPECT_TRUE(!bucketName.empty());
    EXPECT_TRUE(objectKey);

    static const int TIMEOUT_MAX = 20;
    unsigned timeoutCount = 0;
    using GetObjectRequest = typename GetOpTypes<decltype(&S3ClientT::GetObject)>::RequestType;
    using GetObjectOutcome = typename GetOpTypes<decltype(&S3ClientT::GetObject)>::ReturnType;
    while (timeoutCount++ < TIMEOUT_MAX) {
      GetObjectRequest getObjectRequest;
      getObjectRequest.SetBucket(bucketName);
      getObjectRequest.SetKey(objectKey);
      GetObjectOutcome getObjectOutcome = client.GetObject(getObjectRequest);
      if (getObjectOutcome.IsSuccess()) {
        return true;
      }

      std::this_thread::sleep_for(std::chrono::seconds(5));
    }

    return false;
  }

  template <typename S3ClientT>
  static bool WaitForObjectToPropagate(const std::shared_ptr<S3ClientT>& client, const Aws::String& bucketName, const char* objectKey) {
    EXPECT_TRUE(client);
    return WaitForObjectToPropagate(*client, bucketName, objectKey);
  }

  template <typename S3ClientT>
  static void EmptyBucket(const std::shared_ptr<S3ClientT>& client, const Aws::String& bucketName) {
    using ListObjectsRequest = typename GetOpTypes<decltype(&S3ClientT::ListObjects)>::RequestType;
    using ListObjectsOutcome = typename GetOpTypes<decltype(&S3ClientT::ListObjects)>::ReturnType;
    ListObjectsRequest listObjectsRequest;
    listObjectsRequest.SetBucket(bucketName);

    ListObjectsOutcome listObjectsOutcome = client->ListObjects(listObjectsRequest);

    if (!listObjectsOutcome.IsSuccess()) return;

    using DeleteObjectRequest = typename GetOpTypes<decltype(&S3ClientT::DeleteObject)>::RequestType;
    for (const auto& object : listObjectsOutcome.GetResult().GetContents()) {
      DeleteObjectRequest deleteObjectRequest;
      deleteObjectRequest.SetBucket(bucketName);
      deleteObjectRequest.SetKey(object.GetKey());
      auto res = client->DeleteObject(deleteObjectRequest);
      AWS_UNREFERENCED_PARAM(res);
    }
  }

  template <typename S3ClientT>
  static void WaitForBucketToEmpty(const std::shared_ptr<S3ClientT>& client, const Aws::String& bucketName) {
    using ListObjectsRequest = typename GetOpTypes<decltype(&S3ClientT::ListObjects)>::RequestType;
    using ListObjectsOutcome = typename GetOpTypes<decltype(&S3ClientT::ListObjects)>::ReturnType;
    ListObjectsRequest listObjectsRequest;
    listObjectsRequest.SetBucket(bucketName);

    unsigned checkForObjectsCount = 0;
    static const int TIMEOUT_MAX = 20;
    while (checkForObjectsCount++ < TIMEOUT_MAX) {
      ListObjectsOutcome listObjectsOutcome = client->ListObjects(listObjectsRequest);
      AWS_ASSERT_SUCCESS(listObjectsOutcome);

      if (!listObjectsOutcome.GetResult().GetContents().empty()) {
        std::this_thread::sleep_for(std::chrono::seconds(5));
      } else {
        break;
      }
    }
  }

  template <typename S3ClientT>
  static void DeleteBucket(const std::shared_ptr<S3ClientT>& client, const Aws::String& bucketName) {
    using HeadBucketRequest = typename GetOpTypes<decltype(&S3ClientT::HeadBucket)>::RequestType;
    HeadBucketRequest headBucketRequest;
    headBucketRequest.SetBucket(bucketName);
    auto bucketOutcome = client->HeadBucket(headBucketRequest);

    if (bucketOutcome.IsSuccess()) {
      EmptyBucket(client, bucketName);
      WaitForBucketToEmpty(client, bucketName);

      using DeleteBucketRequest = typename GetOpTypes<decltype(&S3ClientT::DeleteBucket)>::RequestType;
      DeleteBucketRequest deleteBucketRequest;
      deleteBucketRequest.SetBucket(bucketName);

      auto deleteBucketOutcome = CallOperationWithUnconditionalRetry(client.get(), &S3ClientT::DeleteBucket, deleteBucketRequest);
      AWS_ASSERT_SUCCESS(deleteBucketOutcome);
    }
  }

  static Aws::String CalculateBucketName(const Aws::String& bucketPrefix) { return Aws::Testing::GetAwsResourcePrefix() + bucketPrefix; }

  template <typename S3ClientT>
  static Aws::String PreparePresignedUrlTest(const std::shared_ptr<S3ClientT>& client, const Aws::String& bucketName) {
    const Aws::String fullBucketName = CalculateBucketName(bucketName);
    SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
    using CreateBucketRequest = typename GetOpTypes<decltype(&S3ClientT::CreateBucket)>::RequestType;
    CreateBucketRequest createBucketRequest;
    createBucketRequest.SetBucket(fullBucketName);
    // enum class BucketCannedACL;
    using BucketCannedACL =
        typename std::remove_const<typename std::remove_reference<decltype((createBucketRequest.GetACL)())>::type>::type;
    createBucketRequest.SetACL(BucketCannedACL::private_);
    auto createBucketOutcome = client->CreateBucket(createBucketRequest);
    AWS_EXPECT_SUCCESS(createBucketOutcome);
    const auto& createBucketResult = createBucketOutcome.GetResult();
    EXPECT_TRUE(!createBucketResult.GetLocation().empty());
    EXPECT_TRUE(WaitForBucketToPropagate(client, fullBucketName));
    TagTestBucket(client, fullBucketName);
    return fullBucketName;
  }

  template <typename GetNameForServerSideEncryptionFunc, typename S3ClientT>
  static void DoPresignedUrlTest(GetNameForServerSideEncryptionFunc&& GetNameForServerSideEncryption,
                                 const std::shared_ptr<S3ClientT>& client, const Aws::String& bucketName,
                                 std::shared_ptr<Aws::Http::HttpRequest>& putRequest) {
    using namespace Aws::Http;
    static const char* TEST_OBJ_KEY = "TestObjectKey";
    const std::shared_ptr<Aws::Http::HttpClient> httpClient = []() {
      Aws::Client::ClientConfiguration clientConfig;
      clientConfig.scheme = Scheme::HTTPS;
      clientConfig.executor = Aws::MakeShared<Aws::Utils::Threading::PooledThreadExecutor>("DoPresignedUrlTest", 4);
      clientConfig.region = Region::US_WEST_2;
      clientConfig.useDualStack = true;
      return Aws::Http::CreateHttpClient(clientConfig);
    }(); /*IIFE*/

    std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("BucketAndObjectOperationTest");
    *objectStream << "Test Object";
    objectStream->flush();

    putRequest->AddContentBody(objectStream);
    Aws::StringStream intConverter;
    intConverter << objectStream->tellp();
    putRequest->SetContentLength(intConverter.str());
    putRequest->SetContentType("text/plain");
    std::shared_ptr<Aws::Http::HttpResponse> putResponse = httpClient->MakeRequest(putRequest);

    ASSERT_EQ(Http::HttpResponseCode::OK, putResponse->GetResponseCode());

    ASSERT_TRUE(WaitForObjectToPropagate(client, bucketName, TEST_OBJ_KEY));

    // GetObject with presigned url
    Aws::String presignedUrlGet = client->GeneratePresignedUrl(bucketName, TEST_OBJ_KEY, HttpMethod::HTTP_GET);
    std::shared_ptr<HttpRequest> getRequest =
        CreateHttpRequest(presignedUrlGet, HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    std::shared_ptr<HttpResponse> getResponse = httpClient->MakeRequest(getRequest);

    ASSERT_EQ(Http::HttpResponseCode::OK, getResponse->GetResponseCode());
    Aws::StringStream ss;
    ss << getResponse->GetResponseBody().rdbuf();
    ASSERT_STREQ("Test Object", ss.str().c_str());

    using GetObjectRequest = typename GetOpTypes<decltype(&S3ClientT::GetObject)>::RequestType;
    GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket(bucketName).WithKey(TEST_OBJ_KEY);
    auto outcome = client->GetObject(getObjectRequest);
    AWS_ASSERT_SUCCESS(outcome);
    static const char SERVER_SIDE_ENCRYPTION[] = "x-amz-server-side-encryption";
    if (putRequest->HasHeader(SERVER_SIDE_ENCRYPTION)) {
      ASSERT_STREQ(GetNameForServerSideEncryption(outcome.GetResult().GetServerSideEncryption()).c_str(),
                   putRequest->GetHeaderValue(SERVER_SIDE_ENCRYPTION).c_str());
    }
  }

  template <typename S3ClientT>
  static void CleanUpPresignedUrlTest(const std::shared_ptr<S3ClientT>& client, const Aws::String& bucketName) {
    using namespace Aws::Http;
    static const char* TEST_OBJ_KEY = "TestObjectKey";
    const std::shared_ptr<HttpClient> httpClient = []() {
      Aws::Client::ClientConfiguration clientConfig;
      clientConfig.scheme = Scheme::HTTPS;
      clientConfig.executor = Aws::MakeShared<Aws::Utils::Threading::PooledThreadExecutor>("DoPresignedUrlTest", 4);
      clientConfig.region = Region::US_WEST_2;
      clientConfig.useDualStack = true;
      return Aws::Http::CreateHttpClient(clientConfig);
    }(); /*IIFE*/

    Aws::String fullBucketName = CalculateBucketName(bucketName);
    SCOPED_TRACE(Aws::String("FullBucketName ") + fullBucketName);
    Aws::String presignedUrlDelete = client->GeneratePresignedUrl(fullBucketName, TEST_OBJ_KEY, HttpMethod::HTTP_DELETE);
    std::shared_ptr<HttpRequest> deleteRequest =
        CreateHttpRequest(presignedUrlDelete, HttpMethod::HTTP_DELETE, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    std::shared_ptr<HttpResponse> deleteResponse = httpClient->MakeRequest(deleteRequest);
    ASSERT_EQ(HttpResponseCode::NO_CONTENT, deleteResponse->GetResponseCode());
    WaitForBucketToEmpty(client, fullBucketName);
  }
};
}  // namespace Testing
}  // namespace Aws
