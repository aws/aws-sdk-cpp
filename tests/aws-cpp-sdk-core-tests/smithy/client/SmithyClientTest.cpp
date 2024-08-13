/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>


#include <smithy/identity/auth/built-in/SigV4aAuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4aAuthScheme.h>
#include <aws/core/client/ClientConfiguration.h>

#include "aws/core/endpoint/EndpointProviderBase.h"
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpRequest.h>
#include <smithy/client/AwsSmithyClientAsyncRequestContext.h>
#include <smithy/identity/auth/AuthSchemeOption.h>


class SmithyClientTest : public Aws::Testing::AwsCppSdkGTestSuite {
};

class MyTestEndpointProvider : public Aws::Endpoint::EndpointProviderBase<>
{
};
using MySmithyClientConfig = Aws::Client::ClientConfiguration;
using MyServiceAuthSchemeResolver = smithy::AuthSchemeResolverBase<smithy::DefaultAuthSchemeResolverParameters>; //smithy::SigV4AuthSchemeResolver<>; 
static constexpr char MyServiceName[] = "MySuperService";
using SigVariant = Aws::Crt::Variant<smithy::SigV4AuthScheme, smithy::SigV4aAuthScheme>;
using MySmithyClient = smithy::client::AwsSmithyClientT<MyServiceName,
                                                        MySmithyClientConfig,
                                                        MyServiceAuthSchemeResolver,
                                                        SigVariant,
                                                        MyTestEndpointProvider>;


class TestClient : public MySmithyClient
{
    public:
    TestClient(const MySmithyClientConfig& clientConfig,
            const Aws::String& serviceName,
            const std::shared_ptr<Aws::Http::HttpClient>& httpClient,
            const std::shared_ptr<Aws::Client::AWSErrorMarshaller>& errorMarshaller,
            const std::shared_ptr<MyTestEndpointProvider> endpointProvider,
            const std::shared_ptr<MyServiceAuthSchemeResolver>& authSchemeResolver,
            const Aws::UnorderedMap<Aws::String, SigVariant>& authSchemesMap):
            MySmithyClient(
                clientConfig,
                serviceName,
                httpClient,
                errorMarshaller,
                endpointProvider,
                authSchemeResolver,
                authSchemesMap)
    {}


    SelectAuthSchemeOptionOutcome SelectAuthSchemeOption(const smithy::client::AwsSmithyClientAsyncRequestContext& ctx) const
    {
        return MySmithyClient::SelectAuthSchemeOption(ctx);
    }

    SigningOutcome SignRequest(std::shared_ptr<HttpRequest> httpRequest, const smithy::AuthSchemeOption& targetAuthSchemeOption) const
    {
        return MySmithyClient::SignRequest(httpRequest, targetAuthSchemeOption);
    }


};



TEST_F(SmithyClientTest, testSigV4) {

    const char ALLOCATION_TAG[] = "SmithyClientTest";

    Aws::Client::ClientConfiguration clientConfig;
    std::shared_ptr<Aws::Http::HttpClient> httpClient = Aws::Http::CreateHttpClient(clientConfig);
    std::shared_ptr<Aws::Client::AWSErrorMarshaller> errorMarshaller = Aws::MakeShared<Aws::Client::XmlErrorMarshaller>(ALLOCATION_TAG);
    std::shared_ptr<MyTestEndpointProvider> endPointProvider;

    std::shared_ptr<MyServiceAuthSchemeResolver> authSchemeResolver = Aws::MakeShared<smithy::SigV4AuthSchemeResolver<> >(ALLOCATION_TAG);


    Aws::UnorderedMap<Aws::String, SigVariant> authSchemesMap;

    smithy::SigV4AuthScheme::SigV4AuthSchemeParameters params;
    params.serviceName = "MyService";
    params.region = "us-west2";
    params.operation = "TestOperation";

    
    Aws::String key{"aws.auth#sigv4"};

    SigVariant val{smithy::SigV4AuthScheme(params)};
    
    authSchemesMap.emplace(key, val);

    std::shared_ptr<TestClient> ptr = Aws::MakeShared<TestClient>(
        ALLOCATION_TAG,
        clientConfig,
        "MyService",
        httpClient,
        errorMarshaller,
        endPointProvider,
        authSchemeResolver,
        authSchemesMap
        );
    smithy::client::AwsSmithyClientAsyncRequestContext ctx;
    ctx.m_pRequest = nullptr;

    auto res = ptr->SelectAuthSchemeOption(ctx);

    EXPECT_EQ(res.IsSuccess(), true);
    std::cout<<"selected scheme id="<<res.GetResult().schemeId<<std::endl;
    EXPECT_EQ(res.GetResult().schemeId, key);

    //for s3 client as an example
    Aws::String uri{"https://objecttest-cb93079d-24a0-4862-8ef2-88dae12cd549.s3.amazonaws.com"};

    std::shared_ptr<Aws::Http::HttpRequest> httpRequest(Aws::Http::CreateHttpRequest(uri, Aws::Http::HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod));

    auto res2 = ptr->SignRequest(httpRequest, res.GetResult());

    EXPECT_EQ(res2.IsSuccess(), true);

}



TEST_F(SmithyClientTest, testSigV4a) {

    const char ALLOCATION_TAG[] = "SmithyClientTest";

    Aws::Client::ClientConfiguration clientConfig;
    std::shared_ptr<Aws::Http::HttpClient> httpClient = Aws::Http::CreateHttpClient(clientConfig);
    std::shared_ptr<Aws::Client::AWSErrorMarshaller> errorMarshaller = Aws::MakeShared<Aws::Client::XmlErrorMarshaller>(ALLOCATION_TAG);
    std::shared_ptr<MyTestEndpointProvider> endPointProvider;

    std::shared_ptr<MyServiceAuthSchemeResolver> authSchemeResolver = Aws::MakeShared<smithy::SigV4aAuthSchemeResolver<>>(ALLOCATION_TAG);

    Aws::UnorderedMap<Aws::String, SigVariant> authSchemesMap;

    smithy::SigV4aAuthScheme::SigV4aAuthSchemeParameters params;
    params.serviceName = "MyService";
    params.region = "us-west2";
    params.operation = "TestOperation2";

    Aws::String key{"aws.auth#sigv4a"};

    SigVariant val{smithy::SigV4aAuthScheme(params)};
    
    authSchemesMap.emplace(key, val);

    std::shared_ptr<TestClient> ptr = Aws::MakeShared<TestClient>(
        ALLOCATION_TAG,
        clientConfig,
        "MyAuthaService",
        httpClient,
        errorMarshaller,
        endPointProvider,
        authSchemeResolver,
        authSchemesMap
        );
    smithy::client::AwsSmithyClientAsyncRequestContext ctx;
    ctx.m_pRequest = nullptr;

    auto res = ptr->SelectAuthSchemeOption(ctx);

    EXPECT_EQ(res.IsSuccess(), true);

    std::cout<<"selected scheme id="<<res.GetResult().schemeId<<std::endl;
    EXPECT_EQ(res.GetResult().schemeId, key);

    //for s3 client as an example
    Aws::String uri{"https://objecttest-cb93079d-24a0-4862-8ef2-88dae12cd549.s3.amazonaws.com"};

    std::shared_ptr<Aws::Http::HttpRequest> httpRequest(Aws::Http::CreateHttpRequest(uri, Aws::Http::HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod));

    auto res2 = ptr->SignRequest(httpRequest, res.GetResult());

    EXPECT_EQ(res2.IsSuccess(), true);

}
