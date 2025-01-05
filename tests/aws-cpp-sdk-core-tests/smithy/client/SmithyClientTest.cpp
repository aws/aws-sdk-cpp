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

#include <smithy/identity/auth/built-in/BearerTokenAuthScheme.h>
#include <smithy/identity/auth/built-in/BearerTokenAuthSchemeResolver.h>
#include <smithy/identity/resolver/AwsBearerTokenIdentityResolver.h>

#include <aws/core/endpoint/EndpointProviderBase.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpRequest.h>
#include <smithy/client/AwsSmithyClientAsyncRequestContext.h>
#include <smithy/identity/auth/AuthSchemeOption.h>
#include <aws/testing/mocks/http/MockHttpClient.h>

#include <aws/core/auth/AWSBearerToken.h>
#include <aws/core/auth/bearer-token-provider/AWSBearerTokenProviderBase.h>

static const char ALLOC_TAG[] = "SmithyClientTest";

class TestEndPointProvider : public Aws::Endpoint::EndpointProviderBase<>
{
};


class TestCredentialsProvider : public Aws::Auth::AWSCredentialsProvider{
    public:
    Aws::Auth::AWSCredentials GetAWSCredentials() override
    {
        return Aws::Auth::AWSCredentials {"dummyAccessId", "dummySecretKey","dummySessionToken"};
    }
};



//Goal is to add a mock credential provider which will get hit
class TestCredentialsProviderChain: public Aws::Auth::AWSCredentialsProviderChain{
    public:
    friend class SmithyClientTest;
    TestCredentialsProviderChain(): AWSCredentialsProviderChain()
    {
        //AddProvider(Aws::MakeShared<TestCredentialsProvider>("TestCredentialsProviderChain"));
    }
};

class MockDeserializer
{
public:
  MockDeserializer(std::shared_ptr<smithy::components::tracing::TelemetryProvider> noop) {
    AWS_UNREFERENCED_PARAM(noop);
  }

  Aws::String Deserialize(Aws::Client::HttpResponseOutcome&& httpOutcome,
                          const Aws::String& serviceName,
                          const Aws::String& requestName)
    {
        AWS_UNREFERENCED_PARAM(httpOutcome);
        AWS_UNREFERENCED_PARAM(serviceName);
        AWS_UNREFERENCED_PARAM(requestName);
        if (m_responseQueue.empty())
        {
            return {};
        }
        const auto response = m_responseQueue.front();
        m_responseQueue.pop();
        return response;
    }

    void PushResponse(Aws::String&& response)
    {
        m_responseQueue.emplace(std::move(response));
    }

private:
    std::queue<Aws::String> m_responseQueue{};
};

class SmithyClientTest : public Aws::Testing::AwsCppSdkGTestSuite {
    

    protected:
    static const char ALLOCATION_TAG[];
    Aws::Client::ClientConfiguration clientConfig;
    std::shared_ptr<Aws::Http::HttpClient> httpClient;
    std::shared_ptr<Aws::Client::AWSErrorMarshaller> errorMarshaller;
    std::shared_ptr<TestEndPointProvider> endPointProvider;
    std::shared_ptr<TestCredentialsProviderChain> credsProviderChain;
    public:
    void SetUp() override{
        httpClient = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
        errorMarshaller = Aws::MakeShared<Aws::Client::XmlErrorMarshaller>(ALLOCATION_TAG);
        credsProviderChain = Aws::MakeShared<TestCredentialsProviderChain>(ALLOCATION_TAG);

        //add mock credentials provider for the test to the credentials provider chain
        AddCredentialsProvider(Aws::MakeShared<TestCredentialsProvider>("TestCredentialsProviderChain"));

    }

    void AddCredentialsProvider(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& provider)
    {
        credsProviderChain->AddProvider(provider);
    }
    
};

//====================bearer token ===============================
class TestSSOBearerTokenProvider : public Aws::Auth::AWSBearerTokenProviderBase
{
  public:
    Aws::Auth::AWSBearerToken GetAWSBearerToken() override
    {
        return Aws::Auth::AWSBearerToken{"testBearerToken",
                                         Aws::Utils::DateTime::Now() +
                                             std::chrono::milliseconds{100000}};
    }
};

