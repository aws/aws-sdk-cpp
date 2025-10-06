/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentials.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/MemoryTesting.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/timestream-query/TimestreamQueryClient.h>
#include <aws/timestream-query/model/QueryRequest.h>
#include <gtest/gtest.h>

using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Http::Standard;
using namespace Aws::TimestreamQuery;
using namespace Aws::TimestreamQuery::Model;

namespace {
const char* ALLOCATION_TAG = "TimestreamQueryUnitTest";
}

class TimestreamQueryUnitTest : public testing::Test {
 protected:
  static void SetUpTestSuite() {
#ifdef USE_AWS_MEMORY_MANAGEMENT
    testMemorySystem_.reset(new ExactTestMemorySystem(1024, 128));
    options_.memoryManagementOptions.memoryManager = testMemorySystem_.get();
#endif
    InitAPI(options_);
    mockClientFactory_ = Aws::MakeShared<MockHttpClientFactory>(ALLOCATION_TAG);
    mockHttpClient_ = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
    mockClientFactory_->SetClient(mockHttpClient_);
    SetHttpClientFactory(mockClientFactory_);
  }

  static void TearDownTestSuite() {
    mockClientFactory_.reset();
    mockHttpClient_.reset();
    ShutdownAPI(options_);
#ifdef USE_AWS_MEMORY_MANAGEMENT
    EXPECT_EQ(testMemorySystem_->GetCurrentOutstandingAllocations(), 0ULL);
    EXPECT_EQ(testMemorySystem_->GetCurrentBytesAllocated(), 0ULL);
    EXPECT_TRUE(testMemorySystem_->IsClean());
    if (testMemorySystem_->GetCurrentOutstandingAllocations() != 0ULL) FAIL();
    if (testMemorySystem_->GetCurrentBytesAllocated() != 0ULL) FAIL();
    if (!testMemorySystem_->IsClean()) FAIL();
    testMemorySystem_.reset();
#endif
  }

  static SDKOptions options_;
  static std::shared_ptr<MockHttpClient> mockHttpClient_;
  static std::shared_ptr<MockHttpClientFactory> mockClientFactory_;
#ifdef USE_AWS_MEMORY_MANAGEMENT
  static std::unique_ptr<ExactTestMemorySystem> testMemorySystem_;
#endif
};

SDKOptions TimestreamQueryUnitTest::options_;
std::shared_ptr<MockHttpClient> TimestreamQueryUnitTest::mockHttpClient_ = nullptr;
std::shared_ptr<MockHttpClientFactory> TimestreamQueryUnitTest::mockClientFactory_ = nullptr;
#ifdef USE_AWS_MEMORY_MANAGEMENT
// this must be std:: because this is an utility to track allocations in the SDK and should not rely on SDK
std::unique_ptr<ExactTestMemorySystem> TimestreamQueryUnitTest::testMemorySystem_ = nullptr;
#endif

TEST_F(TimestreamQueryUnitTest, EndpointOverrideShouldDisableEndpointDiscovery) {
  ClientConfigurationInitValues initValues{};
  initValues.shouldDisableIMDS = true;
  TimestreamQueryClientConfiguration config{initValues};
  config.endpointOverride = "http://spacers-choice.com:8080";
  config.region = "us-east-1";
  const AWSCredentials credentials{};
  const TimestreamQueryClient client(credentials, nullptr, config);

  const auto responseStream = Aws::MakeShared<StandardHttpRequest>(ALLOCATION_TAG, "mockuri", HttpMethod::HTTP_GET);
  responseStream->SetResponseStreamFactory(Utils::Stream::DefaultResponseStreamFactoryMethod);
  auto response = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, responseStream);
  response->SetResponseCode(HttpResponseCode::OK);
  response->AddHeader("Content-Type", "application/x-amz-json-1.0");
  response->AddHeader("x-amzn-RequestId", "a918fbf2-457a-4fe1-99ba-5685ce220fc1");

  mockHttpClient_->AddResponseToReturn(response, [](IOStream& bodyStream) -> void { bodyStream << R"({})"; });

  auto queryResponse = client.Query(QueryRequest{}.WithQueryString("SELECT 1"));
  AWS_EXPECT_SUCCESS(queryResponse);
  EXPECT_EQ(mockHttpClient_->GetMostRecentHttpRequest().GetUri().GetURIString(), "http://spacers-choice.com:8080");
}

TEST_F(TimestreamQueryUnitTest, EndpointOverrideShouldDisableEndpointDiscoveryThroughClient) {
  ClientConfigurationInitValues initValues{};
  initValues.shouldDisableIMDS = true;
  TimestreamQueryClientConfiguration config{initValues};
  config.region = "us-east-1";
  const AWSCredentials credentials{};
  TimestreamQueryClient client(credentials, nullptr, config);
  client.OverrideEndpoint("http://spacers-choice.com:8080");

  const auto responseStream = Aws::MakeShared<StandardHttpRequest>(ALLOCATION_TAG, "mockuri", HttpMethod::HTTP_GET);
  responseStream->SetResponseStreamFactory(Utils::Stream::DefaultResponseStreamFactoryMethod);
  auto response = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, responseStream);
  response->SetResponseCode(HttpResponseCode::OK);
  response->AddHeader("Content-Type", "application/x-amz-json-1.0");
  response->AddHeader("x-amzn-RequestId", "a918fbf2-457a-4fe1-99ba-5685ce220fc1");

  mockHttpClient_->AddResponseToReturn(response, [](IOStream& bodyStream) -> void { bodyStream << R"({})"; });

  auto queryResponse = client.Query(QueryRequest{}.WithQueryString("SELECT 1"));
  AWS_EXPECT_SUCCESS(queryResponse);
  EXPECT_EQ(mockHttpClient_->GetMostRecentHttpRequest().GetUri().GetURIString(), "http://spacers-choice.com:8080");
}
