/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSRpcV2CborClient.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/identity-management/auth/CognitoCachingCredentialsProvider.h>
#include <aws/identity-management/auth/PersistentCognitoIdentityProvider.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <gtest/gtest.h>

#include <fstream>
#include <type_traits>

using namespace Aws::Auth;
using namespace Aws::CognitoIdentity;
using namespace Aws::Utils;
using namespace Aws::Utils::Json;
using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Http::Standard;

static const char* ALLOCATION_TAG = "CognitoCachingCredentialsProviderTest";
static const char* A_HUNDRED_YEARS_FROM_THE_MOMENT_I_WROTE_THIS = "4587757514";
static const char* IDENTITY_1 = "SomeIdentity1";
static const char* ACCESS_KEY_ID_1 = "SomeAccessKeyId1";
static const char* SECRET_KEY_ID_1 = "SomeSecretKeyId1";
static const char* LOGIN_KEY = "LoginOpenIdProvider";
static const char* LOGIN_ID = "OpenIdSample";

// Use the client's base class to identify if it's using CBOR, so mocked payloads match its wire format.
static const bool COGNITO_USES_CBOR = std::is_same<CognitoIdentityClient::BASECLASS, Aws::Client::AWSRpcV2CborClient>::value;

static void WriteCborText(Aws::Crt::Cbor::CborEncoder& encoder, const char* value) {
  encoder.WriteText(Aws::Crt::ByteCursorFromCString(value));
}

static void WriteEncodedData(Aws::IOStream& stream, Aws::Crt::Cbor::CborEncoder& encoder) {
  auto encodedData = encoder.GetEncodedData();
  stream.write(reinterpret_cast<const char*>(encodedData.ptr), encodedData.len);
}

class MockPersistentCognitoIdentityProvider : public PersistentCognitoIdentityProvider
{
public:
    MockPersistentCognitoIdentityProvider() : m_identityIdPersisted(false), m_loginsPersisted(false) {}
    bool HasIdentityId() const override { return !m_identityId.empty(); }
    bool HasLogins() const override { return !m_logins.empty(); }
    Aws::String GetIdentityId() const override { return m_identityId; }
    void SetIdentityId(const Aws::String& identityId) { m_identityId = identityId; }
    Aws::Map<Aws::String, LoginAccessTokens> GetLogins() override { return m_logins; }
    void SetLogins(const Aws::Map<Aws::String, LoginAccessTokens>& logins) { m_logins = logins; }
    Aws::String GetAccountId() const override { return m_accountId; }
    void SetAccountId(const Aws::String& accountId) { m_accountId = accountId; }
    Aws::String GetIdentityPoolId() const override { return m_identityPoolId; }
    void SetIdentityPoolId(const Aws::String& identityPoolId) { m_identityPoolId = identityPoolId; }
    void PersistIdentityId(const Aws::String& identityId) override
    {
        SetIdentityId(identityId);
        m_identityIdPersisted = !identityId.empty();

        if (m_identityIdUpdatedCallback)
        {
            m_identityIdUpdatedCallback(*this);
        }
    }

    void PersistLogins(const Aws::Map<Aws::String, LoginAccessTokens>& logins) override
    {
        SetLogins(logins);
        m_loginsPersisted = !logins.empty();

        if (m_loginsUpdatedCallback)
        {
            m_loginsUpdatedCallback(*this);
        }
    }

    bool IsIdentityIdPersisted() { return m_identityIdPersisted; }
    bool IsLoginsPersisted() { return m_loginsPersisted; }

private:
    Aws::String m_identityId;
    Aws::Map<Aws::String, LoginAccessTokens> m_logins;
    Aws::String m_accountId;
    Aws::String m_identityPoolId;
    bool m_identityIdPersisted;
    bool m_loginsPersisted;
};

namespace
{
    class CognitoCachingCredentialsProviderTest : public ::testing::Test
    {

    protected:
        std::shared_ptr<CognitoIdentityClient> cognitoIdentityClient;
        std::shared_ptr<MockHttpClient> mockHttpClient;
        std::shared_ptr<MockHttpClientFactory> mockHttpClientFactory;
        std::shared_ptr<MockPersistentCognitoIdentityProvider> mockIdentityRepository;

