/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/mocks/aws/auth/MockAWSHttpResourceClient.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/core/utils/FileSystemUtils.h>

#include <aws/core/auth/GeneralHTTPCredentialsProvider.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/platform/FileSystem.h>

static const char ALLOCATION_TAG[] = "GeneralHTTPCredentialsProviderTest";

using namespace Aws::Auth;
using namespace Aws::Utils;
using namespace Aws::Client;
using namespace Aws::FileSystem;
using namespace Aws::Http;

const char AWS_CONTAINER_AUTHORIZATION_TOKEN_FILE[] = "AWS_CONTAINER_AUTHORIZATION_TOKEN_FILE";
const char AWS_CONTAINER_CREDENTIALS_RELATIVE_URI[] = "AWS_CONTAINER_CREDENTIALS_RELATIVE_URI";
const char AWS_CONTAINER_CREDENTIALS_FULL_URI[]     = "AWS_CONTAINER_CREDENTIALS_FULL_URI";
const char AWS_CONTAINER_AUTHORIZATION_TOKEN[]      = "AWS_CONTAINER_AUTHORIZATION_TOKEN";

const std::vector<const char*> ENV_VARS = {AWS_CONTAINER_AUTHORIZATION_TOKEN_FILE, AWS_CONTAINER_CREDENTIALS_RELATIVE_URI, AWS_CONTAINER_CREDENTIALS_FULL_URI, AWS_CONTAINER_AUTHORIZATION_TOKEN};


class GeneralHTTPCredentialsProviderTest : public Aws::Testing::AwsCppSdkGTestSuite
{
public:
    void SetUp()
    {
        for (const auto& envVar : ENV_VARS) {
          SaveEnvironmentVariable(envVar);
          Aws::Environment::UnSetEnv(envVar);
        }

        m_mockHttpClient = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
        assert(m_mockHttpClient);
        m_mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>(ALLOCATION_TAG);
        m_mockHttpClientFactory->SetClient(m_mockHttpClient);
        SetHttpClientFactory(m_mockHttpClientFactory);
    }

    void TearDown()
    {
        RestoreEnvironmentVariables();
        CleanupHttp();
        InitHttp();
    }

    void SaveEnvironmentVariable(const char* variableName)
    {
        m_environment.emplace_back(variableName, Aws::Environment::GetEnv(variableName));
    }

    void RestoreEnvironmentVariables()
    {
        for(const auto& iter : m_environment)
        {
            if(iter.second.empty())
            {
                Aws::Environment::UnSetEnv(iter.first);
            }
            else
            {
                Aws::Environment::SetEnv(iter.first, iter.second.c_str(), 1);
            }
        }
    }

protected:
    std::shared_ptr<MockHttpClient> m_mockHttpClient;
    std::shared_ptr<MockHttpClientFactory> m_mockHttpClientFactory;

    Aws::Vector<std::pair<const char*, Aws::String>> m_environment;
};

class GeneralHTTPCredentialsProviderParamsTest : public GeneralHTTPCredentialsProviderTest, public testing::WithParamInterface<size_t>
{
public:
    static const char RC_TEST_CASES[];
    static const size_t RC_TEST_CASES_COUNT;

    static const char RH_TEST_CASES[];
    static const size_t RH_TEST_CASES_COUNT;
};

