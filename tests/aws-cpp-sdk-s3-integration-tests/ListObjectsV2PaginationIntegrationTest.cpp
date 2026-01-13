/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/ListObjectsV2Request.h>
#include <aws/s3/model/ListObjectsV2PaginationTraits.h>
#include <aws/s3/model/PutBucketTaggingRequest.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/StringUtils.h>
#include <thread>

using namespace Aws;
using namespace Aws::S3;
using namespace Aws::S3::Model;

namespace {
    static const char* ALLOCATION_TAG = "ListObjectsV2PaginationTest";
    static const char* TEST_BUCKET_TAG = "IntegrationTestResource";
    static const int TIMEOUT_MAX = 5;
    const size_t OBJECT_COUNT = 3;
    
    Aws::String CalculateBucketName(const Aws::String& bucketPrefix) {
        return Aws::Testing::GetAwsResourcePrefix() + bucketPrefix;
    }
}

class ListObjectsV2PaginationTest : public Aws::Testing::AwsCppSdkGTestSuite {
protected:
    S3Client Client;
    Aws::String bucketName;

    void SetUp() override {
        Aws::Client::ClientConfiguration config;
        config.region = Aws::Region::US_EAST_1;
        Client = S3Client(config);
        
        bucketName = CalculateBucketName("listobjectsv2paginationtest");
        
        // Create bucket
        CreateBucketRequest createRequest;
        createRequest.SetBucket(bucketName);
        createRequest.SetACL(BucketCannedACL::private_);
        auto createOutcome = Client.CreateBucket(createRequest);
        AWS_ASSERT_SUCCESS(createOutcome);
        
        ASSERT_TRUE(WaitForBucketToPropagate());
        TagTestBucket();
        
        // Create a few test objects
        for (size_t i = 1; i <= OBJECT_COUNT; ++i) {
            CreateTestObject("key-" + Aws::Utils::StringUtils::to_string(i));
        }
    }

    void TearDown() override {
        if (!bucketName.empty()) {
            EmptyBucket();
            
            DeleteBucketRequest deleteRequest;
            deleteRequest.SetBucket(bucketName);
            Client.DeleteBucket(deleteRequest);
        }
    }
    
    bool WaitForBucketToPropagate() {
        unsigned timeoutCount = 0;
        while (timeoutCount++ < TIMEOUT_MAX) {
            ListObjectsV2Request listRequest;
            listRequest.SetBucket(bucketName);
            auto listOutcome = Client.ListObjectsV2(listRequest);
            if (listOutcome.IsSuccess()) {
                return true;
            }
            std::this_thread::sleep_for(std::chrono::seconds(2));
        }
        return false;
    }
    
    void TagTestBucket() {
        PutBucketTaggingRequest taggingRequest;
        taggingRequest.SetBucket(bucketName);
        Tag tag;
        tag.SetKey(TEST_BUCKET_TAG);
        tag.SetValue(TEST_BUCKET_TAG);
        Tagging tagging;
        tagging.AddTagSet(tag);
        taggingRequest.SetTagging(tagging);
        Client.PutBucketTagging(taggingRequest);
    }
    
    void CreateTestObject(const Aws::String& key) {
        PutObjectRequest putRequest;
        putRequest.SetBucket(bucketName);
        putRequest.SetKey(key);
        
        auto data = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
        *data << "Test data for " << key;
        putRequest.SetBody(data);
        
        Client.PutObject(putRequest);
    }
    
    void EmptyBucket() {
        ListObjectsV2Request listRequest;
        listRequest.SetBucket(bucketName);
        auto listOutcome = Client.ListObjectsV2(listRequest);
        
        if (listOutcome.IsSuccess()) {
            for (const auto& object : listOutcome.GetResult().GetContents()) {
                DeleteObjectRequest deleteRequest;
                deleteRequest.SetBucket(bucketName);
                deleteRequest.SetKey(object.GetKey());
                Client.DeleteObject(deleteRequest);
            }
        }
    }
};

TEST_F(ListObjectsV2PaginationTest, TestPaginationTraits) {
    ListObjectsV2Request request;
    request.SetBucket(bucketName);
    request.SetMaxKeys(1);  // Force pagination
    
    size_t pageCount = 0;
    auto paginator = Client.ListObjectsV2Paginator(request);
    
    for (const auto& outcome : paginator) {
        AWS_ASSERT_SUCCESS(outcome);
        pageCount++;
    }
    
    EXPECT_GT(pageCount, 1u);  // Should have multiple pages with MaxKeys=1
}