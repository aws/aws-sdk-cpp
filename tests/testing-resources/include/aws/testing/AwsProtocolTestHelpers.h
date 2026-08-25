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

  // Normalize an XML document so that two semantically equivalent documents compare equal:
  // drops a leading <?xml ... ?> declaration, expands self-closing <a/> into <a></a>, and
  // removes indentation whitespace (a whitespace run containing a newline) between elements.
  // Attributes and significant leaf text (e.g. an all-whitespace string value) are preserved,
  // so genuine differences such as missing xmlns attributes or omitted elements still fail.
  static Aws::String NormalizeXml(const Aws::String& in) {
    size_t start = 0;
    const size_t firstNonWs = in.find_first_not_of(" \t\r\n");
    if (firstNonWs != Aws::String::npos && in.compare(firstNonWs, 5, "<?xml") == 0) {
      const size_t declEnd = in.find("?>", firstNonWs);
      if (declEnd != Aws::String::npos) {
        start = declEnd + 2;
      }
    }
    Aws::String out;
    out.reserve(in.size());
    for (size_t i = start; i < in.size();) {
      if (in[i] == '<') {
        const size_t tagEnd = in.find('>', i);
        if (tagEnd == Aws::String::npos) {
          out.append(in, i, Aws::String::npos);
          break;
        }
        if (in[tagEnd - 1] == '/' && in[i + 1] != '/' && in[i + 1] != '!' && in[i + 1] != '?') {
          size_t nameEnd = i + 1;
          while (nameEnd < tagEnd && in[nameEnd] != ' ' && in[nameEnd] != '\t' && in[nameEnd] != '\r' &&
                 in[nameEnd] != '\n' && in[nameEnd] != '/' && in[nameEnd] != '>') {
            ++nameEnd;
          }
          const Aws::String name = in.substr(i + 1, nameEnd - (i + 1));
          Aws::String attrs = in.substr(nameEnd, (tagEnd - 1) - nameEnd);
          while (!attrs.empty() && (attrs.back() == ' ' || attrs.back() == '\t' || attrs.back() == '\r' || attrs.back() == '\n')) {
            attrs.pop_back();
          }
          out += "<";
          out += name;
          out += attrs;
          out += "></";
          out += name;
          out += ">";
        } else {
          out.append(in, i, tagEnd - i + 1);
        }
        i = tagEnd + 1;
        size_t j = i;
        bool sawNewline = false;
        while (j < in.size() && (in[j] == ' ' || in[j] == '\t' || in[j] == '\r' || in[j] == '\n')) {
          if (in[j] == '\n' || in[j] == '\r') {
            sawNewline = true;
          }
          ++j;
        }
        if (sawNewline && j < in.size() && in[j] == '<') {
          i = j;
        }
        continue;
      }
      out += in[i];
      ++i;
    }
    const size_t a = out.find_first_not_of(" \t\r\n");
    if (a == Aws::String::npos) {
      return Aws::String();
    }
    const size_t b = out.find_last_not_of(" \t\r\n");
    return out.substr(a, b - a + 1);
  }

  // Body comparator for XML protocols (e.g. restXml). Selected by the protocol-test generator
  // instead of the default JSON-oriented ValidateBody.
  static void ValidateXmlBody(const ExpectedRequest& expected, const Aws::ProtocolMock::Model::Request& receivedRequest) {
    const auto expectedBodyBuf = Aws::Utils::HashingUtils::Base64Decode(expected.body);
    const auto receivedBodyBuf = Aws::Utils::HashingUtils::Base64Decode(receivedRequest.GetBody());
    const Aws::String expectedBodyStr(reinterpret_cast<char*>(expectedBodyBuf.GetUnderlyingData()), expectedBodyBuf.GetLength());
    const Aws::String receivedBodyStr(reinterpret_cast<char*>(receivedBodyBuf.GetUnderlyingData()), receivedBodyBuf.GetLength());
    EXPECT_STREQ(NormalizeXml(expectedBodyStr).c_str(), NormalizeXml(receivedBodyStr).c_str());
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
    bodyCompare(expected, receivedRequest);
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
