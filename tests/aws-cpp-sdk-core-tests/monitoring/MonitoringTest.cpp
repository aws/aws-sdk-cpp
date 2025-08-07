/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/mocks/aws/client/MockAWSClient.h>
#include <aws/core/monitoring/CoreMetrics.h>
#include <aws/core/monitoring/MonitoringInterface.h>
#include <aws/core/monitoring/MonitoringFactory.h>
#include <aws/core/monitoring/MonitoringManager.h>
#include <aws/core/monitoring/DefaultMonitoring.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Http::Standard;
using namespace Aws::Monitoring;

static const char ALLOCATION_TAG[] = "MonitoringTest";
static const char URI_STRING[] = "http://domain.com/something";

static int MonitorOneAPICalledFlag = 0x0;
static int MonitorTwoAPICalledFlag = 0x0;

static const int MonitorAPIsNum = 5;
static std::vector<int> MonitorOneAPICalledCounter(MonitorAPIsNum);
static std::vector<int> MonitorTwoAPICalledCounter(MonitorAPIsNum);

class MockMonitoringOne : public MonitoringInterface
{
public:
    void* OnRequestStarted(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request) const override
    {
        EXPECT_STREQ(URI_STRING, request->GetURIString().c_str());
        EXPECT_STREQ("MockAWSClient", serviceName.c_str());
        EXPECT_STREQ("AmazonWebServiceRequestMock", requestName.c_str());
        MonitorOneAPICalledFlag |= 0x1;
        MonitorOneAPICalledCounter[0] ++;
        return reinterpret_cast<void*>(1);
    }


    void OnRequestSucceeded(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request,
        const Aws::Client::HttpResponseOutcome& outcome, const CoreMetricsCollection& metricsFromCore, void* context) const override
    {
        AWS_ASSERT_SUCCESS(outcome);
        ASSERT_STREQ(URI_STRING, request->GetURIString().c_str());
        ASSERT_STREQ(URI_STRING, outcome.GetResult()->GetOriginatingRequest().GetURIString().c_str());
        ASSERT_TRUE(metricsFromCore.httpClientMetrics.size() == 0);
        ASSERT_STREQ("MockAWSClient", serviceName.c_str());
        ASSERT_STREQ("AmazonWebServiceRequestMock", requestName.c_str());
        ASSERT_EQ(1u, reinterpret_cast<size_t>(context));
        MonitorOneAPICalledFlag |= 0x2;
        MonitorOneAPICalledCounter[1] ++;
    }

    void OnRequestFailed(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request,
        const Aws::Client::HttpResponseOutcome& outcome, const CoreMetricsCollection& metricsFromCore, void* context) const override
    {
        ASSERT_FALSE(outcome.IsSuccess());
        ASSERT_STREQ(URI_STRING, request->GetURIString().c_str());
        ASSERT_TRUE(metricsFromCore.httpClientMetrics.size() == 0);
        ASSERT_STREQ("MockAWSClient", serviceName.c_str());
        ASSERT_STREQ("AmazonWebServiceRequestMock", requestName.c_str());
        ASSERT_EQ(1u, reinterpret_cast<size_t>(context));
        MonitorOneAPICalledFlag |= 0x4;
        MonitorOneAPICalledCounter[2] ++;
    }

