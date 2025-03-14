/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/auth/AWSBearerToken.h>
#include <aws/core/auth/bearer-token-provider/AWSBearerTokenProviderBase.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/EndpointProviderBase.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/client/AwsSmithyClientAsyncRequestContext.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <smithy/identity/auth/AuthSchemeOption.h>
#include <smithy/identity/auth/built-in/BearerTokenAuthScheme.h>
#include <smithy/identity/auth/built-in/BearerTokenAuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4aAuthScheme.h>
#include <smithy/identity/auth/built-in/SigV4aAuthSchemeResolver.h>
#include <smithy/identity/resolver/AwsBearerTokenIdentityResolver.h>

namespace {
  const char* ALLOC_TAG = "SmithyClientTest";
}

struct TestEndPointProvider : public Aws::Endpoint::EndpointProviderBase<>
{
public:
  void InitBuiltInParameters(const Aws::Client::GenericClientConfiguration& config) override { AWS_UNREFERENCED_PARAM(config); }

  void OverrideEndpoint(const Aws::String& endpoint) override { AWS_UNREFERENCED_PARAM(endpoint); }

  ClientContextParameters& AccessClientContextParameters() override { return m_clientContext; }

  const ClientContextParameters& GetClientContextParameters() const override { return m_clientContext; }

  Aws::Endpoint::ResolveEndpointOutcome ResolveEndpoint(const Aws::Endpoint::EndpointParameters& endpointParameters) const override {
    AWS_UNREFERENCED_PARAM(endpointParameters);
    return Aws::Endpoint::AWSEndpoint{};
  }

  ~TestEndPointProvider() override = default;
private:
  ClientContextParameters m_clientContext;
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
        endPointProvider = Aws::MakeShared<TestEndPointProvider>(ALLOCATION_TAG);

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
                "ServiceUserAgentName",
                httpClient,
                errorMarshaller,
                endpointProvider,
                authSchemeResolver,
                authSchemesMap)
    {}


    SelectAuthSchemeOptionOutcome SelectAuthSchemeOption(const smithy::client::AwsSmithyClientAsyncRequestContext& ctx) const override {
      return MySmithyClient::SelectAuthSchemeOption(ctx);
    }

    IdentityOutcome ResolveIdentity(const smithy::client::AwsSmithyClientAsyncRequestContext& ctx) const override {
      AWS_UNREFERENCED_PARAM(ctx);
      if (Aws::String{ctx.m_authSchemeOption.schemeId} == "smithy.api#HTTPBearerAuth") {
        auto bearerIdentity = Aws::MakeShared<smithy::AwsBearerTokenIdentity>(ALLOC_TAG);
        bearerIdentity->token() = "testBearerToken";
        return IdentityOutcome{bearerIdentity};
      }
      return IdentityOutcome{Aws::MakeShared<smithy::AwsCredentialIdentity>(ALLOC_TAG,
        "dummyAccessId",
        "secret_key",
        Aws::Crt::Optional<Aws::String>{"session_token"},
        Aws::Crt::Optional<Aws::Utils::DateTime>{std::numeric_limits<int64_t>::max()},
        Aws::Crt::Optional<Aws::String>{"123456789012"})};
    }

    GetContextEndpointParametersOutcome GetContextEndpointParameters(const smithy::client::AwsSmithyClientAsyncRequestContext& ctx) const override {
        AWS_UNREFERENCED_PARAM(ctx);
        return Aws::Vector<Aws::Endpoint::EndpointParameter>{};
    }

   public:
    SigningOutcome SignRequest(std::shared_ptr<HttpRequest> httpRequest, const smithy::client::AwsSmithyClientAsyncRequestContext& ctx) const
    {
        return MySmithyClient::SignHttpRequest(httpRequest, ctx);
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
    EXPECT_EQ(res.GetResult().schemeId, key);
    ctx.m_authSchemeOption = res.GetResultWithOwnership();
    ctx.m_awsIdentity = ptr->ResolveIdentity(ctx).GetResultWithOwnership();

    Aws::String uri{"https://treasureisland-cb93079d-24a0-4862-8es2-88456ead.xyz.amazonaws.com"};

    std::shared_ptr<Aws::Http::HttpRequest> httpRequest(Aws::Http::CreateHttpRequest(uri, Aws::Http::HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod));

    auto res2 = ptr->SignRequest(httpRequest, ctx);

    EXPECT_EQ(res2.IsSuccess(), true);
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
    EXPECT_EQ(res.GetResult().schemeId, key);
    ctx.m_authSchemeOption = res.GetResultWithOwnership();
    ctx.m_awsIdentity = ptr->ResolveIdentity(ctx).GetResultWithOwnership();

    Aws::String uri{"https://treasureisland-cb93079d-24a0-4862-8es2-88456ead.xyz.amazonaws.com"};

    std::shared_ptr<Aws::Http::HttpRequest> httpRequest(Aws::Http::CreateHttpRequest(uri, Aws::Http::HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod));

    auto res2 = ptr->SignRequest(httpRequest, ctx);

    EXPECT_EQ(res2.IsSuccess(), true);
    EXPECT_TRUE(!res2.GetResult()->GetSigningAccessKey().empty());
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
    EXPECT_EQ(res.GetResult().schemeId, key);
    ctx.m_authSchemeOption = res.GetResultWithOwnership();
    ctx.m_awsIdentity = ptr->ResolveIdentity(ctx).GetResultWithOwnership();

    Aws::String uri{
        "https://"
        "treasureisland-cb93079d-24a0-4862-8es2-88456ead.xyz.amazonaws.com"};

    std::shared_ptr<Aws::Http::HttpRequest> httpRequest(
        Aws::Http::CreateHttpRequest(
            uri, Aws::Http::HttpMethod::HTTP_GET,
            Aws::Utils::Stream::DefaultResponseStreamFactoryMethod));

    auto res2 = ptr->SignRequest(httpRequest, ctx);

    EXPECT_EQ(res2.IsSuccess(), true);

    EXPECT_TRUE(!res2.GetResult()->GetHeaderValue("authorization").empty());
    EXPECT_EQ(res2.GetResult()->GetHeaderValue("authorization"),
              "Bearer testBearerToken");
}

