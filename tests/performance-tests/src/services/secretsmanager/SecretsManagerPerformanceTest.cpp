/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/SecretsManagerClient.h>
#include <aws/secretsmanager/model/CreateSecretRequest.h>
#include <aws/secretsmanager/model/DeleteSecretRequest.h>
#include <aws/secretsmanager/model/DescribeSecretRequest.h>
#include <aws/secretsmanager/model/GetSecretValueRequest.h>
#include <aws/secretsmanager/model/ListSecretsRequest.h>
#include <aws/secretsmanager/model/PutSecretValueRequest.h>
#include <aws/secretsmanager/model/Tag.h>
#include <aws/secretsmanager/model/Filter.h>
#include <aws/core/utils/UUID.h>
#include <performance-tests/services/secretsmanager/SecretsManagerPerformanceTest.h>

#include <chrono>
#include <random>
#include <thread>

namespace PerformanceTest {
namespace Services {
namespace SecretsManager {

SecretsManagerPerformanceTest::SecretsManagerPerformanceTest(
    const Aws::Client::ClientConfiguration& clientConfig,
    const TestConfig::TestCase& testConfig, int iterations)
    : m_secretsManager(Aws::MakeUnique<Aws::SecretsManager::SecretsManagerClient>(
          "SecretsManagerPerformanceTest", clientConfig)),
      m_testConfig(testConfig),
      m_iterations(iterations),
      m_suiteId(Aws::Utils::UUID::RandomUUID()),
      m_runStartTimestamp(std::chrono::duration_cast<std::chrono::milliseconds>(
                              std::chrono::system_clock::now().time_since_epoch())
                              .count()) {}

Aws::Utils::Outcome<Aws::NoResult, Aws::String> SecretsManagerPerformanceTest::Setup() {
  // Create initial secrets for testing
  for (int i = 1; i <= m_iterations; ++i) {
    // Create string secret
    Aws::SecretsManager::Model::CreateSecretRequest stringRequest;
    stringRequest.SetName("TestSecret_" + std::to_string(m_runStartTimestamp) + "_" + std::to_string(i));
    stringRequest.SetSecretString("A temporary secret value");
    stringRequest.SetDescription("The testing secret for run " + std::to_string(i));
    
    Aws::SecretsManager::Model::Tag stageTag;
    stageTag.SetKey("Stage");
    stageTag.SetValue("Production");
    
    Aws::SecretsManager::Model::Tag iterationTag;
    iterationTag.SetKey("Iteration");
    iterationTag.SetValue(std::to_string(i));
    
    stringRequest.AddTags(stageTag);
    stringRequest.AddTags(iterationTag);
    
    auto stringResult = m_secretsManager->CreateSecret(stringRequest);
    if (!stringResult.IsSuccess()) {
      return Aws::Utils::Outcome<Aws::NoResult, Aws::String>(
          "Failed to create string secret: " + stringResult.GetError().GetMessage());
    }

    // Create binary secret
    Aws::SecretsManager::Model::CreateSecretRequest binaryRequest;
    binaryRequest.SetName("TestBinarySecret_" + std::to_string(m_runStartTimestamp) + "_" + std::to_string(i));
    binaryRequest.SetSecretBinary(Aws::Utils::ByteBuffer((unsigned char*)"A temporary secret value", 24));
    binaryRequest.SetDescription("The binary testing secret for run " + std::to_string(i));
    binaryRequest.AddTags(stageTag);
    binaryRequest.AddTags(iterationTag);
    
    auto binaryResult = m_secretsManager->CreateSecret(binaryRequest);
    if (!binaryResult.IsSuccess()) {
      return Aws::Utils::Outcome<Aws::NoResult, Aws::String>(
          "Failed to create binary secret: " + binaryResult.GetError().GetMessage());
    }
  }

  return Aws::Utils::Outcome<Aws::NoResult, Aws::String>(Aws::NoResult());
}

void SecretsManagerPerformanceTest::Run() {
  RunPutSecretValueTests();
  RunGetSecretValueTests();
  RunDescribeSecretTests();
  RunListSecretsTests();
}

void SecretsManagerPerformanceTest::TearDown() {
  // Clean up created secrets
  for (int i = 1; i <= m_iterations; ++i) {
    // Delete string secret
    Aws::SecretsManager::Model::DeleteSecretRequest stringRequest;
    stringRequest.SetSecretId("TestSecret_" + std::to_string(m_runStartTimestamp) + "_" + std::to_string(i));
    stringRequest.SetForceDeleteWithoutRecovery(true);
    m_secretsManager->DeleteSecret(stringRequest);

    // Delete binary secret
    Aws::SecretsManager::Model::DeleteSecretRequest binaryRequest;
    binaryRequest.SetSecretId("TestBinarySecret_" + std::to_string(m_runStartTimestamp) + "_" + std::to_string(i));
    binaryRequest.SetForceDeleteWithoutRecovery(true);
    m_secretsManager->DeleteSecret(binaryRequest);
  }
}

void SecretsManagerPerformanceTest::RunPutSecretValueTests() {
  const size_t secretSize = TestConfig::GetSecretSizeValue(m_testConfig.secretSize);

  for (int i = 1; i <= m_iterations; ++i) {
    // Put string secret value
    Aws::SecretsManager::Model::PutSecretValueRequest stringRequest;
    stringRequest.SetSecretId("TestSecret_" + std::to_string(m_runStartTimestamp) + "_" + std::to_string(i));
    stringRequest.SetSecretString(GenerateRandomString(secretSize));
    stringRequest.SetAdditionalCustomHeaderValue("test-dimension-size", std::to_string(secretSize));
    stringRequest.SetAdditionalCustomHeaderValue("test-case-type", "Put string secret");
    auto headers = stringRequest.GetHeaders();
    if (headers.find(Aws::Http::SMITHY_PROTOCOL_HEADER) != headers.end()) {
      stringRequest.SetAdditionalCustomHeaderValue("test-protocol-protocol", "CBOR");
    }
    auto resp = m_secretsManager->PutSecretValue(stringRequest);
    if (!resp.IsSuccess()) {
      std::cout << "PutStringSecret failed: " << resp.GetError() << std::endl;
      exit(1);
    }
  }
}

void SecretsManagerPerformanceTest::RunPutBinarySecretValueTests() {
  const size_t secretSize = TestConfig::GetSecretSizeValue(m_testConfig.secretSize);

  for (int i = 1; i <= m_iterations; ++i) {
    // Put binary secret value
    Aws::SecretsManager::Model::PutSecretValueRequest binaryRequest;
    binaryRequest.SetSecretId("TestBinarySecret_" + std::to_string(m_runStartTimestamp) + "_" + std::to_string(i));
    binaryRequest.SetSecretBinary(GenerateRandomBinary(secretSize));
    binaryRequest.SetAdditionalCustomHeaderValue("test-dimension-size", std::to_string(secretSize));
    binaryRequest.SetAdditionalCustomHeaderValue("test-case-type", "Put binary secret");
    auto headers = binaryRequest.GetHeaders();
    if (headers.find(Aws::Http::SMITHY_PROTOCOL_HEADER) != headers.end()) {
      binaryRequest.SetAdditionalCustomHeaderValue("test-protocol-protocol", "CBOR");
    }
    auto resp = m_secretsManager->PutSecretValue(binaryRequest);
    if (!resp.IsSuccess()) {
      std::cout << "PutBinarySecret failed: " << resp.GetError() << std::endl;
      exit(1);
    }
  }
}

void SecretsManagerPerformanceTest::RunGetSecretValueTests() {
  const size_t secretSize = TestConfig::GetSecretSizeValue(m_testConfig.secretSize);

  for (int i = 1; i <= m_iterations; ++i) {
    // Get string secret value
    Aws::SecretsManager::Model::GetSecretValueRequest stringRequest;
    stringRequest.SetSecretId("TestSecret_" + std::to_string(m_runStartTimestamp) + "_" + std::to_string(i));
    stringRequest.SetAdditionalCustomHeaderValue("test-dimension-size", std::to_string(secretSize));
    stringRequest.SetAdditionalCustomHeaderValue("test-case-type", "Get string secret");
    auto headers = stringRequest.GetHeaders();
    if (headers.find(Aws::Http::SMITHY_PROTOCOL_HEADER) != headers.end()) {
      stringRequest.SetAdditionalCustomHeaderValue("test-protocol-protocol", "CBOR");
    }
    auto resp = m_secretsManager->GetSecretValue(stringRequest);
    if (!resp.IsSuccess()) {
      std::cout << "GetStringSecret failed: " << resp.GetError() << std::endl;
      exit(1);
    }
  }
}

void SecretsManagerPerformanceTest::RunGetBinarySecretValueTests() {
  const size_t secretSize = TestConfig::GetSecretSizeValue(m_testConfig.secretSize);

  for (int i = 1; i <= m_iterations; ++i) {
    // Get binary secret value
    Aws::SecretsManager::Model::GetSecretValueRequest binaryRequest;
    binaryRequest.SetSecretId("TestBinarySecret_" + std::to_string(m_runStartTimestamp) + "_" + std::to_string(i));
    binaryRequest.SetAdditionalCustomHeaderValue("test-dimension-size", std::to_string(secretSize));
    binaryRequest.SetAdditionalCustomHeaderValue("test-case-type", "Get binary secret");
    auto headers = binaryRequest.GetHeaders();
    if (headers.find(Aws::Http::SMITHY_PROTOCOL_HEADER) != headers.end()) {
      binaryRequest.SetAdditionalCustomHeaderValue("test-protocol-protocol", "CBOR");
    }
    auto resp = m_secretsManager->GetSecretValue(binaryRequest);
    if (!resp.IsSuccess()) {
      std::cout << "GetBinarySecret failed: " << resp.GetError() << std::endl;
      exit(1);
    }
  }
}

void SecretsManagerPerformanceTest::RunDescribeSecretTests() {
  for (int i = 1; i <= m_iterations; ++i) {
    Aws::SecretsManager::Model::DescribeSecretRequest request;
    request.SetSecretId("TestSecret_" + std::to_string(m_runStartTimestamp) + "_" + std::to_string(i));
    request.SetAdditionalCustomHeaderValue("test-dimension-size", TestConfig::GetSecretSizeLabel(m_testConfig.secretSize));
    request.SetAdditionalCustomHeaderValue("test-case-type", "Describe secret");
    auto headers = request.GetHeaders();
    if (headers.find(Aws::Http::SMITHY_PROTOCOL_HEADER) != headers.end()) {
      request.SetAdditionalCustomHeaderValue("test-protocol-protocol", "CBOR");
    }
    auto resp = m_secretsManager->DescribeSecret(request);
    if (!resp.IsSuccess()) {
      std::cout << "DescribeSecret failed: " << resp.GetError() << std::endl;
      exit(1);
    }

  }
}

void SecretsManagerPerformanceTest::RunListSecretsTests() {
  for (int i = 1; i <= m_iterations; ++i) {
    Aws::SecretsManager::Model::ListSecretsRequest request;
    
    Aws::SecretsManager::Model::Filter keyFilter;
    keyFilter.SetKey(Aws::SecretsManager::Model::FilterNameStringType::tag_key);
    keyFilter.AddValues("Iteration");
    
    Aws::SecretsManager::Model::Filter valueFilter;
    valueFilter.SetKey(Aws::SecretsManager::Model::FilterNameStringType::tag_value);
    valueFilter.AddValues(std::to_string(i));
    
    request.AddFilters(keyFilter);
    request.AddFilters(valueFilter);
    request.SetAdditionalCustomHeaderValue("test-dimension-size", TestConfig::GetSecretSizeLabel(m_testConfig.secretSize));
    request.SetAdditionalCustomHeaderValue("test-case-type", "List secrets");
    auto headers = request.GetHeaders();
    if (headers.find(Aws::Http::SMITHY_PROTOCOL_HEADER) != headers.end()) {
      request.SetAdditionalCustomHeaderValue("test-protocol-protocol", "CBOR");
    }
    
    auto resp = m_secretsManager->ListSecrets(request);
    if (!resp.IsSuccess()) {
      std::cout << "ListSecrets failed: " << resp.GetError() << std::endl;
      exit(1);
    }
  }
}

Aws::String SecretsManagerPerformanceTest::GenerateRandomString(size_t size) {
  static const char charset[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*()";
  static std::random_device rd;
  static std::mt19937 gen(rd());
  static std::uniform_int_distribution<> dis(0, sizeof(charset) - 2);

  Aws::String result;
  result.reserve(size);
  for (size_t i = 0; i < size; ++i) {
    result += charset[dis(gen)];
  }
  return result;
}

Aws::Utils::ByteBuffer SecretsManagerPerformanceTest::GenerateRandomBinary(size_t size) {
  static std::random_device rd;
  static std::mt19937 gen(rd());
  static std::uniform_int_distribution<> dis(0, 255);

  Aws::Utils::ByteBuffer buffer(size);
  for (size_t i = 0; i < size; ++i) {
    buffer[i] = static_cast<unsigned char>(dis(gen));
  }
  return buffer;
}

}  // namespace SecretsManager
}  // namespace Services
}  // namespace PerformanceTest