    void OnRequestRetry(const Aws::String& serviceName, const Aws::String& requestName,
        const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override
    {
        ASSERT_STREQ("MockAWSClient", serviceName.c_str());
        ASSERT_STREQ("AmazonWebServiceRequestMock", requestName.c_str());
        ASSERT_STREQ(URI_STRING, request->GetURIString().c_str());
        ASSERT_EQ(1u, reinterpret_cast<size_t>(context));
        MonitorOneAPICalledFlag |= 0x8;
        MonitorOneAPICalledCounter[3] ++;
    }

    void OnFinish(const Aws::String& serviceName, const Aws::String& requestName,
        const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override
    {
        ASSERT_STREQ("MockAWSClient", serviceName.c_str());
        ASSERT_STREQ("AmazonWebServiceRequestMock", requestName.c_str());
        ASSERT_STREQ(URI_STRING, request->GetURIString().c_str());
        ASSERT_EQ(1u, reinterpret_cast<size_t>(context));
        MonitorOneAPICalledFlag |= 0x10;
        MonitorOneAPICalledCounter[4] ++;
    }
};

class MockMonitoringFactoryOne : public MonitoringFactory
{
public:
    Aws::UniquePtr<MonitoringInterface> CreateMonitoringInstance() const override
    {
        return Aws::MakeUnique<MockMonitoringOne>(ALLOCATION_TAG);
    }
};

Aws::UniquePtr<MonitoringFactory> CreateMonitoringFactoryOne()
{
    return Aws::MakeUnique<MockMonitoringFactoryOne>(ALLOCATION_TAG);
}

class MockMonitoringTwo : public MonitoringInterface
{
public:
    void* OnRequestStarted(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request) const override
    {
        EXPECT_STREQ("MockAWSClient", serviceName.c_str());
        EXPECT_STREQ("AmazonWebServiceRequestMock", requestName.c_str());
        EXPECT_STREQ(URI_STRING, request->GetURIString().c_str());
        MonitorTwoAPICalledFlag |= 0x1;
        MonitorTwoAPICalledCounter[0] ++;
        return reinterpret_cast<void*>(2);
    }


    void OnRequestSucceeded(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request,
        const Aws::Client::HttpResponseOutcome& outcome, const CoreMetricsCollection& metricsFromCore, void* context) const override
    {
        AWS_ASSERT_SUCCESS(outcome);
        ASSERT_STREQ(URI_STRING, request->GetURIString().c_str());
        ASSERT_STREQ(URI_STRING, outcome.GetResult()->GetOriginatingRequest().GetURIString().c_str());
        ASSERT_TRUE(metricsFromCore.httpClientMetrics.size() == 0);
        ASSERT_STREQ("MockAWSClient", serviceName.c_str());
        ASSERT_STREQ("AmazonWebServiceRequestMock", requestName.c_str());
        ASSERT_EQ(2u, reinterpret_cast<size_t>(context));
        MonitorTwoAPICalledCounter[1] ++;
        MonitorTwoAPICalledFlag |= 0x2;
    }

    void OnRequestFailed(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request,
        const Aws::Client::HttpResponseOutcome& outcome, const CoreMetricsCollection& metricsFromCore, void* context) const override
    {
        ASSERT_FALSE(outcome.IsSuccess());
        ASSERT_TRUE(metricsFromCore.httpClientMetrics.size() == 0);
        ASSERT_STREQ("MockAWSClient", serviceName.c_str());
        ASSERT_STREQ("AmazonWebServiceRequestMock", requestName.c_str());
        ASSERT_STREQ(URI_STRING, request->GetURIString().c_str());
        ASSERT_EQ(2u, reinterpret_cast<size_t>(context));
        MonitorTwoAPICalledFlag |= 0x4;
        MonitorTwoAPICalledCounter[2] ++;
    }

    void OnRequestRetry(const Aws::String& serviceName, const Aws::String& requestName,
        const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override
    {
        ASSERT_STREQ("MockAWSClient", serviceName.c_str());
        ASSERT_STREQ("AmazonWebServiceRequestMock", requestName.c_str());
        ASSERT_STREQ(URI_STRING, request->GetURIString().c_str());
        ASSERT_EQ(2u, reinterpret_cast<size_t>(context));
        MonitorTwoAPICalledFlag |= 0x8;
        MonitorTwoAPICalledCounter[3] ++;
    }

    void OnFinish(const Aws::String& serviceName, const Aws::String& requestName,
        const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override
    {
        ASSERT_STREQ("MockAWSClient", serviceName.c_str());
        ASSERT_STREQ("AmazonWebServiceRequestMock", requestName.c_str());
        ASSERT_STREQ(URI_STRING, request->GetURIString().c_str());
        ASSERT_EQ(2u, reinterpret_cast<size_t>(context));
        MonitorTwoAPICalledFlag |= 0x10;
        MonitorTwoAPICalledCounter[4] ++;
    }
};

class MockMonitoringFactoryTwo : public MonitoringFactory
{
public:
    Aws::UniquePtr<MonitoringInterface> CreateMonitoringInstance() const override
    {
        return Aws::MakeUnique<MockMonitoringTwo>(ALLOCATION_TAG);
    }
};

Aws::UniquePtr<MonitoringFactory> CreateMonitoringFactoryTwo()
{
    return Aws::MakeUnique<MockMonitoringFactoryTwo>(ALLOCATION_TAG);
}

class MonitoringTestSuite : public Aws::Testing::AwsCppSdkGTestSuite
{
protected:
    std::shared_ptr<MockHttpClient> mockHttpClient;
    std::shared_ptr<MockHttpClientFactory> mockHttpClientFactory;
    Aws::UniquePtr<MockAWSClient> client;

    void SetUp()
    {
        ClientConfiguration config;
        config.scheme = Scheme::HTTP;
        config.connectTimeoutMs = 30000;
        config.requestTimeoutMs = 30000;
        config.requestCompressionConfig.useRequestCompression = UseRequestCompression::ENABLE;
        config.requestCompressionConfig.requestMinCompressionSizeBytes = 10240;
        auto countedRetryStrategy = Aws::MakeShared<CountedRetryStrategy>(ALLOCATION_TAG);
        config.retryStrategy = std::static_pointer_cast<DefaultRetryStrategy>(countedRetryStrategy);

        mockHttpClient = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
        mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>(ALLOCATION_TAG);
        mockHttpClientFactory->SetClient(mockHttpClient);
        SetHttpClientFactory(mockHttpClientFactory);
        client = Aws::MakeUnique<MockAWSClient>(ALLOCATION_TAG, config);

        Aws::Monitoring::CleanupMonitoring();
        std::vector<MonitoringFactoryCreateFunction> factoryFunctions;
        factoryFunctions.emplace_back(CreateMonitoringFactoryOne);
        factoryFunctions.emplace_back(CreateMonitoringFactoryTwo);
        Aws::Monitoring::InitMonitoring(factoryFunctions);

        MonitorOneAPICalledFlag = 0;
        MonitorTwoAPICalledFlag = 0;
        std::fill(MonitorOneAPICalledCounter.begin(), MonitorOneAPICalledCounter.end(), 0);
        std::fill(MonitorTwoAPICalledCounter.begin(), MonitorTwoAPICalledCounter.end(), 0);
    }

    void TearDown()
    {
        client = nullptr;
        mockHttpClient = nullptr;
        mockHttpClientFactory = nullptr;

        CleanupMonitoring();
        CleanupHttp();
        InitHttp();
        InitMonitoring(std::vector<Aws::Monitoring::MonitoringFactoryCreateFunction>());
    }

    void QueueMockResponse(HttpResponseCode code, const HeaderValueCollection& headers)
    {
        auto httpRequest = CreateHttpRequest(URI(URI_STRING),
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        auto httpResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, httpRequest);
        httpResponse->SetResponseCode(code);
        httpResponse->GetResponseBody() << "";
        for(auto&& header : headers)
        {
            httpResponse->AddHeader(header.first, header.second);
        }
        mockHttpClient->AddResponseToReturn(httpResponse);
    }
};

TEST_F(MonitoringTestSuite, TestMonitoringListenersAreCalledCorrectlyWithRetryAndSucceededRequest)
{
    HeaderValueCollection responseHeaders, requestHeaders;
    responseHeaders.emplace("Date", (Aws::Utils::DateTime::Now() + std::chrono::hours(1)).ToGmtString(Aws::Utils::DateFormat::RFC822)); // server is ahead of us by 1 hour
    AmazonWebServiceRequestMock request;
    requestHeaders.emplace("X-Amz-Date", Aws::Utils::DateTime::Now().ToGmtString(Aws::Utils::DateFormat::ISO_8601));
    request.SetHeaders(requestHeaders);
    // BAD_REQUEST is not retryable, but since this is triggered by clock skew, it's set to mandatory retryable.
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    QueueMockResponse(HttpResponseCode::OK, responseHeaders);
    auto outcome = client->MakeRequest(request);
    AWS_ASSERT_SUCCESS(outcome);
    ASSERT_EQ(1, client->GetRequestAttemptedRetries());
    ASSERT_EQ(0x1F, MonitorOneAPICalledFlag);
    ASSERT_EQ(0x1F, MonitorTwoAPICalledFlag);
    ASSERT_EQ(1, MonitorOneAPICalledCounter[0]); // started 1 time
    ASSERT_EQ(1, MonitorOneAPICalledCounter[1]); // succeeded 1 time
    ASSERT_EQ(1, MonitorOneAPICalledCounter[2]); // failed 1 times
    ASSERT_EQ(1, MonitorOneAPICalledCounter[3]); // retried 1 times
    ASSERT_EQ(1, MonitorOneAPICalledCounter[4]); // finished 1 time
}

TEST_F(MonitoringTestSuite, TestMonitoringListenersAreCalledCorrectlyWithRetryAndFailedRequest)
{
    HeaderValueCollection responseHeaders, requestHeaders;
    responseHeaders.emplace("Date", (Aws::Utils::DateTime::Now() + std::chrono::hours(1)).ToGmtString(Aws::Utils::DateFormat::RFC822)); // server is ahead of us by 1 hour
    AmazonWebServiceRequestMock request;
    requestHeaders.emplace("X-Amz-Date", Aws::Utils::DateTime::Now().ToGmtString(Aws::Utils::DateFormat::ISO_8601));
    request.SetHeaders(requestHeaders);
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    auto outcome = client->MakeRequest(request);
    ASSERT_FALSE(outcome.IsSuccess());
    ASSERT_EQ(1, client->GetRequestAttemptedRetries());
    ASSERT_EQ(0x1D, MonitorOneAPICalledFlag);
    ASSERT_EQ(0x1D, MonitorTwoAPICalledFlag);
    ASSERT_EQ(1, MonitorOneAPICalledCounter[0]); // started 1 time
    ASSERT_EQ(0, MonitorOneAPICalledCounter[1]); // succeeded 0 time
    ASSERT_EQ(2, MonitorOneAPICalledCounter[2]); // failed 2 times
    ASSERT_EQ(1, MonitorOneAPICalledCounter[3]); // retried 1 time
    ASSERT_EQ(1, MonitorOneAPICalledCounter[4]); // finished 1 time
}

TEST_F(MonitoringTestSuite, TestMonitoringListenersAreCalledCorrectlyWithoutRetryAndSucceededRequest)
{
    HeaderValueCollection responseHeaders, requestHeaders;
    responseHeaders.emplace("Date", (Aws::Utils::DateTime::Now() + std::chrono::hours(1)).ToGmtString(Aws::Utils::DateFormat::RFC822)); // server is ahead of us by 1 hour
    AmazonWebServiceRequestMock request;
    requestHeaders.emplace("X-Amz-Date", Aws::Utils::DateTime::Now().ToGmtString(Aws::Utils::DateFormat::ISO_8601));
    request.SetHeaders(requestHeaders);
    QueueMockResponse(HttpResponseCode::OK, responseHeaders);
    auto outcome = client->MakeRequest(request);
    AWS_ASSERT_SUCCESS(outcome);
    ASSERT_EQ(0, client->GetRequestAttemptedRetries());
    ASSERT_EQ(0x13, MonitorOneAPICalledFlag);
    ASSERT_EQ(0x13, MonitorTwoAPICalledFlag);
    ASSERT_EQ(1, MonitorOneAPICalledCounter[0]); // started 1 time
    ASSERT_EQ(1, MonitorOneAPICalledCounter[1]); // succeeded 1 time
    ASSERT_EQ(0, MonitorOneAPICalledCounter[2]); // failed 0 time
    ASSERT_EQ(0, MonitorOneAPICalledCounter[3]); // retried 0 time
    ASSERT_EQ(1, MonitorOneAPICalledCounter[4]); // finished 1 time
}

TEST_F(MonitoringTestSuite, TestHttpClientMetrics)
{
    ASSERT_EQ(HttpClientMetricsType::DestinationIp, GetHttpClientMetricTypeByName("DestinationIp"));
    ASSERT_EQ(HttpClientMetricsType::AcquireConnectionLatency, GetHttpClientMetricTypeByName("AcquireConnectionLatency"));
    ASSERT_EQ(HttpClientMetricsType::ConnectionReused, GetHttpClientMetricTypeByName("ConnectionReused"));
    ASSERT_EQ(HttpClientMetricsType::ConnectLatency, GetHttpClientMetricTypeByName("ConnectLatency"));
    ASSERT_EQ(HttpClientMetricsType::RequestLatency, GetHttpClientMetricTypeByName("RequestLatency"));
    ASSERT_EQ(HttpClientMetricsType::DnsLatency, GetHttpClientMetricTypeByName("DnsLatency"));
    ASSERT_EQ(HttpClientMetricsType::TcpLatency, GetHttpClientMetricTypeByName("TcpLatency"));
    ASSERT_EQ(HttpClientMetricsType::SslLatency, GetHttpClientMetricTypeByName("SslLatency"));
    ASSERT_EQ(HttpClientMetricsType::Unknown, GetHttpClientMetricTypeByName("Unknown"));
    ASSERT_EQ(HttpClientMetricsType::Unknown, GetHttpClientMetricTypeByName("RandomMetricsUnknown"));

    ASSERT_STREQ("DestinationIp", GetHttpClientMetricNameByType(HttpClientMetricsType::DestinationIp).c_str());
    ASSERT_STREQ("AcquireConnectionLatency", GetHttpClientMetricNameByType(HttpClientMetricsType::AcquireConnectionLatency).c_str());
    ASSERT_STREQ("ConnectionReused", GetHttpClientMetricNameByType(HttpClientMetricsType::ConnectionReused).c_str());
    ASSERT_STREQ("ConnectLatency", GetHttpClientMetricNameByType(HttpClientMetricsType::ConnectLatency).c_str());
    ASSERT_STREQ("RequestLatency", GetHttpClientMetricNameByType(HttpClientMetricsType::RequestLatency).c_str());
    ASSERT_STREQ("DnsLatency", GetHttpClientMetricNameByType(HttpClientMetricsType::DnsLatency).c_str());
    ASSERT_STREQ("TcpLatency", GetHttpClientMetricNameByType(HttpClientMetricsType::TcpLatency).c_str());
    ASSERT_STREQ("SslLatency", GetHttpClientMetricNameByType(HttpClientMetricsType::SslLatency).c_str());
    ASSERT_STREQ("Unknown", GetHttpClientMetricNameByType(HttpClientMetricsType::Unknown).c_str());
}

TEST_F(MonitoringTestSuite, TestUserAgentCompressionTracking)
{
  std::cout << "=== Starting compression test ===" << std::endl;
  HeaderValueCollection responseHeaders;
  AmazonWebServiceRequestMock request;

  // Create large request body to trigger compression
  std::string largeBody(20000, 'A');
  std::cout << "Created body with size: " << largeBody.size() << " bytes" << std::endl;
  auto bodyStream = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
  *bodyStream << largeBody;
  request.SetBody(bodyStream);

  QueueMockResponse(HttpResponseCode::OK, responseHeaders);
  const auto outcome = client->MakeRequest(request);
  AWS_ASSERT_SUCCESS(outcome);

  const auto requestSeen = mockHttpClient->GetMostRecentHttpRequest();
  EXPECT_TRUE(requestSeen.HasUserAgent());
  const auto& userAgent = requestSeen.GetUserAgent();
  EXPECT_TRUE(!userAgent.empty());
  
  std::cout << "User Agent: " << userAgent << std::endl;
  
  // Check if Content-Encoding header was set
  if (requestSeen.HasHeader("Content-Encoding")) {
    std::cout << "Content-Encoding: " << requestSeen.GetHeaderValue("Content-Encoding") << std::endl;
  } else {
    std::cout << "No Content-Encoding header found" << std::endl;
  }
  
  const auto userAgentParsed = Aws::Utils::StringUtils::Split(userAgent, ' ');
  std::cout << "User agent parts: ";
  for (const auto& part : userAgentParsed) {
    std::cout << "[" << part << "] ";
  }
  std::cout << std::endl;

  // Check for gzip compression business metric (L) in user agent
  auto businessMetrics = std::find_if(userAgentParsed.begin(), userAgentParsed.end(),
      [](const Aws::String& value) { return value.find("m/") != Aws::String::npos && value.find("L") != Aws::String::npos; });
  
  if (businessMetrics != userAgentParsed.end()) {
    std::cout << "Found business metrics: " << *businessMetrics << std::endl;
  } else {
    std::cout << "Business metrics with 'L' not found" << std::endl;
  }
  
  EXPECT_TRUE(businessMetrics != userAgentParsed.end());
}

