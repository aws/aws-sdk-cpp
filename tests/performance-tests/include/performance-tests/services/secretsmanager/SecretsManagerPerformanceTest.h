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
#include <performance-tests/PerformanceTestBase.h>
#include <performance-tests/services/secretsmanager/SecretsManagerTestConfig.h>
#include <aws/secretsmanager/SecretsManagerClient.h>

namespace PerformanceTest {
namespace Services {
namespace SecretsManager {

/**
 * Secrets Manager performance test implementation.
 * Tests PutSecretValue, GetSecretValue, DescribeSecret, and ListSecrets operations with different secret sizes.
 */
class SecretsManagerPerformanceTest : public PerformanceTestBase {
 public:
  SecretsManagerPerformanceTest(const Aws::Client::ClientConfiguration& clientConfig, 
                               const TestConfig::TestCase& testConfig,
                               int iterations = 500);

  Aws::Utils::Outcome<Aws::NoResult, Aws::String> Setup() override;
  void Run() override;
  void TearDown() override;

 private:
  void RunPutSecretValueTests();
  void RunPutBinarySecretValueTests();
  void RunGetSecretValueTests();
  void RunGetBinarySecretValueTests();
  void RunDescribeSecretTests();
  void RunListSecretsTests();

  Aws::String GenerateRandomString(size_t size);

  const Aws::UniquePtr<Aws::SecretsManager::SecretsManagerClient> m_secretsManager;
  const TestConfig::TestCase m_testConfig;
  const int m_iterations;
  const Aws::String m_suiteId;
  const int64_t m_runStartTimestamp;
};

}  // namespace SecretsManager
}  // namespace Services
}  // namespace PerformanceTest