struct SampleConfiguration: public Aws::Client::ClientConfiguration {
  Aws::String localToService{"whatever"};
};

struct SampleConfigurationAuthSchemeOption {
  static smithy::AuthSchemeOption schemeOption;
};

struct SampleEndpointProvider : public Aws::Endpoint::EndpointProviderBase<>
{
public:
  void InitBuiltInParameters(const Aws::Client::GenericClientConfiguration& config) override { AWS_UNREFERENCED_PARAM(config); }

  void OverrideEndpoint(const Aws::String& endpoint) override { AWS_UNREFERENCED_PARAM(endpoint); }

  ClientContextParameters& AccessClientContextParameters() override { return m_clientContext; }

  const ClientContextParameters& GetClientContextParameters() const override { return m_clientContext; }

  Aws::Endpoint::ResolveEndpointOutcome ResolveEndpoint(const Aws::Endpoint::EndpointParameters& endpointParameters) const override {
    AWS_UNREFERENCED_PARAM(endpointParameters);
    return Aws::Endpoint::AWSEndpoint{};
  }

  ~SampleEndpointProvider() override = default;
private:
  ClientContextParameters m_clientContext;
};

static constexpr char SampleServiceName[] = "SampleService";
class SampleClient: public smithy::client::AwsSmithyClientT<SampleServiceName,
  SampleConfiguration,
  smithy::SigV4AuthSchemeResolver<>,
  Aws::Crt::Variant<smithy::SigV4aAuthScheme>,
  SampleEndpointProvider,
  smithy::client::JsonOutcomeSerializer,
  smithy::client::JsonOutcome,
  Aws::Client::JsonErrorMarshaller>
{
public:
  SampleClient(): AwsSmithyClientT(SampleConfiguration{},
    SampleServiceName,
    "SampleServiceUserAgentName",
    Aws::MakeShared<MockHttpClient>(SampleServiceName),
    Aws::MakeShared<Aws::Client::JsonErrorMarshaller>(SampleServiceName),
    Aws::MakeShared<SampleEndpointProvider>(SampleServiceName),
    Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(SampleServiceName),
    Aws::UnorderedMap<Aws::String, Aws::Crt::Variant<smithy::SigV4aAuthScheme>>())
  {}
};

TEST_F(SmithyClientTest, SmithyClientShouldCopyAssignAndMove) {
  SampleClient client{};
  SampleClient copy{client};
  AWS_UNREFERENCED_PARAM(copy);
  SampleClient assign = client;
  AWS_UNREFERENCED_PARAM(assign);
  SampleClient move{client};
  AWS_UNREFERENCED_PARAM(copy);
  SampleClient moveAssign = std::move(client);
  AWS_UNREFERENCED_PARAM(assign);
}

class TestAuthSchemeResolver : public smithy::SigV4AuthSchemeResolver<>
{
public:
  virtual Aws::String GetTestId() const { return "BaseClass"; }
};

class TestAuthSchemeResolverDerived : public TestAuthSchemeResolver
{
public:
   TestAuthSchemeResolverDerived(const Aws::String& id):m_testId{id}{}
   Aws::String GetTestId() const override { return m_testId; }
protected:
   Aws::String m_testId;
};

using TestSmithyClientT = smithy::client::AwsSmithyClientT<MyServiceName,
                                                        MySmithyClientConfig,
                                                        TestAuthSchemeResolver,
                                                        SigVariant,
                                                        TestEndPointProvider,
                                                        MockDeserializer,
                                                        Aws::String,
                                                        Aws::Client::XmlErrorMarshaller>;

