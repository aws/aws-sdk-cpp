/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/HeadBucketRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/ListObjectsV2Request.h>
#include <aws/s3/model/pagination/ListObjectsV2PaginationTraits.h>
#include <aws/s3/model/PutBucketTaggingRequest.h>
#include <thread>

using namespace Aws;
using namespace Aws::S3;
using namespace Aws::S3::Model;

namespace {
    static const char* ALLOCATION_TAG = "ListObjectsV2PaginationTest";
    static const char* TEST_BUCKET_TAG = "IntegrationTestResource";
    static const int TIMEOUT_MAX = 20;
    const size_t OBJECT_COUNT = 15;
    const size_t MAX_KEYS = 3;
}

class ListObjectsV2PaginationTest : public Aws::Testing::AwsCppSdkGTestSuite {
protected:
    std::shared_ptr<S3Client> Client;
    Aws::String bucketName;
    Aws::String emptyBucketName;

    void SetUp() override {
        Aws::Client::ClientConfiguration config;
        config.region = Aws::Region::US_EAST_1;
        config.scheme = Aws::Http::Scheme::HTTPS;
        config.connectTimeoutMs = 30000;
        config.requestTimeoutMs = 30000;
        
        Client = Aws::MakeShared<S3Client>(ALLOCATION_TAG, config);
            
        bucketName = CalculateBucketName("listobjectsv2paginationtest");
        emptyBucketName = CalculateBucketName("listobjectsv2emptytest");
        
        CreateBucketRequest createRequest;
        createRequest.SetBucket(bucketName);
        createRequest.SetACL(BucketCannedACL::private_);
        auto createOutcome = Client->CreateBucket(createRequest);
        AWS_ASSERT_SUCCESS(createOutcome);
        
        createRequest.SetBucket(emptyBucketName);
        createOutcome = Client->CreateBucket(createRequest);
        AWS_ASSERT_SUCCESS(createOutcome);
        
        ASSERT_TRUE(WaitForBucketToPropagate(bucketName));
        ASSERT_TRUE(WaitForBucketToPropagate(emptyBucketName));
        TagTestBucket(bucketName);
        TagTestBucket(emptyBucketName);
        
        // Create test objects
        for (size_t i = 1; i <= OBJECT_COUNT; ++i) {
            Aws::StringStream ss;
            ss << "key-" << std::setfill('0') << std::setw(2) << i;
            CreateTestObject(ss.str());
        }
    }

    void TearDown() override {
        DeleteBucket(bucketName);
        DeleteBucket(emptyBucketName);
        Client = nullptr;
    }

    static void TagTestBucket(const Aws::String& bucketName, const std::shared_ptr<S3Client>& client) {
        ASSERT_TRUE(!bucketName.empty());
        ASSERT_TRUE(client);

        PutBucketTaggingRequest taggingRequest;
        taggingRequest.SetBucket(bucketName);
        Tag tag;
        tag.SetKey(TEST_BUCKET_TAG);
        tag.SetValue(TEST_BUCKET_TAG);
        Tagging tagging;
        tagging.AddTagSet(tag);
        taggingRequest.SetTagging(tagging);

        auto taggingOutcome = client->PutBucketTagging(taggingRequest);
        AWS_ASSERT_SUCCESS(taggingOutcome);
    }

    void TagTestBucket(const Aws::String& bucketNameParam) {
        TagTestBucket(bucketNameParam, Client);
    }

    bool WaitForBucketToPropagate(const Aws::String& bucketNameParam) {
        unsigned timeoutCount = 0;
        while (timeoutCount++ < TIMEOUT_MAX) {
            ListObjectsV2Request listRequest;
            listRequest.SetBucket(bucketNameParam);
            auto listOutcome = Client->ListObjectsV2(listRequest);
            if (listOutcome.IsSuccess()) {
                return true;
            }
            std::this_thread::sleep_for(std::chrono::seconds(10));
        }
        return false;
    }

    void EmptyBucket(const Aws::String& bucketNameParam) {
        ListObjectsV2Request listObjectsRequest;
        listObjectsRequest.SetBucket(bucketNameParam);

        ListObjectsV2Outcome listObjectsOutcome = Client->ListObjectsV2(listObjectsRequest);

        if (!listObjectsOutcome.IsSuccess())
            return;

        for (const auto& object : listObjectsOutcome.GetResult().GetContents()) {
            DeleteObjectRequest deleteObjectRequest;
            deleteObjectRequest.SetBucket(bucketNameParam);
            deleteObjectRequest.SetKey(object.GetKey());
            auto deleteObjectOutcome = Client->DeleteObject(deleteObjectRequest);
            AWS_ASSERT_SUCCESS(deleteObjectOutcome);
        }
    }

