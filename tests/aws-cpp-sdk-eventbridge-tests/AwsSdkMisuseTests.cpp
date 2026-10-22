/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSCredentials.h>
#include <aws/core/client/AWSJsonClient.h>
#include <aws/core/client/AWSRpcV2CborClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridge/EventBridgeClient.h>
#include <aws/eventbridge/model/PutEventsRequest.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/mocks/http/MockHttpClient.h>

#include <type_traits>

static const char* ALLOCATION_TAG = "AwsSdkMisuseTest";

// These tests support both the AWS JSON 1.1 and the Smithy RPC v2 CBOR wire
// protocols, adapting to whichever one the generated EventBridge client uses.
// The mocked success response must be encoded in that protocol, otherwise
// deserialization crashes before the test body can run.
static constexpr bool EventBridgeUsesCbor = std::is_base_of<Aws::Client::AWSRpcV2CborClient, Aws::EventBridge::EventBridgeClient>::value;

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

// Encodes a PutEvents response body equivalent to
// { "Entries": [ { "EventId": <eventIdToReply> } ], "FailedEntryCount": 0 }
// in whichever wire protocol the generated EventBridge client uses.
static void writePutEventsResponseBody(Aws::IOStream& body, const Aws::String& eventIdToReply) {
  if (EventBridgeUsesCbor) {
    Aws::Crt::Cbor::CborEncoder encoder;
    encoder.WriteMapStart(2);

    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Entries"));
    encoder.WriteArrayStart(1);
    encoder.WriteMapStart(1);
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EventId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(eventIdToReply.c_str()));

    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FailedEntryCount"));
    encoder.WriteUInt(0);

    auto encodedData = encoder.GetEncodedData();
    body.write(reinterpret_cast<const char*>(encodedData.ptr), static_cast<std::streamsize>(encodedData.len));
  } else {
    body << "{\"Entries\":[{\"EventId\":\"" + eventIdToReply + "\"}],\"FailedEntryCount\":0}";
  }
}

static std::shared_ptr<Aws::Http::Standard::StandardHttpResponse> buildEventBridgeGoodResponse(const Aws::String& eventIdToReply) {
  std::shared_ptr<Aws::Http::HttpRequest> requestTmp =
      CreateHttpRequest(Aws::Http::URI("dummy"), Aws::Http::HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
  std::shared_ptr<Aws::Http::Standard::StandardHttpResponse> goodResponse =
      Aws::MakeShared<Aws::Http::Standard::StandardHttpResponse>(ALLOCATION_TAG, requestTmp);
  goodResponse->SetResponseCode(Aws::Http::HttpResponseCode::OK);
  writePutEventsResponseBody(goodResponse->GetResponseBody(), eventIdToReply);
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
