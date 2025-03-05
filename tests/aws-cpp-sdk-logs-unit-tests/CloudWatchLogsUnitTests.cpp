/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSCredentials.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/Outcome.h>
#include <aws/logs/CloudWatchLogsClient.h>
#include <aws/logs/model/PutLogEventsRequest.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <gtest/gtest.h>

using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::CloudWatchLogs;
using namespace Aws::CloudWatchLogs::Model;

const char* LOG_TAG = "CloudWatchLogsTest";

class CloudWatchLogsTest : public Aws::Testing::AwsCppSdkGTestSuite {
 protected:
  std::shared_ptr<MockHttpClient> m_mockHttpClient;
  std::shared_ptr<MockHttpClientFactory> m_mockHttpClientFactory;

  void SetUp() {
    m_mockHttpClient = Aws::MakeShared<MockHttpClient>(LOG_TAG);
    m_mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>(LOG_TAG);
    m_mockHttpClientFactory->SetClient(m_mockHttpClient);
    SetHttpClientFactory(m_mockHttpClientFactory);
  }

  void TearDown() {
    m_mockHttpClient->Reset();
    m_mockHttpClient = nullptr;
    m_mockHttpClientFactory = nullptr;
    Aws::Http::CleanupHttp();
    Aws::Http::InitHttp();
  }
};

class ClientHolder {
 public:
  ClientHolder() : client(makeClient()) {
    // init client again
    client = makeClient();
  }

  PutLogEventsOutcome Foo() {
    const auto response = client.PutLogEvents(PutLogEventsRequest{});
    return response;
  }

  const CloudWatchLogsClient& getClient() { return client; }

  CloudWatchLogsClient&& moveClient() { return std::move(client); }

 private:
  CloudWatchLogsClient makeClient() {
    Aws::Client::ClientConfigurationInitValues cfgInit;
    cfgInit.shouldDisableIMDS = true;
    Aws::Client::ClientConfiguration clientConfig(cfgInit);
    clientConfig.region = Aws::Region::US_EAST_1;
    AWSCredentials credentials{"mock", "credentials"};
    return CloudWatchLogsClient(credentials, clientConfig);
  }

  CloudWatchLogsClient client;
};

TEST_F(CloudWatchLogsTest, ClientOperatorCopyMoveEquals) {
  auto mockResponse = [this]() {
    std::shared_ptr<HttpRequest> requestTmp =
        CreateHttpRequest(Aws::Http::URI("dummy"), Aws::Http::HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    auto successResponse = Aws::MakeShared<Standard::StandardHttpResponse>(LOG_TAG, requestTmp);
    successResponse->SetResponseCode(HttpResponseCode::OK);
    successResponse->GetResponseBody() << "{}";
    m_mockHttpClient->AddResponseToReturn(successResponse);
  };

  // Check typical user wrapper
  mockResponse();
  ClientHolder wrapped{};
  auto resWrapped = wrapped.Foo();
  AWS_ASSERT_SUCCESS(resWrapped);

  // check copy constructed
  {
    mockResponse();
    CloudWatchLogsClient copied(wrapped.getClient());
    auto resCopied = copied.PutLogEvents(PutLogEventsRequest{});
    AWS_ASSERT_SUCCESS(resCopied);
  }

  // check that the original is still alive
  {
    mockResponse();
    auto resWrappedAfterCopy = wrapped.Foo();
    AWS_ASSERT_SUCCESS(resWrappedAfterCopy);
  }

  // check move construction
  {
    mockResponse();
    CloudWatchLogsClient moved(std::move(wrapped.moveClient()));
    auto resMoved = moved.PutLogEvents(PutLogEventsRequest{});
    AWS_ASSERT_SUCCESS(resMoved);
  }

  // check that original is "unspecified but valid state" after move
  {
    mockResponse();
    auto resWrappedAfterMove = wrapped.Foo();
    // move is actually redirected to copy because the generated client does not generate move c-tor, so it results in a copy
    AWS_ASSERT_SUCCESS(resWrappedAfterMove);
  }

  ClientHolder anotherWrapper{};
  // operator=(const &)
  {
    Aws::Client::ClientConfigurationInitValues cfgInit;
    cfgInit.shouldDisableIMDS = true;
    Aws::Client::ClientConfiguration clientConfig(cfgInit);
    CloudWatchLogsClient copyAssigned(clientConfig);

    mockResponse();
    copyAssigned = anotherWrapper.getClient();
    auto resCopyAssigned = copyAssigned.PutLogEvents(PutLogEventsRequest{});
    AWS_ASSERT_SUCCESS(resCopyAssigned);
  }

  // check that the original is still alive
  {
    mockResponse();
    auto resWrappedAfterCopyAssign = anotherWrapper.Foo();
    AWS_ASSERT_SUCCESS(resWrappedAfterCopyAssign);
  }

  // operator=(&&)
  {
    Aws::Client::ClientConfigurationInitValues cfgInit;
    cfgInit.shouldDisableIMDS = true;
    Aws::Client::ClientConfiguration clientConfig(cfgInit);
    CloudWatchLogsClient moveAssigned(clientConfig);

    mockResponse();
    moveAssigned = std::move(anotherWrapper.moveClient());
    auto resMoveAssigned = moveAssigned.PutLogEvents(PutLogEventsRequest{});
    AWS_ASSERT_SUCCESS(resMoveAssigned);
  }

  // check that original is "unspecified but valid state" after move
  {
    mockResponse();
    auto resWrappedAfterMoveAssign = anotherWrapper.Foo();
    // move is actually redirected to copy because the generated client does not generate operator(&&), so it results in a copy
    AWS_ASSERT_SUCCESS(resWrappedAfterMoveAssign);
  }
}