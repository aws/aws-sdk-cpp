/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/memory/stl/AWSString.h>
#include <performance-tests/services/dynamodb/DynamoDBTestConfig.h>

#include <array>
#include <cstddef>

namespace PerformanceTest {
namespace Services {
namespace DynamoDB {
namespace TestConfig {

const std::array<const char*, 2> TestOperations = {"PutItem", "GetItem"};

const std::array<TestCase, 3> TestMatrix = {
    {{.payloadSize = PayloadSize::K8}, {.payloadSize = PayloadSize::K64}, {.payloadSize = PayloadSize::K392}}};

const char* OutputFilename = "dynamodb-performance-test-results.json";

size_t GetPayloadSizeInBytes(PayloadSize size) {
  switch (size) {
    case PayloadSize::K8:
      return 8 * 1024;
    case PayloadSize::K64:
      return 64 * 1024;
    case PayloadSize::K392:
      return 392 * 1024;
  }
}

Aws::String GetPayloadSizeLabel(PayloadSize size) {
  switch (size) {
    case PayloadSize::K8:
      return "8KB";
    case PayloadSize::K64:
      return "64KB";
    case PayloadSize::K392:
      return "392KB";
  }
}

}  // namespace TestConfig
}  // namespace DynamoDB
}  // namespace Services
}  // namespace PerformanceTest