const char GeneralHTTPCredentialsProviderParamsTest::RC_TEST_CASES[] = R"([
  {
    "description": "should reject forbidden host in full URI",
    "env": {
      "AWS_CONTAINER_CREDENTIALS_FULL_URI": "http://192.168.1.1/endpoint"
    },
    "expect": {
      "type": "error",
      "reason": "'192.168.1.1' is not an allowed host"
    }
  },
  {
    "description": "should reject forbidden link-local host in full URI",
    "env": {
      "AWS_CONTAINER_CREDENTIALS_FULL_URI": "http://169.254.170.3/endpoint"
    },
    "expect": {
      "type": "error",
      "reason": "169.254.170.3' is not an allowed host"
    }
  },
  {
    "description": "should reject invalid token file path",
    "env": {
      "AWS_CONTAINER_CREDENTIALS_RELATIVE_URI": "/endpoint",
      "AWS_CONTAINER_AUTHORIZATION_TOKEN_FILE": "/full/path/to/token/file"
    },
    "token_file": {
      "type": "error",
      "errno": "ENOENT"
    },
    "expect": {
      "type": "error",
      "reason": "failed to read authorization token from '/full/path/to/token/file': no such file or directory"
    }
  },
  {
    "description": "https URI",
    "env": {
      "AWS_CONTAINER_CREDENTIALS_FULL_URI": "https://awscredentials.amazonaws.com/credentials"
    },
    "expect": {
      "type": "success",
      "request": {
        "method": "GET",
        "uri": "https://awscredentials.amazonaws.com/credentials",
        "headers": {}
      }
    }
  },
  {
    "description": "http loopback(v4) URI",
    "env": {
      "AWS_CONTAINER_CREDENTIALS_FULL_URI": "http://127.0.0.2/credentials"
    },
    "expect": {
      "type": "success",
      "request": {
        "method": "GET",
        "uri": "http://127.0.0.2/credentials",
        "headers": {}
      }
    }
  },
  {
    "description": "http loopback(v6) URI",
    "env": {
      "AWS_CONTAINER_CREDENTIALS_FULL_URI": "http://[::1]/credentials"
    },
    "expect": {
      "type": "success",
      "request": {
        "method": "GET",
        "uri": "http://[::1]/credentials",
        "headers": {}
      }
    }
  },
  {
    "description": "http link-local ECS URI",
    "env": {
      "AWS_CONTAINER_CREDENTIALS_FULL_URI": "http://169.254.170.2/credentials"
    },
    "expect": {
      "type": "success",
      "request": {
        "method": "GET",
        "uri": "http://169.254.170.2/credentials",
        "headers": {}
      }
    }
  },
  {
    "description": "http link-local EKS URI",
    "env": {
      "AWS_CONTAINER_CREDENTIALS_FULL_URI": "http://169.254.170.23/credentials"
    },
    "expect": {
      "type": "success",
      "request": {
        "method": "GET",
        "uri": "http://169.254.170.23/credentials",
        "headers": {}
      }
    }
  },
  {
    "description": "complex full URI",
    "env": {
      "AWS_CONTAINER_CREDENTIALS_FULL_URI": "http://127.0.0.1:8080/credentials?foo=bar%20baz"
    },
    "expect": {
      "type": "success",
      "request": {
        "method": "GET",
        "uri": "http://127.0.0.1:8080/credentials?foo=bar%20baz",
        "headers": {}
      }
    }
  },
  {
    "description": "auth token from file",
    "env": {
      "AWS_CONTAINER_CREDENTIALS_RELATIVE_URI": "/credentials-relative",
      "AWS_CONTAINER_AUTHORIZATION_TOKEN_FILE": "/path/to/token"
    },
    "token_file": {
      "type": "success",
      "content": "Basic static%20token"
    },
    "expect": {
      "type": "success",
      "request": {
        "method": "GET",
        "uri": "http://169.254.170.2/credentials-relative",
        "headers": {
          "Authorization": "Basic static%20token"
        }
      }
    }
  },
  {
    "description": "auth token from env",
    "env": {
      "AWS_CONTAINER_CREDENTIALS_RELATIVE_URI": "/credentials-relative",
      "AWS_CONTAINER_AUTHORIZATION_TOKEN": "Basic static%20token2"
    },
    "expect": {
      "type": "success",
      "request": {
        "method": "GET",
        "uri": "http://169.254.170.2/credentials-relative",
        "headers": {
          "Authorization": "Basic static%20token2"
        }
      }
    }
  }
])";

const size_t GeneralHTTPCredentialsProviderParamsTest::RC_TEST_CASES_COUNT = 11;

