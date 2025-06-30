/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/model/AttributeDefinition.h>
#include <aws/dynamodb/model/AttributeValue.h>
#include <aws/dynamodb/model/BillingMode.h>
#include <aws/dynamodb/model/CreateTableRequest.h>
#include <aws/dynamodb/model/DeleteTableRequest.h>
#include <aws/dynamodb/model/DescribeTableRequest.h>
#include <aws/dynamodb/model/GetItemRequest.h>
#include <aws/dynamodb/model/KeySchemaElement.h>
#include <aws/dynamodb/model/KeyType.h>
#include <aws/dynamodb/model/PutItemRequest.h>
#include <aws/dynamodb/model/ScalarAttributeType.h>
#include <aws/dynamodb/model/TableStatus.h>
#include <performance-tests/Utils.h>
#include <performance-tests/services/dynamodb/DynamoDBPerformanceTest.h>

#include <chrono>
#include <thread>

void PerformanceTest::Services::DynamoDB::RunTest(Aws::DynamoDB::DynamoDBClient& dynamodb, const TestCase& config, int iterations) {
  auto tableName = SetupTable(dynamodb, config);
  if (tableName.empty()) {
    return;
  }

  RunOperations(dynamodb, tableName, config, iterations);
  CleanupResources(dynamodb, tableName);
}

Aws::String PerformanceTest::Services::DynamoDB::SetupTable(Aws::DynamoDB::DynamoDBClient& dynamodb, const TestCase& /* config */) {
  Aws::String tableName = "perf-table-" + PerformanceTest::Utils::GenerateUniqueId();

  Aws::DynamoDB::Model::CreateTableRequest createTableRequest;
  createTableRequest.SetTableName(tableName);

  Aws::DynamoDB::Model::AttributeDefinition hashKey;
  hashKey.SetAttributeName("id");
  hashKey.SetAttributeType(Aws::DynamoDB::Model::ScalarAttributeType::S);
  createTableRequest.AddAttributeDefinitions(hashKey);

  Aws::DynamoDB::Model::KeySchemaElement keySchema;
  keySchema.WithAttributeName("id").WithKeyType(Aws::DynamoDB::Model::KeyType::HASH);
  createTableRequest.AddKeySchema(keySchema);

  Aws::DynamoDB::Model::BillingMode const billingMode = Aws::DynamoDB::Model::BillingMode::PAY_PER_REQUEST;
  createTableRequest.SetBillingMode(billingMode);

  auto createTableOutcome = dynamodb.CreateTable(createTableRequest);
  if (!createTableOutcome.IsSuccess()) {
    PerformanceTest::Utils::LogError("DynamoDB", "CreateTable", createTableOutcome.GetError().GetMessage());
    return "";
  }

  // Wait for table to become active
  Aws::DynamoDB::Model::DescribeTableRequest describeRequest;
  describeRequest.SetTableName(tableName);

  while (true) {
    auto describeOutcome = dynamodb.DescribeTable(describeRequest);
    if (describeOutcome.IsSuccess()) {
      auto status = describeOutcome.GetResult().GetTable().GetTableStatus();
      if (status == Aws::DynamoDB::Model::TableStatus::ACTIVE) {
        break;
      }
    }
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }

  return tableName;
}

void PerformanceTest::Services::DynamoDB::RunOperations(Aws::DynamoDB::DynamoDBClient& dynamodb, const Aws::String& tableName,
                                                        const TestCase& config, int iterations) {
  const auto payload = PerformanceTest::Utils::RandomString(config.sizeBytes);

  // Run PutItem multiple times
  for (int i = 0; i < iterations; i++) {
    Aws::DynamoDB::Model::PutItemRequest putItemRequest;
    putItemRequest.SetTableName(tableName);
    putItemRequest.SetAdditionalCustomHeaderValue("test-dimension-size", config.sizeLabel);

    Aws::Map<Aws::String, Aws::DynamoDB::Model::AttributeValue> item;
    item["id"].SetS(Aws::String("test-key-") + Aws::Utils::StringUtils::to_string(i));
    item["data"].SetS(payload);
    putItemRequest.SetItem(item);

    auto putItemOutcome = dynamodb.PutItem(putItemRequest);
    if (!putItemOutcome.IsSuccess()) {
      PerformanceTest::Utils::LogError("DynamoDB", "PutItem", putItemOutcome.GetError().GetMessage());
    }
  }

  // Run GetItem multiple times
  for (int i = 0; i < iterations; i++) {
    Aws::DynamoDB::Model::GetItemRequest getItemRequest;
    getItemRequest.SetTableName(tableName);
    getItemRequest.SetAdditionalCustomHeaderValue("test-dimension-size", config.sizeLabel);

    Aws::Map<Aws::String, Aws::DynamoDB::Model::AttributeValue> key;
    key["id"].SetS(Aws::String("test-key-") + Aws::Utils::StringUtils::to_string(i));
    getItemRequest.SetKey(key);

    auto getItemOutcome = dynamodb.GetItem(getItemRequest);
    if (!getItemOutcome.IsSuccess()) {
      PerformanceTest::Utils::LogError("DynamoDB", "GetItem", getItemOutcome.GetError().GetMessage());
    }
  }
}

void PerformanceTest::Services::DynamoDB::CleanupResources(Aws::DynamoDB::DynamoDBClient& dynamodb, const Aws::String& tableName) {
  Aws::DynamoDB::Model::DeleteTableRequest deleteTableRequest;
  deleteTableRequest.SetTableName(tableName);
  auto deleteTableOutcome = dynamodb.DeleteTable(deleteTableRequest);
  if (!deleteTableOutcome.IsSuccess()) {
    PerformanceTest::Utils::LogError("DynamoDB", "DeleteTable", deleteTableOutcome.GetError().GetMessage());
  }
}