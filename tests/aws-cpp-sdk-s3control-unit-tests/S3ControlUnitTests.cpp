/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentials.h>
#include <aws/s3control/S3ControlClient.h>
#include <aws/s3control/S3ControlClientConfiguration.h>
#include <aws/s3control/S3ControlEndpointProvider.h>
#include <aws/s3control/model/GetAccessPointRequest.h>
#include <aws/s3control/model/ListAccessPointsRequest.h>
#include <aws/testing/MemoryTesting.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <gtest/gtest.h>

#include <memory>

using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Http::Standard;
using namespace Aws::S3Control;

namespace {
const char* LOG_TAG = "S3ControlUnitTest";
const char* OUTPOST_ACCESS_POINT_ARN = "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint";
const char* ARN_ACCOUNT_ID = "123456789012";
}  // namespace

class S3ControlUnitTest : public testing::Test {
 protected:
  static void SetUpTestSuite() {
#ifdef USE_AWS_MEMORY_MANAGEMENT
    test_memory_system.reset(new ExactTestMemorySystem(1024, 128));
    options_.memoryManagementOptions.memoryManager = test_memory_system.get();
#endif
    InitAPI(options_);
    mock_client_factory_ = Aws::MakeShared<MockHttpClientFactory>(LOG_TAG);
    mock_http_client_ = Aws::MakeShared<MockHttpClient>(LOG_TAG);
    mock_client_factory_->SetClient(mock_http_client_);
    SetHttpClientFactory(mock_client_factory_);
  }

  static void TearDownTestSuite() {
    mock_client_factory_.reset();
    mock_http_client_.reset();
    ShutdownAPI(options_);
#ifdef USE_AWS_MEMORY_MANAGEMENT
    EXPECT_EQ(test_memory_system->GetCurrentOutstandingAllocations(), 0ULL);
    EXPECT_EQ(test_memory_system->GetCurrentBytesAllocated(), 0ULL);
    EXPECT_TRUE(test_memory_system->IsClean());
    if (test_memory_system->GetCurrentOutstandingAllocations() != 0ULL) FAIL();
    if (test_memory_system->GetCurrentBytesAllocated() != 0ULL) FAIL();
    if (!test_memory_system->IsClean()) FAIL();
    test_memory_system.reset();
#endif
  }

  void SetUp() override { mock_http_client_->Reset(); }

  static std::shared_ptr<S3ControlClient> MakeClient(const S3ControlClientConfiguration& configuration) {
    const AWSCredentials credentials{"zoe", "washburne"};
    return Aws::MakeShared<S3ControlClient>(LOG_TAG, credentials, Aws::MakeShared<S3ControlEndpointProvider>(LOG_TAG), configuration);
  }

  static void QueueResponse(const char* body) {
    auto responseStream = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "serenity.firefly/accesspoints", HttpMethod::HTTP_GET);
    responseStream->SetResponseStreamFactory([body]() -> IOStream* {
      return Aws::New<StringStream>(LOG_TAG, body, std::ios_base::in | std::ios_base::binary);
    });
    auto response = Aws::MakeShared<StandardHttpResponse>(LOG_TAG, responseStream);
    response->SetResponseCode(HttpResponseCode::OK);
    mock_http_client_->AddResponseToReturn(response);
  }

  static SDKOptions options_;
  static std::shared_ptr<MockHttpClient> mock_http_client_;
  static std::shared_ptr<MockHttpClientFactory> mock_client_factory_;
#ifdef USE_AWS_MEMORY_MANAGEMENT
  static std::unique_ptr<ExactTestMemorySystem> test_memory_system;
#endif
  Environment::EnvironmentRAII m_unsetEnvVars{{
      {"AWS_SHARED_CREDENTIALS_FILE", ""},
      {"AWS_CONFIG_FILE", ""},
      {"AWS_DEFAULT_PROFILE", ""},
      {"AWS_PROFILE", ""},
      {"AWS_ACCESS_KEY_ID", ""},
      {"AWS_SECRET_ACCESS_KEY", ""},
      {"AWS_SESSION_TOKEN", ""},
      {"AWS_ACCOUNT_ID", ""},
      {"AWS_ACCOUNT_ID_ENDPOINT_MODE", ""},
      {"AWS_S3_USE_ARN_REGION", ""},
      {"AWS_EC2_METADATA_DISABLED", ""},
      {"AWS_DEFAULT_REGION", ""},
      {"AWS_REGION", ""},
      {"AWS_ENDPOINT_URL", ""},
      {"AWS_ENDPOINT_URL_S3_CONTROL", ""},
  }};
};

