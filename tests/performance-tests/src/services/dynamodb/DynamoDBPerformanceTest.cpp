/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/DynamoDBServiceClientModel.h>
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
#include <performance-tests/services/dynamodb/DynamoDBTestConfig.h>

#include <cassert>
#include <chrono>
#include <thread>

PerformanceTest::Services::DynamoDB::DynamoDBPerformanceTest::DynamoDBPerformanceTest(const Aws::Client::ClientConfiguration& clientConfig,
                                                                                      const TestConfig::TestCase& testConfig,
                                                                                      int iterations)
    : m_dynamodb(Aws::MakeUnique<Aws::DynamoDB::DynamoDBClient>("DynamoDBPerformanceTest", clientConfig)),
      m_testConfig(testConfig),
      m_iterations(iterations),
      m_tableName("perf-table-" + PerformanceTest::Utils::GenerateUniqueId()) {
  assert(m_dynamodb && "DynamoDB client not initialized");
}

Aws::Utils::Outcome<Aws::NoResult, Aws::String> PerformanceTest::Services::DynamoDB::DynamoDBPerformanceTest::Setup() {
  Aws::DynamoDB::Model::CreateTableRequest createTableRequest;
  createTableRequest.SetTableName(m_tableName);

  Aws::DynamoDB::Model::AttributeDefinition hashKey;
  hashKey.SetAttributeName("data");
  hashKey.SetAttributeType(Aws::DynamoDB::Model::ScalarAttributeType::S);
  createTableRequest.AddAttributeDefinitions(hashKey);

  Aws::DynamoDB::Model::KeySchemaElement keySchema;
  keySchema.WithAttributeName("data").WithKeyType(Aws::DynamoDB::Model::KeyType::HASH);
  createTableRequest.AddKeySchema(keySchema);

  Aws::DynamoDB::Model::BillingMode const billingMode = Aws::DynamoDB::Model::BillingMode::PAY_PER_REQUEST;
  createTableRequest.SetBillingMode(billingMode);

  auto createTableOutcome = m_dynamodb->CreateTable(createTableRequest);
  if (!createTableOutcome.IsSuccess()) {
    return "DynamoDB Setup() - CreateTable failed: " + createTableOutcome.GetError().GetMessage();
  }

  // Wait for table to become active
  const int MAX_QUERIES = 20;
  Aws::DynamoDB::Model::DescribeTableRequest describeRequest;
  describeRequest.SetTableName(m_tableName);

  int count = 0;
  while (count < MAX_QUERIES) {
    const Aws::DynamoDB::Model::DescribeTableOutcome& describeOutcome = m_dynamodb->DescribeTable(describeRequest);
    if (describeOutcome.IsSuccess()) {
      Aws::DynamoDB::Model::TableStatus const status = describeOutcome.GetResult().GetTable().GetTableStatus();
      if (Aws::DynamoDB::Model::TableStatus::ACTIVE == status) {
        break;
      }
      std::this_thread::sleep_for(std::chrono::seconds(1));
    } else {
      return "DynamoDB Setup() - DescribeTable failed: " + describeOutcome.GetError().GetMessage();
    }
    count++;
  }

  if (count >= MAX_QUERIES) {
    return "DynamoDB Setup() - Table did not become active within timeout";
  }
  return Aws::NoResult();
}

void PerformanceTest::Services::DynamoDB::DynamoDBPerformanceTest::Run() {
  const auto payload = PerformanceTest::Utils::RandomString(TestConfig::GetPayloadSizeInBytes(m_testConfig.payloadSize));

  // Run PutItem multiple times
  for (int i = 0; i < m_iterations; i++) {
    Aws::DynamoDB::Model::PutItemRequest putItemRequest;
    putItemRequest.SetTableName(m_tableName);
    putItemRequest.SetAdditionalCustomHeaderValue("test-dimension-size", TestConfig::GetPayloadSizeLabel(m_testConfig.payloadSize));
    putItemRequest.AddItem("data", Aws::DynamoDB::Model::AttributeValue().SetS(payload));

    auto putItemOutcome = m_dynamodb->PutItem(putItemRequest);
    if (!putItemOutcome.IsSuccess()) {
      AWS_LOG_ERROR("PerformanceTest", ("DynamoDB Run() - PutItem failed: " + putItemOutcome.GetError().GetMessage()).c_str());
    }
  }

  // Run GetItem multiple times
  for (int i = 0; i < m_iterations; i++) {
    Aws::DynamoDB::Model::GetItemRequest getItemRequest;
    getItemRequest.SetTableName(m_tableName);
    getItemRequest.SetAdditionalCustomHeaderValue("test-dimension-size", TestConfig::GetPayloadSizeLabel(m_testConfig.payloadSize));
    getItemRequest.AddKey("data", Aws::DynamoDB::Model::AttributeValue().SetS(payload));

    auto getItemOutcome = m_dynamodb->GetItem(getItemRequest);
    if (!getItemOutcome.IsSuccess()) {
      AWS_LOG_ERROR("PerformanceTest", ("DynamoDB Run() - GetItem failed: " + getItemOutcome.GetError().GetMessage()).c_str());
    }
  }
}

void PerformanceTest::Services::DynamoDB::DynamoDBPerformanceTest::TearDown() {
  Aws::DynamoDB::Model::DeleteTableRequest deleteTableRequest;
  deleteTableRequest.SetTableName(m_tableName);
  auto deleteTableOutcome = m_dynamodb->DeleteTable(deleteTableRequest);
  if (!deleteTableOutcome.IsSuccess()) {
    AWS_LOG_ERROR("PerformanceTest", ("DynamoDB TearDown() - DeleteTable failed: " + deleteTableOutcome.GetError().GetMessage()).c_str());
  }
}