std::shared_ptr<GeneralHTTPCredentialsProvider> CreateGeneralProvider()
{
    const auto relativeUri = Aws::Environment::GetEnv(GeneralHTTPCredentialsProvider::AWS_CONTAINER_CREDENTIALS_RELATIVE_URI);
    const auto absoluteUri = Aws::Environment::GetEnv(GeneralHTTPCredentialsProvider::AWS_CONTAINER_CREDENTIALS_FULL_URI);
    const auto token = Aws::Environment::GetEnv(GeneralHTTPCredentialsProvider::AWS_CONTAINER_AUTHORIZATION_TOKEN);
    const auto tokenPath = Aws::Environment::GetEnv(GeneralHTTPCredentialsProvider::AWS_CONTAINER_AUTHORIZATION_TOKEN_FILE);

    return Aws::MakeShared<GeneralHTTPCredentialsProvider>(ALLOCATION_TAG, relativeUri, absoluteUri, token, tokenPath);
}

std::shared_ptr<Aws::Http::Standard::StandardHttpResponse> buildDummyHttpReply(const Aws::String& payloadToReply)
{
  std::shared_ptr<Aws::Http::HttpRequest> requestTmp = CreateHttpRequest(Aws::Http::URI("dummy"), Aws::Http::HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
  std::shared_ptr<Aws::Http::Standard::StandardHttpResponse> goodResponse =
      Aws::MakeShared<Aws::Http::Standard::StandardHttpResponse>(ALLOCATION_TAG, requestTmp);
  goodResponse->SetResponseCode(Aws::Http::HttpResponseCode::OK);
  goodResponse->GetResponseBody() << payloadToReply;
  return goodResponse;
}

using GeneralHTTPCredentialsProviderRequestConstructionTests = GeneralHTTPCredentialsProviderParamsTest;

TEST_P(GeneralHTTPCredentialsProviderRequestConstructionTests, RequestConstructionTest)
{
  Aws::Utils::Json::JsonValue TEST_CASES(RC_TEST_CASES);
  ASSERT_TRUE(TEST_CASES.WasParseSuccessful());
  ASSERT_EQ(RC_TEST_CASES_COUNT, TEST_CASES.View().AsArray().GetLength());

  const size_t TEST_CASE_IDX = GetParam();
  Aws::Utils::Json::JsonView TEST_CASE = TEST_CASES.View().AsArray().GetItem(TEST_CASE_IDX);
  SCOPED_TRACE(Aws::String("\nTEST CASE # ") + Aws::Utils::StringUtils::to_string(TEST_CASE_IDX) + ": " + TEST_CASE.GetString("description"));
  SCOPED_TRACE(Aws::String("--gtest_filter=RequestConstructionTest/GeneralHTTPCredentialsProviderRequestConstructionTests.RequestConstructionTest/") + StringUtils::to_string(TEST_CASE_IDX));

  auto testEnv = TEST_CASE.GetObject("env").GetAllObjects();
  for (const auto& env : testEnv)
  {
    Aws::Environment::SetEnv(env.first.c_str(), env.second.AsString().c_str(), 1);
  }

  Aws::UniquePtr<Aws::Utils::TempFile> pTokenFile;
  if (TEST_CASE.KeyExists("token_file"))
  {
    auto testTokenFile = TEST_CASE.GetObject("token_file");
    if (testTokenFile.GetString("type") == "success")
    {
      pTokenFile = Aws::MakeUnique<Aws::Utils::TempFile>(ALLOCATION_TAG, std::ios_base::out | std::ios_base::trunc);
      assert(pTokenFile && pTokenFile->good());
      (*pTokenFile) << testTokenFile.GetString("content") << std::endl;
      if (testEnv.find(AWS_CONTAINER_AUTHORIZATION_TOKEN_FILE) != testEnv.end())
      {
        Aws::Environment::SetEnv(AWS_CONTAINER_AUTHORIZATION_TOKEN_FILE, pTokenFile->GetFileName().c_str(), 1);
      }
    }
  }

  const auto expect = TEST_CASE.GetObject("expect");
  if (expect.GetString("type") == "success" && expect.KeyExists("request"))
  {
    m_mockHttpClient->AddResponseToReturn(buildDummyHttpReply("{}"));
  }

  std::shared_ptr<GeneralHTTPCredentialsProvider> genProvider = CreateGeneralProvider();
  assert(genProvider);

  if (expect.GetString("type") == "error")
  {
    ASSERT_FALSE(genProvider->IsValid()) << "General HTTP provider had to fail for a reason:\n    " << expect.GetString("reason");
    ASSERT_TRUE(m_mockHttpClient->GetAllRequestsMade().empty());
  } else if (expect.GetString("type") == "success") {
    ASSERT_TRUE(genProvider && genProvider->IsValid());
    if (expect.KeyExists("request"))
    {
      AWSCredentials credentials = genProvider->GetAWSCredentials();
      auto testRequest = expect.GetObject("request");

      auto requestsMade = m_mockHttpClient->GetAllRequestsMade();
      ASSERT_EQ(1u, requestsMade.size());

      const Aws::Http::Standard::StandardHttpRequest requestMade = requestsMade[0];
      if(testRequest.KeyExists("method"))
      {
        ASSERT_EQ(testRequest.GetString("method"), HttpMethodMapper::GetNameForHttpMethod(requestMade.GetMethod()));
      }

      if (testRequest.KeyExists("uri"))
      {
        ASSERT_EQ(testRequest.GetString("uri"), requestMade.GetURIString());
        if (testRequest.GetString("uri").rfind(Aws::String("https://"), 0) == 0)
        {
          ASSERT_EQ(Aws::Http::Scheme::HTTPS, requestMade.GetUri().GetScheme());
        } else {
          ASSERT_EQ(Aws::Http::Scheme::HTTP, requestMade.GetUri().GetScheme());
        }
      }
      if (testRequest.KeyExists("headers")) {
        auto testHeaders = testRequest.GetObject("headers").GetAllObjects();
        for (const auto& header : testHeaders)
        {
          ASSERT_EQ(header.second.AsString(), requestMade.GetHeaderValue(header.first.c_str()));
        }
      }

      if (testEnv.find(AWS_CONTAINER_AUTHORIZATION_TOKEN_FILE) == testEnv.end() && testEnv.find(AWS_CONTAINER_AUTHORIZATION_TOKEN) == testEnv.end())
      {
        // if no token is set
        ASSERT_FALSE(requestMade.HasHeader("Authorization"));
      }
    }
  } else {
    assert(!"Invalid value in a test case");
  }
}

INSTANTIATE_TEST_SUITE_P(RequestConstructionTest,
                         GeneralHTTPCredentialsProviderRequestConstructionTests,
                         ::testing::Range((size_t) 0u, GeneralHTTPCredentialsProviderRequestConstructionTests::RC_TEST_CASES_COUNT));


const char GeneralHTTPCredentialsProviderParamsTest::RH_TEST_CASES[] = R"([
  {
    "description": "application/json error response",
    "response": {
      "status": 401,
      "headers": {
        "Content-Type": "application/json"
      },
      "body": "{\"Code\":\"TokenNotFound\"}"
    },
    "expect": {
      "type": "error",
      "reason": "received error response from credentials endpoint: 401 Unauthorized",
      "metadata": {
        "Code": "TokenNotFound"
      }
    }
  },
  {
    "description": "4xx error response",
    "response": {
      "status": 429
    },
    "expect": {
      "type": "error",
      "reason": "received non-2xx response from credentials endpoint: 429 Too Many Requests",
      "metadata": {}
    }
  },
  {
    "description": "3xx error response",
    "response": {
      "status": 301
    },
    "expect": {
      "type": "error",
      "reason": "received non-2xx response from credentials endpoint: 301 Moved Permanently",
      "metadata": {}
    }
  },
  {
    "description": "5xx error response",
    "response": {
      "status": 500
    },
    "expect": {
      "type": "error",
      "reason": "received non-2xx response from credentials endpoint: 500 Internal Server Error",
      "metadata": {}
    }
  },
  {
    "description": "success",
    "response": {
      "status": 200,
      "headers": {
        "Content-Type": "application/json"
      },
      "body": "{\"Foo\":\"Bar\",\"AccessKeyId\":\"foo\",\"SecretAccessKey\":\"bar\",\"Token\":\"baz\",\"AccountId\":\"qux\",\"Expiration\":\"2023-06-30T00:00:00.000Z\"}"
    },
    "expect": {
      "type": "success",
      "credentials": {
        "access_key_id": "foo",
        "secret_access_key": "bar",
        "session_token": "baz",
        "account_id": "qux",
        "expiration": "2023-06-30T00:00:00.000Z"
      }
    }
  }
])";

