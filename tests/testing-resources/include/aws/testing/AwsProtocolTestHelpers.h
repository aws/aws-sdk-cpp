/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/testing/Testing_EXPORTS.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/core/auth/AWSCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/client/ClientConfiguration.h>

#include <aws/protocol-mock/ProtocolMockClient.h>
#include <aws/protocol-mock/model/SetNextResponseRequest.h>
#include <aws/protocol-mock/model/Request.h>
#include <cstdint>
#include <utility>

#define AWS_PROTOCOL_TEST TEST_F

struct OutputResponse {
  int statusCode = 200;
  Aws::Vector<std::pair<Aws::String, Aws::String>> headers;
  Aws::String body;  // in base64, the mock has to decode base64 and send back decoded.
};

struct ExpectedRequest {
  Aws::String method;
  Aws::String body;
  Aws::String uri;
  Aws::String host;  // base64 encoded
  Aws::Vector<std::pair<Aws::String, Aws::String>> headers;
  Aws::Vector<Aws::String> forbidHeaders;
  Aws::Vector<Aws::String> requireHeaders;
};

class NoRetry: public Aws::Client::RetryStrategy
{
public:
  using AWSError = Aws::Client::AWSError<Aws::Client::CoreErrors>;
  bool ShouldRetry(const AWSError& error, long attemptedRetries) const override
  {
    AWS_UNREFERENCED_PARAM(error);
    AWS_UNREFERENCED_PARAM(attemptedRetries);
    return false;
  };

  long CalculateDelayBeforeNextRetry(const AWSError& error, long attemptedRetries) const override
  {
    AWS_UNREFERENCED_PARAM(error);
    AWS_UNREFERENCED_PARAM(attemptedRetries);
    return 0;
  };

  const char* GetStrategyName() const override {
    return "standard";
  };
};

class AwsProtocolTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
public:
  using ProtocolMockClient = Aws::ProtocolMock::ProtocolMockClient;
  const Aws::Client::ClientConfigurationInitValues disableImdsConfigInit = []() {
    Aws::Client::ClientConfigurationInitValues init;
    init.shouldDisableIMDS = true;
    return init;
  }();

  const Aws::Client::ClientConfiguration mockConfig = []() {
    Aws::Client::ClientConfigurationInitValues init;
    init.shouldDisableIMDS = true;
    Aws::Client::ClientConfiguration config(init);
    config.configFactories.retryStrategyCreateFn = []() {
      return Aws::MakeShared<NoRetry>("AwsProtocolTestSuite");
    };
    return config;
  }();

  Aws::Auth::AWSCredentials mockCredentials{"mock", "credentials"};

  ProtocolMockClient mockClient = ProtocolMockClient(Aws::Client::ClientConfiguration(disableImdsConfigInit));

  void SetUp() override {
    auto pingOutcome = mockClient.Ping();
    AWS_ASSERT_SUCCESS(pingOutcome);
    auto resetOutcome = mockClient.Reset();
    AWS_ASSERT_SUCCESS(resetOutcome);
  }

  void TearDown() override {
    auto resetOutcome = mockClient.Reset();
    AWS_ASSERT_SUCCESS(resetOutcome);
  }

  void SetMockResponse(const OutputResponse& newResponse = OutputResponse()) const {
    Aws::ProtocolMock::Model::SetNextResponseRequest request;
    request.SetStatusCode(newResponse.statusCode);
    for(const auto& newHeader : newResponse.headers) {
      request.AddHeaderValues(Aws::ProtocolMock::Model::HttpHeader().WithKey(newHeader.first).WithVal(newHeader.second));
    }
    request.SetRequestBody(newResponse.body);

    auto setNextResponse = mockClient.SetNextResponse(request);
    AWS_ASSERT_SUCCESS(setNextResponse);
  }

  void ValidateRequestSent(const ExpectedRequest& expected = ExpectedRequest()) const {
    auto requestsReceivedOutcome = mockClient.GetRequestsReceived();
    AWS_ASSERT_SUCCESS(requestsReceivedOutcome);
    ASSERT_EQ(1u, requestsReceivedOutcome.GetResult().GetRequests().size());

    const Aws::ProtocolMock::Model::Request& receivedRequest = requestsReceivedOutcome.GetResult().GetRequests()[0];
    if (!expected.method.empty()) {
      EXPECT_STREQ(expected.method.c_str(), receivedRequest.GetMethod().c_str());
    }
    if (!expected.body.empty()) {
      const auto expectedBodyBuf = Aws::Utils::HashingUtils::Base64Decode(expected.body);
      const auto receivedBodyBuf = Aws::Utils::HashingUtils::Base64Decode(receivedRequest.GetBody());
      const auto expectedBodyStr = Aws::String(reinterpret_cast<char*>(expectedBodyBuf.GetUnderlyingData()), expectedBodyBuf.GetLength());
      const auto receivedBodyStr = Aws::String(reinterpret_cast<char*>(receivedBodyBuf.GetUnderlyingData()), receivedBodyBuf.GetLength());
      EXPECT_STREQ(expectedBodyStr.c_str(), receivedBodyStr.c_str());
    }
    if (!expected.uri.empty()) {
      EXPECT_STREQ(expected.uri.c_str(), receivedRequest.GetUri().c_str());
    }
    if (!expected.host.empty()) {
      EXPECT_STREQ(expected.host.c_str(), receivedRequest.GetHost().c_str());
    }
    if (!expected.headers.empty()) {
      const auto& receivedHeaders = receivedRequest.GetHeaders();
      for (const auto& expectedHeader : expected.headers) {
        using HttpHeader = Aws::ProtocolMock::Model::HttpHeader;
        auto foundIt = std::find_if(receivedHeaders.begin(), receivedHeaders.end(), [&expectedHeader](const HttpHeader& hdr) {
          return Aws::Utils::StringUtils::ToLower(hdr.GetKey().c_str()) == Aws::Utils::StringUtils::ToLower(expectedHeader.first.c_str());
        });
        ASSERT_TRUE(foundIt != receivedHeaders.end());
        ASSERT_STREQ(Aws::Utils::StringUtils::ToLower(expectedHeader.second.c_str()).c_str(),
                     Aws::Utils::StringUtils::ToLower(foundIt->GetVal().c_str()).c_str());
      }
    }
    if (!expected.forbidHeaders.empty()) {
      const auto& receivedHeaders = receivedRequest.GetHeaders();
      for (const auto& forbidHeader : expected.forbidHeaders) {
        using HttpHeader = Aws::ProtocolMock::Model::HttpHeader;
        auto foundIt = std::find_if(receivedHeaders.begin(), receivedHeaders.end(), [&forbidHeader](const HttpHeader& hdr) {
          return Aws::Utils::StringUtils::ToLower(hdr.GetKey().c_str()) == Aws::Utils::StringUtils::ToLower(forbidHeader.c_str());
        });
        ASSERT_TRUE(foundIt == receivedHeaders.end());
      }
    }
    if (!expected.requireHeaders.empty()) {
      const auto& receivedHeaders = receivedRequest.GetHeaders();
      for (const auto& requireHeader : expected.requireHeaders) {
        using HttpHeader = Aws::ProtocolMock::Model::HttpHeader;
        auto foundIt = std::find_if(receivedHeaders.begin(), receivedHeaders.end(), [&requireHeader](const HttpHeader& hdr) {
          return Aws::Utils::StringUtils::ToLower(hdr.GetKey().c_str()) == Aws::Utils::StringUtils::ToLower(requireHeader.c_str());
        });
        ASSERT_TRUE(foundIt != receivedHeaders.end());
      }
    }
  }
};

#define AWS_PROTOCOL_TEST_SUITE AwsProtocolTestSuite
using JsonValue = Aws::Utils::Json::JsonValue;