        void SetUp()
        {
            // Create a client
            ClientConfiguration config;
            config.scheme = Scheme::HTTP;
            config.connectTimeoutMs = 30000;
            config.requestTimeoutMs = 30000;

            mockHttpClient = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
            mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>(ALLOCATION_TAG);
            mockHttpClientFactory->SetClient(mockHttpClient);
            SetHttpClientFactory(mockHttpClientFactory);
            cognitoIdentityClient = Aws::MakeShared<CognitoIdentityClient>(ALLOCATION_TAG,
                                                                           Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, "", ""),
                                                                           config);
            mockIdentityRepository = Aws::MakeShared<MockPersistentCognitoIdentityProvider>(ALLOCATION_TAG);
            mockIdentityRepository->SetIdentityPoolId("TestIdentityPool");
            mockIdentityRepository->SetAccountId("598156584");
        }

        void TearDown()
        {
            cognitoIdentityClient = nullptr;
            mockHttpClient = nullptr;
            mockHttpClientFactory = nullptr;
            mockIdentityRepository = nullptr;

            // On Android we run all integration tests within a single process, which means we need to be careful with any testing setup that modifies global state.
            // We override the global http factory in Setup() here, so reset back to the default state as we leave this test suite.
            CleanupHttp();
            InitHttp();
        }

        void AddMockGetIdResultToStream(Aws::IOStream& stream, const char* identity = IDENTITY_1)
        {
          if (COGNITO_USES_CBOR) {
            Aws::Crt::Cbor::CborEncoder encoder;
            encoder.WriteMapStart(1);
            WriteCborText(encoder, "IdentityId");
            WriteCborText(encoder, identity);
            WriteEncodedData(stream, encoder);
            return;
          }

            stream << "{ \"IdentityId\" : \"" << identity << "\" }";
        }

        void AddMockGetCredentialsForIdentityToStream(Aws::IOStream& stream, const char* identityId = IDENTITY_1,
            const char* accessKey = ACCESS_KEY_ID_1, const char* secretKey = SECRET_KEY_ID_1, const char* expiry = A_HUNDRED_YEARS_FROM_THE_MOMENT_I_WROTE_THIS)
        {
          if (COGNITO_USES_CBOR) {
            Aws::Crt::Cbor::CborEncoder encoder;
            encoder.WriteMapStart(2);
            WriteCborText(encoder, "IdentityId");
            WriteCborText(encoder, identityId);
            WriteCborText(encoder, "Credentials");
            encoder.WriteMapStart(3);
            WriteCborText(encoder, "AccessKeyId");
            WriteCborText(encoder, accessKey);
            WriteCborText(encoder, "SecretKey");
            WriteCborText(encoder, secretKey);
            WriteCborText(encoder, "Expiration");
            encoder.WriteTag(1);  // epoch-based date/time, see https://www.rfc-editor.org/rfc/rfc8949.html#tags
            encoder.WriteFloat(StringUtils::ConvertToDouble(expiry));
            WriteEncodedData(stream, encoder);
            return;
          }

            stream << "{ \"IdentityId\" : \"" << identityId << "\", \"Credentials\" : { \"AccessKeyId\" : \"" << accessKey
                << "\", \"SecretKey\" : \"" << secretKey << "\", \"Expiration\" : " << expiry << " } }";
        }

