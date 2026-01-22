/*
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/Aws.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/ListObjectsV2Request.h>
#include <aws/s3/model/pagination/ListObjectsV2PaginationTraits.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/testing/AwsTestHelpers.h>

using namespace Aws;
using namespace Aws::S3;
using namespace Aws::S3::Model;

namespace {
    static const char* ALLOCATION_TAG = "ListObjectsV2PaginationTest";
    const size_t OBJECT_COUNT = 15;
    const size_t MAX_KEYS = 3;
}

class ListObjectsV2PaginationTest : public Aws::Testing::AwsCppSdkGTestSuite {
protected:
    std::shared_ptr<S3Client> s3Client;
    Aws::String bucketName;
    Aws::String emptyBucketName;

    void SetUp() override {
        Aws::SDKOptions options;
        Aws::InitAPI(options);
        
        s3Client = Aws::MakeShared<S3Client>(ALLOCATION_TAG);
        bucketName = CalculateBucketName("listobjectsv2paginationtest");
        emptyBucketName = CalculateBucketName("listobjectsv2emptytest");
        
        CreateBucketRequest createRequest;
        createRequest.SetBucket(bucketName);
        s3Client->CreateBucket(createRequest);
        
        createRequest.SetBucket(emptyBucketName);
        s3Client->CreateBucket(createRequest);
        
        // Create test objects
        for (size_t i = 1; i <= OBJECT_COUNT; ++i) {
            Aws::StringStream ss;
            ss << "key-" << std::setfill('0') << std::setw(2) << i;
            CreateTestObject(ss.str());
        }
    }

    void TearDown() override {
        // Delete all objects
        ListObjectsV2Request listRequest;
        listRequest.SetBucket(bucketName);
        auto listOutcome = s3Client->ListObjectsV2(listRequest);
        if (listOutcome.IsSuccess()) {
            for (const auto& object : listOutcome.GetResult().GetContents()) {
                DeleteObjectRequest deleteRequest;
                deleteRequest.SetBucket(bucketName);
                deleteRequest.SetKey(object.GetKey());
                s3Client->DeleteObject(deleteRequest);
            }
        }
        
        DeleteBucketRequest deleteRequest;
        deleteRequest.SetBucket(bucketName);
        s3Client->DeleteBucket(deleteRequest);
        
        deleteRequest.SetBucket(emptyBucketName);
        s3Client->DeleteBucket(deleteRequest);
        
        Aws::SDKOptions options;
        Aws::ShutdownAPI(options);
    }

    Aws::String CalculateBucketName(const Aws::String& bucketPrefix) {
        return Aws::Testing::GetAwsResourcePrefix() + bucketPrefix;
    }

    void CreateTestObject(const Aws::String& key) {
        PutObjectRequest putRequest;
        putRequest.SetBucket(bucketName);
        putRequest.SetKey(key);
        
        auto data = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *data << "Test data for " << key;
        putRequest.SetBody(data);
        
        s3Client->PutObject(putRequest);
    }
};

TEST_F(ListObjectsV2PaginationTest, TestPaginationOnEmptyBucket) {
    ListObjectsV2Request request;
    request.SetBucket(emptyBucketName);
    request.SetMaxKeys(MAX_KEYS);
    
    size_t objectCount = 0;
    auto outcome = s3Client->ListObjectsV2(request);
    
    while (outcome.IsSuccess()) {
        const auto& result = outcome.GetResult();
        objectCount += result.GetContents().size();
        
        if (!Aws::S3::Pagination::ListObjectsV2PaginationTraits::HasMoreResults(result)) {
            break;
        }
        
        Aws::S3::Pagination::ListObjectsV2PaginationTraits::SetNextRequest(result, request);
        outcome = s3Client->ListObjectsV2(request);
    }
    
    ASSERT_TRUE(outcome.IsSuccess());
    EXPECT_EQ(0u, objectCount);
}

TEST_F(ListObjectsV2PaginationTest, TestPaginationOnNonEmptyBucket) {
    ListObjectsV2Request request;
    request.SetBucket(bucketName);
    request.SetMaxKeys(MAX_KEYS);
    
    size_t objectCount = 0;
    size_t pageCount = 0;
    auto outcome = s3Client->ListObjectsV2(request);
    
    while (outcome.IsSuccess()) {
        const auto& result = outcome.GetResult();
        objectCount += result.GetContents().size();
        pageCount++;
        
        if (!Aws::S3::Pagination::ListObjectsV2PaginationTraits::HasMoreResults(result)) {
            break;
        }
        
        Aws::S3::Pagination::ListObjectsV2PaginationTraits::SetNextRequest(result, request);
        outcome = s3Client->ListObjectsV2(request);
    }
    
    ASSERT_TRUE(outcome.IsSuccess());
    EXPECT_EQ(OBJECT_COUNT, objectCount);
    EXPECT_GT(pageCount, 1u); // Should have multiple pages with MaxKeys=3
}

TEST_F(ListObjectsV2PaginationTest, TestManualPaginationLoop) {
    ListObjectsV2Request request;
    request.SetBucket(bucketName);
    request.SetMaxKeys(MAX_KEYS);
    
    Aws::Vector<Aws::String> allKeys;
    
    do {
        auto outcome = s3Client->ListObjectsV2(request);
        ASSERT_TRUE(outcome.IsSuccess());
        
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
