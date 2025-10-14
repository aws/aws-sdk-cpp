/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/echo/EchoClient.h>
#include <aws/echo/model/EchoOperationRequest.h>
#include <aws/echo/model/ComplexStructure.h>
#include <aws/core/utils/DateTime.h>
#include <performance-tests/services/echo/EchoPerformanceTest.h>

#include <chrono>
#include <random>
#include <limits>

namespace PerformanceTest {
namespace Services {
namespace Echo {

EchoPerformanceTest::EchoPerformanceTest(
    const Aws::Client::ClientConfiguration& clientConfig,
    const TestConfig::TestCase& testConfig, int iterations)
    : m_echoClient(Aws::MakeUnique<Aws::Echo::EchoClient>(
          "EchoPerformanceTest", clientConfig)),
      m_testConfig(testConfig),
      m_iterations(iterations),
      m_runStartTimestamp(std::chrono::duration_cast<std::chrono::milliseconds>(
                              std::chrono::system_clock::now().time_since_epoch())
                              .count()) {
}

Aws::Utils::Outcome<Aws::NoResult, Aws::String> EchoPerformanceTest::Setup() {
  return Aws::Utils::Outcome<Aws::NoResult, Aws::String>(Aws::NoResult());
}

void EchoPerformanceTest::Run() {
  switch (m_testConfig.testCaseType) {
    case TestConfig::TestCaseType::AllTypes:
      RunAllTypesTest();
      break;
    case TestConfig::TestCaseType::LongListOfStrings:
      RunLongListOfStringsTest();
      break;
    case TestConfig::TestCaseType::ComplexObject:
      RunComplexObjectTest();
      break;
    case TestConfig::TestCaseType::ListOfComplexObjects:
      RunListOfComplexObjectsTest();
      break;
    case TestConfig::TestCaseType::VeryLargeBlob:
      RunVeryLargeBlobTest();
      break;
  }
}

void EchoPerformanceTest::TearDown() {
  // No cleanup needed for Echo service
}

void EchoPerformanceTest::RunAllTypesTest() {
  for (int i = 0; i < m_iterations; ++i) {
    Aws::Echo::Model::EchoOperationRequest request;
    
    request.SetBooleanMember(GenerateRandomBool());
    request.SetStringMember(GenerateRandomString(32));
    request.SetIntegerMember(GenerateRandomInt());
    request.SetLongMember(GenerateRandomLong());
    request.SetFloatMember(GenerateRandomFloat());
    request.SetDoubleMember(GenerateRandomDouble());
    request.SetTimestampMember(Aws::Utils::DateTime(m_runStartTimestamp));
    request.SetBlobMember(GenerateRandomBinary(128));
    
    // List of 8 strings
    Aws::Vector<Aws::String> stringList;
    for (int j = 0; j < 8; ++j) {
      stringList.push_back(GenerateRandomString(32));
    }
    request.SetListOfStringsMember(stringList);
    
    // Map of 8 key/value pairs
    Aws::Map<Aws::String, Aws::String> stringMap;
    for (int j = 0; j < 8; ++j) {
      stringMap[GenerateRandomString(32)] = GenerateRandomString(64);
    }
    request.SetMapOfStringToStringMember(stringMap);
    
    // Complex struct
    Aws::Echo::Model::ComplexStructure complexStruct;
    complexStruct.SetStringMember(GenerateRandomString(32));
    
    Aws::Echo::Model::ComplexStructure nestedStruct;
    nestedStruct.SetStringMember(GenerateRandomString(32));
    complexStruct.SetComplexStructMember(nestedStruct);
    
    request.SetComplexStructMember(complexStruct);
    request.SetAdditionalCustomHeaderValue("test-case-type", "AllTypes");

    auto resp = m_echoClient->EchoOperation(request);
    if (!resp.IsSuccess()) {
      std::cout << "EchoOperation failed: " << resp.GetError() << std::endl;
      exit(1);
    }
  }
}

void EchoPerformanceTest::RunLongListOfStringsTest() {
  for (int i = 0; i < m_iterations; ++i) {
    Aws::Echo::Model::EchoOperationRequest request;
    
    // List of 256 strings
    Aws::Vector<Aws::String> stringList;
    for (int j = 0; j < 256; ++j) {
      stringList.push_back(GenerateRandomString(64));
    }
    request.SetListOfStringsMember(stringList);
    request.SetAdditionalCustomHeaderValue("test-case-type", "LongListOfStrings");
    
    auto resp = m_echoClient->EchoOperation(request);
    if (!resp.IsSuccess()) {
      std::cout << "EchoOperation failed: " << resp.GetError() << std::endl;
      exit(1);
    }
  }
}

void EchoPerformanceTest::RunComplexObjectTest() {
  for (int i = 0; i < m_iterations; ++i) {
    Aws::Echo::Model::EchoOperationRequest request;
    
    // Deep nested complex structure
    Aws::Echo::Model::ComplexStructure level1;
    level1.SetBooleanMember(GenerateRandomBool());
    level1.SetBlobMember(GenerateRandomBinary(128));
    level1.SetStringMember(GenerateRandomString(32));
    
    Aws::Echo::Model::ComplexStructure level2;
    level2.SetIntegerMember(GenerateRandomInt());
    level2.SetLongMember(GenerateRandomLong());
    level2.SetStringMember(GenerateRandomString(32));
    
    Aws::Echo::Model::ComplexStructure level3;
    level3.SetFloatMember(GenerateRandomFloat());
    level3.SetDoubleMember(GenerateRandomDouble());
    level3.SetStringMember(GenerateRandomString(32));
    
    Aws::Echo::Model::ComplexStructure level4;
    Aws::Vector<Aws::String> stringList;
    for (int j = 0; j < 8; ++j) {
      stringList.push_back(GenerateRandomString(32));
    }
    level4.SetListOfStringsMember(stringList);

    Aws::Map<Aws::String, Aws::String> stringMap;
    for (int j = 0; j < 8; ++j) {
      stringMap[GenerateRandomString(32)] = GenerateRandomString(64);
    }
    level4.SetMapOfStringToStringMember(stringMap);
    level3.SetComplexStructMember(level4);
    level2.SetComplexStructMember(level3);
    level1.SetComplexStructMember(level2);
    
    request.SetComplexStructMember(level1);
    request.SetAdditionalCustomHeaderValue("test-case-type", "ComplexObject");
    auto resp = m_echoClient->EchoOperation(request);
    if (!resp.IsSuccess()) {
      std::cout << "EchoOperation failed: " << resp.GetError() << std::endl;
      exit(1);
    }
  }
}

void EchoPerformanceTest::RunListOfComplexObjectsTest() {
  for (int i = 0; i < m_iterations; ++i) {
    Aws::Echo::Model::EchoOperationRequest request;
    
    // List of 64 complex objects
    Aws::Vector<Aws::Echo::Model::ComplexStructure> complexList;
    for (int j = 0; j < 64; ++j) {
      Aws::Echo::Model::ComplexStructure complexObj;
      complexObj.SetBooleanMember(GenerateRandomBool());
      complexObj.SetStringMember(GenerateRandomString(32));
      complexObj.SetLongMember(GenerateRandomLong());
      complexObj.SetDoubleMember(GenerateRandomDouble());
      complexObj.SetTimestampMember(Aws::Utils::DateTime(m_runStartTimestamp));
      
      Aws::Vector<Aws::String> stringList;
      for (int k = 0; k < 8; ++k) {
        stringList.push_back(GenerateRandomString(32));
      }
      complexObj.SetListOfStringsMember(stringList);
      
      complexList.push_back(complexObj);
    }
    request.SetListOfComplexObjectMember(complexList);
    request.SetAdditionalCustomHeaderValue("test-case-type", "ListOfComplexObjects");
    
    auto resp = m_echoClient->EchoOperation(request);
    if (!resp.IsSuccess()) {
      std::cout << "EchoOperation failed: " << resp.GetError() << std::endl;
      exit(1);
    }
  }
}

void EchoPerformanceTest::RunVeryLargeBlobTest() {
  for (int i = 0; i < m_iterations; ++i) {
    Aws::Echo::Model::EchoOperationRequest request;
    
    // 262144 bytes (256KB) blob
    request.SetBlobMember(GenerateRandomBinary(262144));
    request.SetAdditionalCustomHeaderValue("test-case-type", "VeryLargeBlob");
    
    auto resp = m_echoClient->EchoOperation(request);
    if (!resp.IsSuccess()) {
      std::cout << "EchoOperation failed: " << resp.GetError() << std::endl;
      exit(1);
    }
  }
}

Aws::String EchoPerformanceTest::GenerateRandomString(size_t size) {
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

Aws::Utils::ByteBuffer EchoPerformanceTest::GenerateRandomBinary(size_t size) {
  static std::random_device rd;
  static std::mt19937 gen(rd());
  static std::uniform_int_distribution<> dis(0, 255);

  Aws::Utils::ByteBuffer buffer(size);
  for (size_t i = 0; i < size; ++i) {
    buffer[i] = static_cast<unsigned char>(dis(gen));
  }
  return buffer;
}

bool EchoPerformanceTest::GenerateRandomBool() {
  static std::random_device rd;
  static std::mt19937 gen(rd());
  static std::uniform_int_distribution<> dis(0, 1);
  return dis(gen) == 1;
}

int EchoPerformanceTest::GenerateRandomInt() {
  static std::random_device rd;
  static std::mt19937 gen(rd());
  static std::uniform_int_distribution<int> dis(std::numeric_limits<int>::min(), 
                                                std::numeric_limits<int>::max());
  return dis(gen);
}

long long EchoPerformanceTest::GenerateRandomLong() {
  static std::random_device rd;
  static std::mt19937 gen(rd());
  static std::uniform_int_distribution<long long> dis(std::numeric_limits<long long>::min(), 
                                                      std::numeric_limits<long long>::max());
  return dis(gen);
}

float EchoPerformanceTest::GenerateRandomFloat() {
  static std::random_device rd;
  static std::mt19937 gen(rd());
  static std::uniform_real_distribution<float> dis(std::numeric_limits<float>::lowest(), 
                                                   std::numeric_limits<float>::max());
  return dis(gen);
}

double EchoPerformanceTest::GenerateRandomDouble() {
  static std::random_device rd;
  static std::mt19937 gen(rd());
  static std::uniform_real_distribution<double> dis(std::numeric_limits<double>::lowest(), 
                                                    std::numeric_limits<double>::max());
  return dis(gen);
}

}  // namespace Echo
}  // namespace Services
}  // namespace PerformanceTest