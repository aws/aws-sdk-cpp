/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentials.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/DynamoDBEndpointProvider.h>
#include <aws/dynamodb/DynamoDBClientConfiguration.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/MemoryTesting.h>
#include <memory>

using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Auth;
using namespace Aws::DynamoDB;
using namespace Aws::Http;
using namespace Aws::Http::Standard;

const char* LOG_TAG = "DynamoDBUnitTest";
const int MAX_RETRIES = 2;

class DynamoDBUnitTest : public testing::Test {
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
    const auto epProvider = Aws::MakeShared<DynamoDBEndpointProvider>(LOG_TAG);
    DynamoDBClientConfiguration configuration;
    configuration.retryStrategy = Aws::MakeShared<StandardRetryStrategy>(LOG_TAG, MAX_RETRIES);
    configuration.region = "us-east-1";
    client_ = Aws::MakeShared<DynamoDBClient>("ALLOCATION_TAG", credentials, epProvider, configuration);
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
    if (test_memory_system->GetCurrentOutstandingAllocations() != 0ULL)
      FAIL();
    if (test_memory_system->GetCurrentBytesAllocated() != 0ULL)
      FAIL();
    if (!test_memory_system->IsClean())
      FAIL();
    test_memory_system.reset();
#endif
  }

  static SDKOptions options_;
  static std::shared_ptr<MockHttpClient> mock_http_client_;
  static std::shared_ptr<MockHttpClientFactory> mock_client_factory_;
  static std::shared_ptr<DynamoDB::DynamoDBClient> client_;
#ifdef USE_AWS_MEMORY_MANAGEMENT
  static std::unique_ptr<ExactTestMemorySystem> test_memory_system;
#endif
};

SDKOptions DynamoDBUnitTest::options_;
std::shared_ptr<MockHttpClient> DynamoDBUnitTest::mock_http_client_ = nullptr;
std::shared_ptr<MockHttpClientFactory> DynamoDBUnitTest::mock_client_factory_ = nullptr;
std::shared_ptr<DynamoDBClient> DynamoDBUnitTest::client_ = nullptr;
#ifdef USE_AWS_MEMORY_MANAGEMENT
  std::unique_ptr<ExactTestMemorySystem> DynamoDBUnitTest::test_memory_system = nullptr;
#endif

TEST_F(DynamoDBUnitTest, RetryShouldWork)
{
  //Mock bad request
  auto failed_stream_ = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "mockuri", HttpMethod::HTTP_GET);
  failed_stream_->SetResponseStreamFactory([]() -> IOStream* {
    return Aws::New<StringStream>(LOG_TAG, "response-string", std::ios_base::in | std::ios_base::binary);
  });
  auto failed_response = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, failed_stream_);
  failed_response->SetResponseCode(HttpResponseCode::INTERNAL_SERVER_ERROR);

  //Mock good request
  auto success_stream_ = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "mockuri", HttpMethod::HTTP_GET);
  failed_stream_->SetResponseStreamFactory([]() -> IOStream* {
    auto list_tables_string =  R"({"LastEvaluatedTableName": "Thread","TableNames": ["Forum","Reply","Thread"]}))";
    return Aws::New<StringStream>(LOG_TAG, list_tables_string, std::ios_base::in | std::ios_base::binary);
  });
  auto success_response = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, failed_stream_);
  success_response->SetResponseCode(HttpResponseCode::OK);

  //succeed on second attempt
  mock_http_client_->Reset();
  mock_http_client_->AddResponseToReturn(failed_response);
  mock_http_client_->AddResponseToReturn(success_response);

  const auto list_tables_outcome = client_->ListTables();
  EXPECT_TRUE(list_tables_outcome.IsSuccess());
}

TEST_F(DynamoDBUnitTest, DefaultRetryStrategyShouldFailWhenRetriesFail)
{
  //Mock bad request
  auto failed_stream_ = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "mockuri", HttpMethod::HTTP_GET);
  failed_stream_->SetResponseStreamFactory([]() -> IOStream* {
    return Aws::New<StringStream>(LOG_TAG, "response-string", std::ios_base::in | std::ios_base::binary);
  });
  auto failed_response = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, failed_stream_);
  failed_response->SetResponseCode(HttpResponseCode::INTERNAL_SERVER_ERROR);

  //Mock good request
  auto success_stream_ = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "mockuri", HttpMethod::HTTP_GET);
  failed_stream_->SetResponseStreamFactory([]() -> IOStream* {
    auto list_tables_string =  R"({"LastEvaluatedTableName": "Thread","TableNames": ["Forum","Reply","Thread"]}))";
    return Aws::New<StringStream>(LOG_TAG, list_tables_string, std::ios_base::in | std::ios_base::binary);
  });
  auto success_response = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, failed_stream_);
  success_response->SetResponseCode(HttpResponseCode::OK);

  // We will only retry twice
  mock_http_client_->Reset();
  mock_http_client_->AddResponseToReturn(failed_response);
  mock_http_client_->AddResponseToReturn(failed_response);
  mock_http_client_->AddResponseToReturn(success_response);

  const auto list_tables_outcome = client_->ListTables();
  EXPECT_FALSE(list_tables_outcome.IsSuccess());
}