        // Returns the "Logins" map sent in a request body, decoding it according to the client's protocol.
        Aws::Map<Aws::String, Aws::String> GetLoginsFromRequestBody(const std::shared_ptr<Aws::IOStream>& body) {
          Aws::Map<Aws::String, Aws::String> logins;
          body->seekg(0, body->beg);

          if (!COGNITO_USES_CBOR) {
            JsonValue jsonValue(*body);
            for (const auto& login : jsonValue.View().GetObject("Logins").GetAllObjects()) {
              logins.emplace(login.first, login.second.AsString());
            }
            return logins;
          }

          Aws::String payload((std::istreambuf_iterator<char>(*body)), std::istreambuf_iterator<char>());
          Aws::Crt::Cbor::CborDecoder decoder(
              Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
          auto toString = [](const Aws::Crt::ByteCursor& cursor) {
            return Aws::String(reinterpret_cast<const char*>(cursor.ptr), cursor.len);
          };

          auto mapSize = decoder.PopNextMapStart();
          EXPECT_TRUE(mapSize.has_value());
          for (uint64_t i = 0; mapSize.has_value() && i < mapSize.value(); ++i) {
            auto key = decoder.PopNextTextVal();
            EXPECT_TRUE(key.has_value());
            if (!key.has_value() || toString(key.value()) != "Logins") {
              decoder.ConsumeNextWholeDataItem();
              continue;
            }

            auto loginsSize = decoder.PopNextMapStart();
            EXPECT_TRUE(loginsSize.has_value());
            for (uint64_t j = 0; loginsSize.has_value() && j < loginsSize.value(); ++j) {
              auto provider = decoder.PopNextTextVal();
              auto token = decoder.PopNextTextVal();
              EXPECT_TRUE(provider.has_value() && token.has_value());
              if (provider.has_value() && token.has_value()) {
                logins[toString(provider.value())] = toString(token.value());
              }
            }
          }
          return logins;
        }
    };

