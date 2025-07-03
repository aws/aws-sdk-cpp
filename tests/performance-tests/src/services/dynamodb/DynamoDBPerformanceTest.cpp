/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
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

PerformanceTest::Services::DynamoDB::DynamoDBPerformanceTest::DynamoDBPerformanceTest(const Aws::String& region, const TestCase& config,
                                                                                      int iterations)
    : m_config(config), m_region(region), m_iterations(iterations) {}

void PerformanceTest::Services::DynamoDB::DynamoDBPerformanceTest::Setup() {
  Aws::Client::ClientConfiguration cfg;
  cfg.region = m_region;
  m_dynamodb = Aws::MakeUnique<Aws::DynamoDB::DynamoDBClient>("DynamoDBPerformanceTest", cfg);

  m_tableName = "perf-table-" + PerformanceTest::Utils::GenerateUniqueId();

  Aws::DynamoDB::Model::CreateTableRequest createTableRequest;
  createTableRequest.SetTableName(m_tableName);

  Aws::DynamoDB::Model::AttributeDefinition hashKey;
  hashKey.SetAttributeName("id");
  hashKey.SetAttributeType(Aws::DynamoDB::Model::ScalarAttributeType::S);
  createTableRequest.AddAttributeDefinitions(hashKey);

  Aws::DynamoDB::Model::KeySchemaElement keySchema;
  keySchema.WithAttributeName("id").WithKeyType(Aws::DynamoDB::Model::KeyType::HASH);
  createTableRequest.AddKeySchema(keySchema);

  Aws::DynamoDB::Model::BillingMode const billingMode = Aws::DynamoDB::Model::BillingMode::PAY_PER_REQUEST;
  createTableRequest.SetBillingMode(billingMode);

  auto createTableOutcome = m_dynamodb->CreateTable(createTableRequest);
  if (!createTableOutcome.IsSuccess()) {
    AWS_LOG_ERROR("PerformanceTest", ("DynamoDB:CreateTable failed: " + createTableOutcome.GetError().GetMessage()).c_str());
    m_tableName.clear();
    return;
  }

  // Wait for table to become active
  Aws::DynamoDB::Model::DescribeTableRequest describeRequest;
  describeRequest.SetTableName(m_tableName);

  while (true) {
    auto describeOutcome = m_dynamodb->DescribeTable(describeRequest);
    if (describeOutcome.IsSuccess()) {
      auto status = describeOutcome.GetResult().GetTable().GetTableStatus();
      if (status == Aws::DynamoDB::Model::TableStatus::ACTIVE) {
        break;
      }
    }
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
}

void PerformanceTest::Services::DynamoDB::DynamoDBPerformanceTest::Run() {
  if (m_tableName.empty()) {
    AWS_LOG_ERROR("PerformanceTest", "DynamoDB:Run - Table setup failed, skipping test");
    return;
  }

  const auto payload = PerformanceTest::Utils::RandomString(m_config.sizeBytes);

  // Run PutItem multiple times
  for (int i = 0; i < m_iterations; i++) {
    Aws::DynamoDB::Model::PutItemRequest putItemRequest;
    putItemRequest.SetTableName(m_tableName);
    putItemRequest.SetAdditionalCustomHeaderValue("test-dimension-size", m_config.sizeLabel);

    Aws::Map<Aws::String, Aws::DynamoDB::Model::AttributeValue> item;
    item["id"].SetS(Aws::String("test-key-") + Aws::Utils::StringUtils::to_string(i));
    item["data"].SetS(payload);
    putItemRequest.SetItem(item);

    auto putItemOutcome = m_dynamodb->PutItem(putItemRequest);
    if (!putItemOutcome.IsSuccess()) {
      AWS_LOG_ERROR("PerformanceTest", ("DynamoDB:PutItem failed: " + putItemOutcome.GetError().GetMessage()).c_str());
    }
  }

  // Run GetItem multiple times
  for (int i = 0; i < m_iterations; i++) {
    Aws::DynamoDB::Model::GetItemRequest getItemRequest;
    getItemRequest.SetTableName(m_tableName);
    getItemRequest.SetAdditionalCustomHeaderValue("test-dimension-size", m_config.sizeLabel);

    Aws::Map<Aws::String, Aws::DynamoDB::Model::AttributeValue> key;
    key["id"].SetS(Aws::String("test-key-") + Aws::Utils::StringUtils::to_string(i));
    getItemRequest.SetKey(key);

    auto getItemOutcome = m_dynamodb->GetItem(getItemRequest);
    if (!getItemOutcome.IsSuccess()) {
      AWS_LOG_ERROR("PerformanceTest", ("DynamoDB:GetItem failed: " + getItemOutcome.GetError().GetMessage()).c_str());
    }
  }
}

void PerformanceTest::Services::DynamoDB::DynamoDBPerformanceTest::TearDown() {
  if (m_tableName.empty()) {
    AWS_LOG_ERROR("PerformanceTest", "DynamoDB:TearDown - No table to clean up, setup likely failed");
    return;
  }

  Aws::DynamoDB::Model::DeleteTableRequest deleteTableRequest;
  deleteTableRequest.SetTableName(m_tableName);
  auto deleteTableOutcome = m_dynamodb->DeleteTable(deleteTableRequest);
  if (!deleteTableOutcome.IsSuccess()) {
    AWS_LOG_ERROR("PerformanceTest", ("DynamoDB:DeleteTable failed: " + deleteTableOutcome.GetError().GetMessage()).c_str());
  }
}