    void WaitForBucketToEmpty(const Aws::String& bucketNameParam) {
        ListObjectsV2Request listObjectsRequest;
        listObjectsRequest.SetBucket(bucketNameParam);

        unsigned checkForObjectsCount = 0;
        while (checkForObjectsCount++ < TIMEOUT_MAX) {
            ListObjectsV2Outcome listObjectsOutcome = Client->ListObjectsV2(listObjectsRequest);
            AWS_EXPECT_SUCCESS(listObjectsOutcome);

            if (listObjectsOutcome.GetResult().GetContents().size() > 0) {
                std::this_thread::sleep_for(std::chrono::seconds(5));
            } else {
                break;
            }
        }
    }

    void DeleteBucket(const Aws::String& bucketNameParam) {
        HeadBucketRequest headBucketRequest;
        headBucketRequest.SetBucket(bucketNameParam);
        HeadBucketOutcome bucketOutcome = Client->HeadBucket(headBucketRequest);

        if (bucketOutcome.IsSuccess()) {
            EmptyBucket(bucketNameParam);
            WaitForBucketToEmpty(bucketNameParam);

            DeleteBucketRequest deleteBucketRequest;
            deleteBucketRequest.SetBucket(bucketNameParam);

            DeleteBucketOutcome deleteBucketOutcome = Client->DeleteBucket(deleteBucketRequest);
            AWS_EXPECT_SUCCESS(deleteBucketOutcome);
        }
    }

    static Aws::String CalculateBucketName(const Aws::String& bucketPrefix) {
        return Aws::Testing::GetAwsResourcePrefix() + bucketPrefix;
    }

    void CreateTestObject(const Aws::String& key) {
        PutObjectRequest putRequest;
        putRequest.SetBucket(bucketName);
        putRequest.SetKey(key);
        
        auto data = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *data << "Test data for " << key;
        putRequest.SetBody(data);
        
        auto putOutcome = Client->PutObject(putRequest);
        AWS_ASSERT_SUCCESS(putOutcome);
    }
};

TEST_F(ListObjectsV2PaginationTest, TestPaginationOnEmptyBucket) {
    ListObjectsV2Request request;
    request.SetBucket(emptyBucketName);
    request.SetMaxKeys(MAX_KEYS);
    
    size_t objectCount = 0;
    auto outcome = Client->ListObjectsV2(request);
    
    while (outcome.IsSuccess()) {
        const auto& result = outcome.GetResult();
        objectCount += result.GetContents().size();
        
        if (!Aws::S3::Pagination::ListObjectsV2PaginationTraits::HasMoreResults(result)) {
            break;
        }
        
        Aws::S3::Pagination::ListObjectsV2PaginationTraits::SetNextRequest(result, request);
        outcome = Client->ListObjectsV2(request);
    }
    
    AWS_ASSERT_SUCCESS(outcome);
    EXPECT_EQ(0u, objectCount);
}

TEST_F(ListObjectsV2PaginationTest, TestPaginationOnNonEmptyBucket) {
    ListObjectsV2Request request;
    request.SetBucket(bucketName);
    request.SetMaxKeys(MAX_KEYS);
    
    size_t objectCount = 0;
    size_t pageCount = 0;
    auto outcome = Client->ListObjectsV2(request);
    
    while (outcome.IsSuccess()) {
        const auto& result = outcome.GetResult();
        objectCount += result.GetContents().size();
        pageCount++;
        
        if (!Aws::S3::Pagination::ListObjectsV2PaginationTraits::HasMoreResults(result)) {
            break;
        }
        
        Aws::S3::Pagination::ListObjectsV2PaginationTraits::SetNextRequest(result, request);
        outcome = Client->ListObjectsV2(request);
    }
    
    AWS_ASSERT_SUCCESS(outcome);
    EXPECT_EQ(OBJECT_COUNT, objectCount);
    EXPECT_GT(pageCount, 1u); // Should have multiple pages with MaxKeys=3
}

TEST_F(ListObjectsV2PaginationTest, TestManualPaginationLoop) {
    ListObjectsV2Request request;
    request.SetBucket(bucketName);
    request.SetMaxKeys(MAX_KEYS);
    
    Aws::Vector<Aws::String> allKeys;
    
    do {
        auto outcome = Client->ListObjectsV2(request);
        AWS_ASSERT_SUCCESS(outcome);
        
        const auto& result = outcome.GetResult();
        for (const auto& object : result.GetContents()) {
            allKeys.push_back(object.GetKey());
        }
        
        if (!result.GetIsTruncated()) {
            break;
        }
        
        request.SetContinuationToken(result.GetNextContinuationToken());
    } while (true);
    
    EXPECT_EQ(OBJECT_COUNT, allKeys.size());
}
