/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/tracing/NoopTelemetryProvider.h>
#include <smithy/client/serializer/XmlOutcomeSerializer.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>

using namespace smithy::client;
using namespace smithy::components::tracing;
using namespace Aws::Http;

class SmithyClientXMLOutcomeSerializerTest : public Aws::Testing::AwsCppSdkGTestSuite
{
protected:
    const char* ALLOCATION_TAG = "JsonOutcomesSerializerTest";
    const char* SERVICE_NAME = "ShinraEmployeeLookupService";
    const char* REQUEST_NAME = "FindEmployee";
    const char* TEST_URI = "http://www.quartersnacks.com";
    XmlOutcomeSerializer m_serializer{NoopTelemetryProvider::CreateProvider()};
};

TEST_F(SmithyClientXMLOutcomeSerializerTest, TestSerializationWorks)
{
    const auto request = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG,
                                                                        TEST_URI,
                                                                        HttpMethod::HTTP_POST);
    request->SetResponseStreamFactory([this]() -> Aws::IOStream* { return Aws::New<Aws::StringStream>(ALLOCATION_TAG); });
    auto response = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, request);
    response->SetResponseCode(HttpResponseCode::OK);
    response->GetResponseBody() << R"(<?xml version="1.0" encoding="UTF-8" ?><root><city>midgar</city><first_name>cloud</first_name><last_name>strife</last_name></root>)";
    HttpResponseOutcome outcome{response};
    const auto value = m_serializer.Deserialize(std::move(outcome),
                                                SERVICE_NAME,
                                                REQUEST_NAME);

    EXPECT_TRUE(value.IsSuccess());
    const auto& result = value.GetResult();
    EXPECT_EQ(HttpResponseCode::OK, result.GetResponseCode());
    EXPECT_TRUE(result.GetPayload().WasParseSuccessful());
    Aws::Map<Aws::String, Aws::String> foundResponses;
    EXPECT_TRUE(result.GetPayload().GetRootElement().HasChildren());
    auto node = result.GetPayload().GetRootElement().FirstChild();
    while (node.HasNextNode())
    {
        foundResponses[node.GetName()] = node.GetText();
        node = node.NextNode();
    }
    foundResponses[node.GetName()] = node.GetText();
    EXPECT_EQ(3ul, foundResponses.size());
    EXPECT_EQ("midgar", foundResponses.at("city"));
    EXPECT_EQ("cloud", foundResponses.at("first_name"));
    EXPECT_EQ("strife", foundResponses.at("last_name"));
}

TEST_F(SmithyClientXMLOutcomeSerializerTest, TestEmptyBodySerializationWorks)
{
    const auto request = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG,
                                                                        TEST_URI,
                                                                        HttpMethod::HTTP_POST);
    request->SetResponseStreamFactory([this]() -> Aws::IOStream* { return Aws::New<Aws::StringStream>(ALLOCATION_TAG); });
    auto response = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, request);
    response->SetResponseCode(HttpResponseCode::OK);
    response->AddHeader("content-type", "application/mako");
    HttpResponseOutcome outcome{response};
    const auto value = m_serializer.Deserialize(std::move(outcome),
                                                SERVICE_NAME,
                                                REQUEST_NAME);

    EXPECT_TRUE(value.IsSuccess());
    const auto& result = value.GetResult();
    EXPECT_EQ(HttpResponseCode::OK, result.GetResponseCode());
    EXPECT_EQ("application/mako", value.GetResult().GetHeaderValueCollection().at("content-type"));
}

TEST_F(SmithyClientXMLOutcomeSerializerTest, CoreErrorShouldSkipSeriliaze)
{
    const auto awsError = AWSError{CoreErrors::RESOURCE_NOT_FOUND,
        "NoSuchEmployeeException",
        "No such employee Barrett",
        false};
    HttpResponseOutcome outcome{awsError};
    const auto value = m_serializer.Deserialize(std::move(outcome),
                                                SERVICE_NAME,
                                                REQUEST_NAME);

    EXPECT_FALSE(value.IsSuccess());
    EXPECT_EQ(CoreErrors::RESOURCE_NOT_FOUND, value.GetError().GetErrorType());
    EXPECT_EQ("NoSuchEmployeeException", value.GetError().GetExceptionName());
    EXPECT_EQ("No such employee Barrett", value.GetError().GetMessage());
}

TEST_F(SmithyClientXMLOutcomeSerializerTest, CoreErrorGracefullyFailBadJson)
{
    const auto request = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG,
                                                                        TEST_URI,
                                                                        HttpMethod::HTTP_POST);
    request->SetResponseStreamFactory([this]() -> Aws::IOStream* { return Aws::New<Aws::StringStream>(ALLOCATION_TAG); });
    auto response = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, request);
    response->SetResponseCode(HttpResponseCode::OK);
    response->GetResponseBody() << R"(what really happened in Nibelheim)";
    HttpResponseOutcome outcome{response};
    const auto value = m_serializer.Deserialize(std::move(outcome),
                                                SERVICE_NAME,
                                                REQUEST_NAME);

    EXPECT_FALSE(value.IsSuccess());
    EXPECT_EQ("Xml Parse Error", value.GetError().GetExceptionName());
    EXPECT_EQ("XML_ERROR_PARSING_TEXT", value.GetError().GetMessage());
}
