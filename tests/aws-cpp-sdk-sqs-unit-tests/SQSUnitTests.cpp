/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentials.h>
#include <aws/core/monitoring/MonitoringInterface.h>
#include <aws/sqs/SQSClient.h>
#include <aws/sqs/model/GetQueueUrlRequest.h>
#include <aws/testing/MemoryTesting.h>
#include <aws/testing/mocks/aws/auth/MockAWSHttpResourceClient.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <gtest/gtest.h>

#include <memory>

using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Auth;
using namespace Aws::Monitoring;
using namespace Aws::Http;
using namespace Aws::Http::Standard;
using namespace Aws::SQS;
using namespace Aws::SQS::Model;

namespace {
const char* LOG_TAG = "SQSDUnitTest";
}  // namespace

class SQSUnitTest : public testing::Test {
 protected:
  static void SetUpTestSuite() {
#ifdef USE_AWS_MEMORY_MANAGEMENT
    test_memory_system.reset(new ExactTestMemorySystem(1024, 128));
    options_.memoryManagementOptions.memoryManager = test_memory_system.get();
#endif
    InitAPI(options_);
    mock_client_factory_ = Aws::MakeShared<MockHttpClientFactory>(LOG_TAG);
    mock_http_client_ = Aws::MakeShared<MockHttpClient>(LOG_TAG);
    mock_client_factory_->SetClient(mock_http_client_);
    SetHttpClientFactory(mock_client_factory_);
    AWSCredentials credentials{"mock", "credentials"};
    client_ = Aws::MakeShared<SQSClient>("ALLOCATION_TAG", credentials);
  }

  static void TearDownTestSuite() {
    mock_client_factory_.reset();
    mock_http_client_.reset();
    client_.reset();
    ShutdownAPI(options_);
#ifdef USE_AWS_MEMORY_MANAGEMENT
    EXPECT_EQ(test_memory_system->GetCurrentOutstandingAllocations(), 0ULL);
    EXPECT_EQ(test_memory_system->GetCurrentBytesAllocated(), 0ULL);
    EXPECT_TRUE(test_memory_system->IsClean());
    if (test_memory_system->GetCurrentOutstandingAllocations() != 0ULL) FAIL();
    if (test_memory_system->GetCurrentBytesAllocated() != 0ULL) FAIL();
    if (!test_memory_system->IsClean()) FAIL();
    test_memory_system.reset();
#endif
  }

  static SDKOptions options_;
  static std::shared_ptr<MockHttpClient> mock_http_client_;
  static std::shared_ptr<MockHttpClientFactory> mock_client_factory_;
  static std::shared_ptr<SQSClient> client_;
#ifdef USE_AWS_MEMORY_MANAGEMENT
  static std::unique_ptr<ExactTestMemorySystem> test_memory_system;
#endif
};

SDKOptions SQSUnitTest::options_;
std::shared_ptr<MockHttpClient> SQSUnitTest::mock_http_client_ = nullptr;
std::shared_ptr<MockHttpClientFactory> SQSUnitTest::mock_client_factory_ = nullptr;
std::shared_ptr<SQSClient> SQSUnitTest::client_ = nullptr;
#ifdef USE_AWS_MEMORY_MANAGEMENT
std::unique_ptr<ExactTestMemorySystem> SQSUnitTest::test_memory_system = nullptr;
#endif

TEST_F(SQSUnitTest, CanParseCodeField) {
  // Mock query compatible response
  const auto error_response_stream = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "mockuri", HttpMethod::HTTP_GET);
  error_response_stream->SetResponseStreamFactory(Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
  auto error_response = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, error_response_stream);
  error_response->SetResponseCode(HttpResponseCode::BAD_REQUEST);
  error_response->AddHeader("Content-Type", "application/x-amz-json-1.0");
  error_response->AddHeader("x-amzn-query-error", "AWS.SimpleQueueService.NonExistentQueue;Sender");
  error_response->AddHeader("x-amzn-RequestId", "a918fbf2-457a-4fe1-99ba-5685ce220fc1");

  // Add mocked response to client
  mock_http_client_->Reset();
  mock_http_client_->AddResponseToReturn(error_response, [](IOStream& bodyStream) -> void {
    bodyStream << R"({"__type": "com.amazonaws.sqs#QueueDoesNotExist","message": "For those who come after"})";
  });
  const GetQueueUrlRequest request{};
  const auto response = client_->GetQueueUrl(request);
  EXPECT_TRUE(!response.IsSuccess());
  EXPECT_TRUE(!response.GetError().GetExceptionName().empty());
  EXPECT_EQ("AWS.SimpleQueueService.NonExistentQueue", response.GetError().GetExceptionName());
  EXPECT_EQ(SQSErrors::QUEUE_DOES_NOT_EXIST, response.GetError().GetErrorType());
}

TEST_F(SQSUnitTest, CanHandleMissingCodeField) {
  // Mock query compatible response
  const auto error_response_stream = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "mockuri", HttpMethod::HTTP_GET);
  error_response_stream->SetResponseStreamFactory(Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
  auto error_response = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, error_response_stream);
  error_response->SetResponseCode(HttpResponseCode::BAD_REQUEST);
  error_response->AddHeader("Content-Type", "application/x-amz-json-1.0");
  error_response->AddHeader("x-amzn-RequestId", "a918fbf2-457a-4fe1-99ba-5685ce220fc1");

  // Add mocked response to client
  mock_http_client_->Reset();
  mock_http_client_->AddResponseToReturn(error_response, [](IOStream& bodyStream) -> void {
    bodyStream << R"({"__type": "com.amazonaws.sqs#QueueDoesNotExist","message": "For those who come after"})";
  });
  const GetQueueUrlRequest request{};
  const auto response = client_->GetQueueUrl(request);
  EXPECT_TRUE(!response.IsSuccess());
  EXPECT_TRUE(!response.GetError().GetExceptionName().empty());
  EXPECT_EQ("QueueDoesNotExist", response.GetError().GetExceptionName());
  EXPECT_EQ(SQSErrors::QUEUE_DOES_NOT_EXIST, response.GetError().GetErrorType());
}
