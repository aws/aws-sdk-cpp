/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <smithy/interceptor/InterceptorContext.h>
#include <smithy/interceptor/Interceptor.h>

using namespace smithy::interceptor;
using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Http::Standard;
using namespace Aws::Utils;
using namespace Aws::Utils::Stream;
using namespace Aws::Testing;

const char* ALLOCATION_TAG = "SmithyInterceptorTest";

class SmithyInterceptorTest : public AwsCppSdkGTestSuite
{
};

class  MockSuccessInterceptor : public Interceptor
{
public:
    MockSuccessInterceptor() = default;
    ~MockSuccessInterceptor() override = default;

    ModifyRequestOutcome ModifyBeforeSigning(InterceptorContext& context) override
    {
        context.SetAttribute("MockInterceptorRequest", "Called");
        return context.GetTransmitRequest();
    }

    ModifyResponseOutcome ModifyBeforeDeserialization(InterceptorContext& context) override
    {
        context.SetAttribute("MockInterceptorResponse", "Called");
        return context.GetTransmitResponse();
    }
};

class  MockRequestFailureInterceptor : public Interceptor
{
public:
    MockRequestFailureInterceptor() = default;
    ~MockRequestFailureInterceptor() override = default;

    ModifyRequestOutcome ModifyBeforeSigning(InterceptorContext& context) override
    {
        context.SetAttribute("MockInterceptorRequest", "Called");
        return Aws::Client::AWSError<CoreErrors>{
            CoreErrors::VALIDATION,
            "RequestInterceptorException",
            "The request interceptor failed",
            false
        };;
    }

    ModifyResponseOutcome ModifyBeforeDeserialization(InterceptorContext& context) override
    {
        context.SetAttribute("MockInterceptorResponse", "Called");
        return context.GetTransmitResponse();
    }
};

class  MockResponseFailureInterceptor : public Interceptor
{
public:
    MockResponseFailureInterceptor() = default;
    ~MockResponseFailureInterceptor() override = default;

    ModifyRequestOutcome ModifyBeforeSigning(InterceptorContext& context) override
    {
        context.SetAttribute("MockInterceptorRequest", "Called");
        return context.GetTransmitRequest();
    }

    ModifyResponseOutcome ModifyBeforeDeserialization(InterceptorContext& context) override
    {
        context.SetAttribute("MockInterceptorResponse", "Called");
        return Aws::Client::AWSError<CoreErrors>{
            CoreErrors::VALIDATION,
            "ResponseInterceptorException",
            "The response interceptor failed",
            false
        };;
    }
};

class MockInterceptorRequest: public AmazonWebServiceRequest
{
public:
    explicit MockInterceptorRequest(const Aws::String& m_response_body)
        : m_responseBody(m_response_body)
    {
    }

    ~MockInterceptorRequest() override = default;

    std::shared_ptr<Aws::IOStream> GetBody() const override
    {
        return Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG, m_responseBody);
    }

    Aws::Http::HeaderValueCollection GetHeaders() const override
    {
        return {};
    }

    const char* GetServiceRequestName() const override
    {
        return "LeblancCafeService";
    }

private:
    Aws::String m_responseBody;
};

class MockClient
{
public:
    MockClient() = delete;
    MockClient(const MockClient& other) = delete;
    MockClient(MockClient&& other) noexcept = default;
    MockClient& operator=(const MockClient& other) = delete;
    MockClient& operator=(MockClient&& other) noexcept = default;

    static MockClient MakeClient(Aws::UniquePtr<Interceptor> interceptor)
    {
        Vector<UniquePtr<Interceptor>> interceptors;
        interceptors.emplace_back(std::move(interceptor));
        return MockClient{std::move(interceptors)};
    }

    using RequestOutcome = Outcome<std::shared_ptr<HttpResponse>, AWSError<CoreErrors>>;
    RequestOutcome MakeRequest(InterceptorContext& context,
        const std::shared_ptr<HttpRequest>& request) const
    {
        context.SetTransmitRequest(request);
        for (const auto& interceptor: m_interceptors)
        {
            const auto modifiedRequest = interceptor->ModifyBeforeSigning(context);
            if (!modifiedRequest.IsSuccess())
            {
                return modifiedRequest.GetError();
            }
        }
        auto response = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, request);
        context.SetTransmitResponse(response);
        for (const auto& interceptor: m_interceptors)
        {
            const auto modifiedResponse = interceptor->ModifyBeforeDeserialization(context);
            if (!modifiedResponse.IsSuccess())
            {
                return modifiedResponse.GetError();
            }
        }
        return context.GetTransmitResponse();
    }

private:
    explicit MockClient(Vector<UniquePtr<Interceptor>> interceptors)
        : m_interceptors(std::move(interceptors))
    {
    }

    Vector<UniquePtr<Interceptor>> m_interceptors{};
};

TEST_F(SmithyInterceptorTest, MockInterceptorShouldReturnSuccess)
{
    const auto uri = "https://www.villagepsychic.net/";
    auto request = CreateHttpRequest(URI{uri}, HttpMethod::HTTP_GET, DefaultResponseStreamFactoryMethod);
    auto interceptor = Aws::MakeUnique<MockSuccessInterceptor>(ALLOCATION_TAG);
    const auto client = MockClient::MakeClient(std::move(interceptor));
    MockInterceptorRequest modeledRequest{"Take your time"};
    InterceptorContext context{modeledRequest};
    const auto response = client.MakeRequest(context, request);
    EXPECT_TRUE(response.IsSuccess());
    EXPECT_EQ("Called", context.GetAttribute("MockInterceptorRequest"));
    EXPECT_EQ("Called", context.GetAttribute("MockInterceptorResponse"));
}

TEST_F(SmithyInterceptorTest, MockInterceptorShouldReturnFailureRequset)
{
    const auto uri = "https://www.villagepsychic.net/";
    auto request = CreateHttpRequest(URI{uri}, HttpMethod::HTTP_GET, DefaultResponseStreamFactoryMethod);
    auto interceptor = Aws::MakeUnique<MockRequestFailureInterceptor>(ALLOCATION_TAG);
    const auto client = MockClient::MakeClient(std::move(interceptor));
    MockInterceptorRequest modeledRequest{"Take your time"};
    InterceptorContext context{modeledRequest};
    const auto response = client.MakeRequest(context, request);
    EXPECT_FALSE(response.IsSuccess());
    EXPECT_EQ("Called", context.GetAttribute("MockInterceptorRequest"));
}

TEST_F(SmithyInterceptorTest, MockInterceptorShouldReturnFailureReseponse)
{
    const auto uri = "https://www.villagepsychic.net/";
    auto request = CreateHttpRequest(URI{uri}, HttpMethod::HTTP_GET, DefaultResponseStreamFactoryMethod);
    auto interceptor = Aws::MakeUnique<MockResponseFailureInterceptor>(ALLOCATION_TAG);
    const auto client = MockClient::MakeClient(std::move(interceptor));
    MockInterceptorRequest modeledRequest{"Take your time"};
    InterceptorContext context{modeledRequest};
    const auto response = client.MakeRequest(context, request);
    EXPECT_FALSE(response.IsSuccess());
    EXPECT_EQ("Called", context.GetAttribute("MockInterceptorRequest"));
    EXPECT_EQ("Called", context.GetAttribute("MockInterceptorResponse"));
}