    TEST_F(CognitoCachingCredentialsProviderTest, TestAnonymousGetCredentialsNoIdentity)
    {
        std::shared_ptr<HttpRequest> getIdrequest =
                CreateHttpRequest(URI("www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> getIdResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, getIdrequest);

        getIdResponse->SetResponseCode(HttpResponseCode::OK);
        AddMockGetIdResultToStream(getIdResponse->GetResponseBody());

        mockHttpClient->AddResponseToReturn(getIdResponse);

        std::shared_ptr<HttpRequest> getCredsrequest =
                CreateHttpRequest(URI("www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> getCredsResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, getCredsrequest);

        getCredsResponse->SetResponseCode(HttpResponseCode::OK);
        AddMockGetCredentialsForIdentityToStream(getCredsResponse->GetResponseBody());

        mockHttpClient->AddResponseToReturn(getCredsResponse);

        CognitoCachingAnonymousCredentialsProvider cognitoCachingAnonymousCredentialsProvider(mockIdentityRepository, cognitoIdentityClient);
        AWSCredentials credentials = cognitoCachingAnonymousCredentialsProvider.GetAWSCredentials();
        ASSERT_EQ(ACCESS_KEY_ID_1, credentials.GetAWSAccessKeyId());
        ASSERT_EQ(SECRET_KEY_ID_1, credentials.GetAWSSecretKey());
        ASSERT_EQ(IDENTITY_1, mockIdentityRepository->GetIdentityId());
        ASSERT_TRUE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_FALSE(mockIdentityRepository->IsLoginsPersisted());
        ASSERT_EQ(2u, mockHttpClient->GetAllRequestsMade().size());
        //now make sure the caching worked;
        credentials = cognitoCachingAnonymousCredentialsProvider.GetAWSCredentials();
        ASSERT_EQ(ACCESS_KEY_ID_1, credentials.GetAWSAccessKeyId());
        ASSERT_EQ(SECRET_KEY_ID_1, credentials.GetAWSSecretKey());
        ASSERT_EQ(IDENTITY_1, mockIdentityRepository->GetIdentityId());
        ASSERT_TRUE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_FALSE(mockIdentityRepository->IsLoginsPersisted());
        //this number should not have increased since we should not have made any additional requests.
        ASSERT_EQ(2u, mockHttpClient->GetAllRequestsMade().size());
    }

    TEST_F(CognitoCachingCredentialsProviderTest, TestAnonymousGetCredentialsHasIdentity)
    {
        std::shared_ptr<HttpRequest> getCredsrequest =
                mockHttpClientFactory->CreateHttpRequest(URI("www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> getCredsResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, getCredsrequest);

        getCredsResponse->SetResponseCode(HttpResponseCode::OK);
        AddMockGetCredentialsForIdentityToStream(getCredsResponse->GetResponseBody());

        mockHttpClient->AddResponseToReturn(getCredsResponse);
        mockIdentityRepository->SetIdentityId(IDENTITY_1);

        CognitoCachingAnonymousCredentialsProvider cognitoCachingAnonymousCredentialsProvider(mockIdentityRepository, cognitoIdentityClient);
        AWSCredentials credentials = cognitoCachingAnonymousCredentialsProvider.GetAWSCredentials();
        ASSERT_EQ(ACCESS_KEY_ID_1, credentials.GetAWSAccessKeyId());
        ASSERT_EQ(SECRET_KEY_ID_1, credentials.GetAWSSecretKey());
        ASSERT_EQ(IDENTITY_1, mockIdentityRepository->GetIdentityId());
        ASSERT_FALSE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_FALSE(mockIdentityRepository->IsLoginsPersisted());
        ASSERT_EQ(1u, mockHttpClient->GetAllRequestsMade().size());
        //now make sure the caching worked;
        credentials = cognitoCachingAnonymousCredentialsProvider.GetAWSCredentials();
        ASSERT_EQ(ACCESS_KEY_ID_1, credentials.GetAWSAccessKeyId());
        ASSERT_EQ(SECRET_KEY_ID_1, credentials.GetAWSSecretKey());
        ASSERT_EQ(IDENTITY_1, mockIdentityRepository->GetIdentityId());
        ASSERT_FALSE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_FALSE(mockIdentityRepository->IsLoginsPersisted());
        //this number should not have increased since we should not have made any additional requests.
        ASSERT_EQ(1u, mockHttpClient->GetAllRequestsMade().size());
    }

    TEST_F(CognitoCachingCredentialsProviderTest, TestAnonymousGetCredentialsServiceCallsFail)
    {
        std::shared_ptr<HttpRequest> getIdrequest =
                mockHttpClientFactory->CreateHttpRequest(URI("www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> getIdResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, getIdrequest);

        getIdResponse->SetResponseCode(HttpResponseCode::BAD_REQUEST);
        getIdResponse->GetResponseBody() << "{ \"_type\" : \"Unknown\" }";

        mockHttpClient->AddResponseToReturn(getIdResponse);

        CognitoCachingAnonymousCredentialsProvider cognitoCachingAnonymousCredentialsProvider(mockIdentityRepository, cognitoIdentityClient);
        AWSCredentials credentials = cognitoCachingAnonymousCredentialsProvider.GetAWSCredentials();
        ASSERT_TRUE(credentials.GetAWSAccessKeyId().empty());
        ASSERT_TRUE(credentials.GetAWSSecretKey().empty());
        ASSERT_TRUE(mockIdentityRepository->GetIdentityId().empty());
        ASSERT_FALSE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_FALSE(mockIdentityRepository->IsLoginsPersisted());
        ASSERT_EQ(1u, mockHttpClient->GetAllRequestsMade().size());

        //now make sure the caching failed;
        mockHttpClient->AddResponseToReturn(getIdResponse);
        credentials = cognitoCachingAnonymousCredentialsProvider.GetAWSCredentials();
        ASSERT_TRUE(credentials.GetAWSAccessKeyId().empty());
        ASSERT_TRUE(credentials.GetAWSSecretKey().empty());
        ASSERT_TRUE(mockIdentityRepository->GetIdentityId().empty());
        ASSERT_FALSE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_FALSE(mockIdentityRepository->IsLoginsPersisted());
        //this number should not have increased since we should not have made any additional requests.
        ASSERT_EQ(2u, mockHttpClient->GetAllRequestsMade().size());
    }

    //we only need to hit the happy path here since we already have full coverage from the other tests.
    TEST_F(CognitoCachingCredentialsProviderTest, TestAuthenticatedGetCredentialsNoIdentity)
    {
        std::shared_ptr<HttpRequest> getIdrequest =
                mockHttpClientFactory->CreateHttpRequest(URI("www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> getIdResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, getIdrequest);

        getIdResponse->SetResponseCode(HttpResponseCode::OK);
        AddMockGetIdResultToStream(getIdResponse->GetResponseBody());

        mockHttpClient->AddResponseToReturn(getIdResponse);

        std::shared_ptr<HttpRequest> getCredsrequest =
                mockHttpClientFactory->CreateHttpRequest(URI("www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> getCredsResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, getCredsrequest);

        getCredsResponse->SetResponseCode(HttpResponseCode::OK);
        AddMockGetCredentialsForIdentityToStream(getCredsResponse->GetResponseBody());

        mockHttpClient->AddResponseToReturn(getCredsResponse);
        Aws::Map<Aws::String, LoginAccessTokens> logins;
        LoginAccessTokens loginAccessTokens;
        loginAccessTokens.accessToken = LOGIN_ID;
        logins[LOGIN_KEY] = loginAccessTokens;
        mockIdentityRepository->PersistLogins(logins);

        CognitoCachingAuthenticatedCredentialsProvider cognitoCachingAuthenticatedCredentialsProvider(mockIdentityRepository, cognitoIdentityClient);
        AWSCredentials credentials = cognitoCachingAuthenticatedCredentialsProvider.GetAWSCredentials();
        ASSERT_EQ(ACCESS_KEY_ID_1, credentials.GetAWSAccessKeyId());
        ASSERT_EQ(SECRET_KEY_ID_1, credentials.GetAWSSecretKey());
        ASSERT_EQ(IDENTITY_1, mockIdentityRepository->GetIdentityId());
        ASSERT_EQ(1u, mockIdentityRepository->GetLogins().size());
        ASSERT_EQ(LOGIN_ID, mockIdentityRepository->GetLogins()[LOGIN_KEY].accessToken);
        ASSERT_TRUE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_TRUE(mockIdentityRepository->IsLoginsPersisted());
        ASSERT_EQ(2u, mockHttpClient->GetAllRequestsMade().size());

        auto requestLogins = GetLoginsFromRequestBody(mockHttpClient->GetAllRequestsMade()[0].GetContentBody());
        ASSERT_EQ(LOGIN_ID, requestLogins[LOGIN_KEY]);

        //now make sure the caching worked;
        credentials = cognitoCachingAuthenticatedCredentialsProvider.GetAWSCredentials();
        ASSERT_EQ(ACCESS_KEY_ID_1, credentials.GetAWSAccessKeyId());
        ASSERT_EQ(SECRET_KEY_ID_1, credentials.GetAWSSecretKey());
        ASSERT_EQ(IDENTITY_1, mockIdentityRepository->GetIdentityId());
        ASSERT_EQ(1u, mockIdentityRepository->GetLogins().size());
        ASSERT_EQ(LOGIN_ID, mockIdentityRepository->GetLogins()[LOGIN_KEY].accessToken);
        ASSERT_TRUE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_TRUE(mockIdentityRepository->IsLoginsPersisted());
        ASSERT_EQ(2u, mockHttpClient->GetAllRequestsMade().size());
    }

    TEST_F(CognitoCachingCredentialsProviderTest, TestAuthenticatedGetCredentialsLoginCredentialsRefreshedAfterAnonymousIdentityAquired)
    {
        //do an anoymous auth run
        std::shared_ptr<HttpRequest> getIdrequest =
            mockHttpClientFactory->CreateHttpRequest(URI("www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> getIdResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, getIdrequest);

        getIdResponse->SetResponseCode(HttpResponseCode::OK);
        AddMockGetIdResultToStream(getIdResponse->GetResponseBody());

        mockHttpClient->AddResponseToReturn(getIdResponse);

        std::shared_ptr<HttpRequest> getCredsrequest =
            mockHttpClientFactory->CreateHttpRequest(URI("www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> getCredsResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, getCredsrequest);

        getCredsResponse->SetResponseCode(HttpResponseCode::OK);
        AddMockGetCredentialsForIdentityToStream(getCredsResponse->GetResponseBody());

        mockHttpClient->AddResponseToReturn(getCredsResponse);

        CognitoCachingAuthenticatedCredentialsProvider cognitoCachingAuthenticatedCredentialsProvider(mockIdentityRepository, cognitoIdentityClient);
        AWSCredentials credentials = cognitoCachingAuthenticatedCredentialsProvider.GetAWSCredentials();
        ASSERT_EQ(ACCESS_KEY_ID_1, credentials.GetAWSAccessKeyId());
        ASSERT_EQ(SECRET_KEY_ID_1, credentials.GetAWSSecretKey());
        ASSERT_EQ(IDENTITY_1, mockIdentityRepository->GetIdentityId());
        ASSERT_EQ(0u, mockIdentityRepository->GetLogins().size());
        ASSERT_TRUE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_FALSE(mockIdentityRepository->IsLoginsPersisted());
        ASSERT_EQ(2u, mockHttpClient->GetAllRequestsMade().size());

        auto requestLogins = GetLoginsFromRequestBody(mockHttpClient->GetAllRequestsMade()[0].GetContentBody());
        ASSERT_EQ(0u, requestLogins.size());

        //make sure the caching worked;
        credentials = cognitoCachingAuthenticatedCredentialsProvider.GetAWSCredentials();
        ASSERT_EQ(ACCESS_KEY_ID_1, credentials.GetAWSAccessKeyId());
        ASSERT_EQ(SECRET_KEY_ID_1, credentials.GetAWSSecretKey());
        ASSERT_EQ(IDENTITY_1, mockIdentityRepository->GetIdentityId());
        ASSERT_EQ(0u, mockIdentityRepository->GetLogins().size());
        ASSERT_TRUE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_FALSE(mockIdentityRepository->IsLoginsPersisted());
        ASSERT_EQ(2u, mockHttpClient->GetAllRequestsMade().size());

        //now do an auth run and make sure two things happen.
        //1st make sure that when we pass a new identity, it gets updated in the cache.
        //2nd make sure that adding logins invalidates the credentials cache.
        mockHttpClient->Reset();
        Aws::String PARENT_ID = "ANewParentIdentityId";
        Aws::String ACCESS_KEY_ID = "AccessKey2";
        Aws::String SECRET_KEY_ID = "SecretKey2";

        getCredsrequest =
            mockHttpClientFactory->CreateHttpRequest(URI("www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        getCredsResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, getCredsrequest);

        getCredsResponse->SetResponseCode(HttpResponseCode::OK);
        AddMockGetCredentialsForIdentityToStream(getCredsResponse->GetResponseBody(), PARENT_ID.c_str(), ACCESS_KEY_ID.c_str(), SECRET_KEY_ID.c_str());

        mockHttpClient->AddResponseToReturn(getCredsResponse);

        Aws::Map<Aws::String, LoginAccessTokens> logins;
        LoginAccessTokens loginAccessTokens;
        loginAccessTokens.accessToken = LOGIN_ID;
        logins[LOGIN_KEY] = loginAccessTokens;
        mockIdentityRepository->PersistLogins(logins);
        credentials = cognitoCachingAuthenticatedCredentialsProvider.GetAWSCredentials();

        ASSERT_EQ(ACCESS_KEY_ID, credentials.GetAWSAccessKeyId());
        ASSERT_EQ(SECRET_KEY_ID, credentials.GetAWSSecretKey());
        ASSERT_EQ(PARENT_ID, mockIdentityRepository->GetIdentityId());
        ASSERT_EQ(1u, mockIdentityRepository->GetLogins().size());
        ASSERT_EQ(LOGIN_ID, mockIdentityRepository->GetLogins()[LOGIN_KEY].accessToken);
        ASSERT_TRUE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_TRUE(mockIdentityRepository->IsLoginsPersisted());
        ASSERT_EQ(1u, mockHttpClient->GetAllRequestsMade().size());

        requestLogins = GetLoginsFromRequestBody(mockHttpClient->GetAllRequestsMade()[0].GetContentBody());
        ASSERT_EQ(LOGIN_ID, requestLogins[LOGIN_KEY]);

        //now make sure the caching worked;
        credentials = cognitoCachingAuthenticatedCredentialsProvider.GetAWSCredentials();
        ASSERT_EQ(ACCESS_KEY_ID, credentials.GetAWSAccessKeyId());
        ASSERT_EQ(SECRET_KEY_ID, credentials.GetAWSSecretKey());
        ASSERT_EQ(PARENT_ID, mockIdentityRepository->GetIdentityId());
        ASSERT_EQ(1u, mockIdentityRepository->GetLogins().size());
        ASSERT_EQ(LOGIN_ID, mockIdentityRepository->GetLogins()[LOGIN_KEY].accessToken);
        ASSERT_TRUE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_TRUE(mockIdentityRepository->IsLoginsPersisted());
        ASSERT_EQ(1u, mockHttpClient->GetAllRequestsMade().size());

    }
}


