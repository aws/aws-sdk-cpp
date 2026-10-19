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

static const char* ALLOCATION_TAG = "AWSEventBridgeTests";

// These tests support both the AWS JSON 1.1 and the Smithy RPC v2 CBOR wire
// protocols, adapting to whichever one the generated EventBridge client uses.
// All protocol-specific wire details are keyed off the generated client's base
// class at compile time.
//
// When the client speaks Smithy RPC v2 CBOR:
//   - operations are POSTed to /service/AWSEvents/operation/<OperationName>
//     (this request-URI layout is defined by the RPC v2 CBOR protocol itself; the
//     service shape name "AWSEvents" and the path come from the generated client.
//     See https://smithy.io/2.0/additional-specs/protocols/smithy-rpc-v2-cbor.html)
//   - request/response bodies are CBOR, and content-type/smithy-protocol headers are set
// When the client speaks AWS JSON 1.1:
//   - operations are POSTed to the bare endpoint path ("") and carried via X-Amz-Target
//   - request/response bodies are JSON
static constexpr bool EventBridgeUsesCbor = std::is_base_of<Aws::Client::AWSRpcV2CborClient, Aws::EventBridge::EventBridgeClient>::value;

// Operation path appended to the resolved endpoint. CBOR uses the Smithy RPC v2
// service/operation path; JSON posts to the bare endpoint.
static Aws::String PutEventsOperationPath() { return EventBridgeUsesCbor ? "/service/AWSEvents/operation/PutEvents" : ""; }

/*
 * Unit tests for EventBridge PutEvents multi-regional endpoint support
 */
class EventBridgeTests : public Aws::Testing::AwsCppSdkGTestSuite
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
    body.write(reinterpret_cast<const char*>(encodedData.ptr), encodedData.len);
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

// Asserts the request-body protocol headers that the CBOR client sets. No-op for JSON.
static void assertProtocolHeaders(const Aws::Http::Standard::StandardHttpRequest& requestMade) {
  if (EventBridgeUsesCbor) {
    ASSERT_EQ("application/cbor", requestMade.GetHeaderValue("content-type"));
    ASSERT_EQ("rpc-v2-cbor", requestMade.GetHeaderValue("smithy-protocol"));
  }
}

TEST_F(EventBridgeTests, TestPutEventsBasic)
{
    Aws::Client::ClientConfiguration clientConfig("default", true);
    clientConfig.region = "us-east-1";
    Aws::Auth::AWSCredentials mockCreds("accessKey", "secretKey", "sessionToken");

    Aws::EventBridge::EventBridgeClient eventBridgeClient(mockCreds, clientConfig);

    Aws::EventBridge::Model::PutEventsRequest request = buildEventBridgeRequest();
    const Aws::String eventIdToReply = "baadf00d-1234-5678-910a-baadf00dcafe";
    mockHttpClient->AddResponseToReturn(buildEventBridgeGoodResponse(eventIdToReply));

    //request.SetEndpointId("awscppsdk");
    Aws::EventBridge::Model::PutEventsOutcome outcome = eventBridgeClient.PutEvents(request);
    AWS_ASSERT_SUCCESS(outcome);
    ASSERT_EQ(eventIdToReply, outcome.GetResult().GetEntries()[0].GetEventId());

    auto requestsMade = mockHttpClient->GetAllRequestsMade();
    ASSERT_EQ(1u, requestsMade.size());

    const Aws::Http::Standard::StandardHttpRequest requestMade = requestsMade[0];
    ASSERT_EQ("https://events.us-east-1.amazonaws.com" + PutEventsOperationPath(), requestMade.GetURIString());
    ASSERT_EQ(Aws::Http::Scheme::HTTPS, requestMade.GetUri().GetScheme());
    ASSERT_EQ(clientConfig.region, requestMade.GetSigningRegion());
    assertProtocolHeaders(requestMade);
}

TEST_F(EventBridgeTests, TestPutEventsMultiRegional)
{
    Aws::Client::ClientConfiguration clientConfig("default", true);
    clientConfig.region = "us-east-1";
    Aws::Auth::AWSCredentials mockCreds("accessKey", "secretKey", "sessionToken");

    Aws::EventBridge::EventBridgeClient eventBridgeClient(mockCreds, clientConfig);

    Aws::EventBridge::Model::PutEventsRequest request = buildEventBridgeRequest();
    const Aws::String eventIdToReply = "baadf00d-1234-5678-910a-baadf00dcafe";
    mockHttpClient->AddResponseToReturn(buildEventBridgeGoodResponse(eventIdToReply));

    request.SetEndpointId("awscppsdk");
    Aws::EventBridge::Model::PutEventsOutcome outcome = eventBridgeClient.PutEvents(request);
    AWS_ASSERT_SUCCESS(outcome);
    ASSERT_EQ(eventIdToReply, outcome.GetResult().GetEntries()[0].GetEventId());

    auto requestsMade = mockHttpClient->GetAllRequestsMade();
    ASSERT_EQ(1u, requestsMade.size());

    const Aws::Http::Standard::StandardHttpRequest requestMade = requestsMade[0];
    ASSERT_EQ("https://awscppsdk.endpoint.events.amazonaws.com" + PutEventsOperationPath(), requestMade.GetURIString());
    ASSERT_EQ(Aws::Http::Scheme::HTTPS, requestMade.GetUri().GetScheme());
    ASSERT_NE(clientConfig.region, requestMade.GetSigningRegion());
    ASSERT_EQ("*", requestMade.GetSigningRegion());

    ASSERT_EQ("*", requestMade.GetHeaderValue("x-amz-region-set"));
    ASSERT_EQ("awscppsdk.endpoint.events.amazonaws.com", requestMade.GetHeaderValue("host"));
}