const size_t GeneralHTTPCredentialsProviderParamsTest::RH_TEST_CASES_COUNT = 5;

std::shared_ptr<Aws::Http::Standard::StandardHttpResponse> buildHttpReply(const Aws::Utils::Json::JsonView& responseJson)
{
  const size_t status = responseJson.KeyExists("status") ? responseJson.GetInteger("status") : 0;
  const Aws::String& body = responseJson.KeyExists("body") ? responseJson.GetString("body") : "";
  const Aws::Map<Aws::String, Aws::Utils::Json::JsonView>& headers = responseJson.KeyExists("headers") ? responseJson.GetObject("headers").GetAllObjects() : Aws::Map<Aws::String, Aws::Utils::Json::JsonView>();

  std::shared_ptr<Aws::Http::HttpRequest> requestTmp = CreateHttpRequest(Aws::Http::URI("dummy"), Aws::Http::HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
  std::shared_ptr<Aws::Http::Standard::StandardHttpResponse> response =
      Aws::MakeShared<Aws::Http::Standard::StandardHttpResponse>(ALLOCATION_TAG, requestTmp);
  response->SetResponseCode(static_cast<Aws::Http::HttpResponseCode>(status));
  if (!body.empty())
    response->GetResponseBody() << body;
  for (const auto& headerPair : headers)
  {
    response->AddHeader(headerPair.first, headerPair.second.AsString());
  }
  return response;
}

using GeneralHTTPCredentialsProviderResponseHandlingTests = GeneralHTTPCredentialsProviderParamsTest;

TEST_P(GeneralHTTPCredentialsProviderResponseHandlingTests, ResponseHandlingTest)
{
  Aws::Utils::Json::JsonValue TEST_CASES(RH_TEST_CASES);
  ASSERT_TRUE(TEST_CASES.WasParseSuccessful());
  ASSERT_EQ(RH_TEST_CASES_COUNT, TEST_CASES.View().AsArray().GetLength());

  const size_t TEST_CASE_IDX = GetParam();
  Aws::Utils::Json::JsonView TEST_CASE = TEST_CASES.View().AsArray().GetItem(TEST_CASE_IDX);
  SCOPED_TRACE(Aws::String("\nTEST CASE # ") + Aws::Utils::StringUtils::to_string(TEST_CASE_IDX) + ": " + TEST_CASE.GetString("description"));
  SCOPED_TRACE(Aws::String("--gtest_filter=ResponseHandlingTest/GeneralHTTPCredentialsProviderResponseHandlingTests.ResponseHandlingTest/") + StringUtils::to_string(TEST_CASE_IDX));

  const auto expect = TEST_CASE.GetObject("expect");
  if (TEST_CASE.KeyExists("response"))
  {
    m_mockHttpClient->AddResponseToReturn(buildHttpReply(TEST_CASE.GetObject("response")));
    if (expect.GetString("type") == "error") {
      // for a retry
      m_mockHttpClient->AddResponseToReturn(buildHttpReply(TEST_CASE.GetObject("response")));
    }
  }

  Aws::Environment::SetEnv("AWS_CONTAINER_CREDENTIALS_FULL_URI", "http://localhost/get-credentials", 1);
  std::shared_ptr<GeneralHTTPCredentialsProvider> genProvider = CreateGeneralProvider();
  ASSERT_TRUE(genProvider && genProvider->IsValid());
  AWSCredentials credentials = genProvider->GetAWSCredentials();

  auto requestsMade = m_mockHttpClient->GetAllRequestsMade();
  if (expect.GetString("type") == "error") {
    ASSERT_TRUE(1u == requestsMade.size() || 2u == requestsMade.size());
  }

  const Aws::Http::Standard::StandardHttpRequest requestMade = requestsMade[0];
  ASSERT_STREQ("http://localhost/get-credentials", requestMade.GetURIString().c_str());
  ASSERT_EQ(Aws::Http::Scheme::HTTP, requestMade.GetUri().GetScheme());

  if (expect.GetString("type") == "error")
  {
    ASSERT_TRUE(credentials.GetAWSAccessKeyId().empty());
    ASSERT_TRUE(credentials.GetAWSSecretKey().empty());
    ASSERT_TRUE(credentials.GetSessionToken().empty());
  } else if (expect.GetString("type") == "success") {
    ASSERT_FALSE(credentials.GetAWSAccessKeyId().empty());
    ASSERT_FALSE(credentials.GetAWSSecretKey().empty());
    ASSERT_FALSE(credentials.GetSessionToken().empty());

    if (expect.KeyExists("credentials"))
    {
      auto testCredentials = expect.GetObject("credentials");

      ASSERT_EQ(testCredentials.GetString("access_key_id"), credentials.GetAWSAccessKeyId());
      ASSERT_EQ(testCredentials.GetString("secret_access_key"), credentials.GetAWSSecretKey());
      ASSERT_EQ(testCredentials.GetString("session_token"), credentials.GetSessionToken());
      ASSERT_EQ(Aws::Utils::DateTime(testCredentials.GetString("expiration"), Aws::Utils::DateFormat::ISO_8601), credentials.GetExpiration());
    }
  } else {
    assert(!"Invalid value in a test case");
  }
}

INSTANTIATE_TEST_SUITE_P(ResponseHandlingTest,
                         GeneralHTTPCredentialsProviderResponseHandlingTests,
                         ::testing::Range((size_t) 0u, GeneralHTTPCredentialsProviderResponseHandlingTests::RH_TEST_CASES_COUNT));

TEST_F(GeneralHTTPCredentialsProviderTest, AllowInsecureEndpoint)
{
  class TestInsecureGeneralHTTPCredentialsProvider : public GeneralHTTPCredentialsProvider
  {
  public:
      static bool AlwaysCreate(const Aws::String&, const Aws::String&, const Aws::String)
      {
        return true;
      }

      TestInsecureGeneralHTTPCredentialsProvider(const Aws::String& relativeUri,
                                                 const Aws::String& absoluteUri,
                                                 const Aws::String& authTokenFilePath = "",
                                                 const Aws::String& authToken = "",
                                                 long refreshRateMs = REFRESH_THRESHOLD)
                                                : GeneralHTTPCredentialsProvider(relativeUri, absoluteUri, authTokenFilePath, authToken, refreshRateMs, AlwaysCreate)
      {}
  };

  TestInsecureGeneralHTTPCredentialsProvider provider1("", "http://amazon.com");
  EXPECT_TRUE(provider1.IsValid());

  TestInsecureGeneralHTTPCredentialsProvider provider2("", "http://local.host");
  EXPECT_TRUE(provider2.IsValid());

  TestInsecureGeneralHTTPCredentialsProvider provider3("", "example.org");
  EXPECT_TRUE(provider3.IsValid());

  /* OR SIMPLY */
  GeneralHTTPCredentialsProvider provider4("", "http://amazon.com", "", "", REFRESH_THRESHOLD, TestInsecureGeneralHTTPCredentialsProvider::AlwaysCreate);
  EXPECT_TRUE(provider4.IsValid());
}

// old legacy tests
using TaskRoleCredentialsProviderTest = GeneralHTTPCredentialsProviderTest;

TEST_F(TaskRoleCredentialsProviderTest, TestECSCredentialsClientReturnsGoodData)
{
    auto mockClient = Aws::MakeShared<MockECSCredentialsClient>(ALLOCATION_TAG, "/path/to/res");

    const char* validCredentials = "{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\", \"Expiration\": \"2020-02-25T06:03:31Z\" }";
    mockClient->SetMockedCredentialsValue(validCredentials);

    TaskRoleCredentialsProvider provider(mockClient, 1000 * 60 * 15);
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());
    ASSERT_EQ("goodToken", provider.GetAWSCredentials().GetSessionToken());
}