class TestAwsBearerTokenIdentityResolver
    : public smithy::DefaultAwsBearerTokenIdentityResolver
{
  public:
    TestAwsBearerTokenIdentityResolver()
        : smithy::DefaultAwsBearerTokenIdentityResolver()
    {
        m_providerChainLegacy.insert(
            m_providerChainLegacy.begin(),
            Aws::MakeShared<TestSSOBearerTokenProvider>(ALLOC_TAG));
    }
};
//===============================================================
const char SmithyClientTest::ALLOCATION_TAG[] = "SmithyClientTest";



using MySmithyClientConfig = Aws::Client::ClientConfiguration;
using MyServiceAuthSchemeResolver = smithy::AuthSchemeResolverBase<smithy::DefaultAuthSchemeResolverParameters>; //smithy::SigV4AuthSchemeResolver<>; 
static constexpr char MyServiceName[] = "MySuperService";
using SigVariant =
    Aws::Crt::Variant<smithy::SigV4AuthScheme, smithy::SigV4aAuthScheme,
                      smithy::BearerTokenAuthScheme>;
using MySmithyClient = smithy::client::AwsSmithyClientT<MyServiceName,
                                                        MySmithyClientConfig,
                                                        MyServiceAuthSchemeResolver,
                                                        SigVariant,
                                                        TestEndPointProvider,
                                                        MockDeserializer,
                                                        Aws::String,
                                                        Aws::Client::XmlErrorMarshaller>;

class TestClient : public MySmithyClient
{
    public:
    TestClient(const MySmithyClientConfig& clientConfig,
            const Aws::String& serviceName,
            const std::shared_ptr<Aws::Http::HttpClient>& httpClient,
            const std::shared_ptr<Aws::Client::AWSErrorMarshaller>& errorMarshaller,
            const std::shared_ptr<TestEndPointProvider> endpointProvider,
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

    std::shared_ptr<MyServiceAuthSchemeResolver> authSchemeResolver = Aws::MakeShared<smithy::SigV4AuthSchemeResolver<> >(ALLOCATION_TAG);

    Aws::UnorderedMap<Aws::String, SigVariant> authSchemesMap;

    Aws::String key{"aws.auth#sigv4"};  

    //add mock credentials provider for the test to the credentials provider chain
    AddCredentialsProvider(Aws::MakeShared<TestCredentialsProvider>("TestCredentialsProviderChain"));
    
    //create resolver with the credentials provider chain
    auto credentialsResolver = Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG, credsProviderChain);

    SigVariant val{smithy::SigV4AuthScheme( credentialsResolver, "MyService", "us-west-2")};
    
    authSchemesMap.emplace(key, val);

    std::shared_ptr<TestClient> ptr = Aws::MakeShared<TestClient>(
        ALLOCATION_TAG,
        clientConfig,
        "MyService",
        httpClient,
        errorMarshaller,
        endPointProvider,
        authSchemeResolver,
        authSchemesMap);
    smithy::client::AwsSmithyClientAsyncRequestContext ctx;
    ctx.m_pRequest = nullptr;

    auto res = ptr->SelectAuthSchemeOption(ctx);

    EXPECT_EQ(res.IsSuccess(), true);
    std::cout<<"selected scheme id="<<res.GetResult().schemeId<<std::endl;
    EXPECT_EQ(res.GetResult().schemeId, key);

    Aws::String uri{"https://treasureisland-cb93079d-24a0-4862-8es2-88456ead.xyz.amazonaws.com"};

    std::shared_ptr<Aws::Http::HttpRequest> httpRequest(Aws::Http::CreateHttpRequest(uri, Aws::Http::HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod));

    auto res2 = ptr->SignRequest(httpRequest, res.GetResult());

    EXPECT_EQ(res2.IsSuccess(), true);
    
    std::cout<<"Final auth="<<res2.GetResult()->GetAwsAuthorization()<<std::endl;

    EXPECT_EQ(res2.GetResult()->GetSigningAccessKey(), "dummyAccessId");


}