struct EventBridgeEndpointTestCase
{
    const char* clientRegion;
    bool useFipsEndpoint;
    bool useDualStackEndpoint;
    const char* endpointId;

    const char* expectedEndpointId;
    const char* expectedException;
    using ExpectedHeaders = std::vector<std::pair<const char*, const char*>>;
    ExpectedHeaders expectedHeaders;
};

static const std::pair<const char*, const char*> X_AMZ_HEADER = {"x-amz-region-set", "*"};
static const std::vector<EventBridgeEndpointTestCase> TEST_CASES = {
        {"us-east-1", false, false, nullptr, "events.us-east-1.amazonaws.com", nullptr, {}},
        {"us-east-1", false, false, "abc123.456def", "abc123.456def.endpoint.events.amazonaws.com", nullptr, {X_AMZ_HEADER}},
        {"us-east-1", false, false, "badactor.aws?foo=bar", nullptr, "EndpointId must be a valid host label.", {}},
        {"us-east-1", false, false, "", nullptr, "EndpointId must be a valid host label.", {}},
        // Service does not support dualstack
        // {"us-east-1", false, true, nullptr, "events.dualstack.us-east-1.amazonaws.com", nullptr, {}},
        // {"us-east-1", false, true, "abc123.456def","abc123.456def.endpoint.events.amazonaws.com", nullptr, {X_AMZ_HEADER}},
        {"us-east-1", true, false, nullptr, "events-fips.us-east-1.amazonaws.com", nullptr, {}},
        /* TODO: enable commented out tests once FIPS and dualstack endpoint support becomes available in the SDK.
         * CPP SDK does not support proper FIPS endpoint generation & detection
        {"us-east-1", true, false, "abc123.456def", "", "FIPS is not supported with EventBridge multi-region endpoints", {}},
         */
        {"us-east-1", true, true, nullptr, "events-fips.us-east-1.api.aws", nullptr, {}},
        /* CPP SDK does not support proper FIPS endpoint generation & detection
        {"us-east-1", true, true, "abc123.456def", "", "FIPS is not supported with EventBridge multi-region endpoints", {}},
         */
        {"us-iso-east-1", false, false, nullptr, "events.us-iso-east-1.c2s.ic.gov", nullptr, {}},
        {"us-iso-east-1", false, false, "abc123.456def", "abc123.456def.endpoint.events.c2s.ic.gov", nullptr, {X_AMZ_HEADER}},
};

TEST_F(EventBridgeTests, TestPutEventsEndpointTests)
{
    for(size_t tcIdx = 0; tcIdx < TEST_CASES.size(); ++tcIdx)
    {
        const EventBridgeEndpointTestCase& testCase = TEST_CASES[tcIdx];
        Aws::Client::ClientConfiguration clientConfig("default", true);
        clientConfig.region = testCase.clientRegion;
        clientConfig.useDualStack = testCase.useDualStackEndpoint;
        clientConfig.useFIPS = testCase.useFipsEndpoint;

        Aws::Auth::AWSCredentials mockCreds("accessKey", "secretKey", "sessionToken");
        Aws::EventBridge::EventBridgeClient eventBridgeClient(mockCreds, clientConfig);

        Aws::EventBridge::Model::PutEventsRequest request = buildEventBridgeRequest();
        const Aws::String eventIdToReply = "baadf00d-1234-5678-910a-baadf00dcafe";
        mockHttpClient->AddResponseToReturn(buildEventBridgeGoodResponse(eventIdToReply));

        if(testCase.endpointId) {
            request.SetEndpointId(testCase.endpointId);
        }

        Aws::EventBridge::Model::PutEventsOutcome outcome = eventBridgeClient.PutEvents(request);

        if(testCase.expectedException)
        {
            ASSERT_FALSE(outcome.IsSuccess()) << "Expected failure outcome at test case #" << tcIdx;
            ASSERT_TRUE(mockHttpClient->GetAllRequestsMade().empty()) << "Expected no outgoing request at test case #" << tcIdx;;
            ASSERT_EQ(Aws::String(testCase.expectedException), outcome.GetError().GetMessage());
        } else {
            AWS_ASSERT_SUCCESS(outcome) << "; Expected success outcome at test case #" << tcIdx;
            ASSERT_EQ(eventIdToReply, outcome.GetResult().GetEntries()[0].GetEventId());

            auto requestsMade = mockHttpClient->GetAllRequestsMade();
            ASSERT_EQ(1u, requestsMade.size());

            const Aws::Http::Standard::StandardHttpRequest requestMade = requestsMade[0];
            ASSERT_EQ(Aws::String("https://") + testCase.expectedEndpointId + PutEventsOperationPath(), requestMade.GetURIString())
                << "Expected a different URI at test #" << tcIdx;
            ASSERT_EQ(Aws::Http::Scheme::HTTPS, requestMade.GetUri().GetScheme());
            if(testCase.endpointId) {
                ASSERT_NE(Aws::String(clientConfig.region), requestMade.GetSigningRegion());
            } else {
                ASSERT_EQ(Aws::String(clientConfig.region), requestMade.GetSigningRegion());
            }

            for(const auto& expHeader : testCase.expectedHeaders) {
                ASSERT_EQ(Aws::String(expHeader.second), requestMade.GetHeaderValue(expHeader.first));
            }
            ASSERT_EQ(Aws::String(testCase.expectedEndpointId), requestMade.GetHeaderValue("host"));
        }
        mockHttpClient->Reset();
    }
}