TEST_F(TaskRoleCredentialsProviderTest, TestThatProviderRefreshes)
{
    auto mockClient = Aws::MakeShared<MockECSCredentialsClient>(ALLOCATION_TAG, "/path/to/res");

    Aws::String goodCredentialsPrefix("{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\", \"Expiration\": ");
    Aws::String betterCredentialsPrefix("{ \"AccessKeyId\": \"betterAccessKey\", \"SecretAccessKey\": \"betterSecretKey\", \"Token\": \"betterToken\", \"Expiration\": ");
    DateTime now = DateTime::Now();
    Aws::String dateStringNow = now.ToGmtString(DateFormat::ISO_8601);

    DateTime after = now.Millis() + 1000;
    Aws::String dateStringAfter = after.ToGmtString(DateFormat::ISO_8601);

    // Set the current credentials expiration date to now, which expires immediately.
    // Next time when calling GetAWSCredentials, the credentials will be refreshed.
    Aws::StringStream validCredentials;
    validCredentials << goodCredentialsPrefix << "\"" << dateStringNow << "\" }";

    mockClient->SetMockedCredentialsValue(validCredentials.str());

    TaskRoleCredentialsProvider provider(mockClient, 10);
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());

    Aws::StringStream nextSetOfCredentials;
    nextSetOfCredentials << betterCredentialsPrefix << "\"" << dateStringAfter << "\" }";
    mockClient->SetMockedCredentialsValue(nextSetOfCredentials.str());

    ASSERT_EQ("betterAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("betterSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());
}

