/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/NoResult.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <performance-tests/PerformanceTestBase.h>
#include <performance-tests/services/dynamodb/DynamoDBTestConfig.h>

namespace PerformanceTest {
namespace Services {
namespace DynamoDB {

/**
 * DynamoDB performance test implementation.
 * Tests PutItem and GetItem operations with different payload sizes.
 */
class DynamoDBPerformanceTest : public PerformanceTestBase {
 public:
  DynamoDBPerformanceTest(const Aws::Client::ClientConfiguration& clientConfig, const TestConfig::TestCase& testConfig,
                          int iterations = 10);

  Aws::Utils::Outcome<Aws::NoResult, Aws::String> Setup() override;
  void Run() override;
  void TearDown() override;

 private:
  const Aws::UniquePtr<Aws::DynamoDB::DynamoDBClient> m_dynamodb;
  const TestConfig::TestCase m_testConfig;
  const int m_iterations;
  const Aws::String m_tableName;
};

}  // namespace DynamoDB
}  // namespace Services
}  // namespace PerformanceTest