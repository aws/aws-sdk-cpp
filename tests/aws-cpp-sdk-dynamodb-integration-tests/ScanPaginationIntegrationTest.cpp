/*
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/Aws.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/model/CreateTableRequest.h>
#include <aws/dynamodb/model/DeleteTableRequest.h>
#include <aws/dynamodb/model/PutItemRequest.h>
#include <aws/dynamodb/model/ScanRequest.h>
#include <aws/dynamodb/model/AttributeDefinition.h>
#include <aws/dynamodb/model/KeySchemaElement.h>
#include <aws/dynamodb/model/ProvisionedThroughput.h>
#include <aws/dynamodb/model/pagination/ScanPaginationTraits.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/testing/AwsTestHelpers.h>
#include <random>

using namespace Aws;
using namespace Aws::DynamoDB;
using namespace Aws::DynamoDB::Model;

namespace {
    static const char* ALLOCATION_TAG = "ScanPaginationTest";
    const size_t ITEM_COUNT = 19;
    const Aws::String HASH_KEY_NAME = "id";
    const Aws::String ATTRIBUTE_FOO = "attribute_foo";
}

class ScanPaginationTest : public Aws::Testing::AwsCppSdkGTestSuite {
protected:
    std::shared_ptr<DynamoDBClient> dynamoClient;
    Aws::String tableName;

    void SetUp() override {
        Aws::SDKOptions options;
        Aws::InitAPI(options);
        
        dynamoClient = Aws::MakeShared<DynamoDBClient>(ALLOCATION_TAG);
        tableName = CalculateTableName("scan-paginator-test");
        
        CreateTable();
        PutTestData();
    }

    void TearDown() override {
        DeleteTableRequest deleteRequest;
        deleteRequest.SetTableName(tableName);
        dynamoClient->DeleteTable(deleteRequest);
        
        Aws::SDKOptions options;
        Aws::ShutdownAPI(options);
    }

    Aws::String CalculateTableName(const Aws::String& tablePrefix) {
        return Aws::Testing::GetAwsResourcePrefix() + tablePrefix;
    }

    void CreateTable() {
        CreateTableRequest createRequest;
        createRequest.SetTableName(tableName);
        
        KeySchemaElement keySchema;
        keySchema.SetKeyType(KeyType::HASH);
        keySchema.SetAttributeName(HASH_KEY_NAME);
        createRequest.AddKeySchema(keySchema);
        
        AttributeDefinition attrDef;
        attrDef.SetAttributeType(ScalarAttributeType::N);
        attrDef.SetAttributeName(HASH_KEY_NAME);
        createRequest.AddAttributeDefinitions(attrDef);
        
        ProvisionedThroughput throughput;
        throughput.SetReadCapacityUnits(5);
        throughput.SetWriteCapacityUnits(5);
        createRequest.SetProvisionedThroughput(throughput);
        
        auto outcome = dynamoClient->CreateTable(createRequest);
        ASSERT_TRUE(outcome.IsSuccess());
        
        // Wait for table to be active (simplified)
        std::this_thread::sleep_for(std::chrono::seconds(10));
    }

    void PutTestData() {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, ITEM_COUNT - 1);
        
        for (size_t i = 0; i < ITEM_COUNT; ++i) {
            PutItemRequest putRequest;
            putRequest.SetTableName(tableName);
            
            Aws::Map<Aws::String, AttributeValue> item;
            item[HASH_KEY_NAME] = AttributeValue().SetN(std::to_string(i));
            item[ATTRIBUTE_FOO] = AttributeValue().SetN(std::to_string(dis(gen)));
            
            putRequest.SetItem(item);
            auto outcome = dynamoClient->PutItem(putRequest);
            ASSERT_TRUE(outcome.IsSuccess());
        }
    }
};

TEST_F(ScanPaginationTest, TestMultipleIterationOnResponses) {
    ScanRequest request;
    request.SetTableName(tableName);
    request.SetConsistentRead(true);
    request.SetLimit(2);
    
    size_t count = 0;
    auto outcome = dynamoClient->Scan(request);
    
    // First iteration
    while (outcome.IsSuccess()) {
        const auto& result = outcome.GetResult();
        count += result.GetCount();
        
        if (!Aws::DynamoDB::Pagination::ScanPaginationTraits::HasMoreResults(result)) {
            break;
        }
        
        Aws::DynamoDB::Pagination::ScanPaginationTraits::SetNextRequest(result, request);
        outcome = dynamoClient->Scan(request);
    }
    
    EXPECT_EQ(ITEM_COUNT, count);
    
    // Reset for second iteration
    request = ScanRequest();
    request.SetTableName(tableName);
    request.SetConsistentRead(true);
    request.SetLimit(2);
    
    count = 0;
    outcome = dynamoClient->Scan(request);
    
    // Second iteration
    while (outcome.IsSuccess()) {
        const auto& result = outcome.GetResult();
        count += result.GetCount();
        
        if (!Aws::DynamoDB::Pagination::ScanPaginationTraits::HasMoreResults(result)) {
            break;
        }
        
        Aws::DynamoDB::Pagination::ScanPaginationTraits::SetNextRequest(result, request);
        outcome = dynamoClient->Scan(request);
    }
    
    EXPECT_EQ(ITEM_COUNT, count);
}

TEST_F(ScanPaginationTest, TestPaginationWithLimit) {
    ScanRequest request;
    request.SetTableName(tableName);
    request.SetConsistentRead(true);
    request.SetLimit(3);
    
    size_t totalItems = 0;
    size_t pageCount = 0;
    auto outcome = dynamoClient->Scan(request);
    
    while (outcome.IsSuccess()) {
        const auto& result = outcome.GetResult();
        totalItems += result.GetCount();
        pageCount++;
        
        if (!Aws::DynamoDB::Pagination::ScanPaginationTraits::HasMoreResults(result)) {
            break;
        }
        
        Aws::DynamoDB::Pagination::ScanPaginationTraits::SetNextRequest(result, request);
        outcome = dynamoClient->Scan(request);
    }
    
    EXPECT_EQ(ITEM_COUNT, totalItems);
    EXPECT_GT(pageCount, 1u); // Should have multiple pages with limit=3
}

TEST_F(ScanPaginationTest, TestManualPaginationWithExclusiveStartKey) {
    ScanRequest request;
    request.SetTableName(tableName);
    request.SetConsistentRead(true);
    request.SetLimit(5);
    
    Aws::Vector<Aws::Map<Aws::String, AttributeValue>> allItems;
    
    do {
        auto outcome = dynamoClient->Scan(request);
        ASSERT_TRUE(outcome.IsSuccess());
        
        const auto& result = outcome.GetResult();
        for (const auto& item : result.GetItems()) {
            allItems.push_back(item);
        }
        
        if (!result.GetLastEvaluatedKey().empty()) {
            request.SetExclusiveStartKey(result.GetLastEvaluatedKey());
        } else {
            break;
        }
    } while (true);
    
    EXPECT_EQ(ITEM_COUNT, allItems.size());
}