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
#include <aws/dynamodb/model/DescribeTableRequest.h>
#include <aws/dynamodb/model/PutItemRequest.h>
#include <aws/dynamodb/model/ScanRequest.h>
#include <aws/dynamodb/model/AttributeDefinition.h>
#include <aws/dynamodb/model/KeySchemaElement.h>
#include <aws/dynamodb/model/ProvisionedThroughput.h>
#include <aws/dynamodb/model/ScanPaginationTraits.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/testing/AwsTestHelpers.h>

using namespace Aws;
using namespace Aws::DynamoDB;
using namespace Aws::DynamoDB::Model;

namespace {
    const size_t ITEM_COUNT = 19;
    const Aws::String HASH_KEY_NAME = "id";
    const Aws::String ATTRIBUTE_FOO = "attribute_foo";
}

class ScanPaginationTest : public Aws::Testing::AwsCppSdkGTestSuite {
protected:
    DynamoDBClient dynamoClient;
    Aws::String tableName;

    void SetUp() override {
        tableName = CalculateTableName("scan-paginator-test");
        
        CreateTable();
        PutTestData();
    }

    void TearDown() override {
        DeleteTableRequest deleteRequest;
        deleteRequest.SetTableName(tableName);
        dynamoClient.DeleteTable(deleteRequest);
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
        
        auto outcome = dynamoClient.CreateTable(createRequest);
        AWS_ASSERT_SUCCESS(outcome);
        
        WaitUntilActive(tableName);
    }
    
    DescribeTableResult WaitUntilActive(const Aws::String& tableNameParam) {
        DescribeTableRequest describeTableRequest;
        describeTableRequest.SetTableName(tableNameParam);
        
        DescribeTableOutcome outcome = dynamoClient.DescribeTable(describeTableRequest);
        while (outcome.IsSuccess() && outcome.GetResult().GetTable().GetTableStatus() != TableStatus::ACTIVE) {
            std::this_thread::sleep_for(std::chrono::seconds(1));
            outcome = dynamoClient.DescribeTable(describeTableRequest);
        }
        
        return outcome.GetResult();
    }

    void PutTestData() {
        for (size_t i = 0; i < ITEM_COUNT; ++i) {
            PutItemRequest putRequest;
            putRequest.SetTableName(tableName);
            
            Aws::Map<Aws::String, AttributeValue> item;
            item[HASH_KEY_NAME] = AttributeValue().SetN(Aws::Utils::StringUtils::to_string(i));
            item[ATTRIBUTE_FOO] = AttributeValue().SetN(Aws::Utils::StringUtils::to_string(i * 2));
            
            putRequest.SetItem(item);
            auto outcome = dynamoClient.PutItem(putRequest);
            ASSERT_TRUE(outcome.IsSuccess());
        }
    }
};

TEST_F(ScanPaginationTest, TestPaginationTraits) {
    ScanRequest request;
    request.SetTableName(tableName);
    request.SetLimit(1);  // Force pagination
    
    size_t pageCount = 0;
    auto paginator = dynamoClient.ScanPaginator(request);
    
    for (const auto& outcome : paginator) {
        AWS_ASSERT_SUCCESS(outcome);
        pageCount++;
    }
    
    EXPECT_GT(pageCount, 1u);  // Should have multiple pages with Limit=1
}