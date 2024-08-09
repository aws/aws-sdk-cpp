/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>


#include <aws/core/client/ClientConfiguration.h>

#include "aws/core/endpoint/EndpointProviderBase.h"
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <smithy/client/AwsSmithyClientAsyncRequestContext.h>
#include <smithy/identity/auth/AuthSchemeOption.h>


class SmithyClientTest : public Aws::Testing::AwsCppSdkGTestSuite {
};

class MyTestEndpointProvider : public Aws::Endpoint::EndpointProviderBase<>
{
};
using MySmithyClientConfig = Aws::Client::ClientConfiguration;
using MyServiceAuthSchemeResolver = smithy::SigV4AuthSchemeResolver<>;
static constexpr char MyServiceName[] = "MySuperService";
using MySmithyClient = smithy::client::AwsSmithyClientT<MyServiceName,
                                                        MySmithyClientConfig,
                                                        MyServiceAuthSchemeResolver,
                                                        Aws::Crt::Variant<smithy::SigV4AuthScheme>,
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
            const Aws::UnorderedMap<Aws::String, Aws::Crt::Variant<smithy::SigV4AuthScheme>>& authSchemesMap):
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



TEST_F(SmithyClientTest, TestCompiles) {

    const char ALLOCATION_TAG[] = "SmithyClientTest";



    Aws::Client::ClientConfiguration clientConfig;
    std::shared_ptr<Aws::Http::HttpClient> httpClient = Aws::Http::CreateHttpClient(clientConfig);
    std::shared_ptr<Aws::Client::AWSErrorMarshaller> errorMarshaller = Aws::MakeShared<Aws::Client::XmlErrorMarshaller>(ALLOCATION_TAG);
    std::shared_ptr<MyTestEndpointProvider> endPointProvider;

    std::shared_ptr<MyServiceAuthSchemeResolver> authSchemeResolver = Aws::MakeShared<MyServiceAuthSchemeResolver>(ALLOCATION_TAG);


    Aws::UnorderedMap<Aws::String, Aws::Crt::Variant<smithy::SigV4AuthScheme>> authSchemesMap;

    smithy::SigV4AuthScheme::SigV4AuthSchemeParameters params;
    params.serviceName = "MyService";
    params.region = "us-west2";

    
    Aws::String key{"aws.auth#sigv4"};

    using MyTestVariant = Aws::Crt::Variant<smithy::SigV4AuthScheme>;
    MyTestVariant val{smithy::SigV4AuthScheme(params)};
    
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

    AWS_UNREFERENCED_PARAM(ptr);
    
    
}
