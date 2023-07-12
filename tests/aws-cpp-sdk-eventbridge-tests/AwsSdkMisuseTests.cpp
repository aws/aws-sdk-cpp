/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/mocks/http/MockHttpClient.h>

#include <aws/core/auth/AWSCredentials.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>

#include <aws/eventbridge/EventBridgeClient.h>
#include <aws/eventbridge/model/PutEventsRequest.h>


static const char* ALLOCATION_TAG = "AwsSdkMisuseTest";

// Using EventBridge test because it already has some unit tests implemented
#if !defined(USE_AWS_MEMORY_MANAGEMENT)
class AwsSdkMisuseTest : public ::testing::Test
#else
class AwsSdkMisuseTest : public Aws::Testing::AwsCppSdkGTestSuite // cannot really run this test with USE_AWS_MEMORY_MANAGEMENT
#endif
{
public:
    void SetUp()
    {
        mockHttpClient = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
        mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>(ALLOCATION_TAG);
        mockHttpClientFactory->SetClient(mockHttpClient);
        SetHttpClientFactory(mockHttpClientFactory);
    }

    void TearDown()
    {
        mockHttpClient->Reset();
        mockHttpClient = nullptr;
        mockHttpClientFactory = nullptr;
        Aws::Http::CleanupHttp();
        Aws::Http::InitHttp();
    }

    std::shared_ptr<MockHttpClient> mockHttpClient;
    std::shared_ptr<MockHttpClientFactory> mockHttpClientFactory;

protected:

};

static Aws::EventBridge::Model::PutEventsRequest buildEventBridgeRequest()
{
    Aws::EventBridge::Model::PutEventsRequest request;
    Aws::EventBridge::Model::PutEventsRequestEntry requestEntry;
    requestEntry.SetTime(Aws::Utils::DateTime::Now());
    requestEntry.SetSource("aws::cpp::sdk");
    requestEntry.SetDetail("{ \"key1\": \"value3\", \"key2\": \"value4\" }");
    requestEntry.SetDetailType("Free-form string");
    requestEntry.SetEventBusName("default");
    request.AddEntries(requestEntry);
    return request;
}

static std::shared_ptr<Aws::Http::Standard::StandardHttpResponse> buildEventBridgeGoodResponse(const Aws::String& eventIdToReply)
{
    const Aws::String goodReply = "{\"Entries\":[{\"EventId\":\"" + eventIdToReply + "\"}],\"FailedEntryCount\":0}";
    std::shared_ptr<Aws::Http::HttpRequest> requestTmp = CreateHttpRequest(Aws::Http::URI("dummy"), Aws::Http::HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    std::shared_ptr<Aws::Http::Standard::StandardHttpResponse> goodResponse =
            Aws::MakeShared<Aws::Http::Standard::StandardHttpResponse>(ALLOCATION_TAG, requestTmp);
    goodResponse->SetResponseCode(Aws::Http::HttpResponseCode::OK);
    goodResponse->GetResponseBody() << goodReply;
    return goodResponse;
}

TEST_F(AwsSdkMisuseTest, MissingCurlyBracesTest)
{
#if defined(USE_AWS_MEMORY_MANAGEMENT)
    GTEST_SKIP() << "API misuse is impossible with custom memory management. Skipping the test.";
#endif
    Aws::SDKOptions options;
    options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Trace;

    Aws::InitAPI(options);
    // legacy design on the SDK explicitly requires an additional scope
    // However, it looks weird and some IDEs suggest to remove them
    // The purpose of this test is to intentionally violate recommended use
    // {
    Aws::Client::ClientConfiguration clientConfig;
    clientConfig.region = "us-east-1";
    Aws::Auth::AWSCredentials mockCreds("accessKey", "secretKey", "sessionToken");

    Aws::EventBridge::EventBridgeClient eventBridgeClient(mockCreds, clientConfig);

    Aws::EventBridge::Model::PutEventsRequest request = buildEventBridgeRequest();
    const Aws::String eventIdToReply = "baadf00d-1234-5678-910a-baadf00dcafe";
    mockHttpClient->AddResponseToReturn(buildEventBridgeGoodResponse(eventIdToReply));

    Aws::EventBridge::Model::PutEventsOutcome outcome = eventBridgeClient.PutEvents(request);
    AWS_ASSERT_SUCCESS(outcome);
    ASSERT_EQ(eventIdToReply, outcome.GetResult().GetEntries()[0].GetEventId());

    // End of commented out scope
    // }
    Aws::ShutdownAPI(options);

    Aws::EventBridge::Model::PutEventsOutcome outcomeAfterShutdown = eventBridgeClient.PutEvents(request);
    ASSERT_FALSE(outcomeAfterShutdown.IsSuccess());
    ASSERT_EQ((Aws::Client::CoreErrors) outcomeAfterShutdown.GetError().GetErrorType(), Aws::Client::CoreErrors::NOT_INITIALIZED);
}

using AwsSdkMisuseTest1 = ::testing::Test;

TEST_F(AwsSdkMisuseTest1, MultipleShutdownTest)
{
    Aws::SDKOptions options;
    options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Trace;

    Aws::InitAPI(options);

    // Shutdown the API.
    Aws::ShutdownAPI(options);
    // Now shut it down a second time. (This call must not crash.)
    Aws::ShutdownAPI(options);
    // And one more time, for good measure.
    Aws::ShutdownAPI(options);
}
