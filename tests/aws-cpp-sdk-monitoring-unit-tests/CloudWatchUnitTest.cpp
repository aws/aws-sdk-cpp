/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSCredentials.h>
#include <aws/core/client/RequestCompression.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/Outcome.h>
#include <aws/monitoring/CloudWatchClient.h>
#include <aws/monitoring/model/PutMetricDataRequest.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/core/utils/StringUtils.h>
#include <gtest/gtest.h>
#include <algorithm>
#include <iostream>

using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::CloudWatch;
using namespace Aws::CloudWatch::Model;

const char* LOG_TAG = "CloudWatchTest";

class CloudWatchTest : public Aws::Testing::AwsCppSdkGTestSuite {
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

TEST_F(CloudWatchTest, TestUserAgentCompressionTracking) {
#ifndef ENABLED_ZLIB_REQUEST_COMPRESSION
  GTEST_SKIP() << "ZLIB compression not available in this build";
#endif
  // Setup mock response with proper CloudWatch XML
  std::shared_ptr<HttpRequest> requestTmp =
      CreateHttpRequest(Aws::Http::URI("dummy"), Aws::Http::HttpMethod::HTTP_POST, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
  auto successResponse = Aws::MakeShared<Standard::StandardHttpResponse>(LOG_TAG, requestTmp);
  successResponse->SetResponseCode(HttpResponseCode::OK);
  successResponse->GetResponseBody() << "<PutMetricDataResponse><ResponseMetadata><RequestId>test-request-id</RequestId></ResponseMetadata></PutMetricDataResponse>";
  m_mockHttpClient->AddResponseToReturn(successResponse);

  // Create client with compression enabled
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::CloudWatch::CloudWatchClientConfiguration clientConfig(cfgInit);
  clientConfig.region = Aws::Region::US_EAST_1;
  clientConfig.requestCompressionConfig.useRequestCompression = UseRequestCompression::ENABLE;
  clientConfig.requestCompressionConfig.requestMinCompressionSizeBytes = 10240;
  
  AWSCredentials credentials{"mock", "credentials"};
  CloudWatchClient client(credentials, nullptr, clientConfig);
  
  // Create request with large payload to trigger compression
  PutMetricDataRequest request;
  request.SetNamespace("TestNamespace");
  
  // Add large metric data to trigger compression
  MetricDatum metricDatum;
  metricDatum.SetMetricName("TestMetric");
  metricDatum.SetValue(123.45);
  metricDatum.SetTimestamp(Aws::Utils::DateTime::Now());
  
  // Create large metadata to exceed compression threshold
  Aws::String largeValue(20000, 'A'); // 20KB value to exceed compression threshold
  Dimension dimension;
  dimension.SetName("LargeDimension");
  dimension.SetValue(largeValue);
  metricDatum.AddDimensions(dimension);
  
  request.AddMetricData(metricDatum);
  
  auto outcome = client.PutMetricData(request);
  AWS_ASSERT_SUCCESS(outcome);
  
  // Verify User-Agent contains compression metric
  auto lastRequest = m_mockHttpClient->GetMostRecentHttpRequest();
  EXPECT_TRUE(lastRequest.HasUserAgent());
  const auto& userAgent = lastRequest.GetUserAgent();
  EXPECT_TRUE(!userAgent.empty());

  const auto userAgentParsed = Aws::Utils::StringUtils::Split(userAgent, ' ');

  // Check for gzip compression business metric (L) in user agent
  auto businessMetrics = std::find_if(userAgentParsed.begin(), userAgentParsed.end(),
      [](const Aws::String& value) { return value.find("m/") != Aws::String::npos && value.find("L") != Aws::String::npos; });
  
  EXPECT_TRUE(businessMetrics != userAgentParsed.end());
}

// Compression now runs in RequestCompressionInterceptor, after the client attached the uncompressed body,
// so Content-Length has to describe the compressed bytes that are sent.
// Header names are literals: this test delay-loads aws-cpp-sdk-core.dll on Windows, which cannot import
// exported data such as Aws::Http::CONTENT_LENGTH_HEADER.
TEST_F(CloudWatchTest, PutMetricDataSendsGzipBodyWithMatchingContentLength) {
#ifndef ENABLED_ZLIB_REQUEST_COMPRESSION
  GTEST_SKIP() << "ZLIB compression not available in this build";
#endif
  std::shared_ptr<HttpRequest> requestTmp =
      CreateHttpRequest(Aws::Http::URI("dummy"), Aws::Http::HttpMethod::HTTP_POST, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
  auto successResponse = Aws::MakeShared<Standard::StandardHttpResponse>(LOG_TAG, requestTmp);
  successResponse->SetResponseCode(HttpResponseCode::OK);
  successResponse->GetResponseBody() << "<PutMetricDataResponse><ResponseMetadata><RequestId>test-request-id</RequestId></ResponseMetadata></PutMetricDataResponse>";
  m_mockHttpClient->AddResponseToReturn(successResponse);

  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::CloudWatch::CloudWatchClientConfiguration clientConfig(cfgInit);
  clientConfig.region = Aws::Region::US_EAST_1;
  clientConfig.requestCompressionConfig.useRequestCompression = UseRequestCompression::ENABLE;
  clientConfig.requestCompressionConfig.requestMinCompressionSizeBytes = 10240;
  CloudWatchClient client(AWSCredentials{"mock", "credentials"}, nullptr, clientConfig);

  PutMetricDataRequest request;
  request.SetNamespace("TestNamespace");
  MetricDatum metricDatum;
  metricDatum.SetMetricName("TestMetric");
  metricDatum.SetValue(123.45);
  Dimension dimension;
  dimension.SetName("LargeDimension");
  dimension.SetValue(Aws::String(20000, 'A'));
  metricDatum.AddDimensions(dimension);
  request.AddMetricData(metricDatum);

  AWS_ASSERT_SUCCESS(client.PutMetricData(request));

  const auto lastRequest = m_mockHttpClient->GetMostRecentHttpRequest();
  ASSERT_TRUE(lastRequest.HasHeader("content-encoding"));
  EXPECT_EQ("gzip", lastRequest.GetHeaderValue("content-encoding"));

  const auto body = lastRequest.GetContentBody();
  ASSERT_NE(nullptr, body);
  body->clear();
  body->seekg(0, std::ios_base::end);
  const auto bodySize = static_cast<size_t>(body->tellg());
  body->seekg(0, std::ios_base::beg);
  EXPECT_LT(bodySize, 20000u);
  EXPECT_EQ(Aws::Utils::StringUtils::to_string(bodySize), lastRequest.GetHeaderValue("content-length"));

  // gzip magic bytes
  unsigned char magic[2] = {0, 0};
  body->read(reinterpret_cast<char*>(magic), 2);
  EXPECT_EQ(0x1f, magic[0]);
  EXPECT_EQ(0x8b, magic[1]);

  // The compressed body must decompress to the full request payload.
  body->clear();
  body->seekg(0, std::ios_base::beg);
  const auto uncompressed = RequestCompression().uncompress(body, CompressionAlgorithm::GZIP);
  ASSERT_TRUE(uncompressed.IsSuccess());
  const Aws::String payload((std::istreambuf_iterator<char>(*uncompressed.GetResult())), std::istreambuf_iterator<char>());
  EXPECT_NE(Aws::String::npos, payload.find("TestMetric"));
  EXPECT_NE(Aws::String::npos, payload.find(Aws::String(20000, 'A')));
}
