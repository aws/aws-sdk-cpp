/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <performance-tests/PerformanceTestBase.h>

#include <cstddef>

namespace PerformanceTest {
namespace Services {
namespace DynamoDB {
/**
 * Configuration for DynamoDB performance test cases.
 */
struct TestCase {
  const char* sizeLabel;
  size_t sizeBytes;
};

/**
 * DynamoDB performance test implementation.
 * Tests PutItem and GetItem operations with different payload sizes.
 */
class DynamoDBPerformanceTest : public PerformanceTestBase {
 public:
  DynamoDBPerformanceTest(const Aws::String& region, const TestCase& config, int iterations = 10);

  void Setup() override;
  void TearDown() override;
  void Run() override;

 private:
  const TestCase& m_config;
  const Aws::String m_region;
  const int m_iterations;
  Aws::UniquePtr<Aws::DynamoDB::DynamoDBClient> m_dynamodb;
  Aws::String m_tableName;
};

}  // namespace DynamoDB
}  // namespace Services
}  // namespace PerformanceTest