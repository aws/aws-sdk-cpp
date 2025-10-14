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
#include <performance-tests/services/echo/EchoTestConfig.h>
#include <aws/echo/EchoClient.h>

namespace PerformanceTest {
namespace Services {
namespace Echo {

/**
 * Echo Service performance test implementation.
 * Tests EchoOperation with different payload types and sizes.
 */
class EchoPerformanceTest : public PerformanceTestBase {
 public:
  EchoPerformanceTest(const Aws::Client::ClientConfiguration& clientConfig, 
                     const TestConfig::TestCase& testConfig,
                     int iterations = 500);

  Aws::Utils::Outcome<Aws::NoResult, Aws::String> Setup() override;
  void Run() override;
  void TearDown() override;

 private:
  void RunAllTypesTest();
  void RunLongListOfStringsTest();
  void RunComplexObjectTest();
  void RunListOfComplexObjectsTest();
  void RunVeryLargeBlobTest();

  Aws::String GenerateRandomString(size_t size);
  Aws::Utils::ByteBuffer GenerateRandomBinary(size_t size);
  bool GenerateRandomBool();
  int GenerateRandomInt();
  long long GenerateRandomLong();
  float GenerateRandomFloat();
  double GenerateRandomDouble();

  const Aws::UniquePtr<Aws::Echo::EchoClient> m_echoClient;
  const TestConfig::TestCase m_testConfig;
  const int m_iterations;
  const int64_t m_runStartTimestamp;
};

}  // namespace Echo
}  // namespace Services
}  // namespace PerformanceTest