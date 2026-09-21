/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentials.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/sso-oidc/SSOOIDCClient.h>
#include <aws/sso-oidc/SSOOIDCEndpointProvider.h>
#include <aws/sso-oidc/model/CreateTokenRequest.h>
#include <aws/sso-oidc/model/CreateTokenWithIAMRequest.h>
#include <aws/sso-oidc/model/RegisterClientRequest.h>
#include <aws/sso-oidc/model/StartDeviceAuthorizationRequest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/MemoryTesting.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <gtest/gtest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::SSOOIDC;
using namespace Aws::SSOOIDC::Model;

namespace {
const char* ALLOCATION_TAG = "SSOOIDCUnitTest";

class SSOOIDCUnitTest : public testing::Test {
 protected:
  static void SetUpTestSuite() {
#ifdef USE_AWS_MEMORY_MANAGEMENT
    testMemorySystem_.reset(new ExactTestMemorySystem(1024, 128));
    options_.memoryManagementOptions.memoryManager = testMemorySystem_.get();
#endif
    InitAPI(options_);
    mockClientFactory_ = Aws::MakeShared<MockHttpClientFactory>(ALLOCATION_TAG);
    mockHttpClient_ = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
    mockClientFactory_->SetClient(mockHttpClient_);
    SetHttpClientFactory(mockClientFactory_);

    AWSCredentials credentials{"AKIDEXAMPLE", "secret", "session-token"};
    const auto epProvider = Aws::MakeShared<SSOOIDCEndpointProvider>(ALLOCATION_TAG);
    SSOOIDCClientConfiguration config;
    config.region = "us-west-2";
    client_ = Aws::MakeShared<SSOOIDCClient>(ALLOCATION_TAG, credentials, epProvider, config);
  }

  static void TearDownTestSuite() {
    mockClientFactory_.reset();
    mockHttpClient_.reset();
    client_.reset();
    ShutdownAPI(options_);
#ifdef USE_AWS_MEMORY_MANAGEMENT
    EXPECT_TRUE(testMemorySystem_->IsClean());
    if (!testMemorySystem_->IsClean()) FAIL();
    testMemorySystem_.reset();
#endif
  }

  void SetUp() override { mockHttpClient_->Reset(); }

  static void EnqueueOkResponse() {
    auto mockRequest =
        Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG, "mockuri", HttpMethod::HTTP_POST);
    mockRequest->SetResponseStreamFactory(
        []() -> IOStream* { return Aws::New<StringStream>(ALLOCATION_TAG, "{}", std::ios_base::in | std::ios_base::binary); });
    auto mockResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, mockRequest);
    mockResponse->SetResponseCode(HttpResponseCode::OK);
    mockHttpClient_->AddResponseToReturn(mockResponse);
  }

  static SDKOptions options_;
  static std::shared_ptr<MockHttpClient> mockHttpClient_;
  static std::shared_ptr<MockHttpClientFactory> mockClientFactory_;
  static std::shared_ptr<SSOOIDCClient> client_;
#ifdef USE_AWS_MEMORY_MANAGEMENT
  static std::unique_ptr<ExactTestMemorySystem> testMemorySystem_;
#endif
};

SDKOptions SSOOIDCUnitTest::options_;
std::shared_ptr<MockHttpClient> SSOOIDCUnitTest::mockHttpClient_ = nullptr;
std::shared_ptr<MockHttpClientFactory> SSOOIDCUnitTest::mockClientFactory_ = nullptr;
std::shared_ptr<SSOOIDCClient> SSOOIDCUnitTest::client_ = nullptr;
#ifdef USE_AWS_MEMORY_MANAGEMENT
std::unique_ptr<ExactTestMemorySystem> SSOOIDCUnitTest::testMemorySystem_ = nullptr;
#endif
}  // namespace

TEST_F(SSOOIDCUnitTest, CreateTokenMustBeUnsigned) {
  EnqueueOkResponse();
  client_->CreateToken(CreateTokenRequest()
                           .WithClientId("client-id")
                           .WithClientSecret("client-secret")
                           .WithGrantType("authorization_code")
                           .WithCode("auth-code"));

  const auto seenRequest = mockHttpClient_->GetMostRecentHttpRequest();
  EXPECT_FALSE(seenRequest.HasAuthorization()) << "CreateToken must use NULL_SIGNER; found: " << seenRequest.GetAuthorization();
  EXPECT_FALSE(seenRequest.HasHeader("X-Amz-Security-Token"));
}

TEST_F(SSOOIDCUnitTest, RegisterClientMustBeUnsigned) {
  EnqueueOkResponse();
  client_->RegisterClient(RegisterClientRequest()
                              .WithClientName("client-name")
                              .WithClientType("public"));

  const auto seenRequest = mockHttpClient_->GetMostRecentHttpRequest();
  EXPECT_FALSE(seenRequest.HasAuthorization()) << "RegisterClient must use NULL_SIGNER; found: " << seenRequest.GetAuthorization();
  EXPECT_FALSE(seenRequest.HasHeader("X-Amz-Security-Token"));
}

TEST_F(SSOOIDCUnitTest, StartDeviceAuthorizationMustBeUnsigned) {
  EnqueueOkResponse();
  client_->StartDeviceAuthorization(StartDeviceAuthorizationRequest()
                                        .WithClientId("client-id")
                                        .WithClientSecret("client-secret")
                                        .WithStartUrl("https://d-0000000000.awsapps.com/start"));

  const auto seenRequest = mockHttpClient_->GetMostRecentHttpRequest();
  EXPECT_FALSE(seenRequest.HasAuthorization()) << "StartDeviceAuthorization must use NULL_SIGNER; found: " << seenRequest.GetAuthorization();
  EXPECT_FALSE(seenRequest.HasHeader("X-Amz-Security-Token"));
}

TEST_F(SSOOIDCUnitTest, CreateTokenWithIAMMustBeSigned) {
  EnqueueOkResponse();
  client_->CreateTokenWithIAM(CreateTokenWithIAMRequest()
                                  .WithClientId("client-id")
                                  .WithGrantType("authorization_code")
                                  .WithCode("auth-code"));

  const auto seenRequest = mockHttpClient_->GetMostRecentHttpRequest();
  ASSERT_TRUE(seenRequest.HasAuthorization()) << "CreateTokenWithIAM must be SigV4-signed";
  EXPECT_NE(Aws::String::npos, seenRequest.GetAuthorization().find("AWS4-HMAC-SHA256"));
  EXPECT_TRUE(seenRequest.HasHeader("X-Amz-Security-Token"));
}
