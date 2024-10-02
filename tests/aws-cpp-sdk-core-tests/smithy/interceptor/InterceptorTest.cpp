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

class SmithyInterceptorTest : public AwsCppSdkGTestSuite
{
};

class  MockSuccessInterceptor : public Interceptor
{
public:
    MockSuccessInterceptor() = default;
    ~MockSuccessInterceptor() override = default;

    ModifyRequestOutcome ModifyRequest(InterceptorContext& context) override
    {
        context.SetAttribute("MockInterceptorRequest", "Called");
        return context.GetRequest();
    }

    ModifyResponseOutcome ModifyResponse(InterceptorContext& context) override
    {
        context.SetAttribute("MockInterceptorResponse", "Called");
        return context.GetResponse();
    }
};

class  MockRequestFailureInterceptor : public Interceptor
{
public:
    MockRequestFailureInterceptor() = default;
    ~MockRequestFailureInterceptor() override = default;

    ModifyRequestOutcome ModifyRequest(InterceptorContext& context) override
    {
        context.SetAttribute("MockInterceptorRequest", "Called");
        return Aws::Client::AWSError<CoreErrors>{
            CoreErrors::VALIDATION,
            "RequestInterceptorException",
            "The request interceptor failed",
            false
        };;
    }

    ModifyResponseOutcome ModifyResponse(InterceptorContext& context) override
    {
        context.SetAttribute("MockInterceptorResponse", "Called");
        return context.GetResponse();
    }
};

class  MockResponseFailureInterceptor : public Interceptor
{
public:
    MockResponseFailureInterceptor() = default;
    ~MockResponseFailureInterceptor() override = default;

    ModifyRequestOutcome ModifyRequest(InterceptorContext& context) override
    {
        context.SetAttribute("MockInterceptorRequest", "Called");
        return context.GetRequest();
    }

    ModifyResponseOutcome ModifyResponse(InterceptorContext& context) override
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
    RequestOutcome MakeRequest(const std::shared_ptr<HttpRequest>& request, InterceptorContext& context) const
    {
        context.SetRequest(request);
        for (const auto& interceptor: m_interceptors)
        {
            const auto modifiedRequest = interceptor->ModifyRequest(context);
            if (!modifiedRequest.IsSuccess())
            {
                return modifiedRequest.GetError();
            }
        }
        auto response = Aws::MakeShared<StandardHttpResponse>("SmithyInterceptorTest", request);
        context.SetResponse(response);
        for (const auto& interceptor: m_interceptors)
        {
            const auto modifiedResponse = interceptor->ModifyResponse(context);
            if (!modifiedResponse.IsSuccess())
            {
                return modifiedResponse.GetError();
            }
        }
        return context.GetResponse();
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
    auto interceptor = Aws::MakeUnique<MockSuccessInterceptor>("SmithyInterceptorTest");
    const auto client = MockClient::MakeClient(std::move(interceptor));
    InterceptorContext context{};
    const auto response = client.MakeRequest(request, context);
    EXPECT_TRUE(response.IsSuccess());
    EXPECT_TRUE(context.GetAttribute("MockInterceptorRequest").IsSuccess());
    EXPECT_TRUE(context.GetAttribute("MockInterceptorResponse").IsSuccess());
}

TEST_F(SmithyInterceptorTest, MockInterceptorShouldReturnFailureRequset)
{
    const auto uri = "https://www.villagepsychic.net/";
    auto request = CreateHttpRequest(URI{uri}, HttpMethod::HTTP_GET, DefaultResponseStreamFactoryMethod);
    auto interceptor = Aws::MakeUnique<MockRequestFailureInterceptor>("SmithyInterceptorTest");
    const auto client = MockClient::MakeClient(std::move(interceptor));
    InterceptorContext context{};
    const auto response = client.MakeRequest(request, context);
    EXPECT_FALSE(response.IsSuccess());
    EXPECT_TRUE(context.GetAttribute("MockInterceptorRequest").IsSuccess());
    EXPECT_FALSE(context.GetAttribute("MockInterceptorResponse").IsSuccess());
}

TEST_F(SmithyInterceptorTest, MockInterceptorShouldReturnFailureReseponse)
{
    const auto uri = "https://www.villagepsychic.net/";
    auto request = CreateHttpRequest(URI{uri}, HttpMethod::HTTP_GET, DefaultResponseStreamFactoryMethod);
    auto interceptor = Aws::MakeUnique<MockResponseFailureInterceptor>("SmithyInterceptorTest");
    const auto client = MockClient::MakeClient(std::move(interceptor));
    InterceptorContext context{};
    const auto response = client.MakeRequest(request, context);
    EXPECT_FALSE(response.IsSuccess());
    EXPECT_TRUE(context.GetAttribute("MockInterceptorRequest").IsSuccess());
    EXPECT_TRUE(context.GetAttribute("MockInterceptorResponse").IsSuccess());
}