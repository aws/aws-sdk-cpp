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

#ifdef AWS_PROTOCOL_TEST_USE_TINYXML2
#include <tinyxml2.h>
#endif

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

  static void ValidateBody(const ExpectedRequest& expected, const Aws::ProtocolMock::Model::Request& receivedRequest) {
    const auto expectedBodyBuf = Aws::Utils::HashingUtils::Base64Decode(expected.body);
    const auto receivedBodyBuf = Aws::Utils::HashingUtils::Base64Decode(receivedRequest.GetBody());
    auto expectedBodyStr = Aws::String(reinterpret_cast<char*>(expectedBodyBuf.GetUnderlyingData()), expectedBodyBuf.GetLength());
    auto receivedBodyStr = Aws::String(reinterpret_cast<char*>(receivedBodyBuf.GetUnderlyingData()), receivedBodyBuf.GetLength());
    // Normalize empty bodies to empty JSON object
    if (expectedBodyStr.empty()) expectedBodyStr = "{}";
    if (receivedBodyStr.empty()) receivedBodyStr = "{}";
    // Attempt semantic JSON comparison by round-tripping through the parser
    Aws::Utils::Json::JsonValue expectedJson(expectedBodyStr);
    Aws::Utils::Json::JsonValue receivedJson(receivedBodyStr);
    if (expectedJson.WasParseSuccessful() && receivedJson.WasParseSuccessful()) {
      EXPECT_EQ(expectedJson, receivedJson);
    } else {
      EXPECT_STREQ(expectedBodyStr.c_str(), receivedBodyStr.c_str());
    }
  }

#ifdef AWS_PROTOCOL_TEST_USE_TINYXML2
  // Child elements are sorted, so sibling order is ignored: correct for maps, lenient for lists.
  static Aws::String CanonicalizeXml(const tinyxml2::XMLElement* el) {
    if (!el) {
      return Aws::String();
    }
    Aws::Vector<Aws::String> attrs;
    for (const tinyxml2::XMLAttribute* a = el->FirstAttribute(); a; a = a->Next()) {
      attrs.emplace_back(Aws::String("@") + a->Name() + "=" + a->Value());
    }
    std::sort(attrs.begin(), attrs.end());
    Aws::Vector<Aws::String> kids;
    for (const tinyxml2::XMLElement* c = el->FirstChildElement(); c; c = c->NextSiblingElement()) {
      kids.push_back(CanonicalizeXml(c));
    }
    std::sort(kids.begin(), kids.end());
    Aws::String out = Aws::String("<") + el->Name();
    for (const auto& a : attrs) {
      out += " " + a;
    }
    const char* text = el->GetText();
    if (text) {
      out += " #" + Aws::String(text);
    }
    for (const auto& k : kids) {
      out += k;
    }
    return out + ">";
  }

  static void ValidateXmlBody(const ExpectedRequest& expected, const Aws::ProtocolMock::Model::Request& receivedRequest) {
    const auto expectedBodyBuf = Aws::Utils::HashingUtils::Base64Decode(expected.body);
    const auto receivedBodyBuf = Aws::Utils::HashingUtils::Base64Decode(receivedRequest.GetBody());
    const Aws::String expectedBodyStr(reinterpret_cast<char*>(expectedBodyBuf.GetUnderlyingData()), expectedBodyBuf.GetLength());
    const Aws::String receivedBodyStr(reinterpret_cast<char*>(receivedBodyBuf.GetUnderlyingData()), receivedBodyBuf.GetLength());
    tinyxml2::XMLDocument expectedDoc;
    tinyxml2::XMLDocument receivedDoc;
    const bool expectedIsXml = expectedDoc.Parse(expectedBodyStr.c_str(), expectedBodyStr.size()) == tinyxml2::XML_SUCCESS;
    const bool receivedIsXml = receivedDoc.Parse(receivedBodyStr.c_str(), receivedBodyStr.size()) == tinyxml2::XML_SUCCESS;
    if (expectedIsXml && receivedIsXml) {
      EXPECT_STREQ(CanonicalizeXml(expectedDoc.RootElement()).c_str(), CanonicalizeXml(receivedDoc.RootElement()).c_str());
    } else {
      // Non-XML payload (e.g. raw string/blob @httpPayload).
      EXPECT_STREQ(expectedBodyStr.c_str(), receivedBodyStr.c_str());
    }
  }
