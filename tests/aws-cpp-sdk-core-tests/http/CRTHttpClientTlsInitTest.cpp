/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#if AWS_SDK_USE_CRT_HTTP
#include <aws/core/Globals.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/crt/CRTHttpClient.h>
#include <aws/core/utils/stream/HttpWriteDataStreamBuf.h>
#include <aws/core/utils/threading/PooledThreadExecutor.h>
#include <aws/core/utils/threading/Semaphore.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>

#include <atomic>

using namespace Aws::Http;
using namespace Aws::Client;

namespace {
const char* CRT_TLS_INIT_TEST_TAG = "CRTHttpClientTlsInitTest";

class CRTHttpClientTlsInitTest : public Aws::Testing::AwsCppSdkGTestSuite {
 protected:
  static ClientConfiguration MakeConfig() {
    ClientConfiguration config;
    config.verifySSL = true;
    config.connectTimeoutMs = 1000;
    config.requestTimeoutMs = 2000;
    return config;
  }

  static std::shared_ptr<CRTHttpClient> MakeClient(const ClientConfiguration& config) {
    return Aws::MakeShared<CRTHttpClient>(CRT_TLS_INIT_TEST_TAG, config, *Aws::GetDefaultClientBootstrap());
  }

  static std::shared_ptr<CRTHttpClient> MakeClientWithMissingCaFile() {
    auto config = MakeConfig();
    config.caFile = "/nonexistent/ca.pem";
    return MakeClient(config);
  }

  static std::shared_ptr<HttpRequest> MakeTestRequest(const char* scheme) {
    return CreateHttpRequest(Aws::String(scheme) + "://127.0.0.1:1/x", HttpMethod::HTTP_GET,
                             Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
  }
};

TEST_F(CRTHttpClientTlsInitTest, BadCaFileRefusesRequests) {
  auto client = MakeClientWithMissingCaFile();
  EXPECT_FALSE(static_cast<bool>(*client));

  for (const char* scheme : {"https", "http"}) {
    auto response = client->MakeRequest(MakeTestRequest(scheme), nullptr, nullptr);
    ASSERT_NE(nullptr, response);
    EXPECT_TRUE(response->HasClientError());
    EXPECT_EQ(CoreErrors::INVALID_PARAMETER_COMBINATION, response->GetClientErrorType()) << scheme;
  }
}

TEST_F(CRTHttpClientTlsInitTest, BadProxyCaFileRefusesRequests) {
  auto config = MakeConfig();
  config.proxyHost = "127.0.0.1";
  config.proxyPort = 1;
  config.proxyScheme = Scheme::HTTPS;
  config.proxyCaFile = "/nonexistent/proxy-ca.pem";
  auto client = MakeClient(config);
  EXPECT_FALSE(static_cast<bool>(*client));

  auto response = client->MakeRequest(MakeTestRequest("https"), nullptr, nullptr);
  ASSERT_NE(nullptr, response);
  EXPECT_TRUE(response->HasClientError());
  EXPECT_EQ(CoreErrors::INVALID_PARAMETER_COMBINATION, response->GetClientErrorType());
}

TEST_F(CRTHttpClientTlsInitTest, BadCaFileAcquireConnectionFails) {
  auto client = MakeClientWithMissingCaFile();

  std::atomic<bool> callbackInvoked{false};
  auto error = client->AcquireConnection(MakeTestRequest("https"),
                                         [&callbackInvoked](std::shared_ptr<Aws::Http::Connection>, int) { callbackInvoked = true; });
  ASSERT_TRUE(error.has_value());
  EXPECT_EQ(CoreErrors::INVALID_PARAMETER_COMBINATION, error->GetErrorType());
  EXPECT_FALSE(callbackInvoked.load());
}

TEST_F(CRTHttpClientTlsInitTest, BadCaFileWriteStreamInitializeFails) {
  std::shared_ptr<HttpClient> client = MakeClientWithMissingCaFile();

  Aws::Utils::Stream::HttpWriteDataStreamBuf streamBuf(client, 1024, 1000);
  auto error = streamBuf.Initialize(MakeTestRequest("https"));
  ASSERT_TRUE(error.has_value());
  EXPECT_EQ(CoreErrors::INVALID_PARAMETER_COMBINATION, error->GetErrorType());
}

TEST_F(CRTHttpClientTlsInitTest, BadCaFileMakeRequestAsyncCompletesWithClientError) {
  auto client = MakeClientWithMissingCaFile();
  auto executor = Aws::MakeShared<Aws::Utils::Threading::PooledThreadExecutor>(CRT_TLS_INIT_TEST_TAG, 2);
  auto request = MakeTestRequest("https");

  std::shared_ptr<HttpResponse> recorded;
  int attempts = 0;
  Aws::Utils::Threading::Semaphore done(0, 1);
  auto error = client->MakeRequestAsync(
      [&request, &attempts]() -> std::shared_ptr<HttpRequest> {
        ++attempts;
        return request;
      },
      [&recorded](std::shared_ptr<HttpResponse> response) -> HttpClient::AttemptOutcome {
        recorded = std::move(response);
        return HttpClient::AttemptOutcome{false, std::chrono::milliseconds(0)};
      },
      [&done]() { done.Release(); }, executor);
  ASSERT_FALSE(error.has_value());
  done.WaitOne();

  EXPECT_EQ(1, attempts);
  ASSERT_NE(nullptr, recorded);
  EXPECT_TRUE(recorded->HasClientError());
  EXPECT_EQ(CoreErrors::INVALID_PARAMETER_COMBINATION, recorded->GetClientErrorType());
  EXPECT_EQ(HttpResponseCode::REQUEST_NOT_MADE, recorded->GetResponseCode());
}

TEST_F(CRTHttpClientTlsInitTest, GoodConfigIsNotBad) {
  auto client = MakeClient(MakeConfig());
  EXPECT_TRUE(static_cast<bool>(*client));
}

TEST_F(CRTHttpClientTlsInitTest, VerifySslOffIsNotBad) {
  auto config = MakeConfig();
  config.verifySSL = false;
  auto client = MakeClient(config);
  EXPECT_TRUE(static_cast<bool>(*client));

  auto response = client->MakeRequest(MakeTestRequest("https"), nullptr, nullptr);
  ASSERT_NE(nullptr, response);
  EXPECT_NE(CoreErrors::INVALID_PARAMETER_COMBINATION, response->GetClientErrorType());
}
}  // namespace
#endif