TEST_F(SmithyClientTest, testSigV4a) {

    std::shared_ptr<MyServiceAuthSchemeResolver> authSchemeResolver = Aws::MakeShared<smithy::SigV4aAuthSchemeResolver<>>(ALLOCATION_TAG);

    Aws::UnorderedMap<Aws::String, SigVariant> authSchemesMap;

    smithy::SigV4aAuthScheme::SigV4aAuthSchemeParameters params;
    params.serviceName = "MyService";
    params.region = "us-west2";
    params.operation = "TestOperation2";

    Aws::String key{"aws.auth#sigv4a"};
    auto credentialsResolver = Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG, credsProviderChain);

    SigVariant val{smithy::SigV4aAuthScheme(credentialsResolver, "MyService", "us-west-2")};
    
    authSchemesMap.emplace(key, val);

    std::shared_ptr<TestClient> ptr = Aws::MakeShared<TestClient>(
        ALLOCATION_TAG,
        clientConfig,
        "MyAuthaService",
        httpClient,
        errorMarshaller,
        endPointProvider,
        authSchemeResolver,
        authSchemesMap);
    smithy::client::AwsSmithyClientAsyncRequestContext ctx;
    ctx.m_pRequest = nullptr;

    auto res = ptr->SelectAuthSchemeOption(ctx);

    EXPECT_EQ(res.IsSuccess(), true);

    std::cout<<"selected scheme id="<<res.GetResult().schemeId<<std::endl;
    EXPECT_EQ(res.GetResult().schemeId, key);

    Aws::String uri{"https://treasureisland-cb93079d-24a0-4862-8es2-88456ead.xyz.amazonaws.com"};

    std::shared_ptr<Aws::Http::HttpRequest> httpRequest(Aws::Http::CreateHttpRequest(uri, Aws::Http::HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod));

    auto res2 = ptr->SignRequest(httpRequest, res.GetResult());

    EXPECT_EQ(res2.IsSuccess(), true);

    EXPECT_TRUE(res2.GetResult()->GetSigningAccessKey().empty());

    EXPECT_FALSE(res2.GetResult()->GetUri().GetURIString(true).empty());

}

TEST_F(SmithyClientTest, bearer)
{

    std::shared_ptr<MyServiceAuthSchemeResolver> authSchemeResolver =
        Aws::MakeShared<smithy::BearerTokenAuthSchemeResolver<>>(
            ALLOCATION_TAG);

    Aws::UnorderedMap<Aws::String, SigVariant> authSchemesMap;

    Aws::String key{
        smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption
            .schemeId};

    std::shared_ptr<smithy::AwsBearerTokenIdentityResolver> resolver =
        Aws::MakeShared<TestAwsBearerTokenIdentityResolver>(ALLOCATION_TAG);

    SigVariant val{
        smithy::BearerTokenAuthScheme(resolver, "MyService", "us-west-2")};

    authSchemesMap.emplace(key, val);

    std::shared_ptr<TestClient> ptr = Aws::MakeShared<TestClient>(
        ALLOCATION_TAG, clientConfig, "MyAuthaService", httpClient,
        errorMarshaller, endPointProvider, authSchemeResolver, authSchemesMap);
    smithy::client::AwsSmithyClientAsyncRequestContext ctx;
    ctx.m_pRequest = nullptr;

    auto res = ptr->SelectAuthSchemeOption(ctx);

    EXPECT_EQ(res.IsSuccess(), true);

    std::cout << "selected scheme id=" << res.GetResult().schemeId << std::endl;
    EXPECT_EQ(res.GetResult().schemeId, key);

    Aws::String uri{
        "https://"
        "treasureisland-cb93079d-24a0-4862-8es2-88456ead.xyz.amazonaws.com"};

    std::shared_ptr<Aws::Http::HttpRequest> httpRequest(
        Aws::Http::CreateHttpRequest(
            uri, Aws::Http::HttpMethod::HTTP_GET,
            Aws::Utils::Stream::DefaultResponseStreamFactoryMethod));

    auto res2 = ptr->SignRequest(httpRequest, res.GetResult());

    EXPECT_EQ(res2.IsSuccess(), true);

    EXPECT_TRUE(!res2.GetResult()->GetHeaderValue("authorization").empty());

    std::cout << "header=" << res2.GetResult()->GetHeaderValue("authorization")
              << std::endl;

    EXPECT_EQ(res2.GetResult()->GetHeaderValue("authorization"),
              "Bearer testBearerToken");
}