TEST_F(TaskRoleCredentialsProviderTest, TestThatProviderDontRefresh)
{
    auto mockClient = Aws::MakeShared<MockECSCredentialsClient>(ALLOCATION_TAG, "/path/to/res");

    Aws::String goodCredentialsPrefix("{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\", \"Expiration\": ");
    DateTime after = DateTime::Now().Millis() + 60 * 1000;
    Aws::String dateStringAfter = after.ToGmtString(DateFormat::ISO_8601);

    // Set the credentials expiration date to 60 seconds from now on.
    Aws::StringStream validCredentials;
    validCredentials << goodCredentialsPrefix << "\"" << dateStringAfter << "\" }";

    mockClient->SetMockedCredentialsValue(validCredentials.str());

    // Set the refresh frequency to 0s, immediately trying refresh each time GetAWSCredentials() get called.
    // If the credential has not expired, it will not be refreshed.
    TaskRoleCredentialsProvider provider(mockClient, 0);
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());

    // After sleeping for 3 seconds, the credentials will not be refreshed.
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());
}

TEST_F(TaskRoleCredentialsProviderTest, TestECSCrendentialsClientCouldntFindCredentials)
{
    auto mockClient = Aws::MakeShared<MockECSCredentialsClient>(ALLOCATION_TAG, "/path/to/res");
    const char* emptyCredentials = "";
    mockClient->SetMockedCredentialsValue(emptyCredentials);

    TaskRoleCredentialsProvider provider(mockClient, 1000 * 60 * 15);
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSSecretKey());

    const char* missingInfo = "{ }";
    mockClient->SetMockedCredentialsValue(missingInfo);
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSSecretKey());
}

TEST_F(TaskRoleCredentialsProviderTest, TestECSCredentialsClientReturnsBadData)
{
    auto mockClient = Aws::MakeShared<MockECSCredentialsClient>(ALLOCATION_TAG, "/path/to/res");
    const char* badData = "blah blah blah, I'm bad";
    mockClient->SetMockedCredentialsValue(badData);

    TaskRoleCredentialsProvider provider(mockClient, 1000 * 60 * 15);
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSSecretKey());
}
