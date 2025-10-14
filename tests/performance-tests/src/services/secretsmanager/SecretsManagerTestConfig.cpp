/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <performance-tests/services/secretsmanager/SecretsManagerTestConfig.h>

#include <map>

namespace PerformanceTest {
namespace Services {
namespace SecretsManager {
namespace TestConfig {

size_t GetSecretSizeValue(SecretSize secretSize) {
  switch (secretSize) {
    case SecretSize::S64:
      return 64;
    case SecretSize::S512:
      return 512;
    case SecretSize::S4096:
      return 4096;
    case SecretSize::S8192:
      return 8192;
    case SecretSize::S45056:
      return 45056;
    default:
      return 64;
  }
}

Aws::String GetSecretSizeLabel(SecretSize secretSize) {
  switch (secretSize) {
    case SecretSize::S64:
      return "64";
    case SecretSize::S512:
      return "512";
    case SecretSize::S4096:
      return "4096";
    case SecretSize::S8192:
      return "8192";
    case SecretSize::S45056:
      return "45056";
    default:
      return "64";
  }
}

const std::array<const char*, 4> TestOperations = {
  "PutSecretValue",
  "GetSecretValue",
  "DescribeSecret",
  "ListSecrets"
};

static std::map<Aws::String, Aws::String> OperationMap = {
  {"PutSecretValue", "Put metric data"},
  {"GetMetricData", "Get metric data"},
  {"ListMetrics", "List metrics"},
};

const std::array<TestCase, 5> TestMatrix = {
  TestCase{SecretSize::S64},
  TestCase{SecretSize::S512},
  TestCase{SecretSize::S4096},
  TestCase{SecretSize::S8192},
  TestCase{SecretSize::S45056}
};

const char* OutputFilename = "secretsmanager-performance-test-results.json";

}  // namespace TestConfig
}  // namespace SecretsManager
}  // namespace Services
}  // namespace PerformanceTest