class TestCopyClient : public TestSmithyClientT
{
    public:
    TestCopyClient(const MySmithyClientConfig& clientConfig,
            const Aws::String& serviceName,
            const std::shared_ptr<Aws::Http::HttpClient>& httpClient,
            const std::shared_ptr<Aws::Client::AWSErrorMarshaller>& errorMarshaller,
            const std::shared_ptr<TestEndPointProvider> endpointProvider,
            const std::shared_ptr<TestAuthSchemeResolver>& authSchemeResolver,
            const Aws::UnorderedMap<Aws::String, SigVariant>& authSchemesMap):
            TestSmithyClientT(
                clientConfig,
                serviceName,
                "ServiceUserAgentName",
                httpClient,
                errorMarshaller,
                endpointProvider,
                authSchemeResolver,
                authSchemesMap)
    {}

    TestCopyClient(const TestCopyClient& other)
      : TestSmithyClientT(other)
    {
    }
    TestCopyClient(TestCopyClient&& other)
      : TestSmithyClientT(std::move(other))
    {
    }

    template<class ... Args>
    TestCopyClient& operator=(Args&& ... args)
    {
      TestSmithyClientT::operator=(std::forward<Args>(args)...);
      return *this;
    }

    std::shared_ptr<TestAuthSchemeResolver> AuthSchemeResolver()
    {
        return m_authSchemeResolver;
    }

    const Aws::String TestGetServiceClientName() const {
      return GetServiceClientName();
    }
};

TEST_F(SmithyClientTest, TestCopyMove) {
  //derived
  std::shared_ptr<TestAuthSchemeResolver> authSchemeResolver = Aws::MakeShared<TestAuthSchemeResolverDerived >(ALLOCATION_TAG,"DerivedClass");
  //base
  std::shared_ptr<TestAuthSchemeResolver> authSchemeResolver2 = Aws::MakeShared<TestAuthSchemeResolver >(ALLOCATION_TAG);

  Aws::UnorderedMap<Aws::String, SigVariant> authSchemesMap;

  Aws::String key{"aws.auth#sigv4"};

  //add mock credentials provider for the test to the credentials provider chain
  AddCredentialsProvider(Aws::MakeShared<TestCredentialsProvider>("TestCredentialsProviderChain"));

  //create resolver with the credentials provider chain
  auto credentialsResolver = Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG, credsProviderChain);

  SigVariant val{smithy::SigV4AuthScheme( credentialsResolver, "MyService", "us-west-2")};

  authSchemesMap.emplace(key, val);

  // test copy c-tor
  {
    TestCopyClient toCopy = TestCopyClient(
        clientConfig,
        "MyServiceCtorCopied",
        httpClient,
        errorMarshaller,
        endPointProvider,
        authSchemeResolver,
        authSchemesMap);

      TestCopyClient ctorCopied(toCopy);
      EXPECT_EQ(ctorCopied.TestGetServiceClientName(), "MyServiceCtorCopied");
  }

  // test copy assign aka operator(const &)
  {
    TestCopyClient source = TestCopyClient(
        clientConfig,
        "MyServiceSource",
        httpClient,
        errorMarshaller,
        endPointProvider,
        authSchemeResolver,
        authSchemesMap);

    TestCopyClient destination = TestCopyClient(
        clientConfig,
        "MyServiceDestination",
        httpClient,
        errorMarshaller,
        endPointProvider,
        authSchemeResolver2,
        authSchemesMap);

    destination = source;
    EXPECT_EQ(destination.AuthSchemeResolver()->GetTestId(), "DerivedClass");
    EXPECT_EQ(destination.TestGetServiceClientName(), "MyServiceSource");
  }

  // test move c-tor
  {
    TestCopyClient toMove = TestCopyClient(
        clientConfig,
        "MyServiceCtorMoved",
        httpClient,
        errorMarshaller,
        endPointProvider,
        authSchemeResolver,
        authSchemesMap);

      TestCopyClient ctorMoved(std::move(toMove));
      EXPECT_EQ(ctorMoved.TestGetServiceClientName(), "MyServiceCtorMoved");
  }

  // test move assign aka operator=(&&)
  {
    TestCopyClient toMoveAssign = TestCopyClient(
        clientConfig,
        "MyServiceMoveAssigned",
        httpClient,
        errorMarshaller,
        endPointProvider,
        authSchemeResolver,
        authSchemesMap);

    TestCopyClient moveDestination = TestCopyClient(
        clientConfig,
        "MyServiceMoveDestination",
        httpClient,
        errorMarshaller,
        endPointProvider,
        authSchemeResolver2,
        authSchemesMap);

    moveDestination = std::move(toMoveAssign);
    EXPECT_EQ(moveDestination.TestGetServiceClientName(), "MyServiceMoveAssigned");
  }
}