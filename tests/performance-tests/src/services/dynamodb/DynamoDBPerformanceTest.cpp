/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/model/AttributeDefinition.h>
#include <aws/dynamodb/model/AttributeValue.h>
#include <aws/dynamodb/model/BillingMode.h>
#include <aws/dynamodb/model/CreateTableRequest.h>
#include <aws/dynamodb/model/DeleteTableRequest.h>
#include <aws/dynamodb/model/DescribeTableRequest.h>
#include <aws/dynamodb/model/TableStatus.h>
#include <aws/dynamodb/model/GetItemRequest.h>
#include <aws/dynamodb/model/KeySchemaElement.h>
#include <aws/dynamodb/model/KeyType.h>
#include <aws/dynamodb/model/PutItemRequest.h>
#include <aws/dynamodb/model/ScalarAttributeType.h>
#include <performance_tests/reporting/JsonReportingMetrics.h>
#include <performance_tests/services/dynamodb/DynamoDBPerformanceTest.h>

#include <chrono>
#include <iostream>
#include <string>
#include <thread>
#include <utility>

bool PerformanceTest::Services::DynamoDB::RunTest(Aws::DynamoDB::DynamoDBClient& dynamodb, const TestCase& config, int iterations) {
  Aws::Vector<std::pair<Aws::String, Aws::String>> dimensions;
  dimensions.emplace_back("Size", config.sizeLabel);
  PerformanceTest::Reporting::JsonReportingMetrics::SetTestContext(dimensions);

  Aws::String tableName;
  Aws::String const rawUUID = static_cast<Aws::String>(Aws::Utils::UUID::RandomUUID());
  Aws::String const tableId = Aws::Utils::StringUtils::ToLower(rawUUID.c_str()).substr(0, 8);
  tableName = "perf-table-" + tableId;

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
    std::cerr << "[ERROR] CreateTable failed: " << createTableOutcome.GetError().GetMessage() << '\n';
    return false;
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
  Aws::String const payload(config.sizeBytes, 'x');

  // Run PutItem multiple times
  for (int i = 0; i < iterations; i++) {
    Aws::DynamoDB::Model::PutItemRequest putItemRequest;
    putItemRequest.SetTableName(tableName);

    Aws::Map<Aws::String, Aws::DynamoDB::Model::AttributeValue> item;
    item["id"].SetS("test-key-" + std::to_string(i));
    item["data"].SetS(payload);
    putItemRequest.SetItem(item);

    auto putItemOutcome = dynamodb.PutItem(putItemRequest);
    if (!putItemOutcome.IsSuccess()) {
      std::cerr << "[ERROR] PutItem failed: " << putItemOutcome.GetError().GetMessage() << '\n';
    }
  }

  // Run GetItem multiple times
  for (int i = 0; i < iterations; i++) {
    Aws::DynamoDB::Model::GetItemRequest getItemRequest;
    getItemRequest.SetTableName(tableName);

    Aws::Map<Aws::String, Aws::DynamoDB::Model::AttributeValue> key;
    key["id"].SetS("test-key-" + std::to_string(i));
    getItemRequest.SetKey(key);

    auto getItemOutcome = dynamodb.GetItem(getItemRequest);
    if (!getItemOutcome.IsSuccess()) {
      std::cerr << "[ERROR] GetItem failed: " << getItemOutcome.GetError().GetMessage() << '\n';
    }
  }

  Aws::DynamoDB::Model::DeleteTableRequest deleteTableRequest;
  deleteTableRequest.SetTableName(tableName);
  dynamodb.DeleteTable(deleteTableRequest);

  return true;
}