#endif

  static void ValidateFormUrlEncodedBody(const ExpectedRequest& expected, const Aws::ProtocolMock::Model::Request& receivedRequest) {
    const auto expectedBodyBuf = Aws::Utils::HashingUtils::Base64Decode(expected.body);
    const auto receivedBodyBuf = Aws::Utils::HashingUtils::Base64Decode(receivedRequest.GetBody());
    const Aws::String expectedBodyStr(reinterpret_cast<char*>(expectedBodyBuf.GetUnderlyingData()), expectedBodyBuf.GetLength());
    const Aws::String receivedBodyStr(reinterpret_cast<char*>(receivedBodyBuf.GetUnderlyingData()), receivedBodyBuf.GetLength());
    auto sortedPairs = [](const Aws::String& body) -> Aws::String {
      if (body.empty()) {
        return Aws::String();
      }
      Aws::Vector<Aws::String> pairs = Aws::Utils::StringUtils::Split(body, '&');
      std::sort(pairs.begin(), pairs.end());
      Aws::String joined;
      for (const auto& pair : pairs) {
        if (!joined.empty()) {
          joined += "&";
        }
        joined += pair;
      }
      return joined;
    };
    EXPECT_STREQ(sortedPairs(expectedBodyStr).c_str(), sortedPairs(receivedBodyStr).c_str());
  }

  // Compares two request URIs. The path is compared exactly; the query string is compared as an
  // unordered set of parameters, since query-parameter order is not semantically significant.
  static void CompareUri(const Aws::String& expected, const Aws::String& received) {
    const size_t expQ = expected.find('?');
    const size_t recQ = received.find('?');
    EXPECT_STREQ(expected.substr(0, expQ).c_str(), received.substr(0, recQ).c_str());
    auto sortedQuery = [](const Aws::String& uri, size_t q) -> Aws::String {
      if (q == Aws::String::npos) {
        return Aws::String();
      }
      Aws::Vector<Aws::String> params = Aws::Utils::StringUtils::Split(uri.substr(q + 1), '&');
      std::sort(params.begin(), params.end());
      Aws::String joined;
      for (const auto& param : params) {
        if (!joined.empty()) {
          joined += "&";
        }
        joined += param;
      }
      return joined;
    };
    EXPECT_STREQ(sortedQuery(expected, expQ).c_str(), sortedQuery(received, recQ).c_str());
  }

  void ValidateRequestSent(const std::function<void (const ExpectedRequest& expected, const Aws::ProtocolMock::Model::Request& receivedRequest)>& bodyCompare = ValidateBody) const {
    ValidateRequestSent(ExpectedRequest(), bodyCompare);
  }

  void ValidateRequestSent(const ExpectedRequest& expected = ExpectedRequest(),
                          const std::function<void (const ExpectedRequest& expected, const Aws::ProtocolMock::Model::Request& receivedRequest)>& bodyCompare = ValidateBody) const {

    auto requestsReceivedOutcome = mockClient.GetRequestsReceived();
    AWS_ASSERT_SUCCESS(requestsReceivedOutcome);
    ASSERT_EQ(1u, requestsReceivedOutcome.GetResult().GetRequests().size());

    const Aws::ProtocolMock::Model::Request& receivedRequest = requestsReceivedOutcome.GetResult().GetRequests()[0];
    if (!expected.method.empty()) {
      EXPECT_STREQ(expected.method.c_str(), receivedRequest.GetMethod().c_str());
    }
    // A Smithy vector with no "body" asserts only headers/uri, not the body.
    if (!expected.body.empty()) {
      bodyCompare(expected, receivedRequest);
    }
    if (!expected.uri.empty()) {
      CompareUri(expected.uri, receivedRequest.GetUri());
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