SDKOptions S3ControlUnitTest::options_;
std::shared_ptr<MockHttpClient> S3ControlUnitTest::mock_http_client_ = nullptr;
std::shared_ptr<MockHttpClientFactory> S3ControlUnitTest::mock_client_factory_ = nullptr;
#ifdef USE_AWS_MEMORY_MANAGEMENT
std::unique_ptr<ExactTestMemorySystem> S3ControlUnitTest::test_memory_system = nullptr;
#endif

namespace {
const char* LIST_ACCESS_POINTS_RESPONSE =
    R"(<?xml version="1.0" encoding="UTF-8"?><ListAccessPointsResult xmlns="http://awss3control.amazonaws.com/doc/2018-08-20/"></ListAccessPointsResult>)";
const char* GET_ACCESS_POINT_RESPONSE =
    R"(<?xml version="1.0" encoding="UTF-8"?><GetAccessPointResult xmlns="http://awss3control.amazonaws.com/doc/2018-08-20/"><Name>myaccesspoint</Name></GetAccessPointResult>)";
}  // namespace

TEST_F(S3ControlUnitTest, ShouldFailWhenArnRegionMismatchesAndUseArnRegionIsFalse) {
  S3ControlClientConfiguration configuration;
  configuration.region = "us-west-2";

  const auto client = MakeClient(configuration);
  QueueResponse(GET_ACCESS_POINT_RESPONSE);

  Model::GetAccessPointRequest request;
  request.SetAccountId(ARN_ACCOUNT_ID);
  request.SetName(OUTPOST_ACCESS_POINT_ARN);

  const auto outcome = client->GetAccessPoint(request);
  EXPECT_TRUE(!outcome.IsSuccess());
  EXPECT_EQ(outcome.GetError().GetMessage(),
            "Invalid configuration: region from ARN `us-east-1` does not match client region `us-west-2` and UseArnRegion is `false`");
}

TEST_F(S3ControlUnitTest, ShouldUseArnRegionWhenEnabled) {
  S3ControlClientConfiguration configuration;
  configuration.region = "us-west-2";
  configuration.useArnRegion = true;

  const auto client = MakeClient(configuration);
  QueueResponse(GET_ACCESS_POINT_RESPONSE);

  Model::GetAccessPointRequest request;
  request.SetAccountId(ARN_ACCOUNT_ID);
  request.SetName(OUTPOST_ACCESS_POINT_ARN);

  const auto outcome = client->GetAccessPoint(request);
  EXPECT_TRUE(outcome.IsSuccess());
  const auto requestSeen = mock_http_client_->GetMostRecentHttpRequest();
  EXPECT_EQ("s3-outposts.us-east-1.amazonaws.com", requestSeen.GetUri().GetAuthority());
}

TEST_F(S3ControlUnitTest, ShouldUseAccountIdFromConfigurationInEndpoint) {
  S3ControlClientConfiguration configuration;
  configuration.region = "us-east-1";
  configuration.accountId = "serenity";

  const auto client = MakeClient(configuration);
  QueueResponse(LIST_ACCESS_POINTS_RESPONSE);

  const Model::ListAccessPointsRequest request;

  const auto outcome = client->ListAccessPoints(request);
  EXPECT_TRUE(outcome.IsSuccess());
  const auto requestSeen = mock_http_client_->GetMostRecentHttpRequest();
  EXPECT_EQ("serenity.s3-control.us-east-1.amazonaws.com", requestSeen.GetUri().GetAuthority());
}

TEST_F(S3ControlUnitTest, ServiceSpecificBuiltInParametersReachTheEndpointProvider) {
  S3ControlClientConfiguration configuration;
  configuration.region = "us-east-1";
  configuration.accountId = "kaylee";
  configuration.useArnRegion = true;

  const auto client = MakeClient(configuration);
  const auto provider = std::static_pointer_cast<S3ControlEndpointProvider>(client->accessEndpointProvider());
  ASSERT_TRUE(provider != nullptr);

  const auto& builtIns = provider->GetBuiltInParameters();
  EXPECT_EQ("kaylee", builtIns.GetParameter("AccountId").GetStrValueNoCheck());
  EXPECT_TRUE(builtIns.GetParameter("UseArnRegion").GetBoolValueNoCheck());
}
