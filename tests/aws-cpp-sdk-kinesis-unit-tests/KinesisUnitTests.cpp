/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentials.h>
#include <aws/kinesis/KinesisClient.h>
#include <aws/kinesis/KinesisClientConfiguration.h>
#include <aws/kinesis/KinesisEndpointProvider.h>
#include <aws/kinesis/model/PutRecordRequest.h>
#include <aws/testing/MemoryTesting.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/utils/UserAgentUtils.h>
#include <gtest/gtest.h>

#include <memory>

using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Http::Standard;
using namespace Aws::Kinesis;

namespace {
const char* LOG_TAG = "KinesisUnitTest";
}  // namespace

class KinesisUnitTest : public testing::Test {
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

  static std::shared_ptr<KinesisClient> MakeClient(const KinesisClientConfiguration& configuration) {
    const AWSCredentials credentials{"mal", "reynolds"};
    return Aws::MakeShared<KinesisClient>(LOG_TAG, credentials, Aws::MakeShared<KinesisEndpointProvider>(LOG_TAG), configuration);
  }

  static void QueueResponse(const char* body) {
    auto responseStream = Aws::MakeShared<StandardHttpRequest>(LOG_TAG, "serenity.firefly/streams", HttpMethod::HTTP_GET);
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
      {"AWS_EC2_METADATA_DISABLED", ""},
      {"AWS_DEFAULT_REGION", ""},
      {"AWS_REGION", ""},
      {"AWS_ENDPOINT_URL", ""},
      {"AWS_ENDPOINT_URL_KINESIS", ""},
  }};
};

SDKOptions KinesisUnitTest::options_;
std::shared_ptr<MockHttpClient> KinesisUnitTest::mock_http_client_ = nullptr;
std::shared_ptr<MockHttpClientFactory> KinesisUnitTest::mock_client_factory_ = nullptr;
#ifdef USE_AWS_MEMORY_MANAGEMENT
std::unique_ptr<ExactTestMemorySystem> KinesisUnitTest::test_memory_system = nullptr;
#endif

namespace {
const char* LIST_STREAMS_RESPONSE = R"({"StreamNames": ["Serenity"], "HasMoreStreams": false})";
const char* PUT_RECORD_RESPONSE = R"({"SequenceNumber": "49590338271490256608559692538361571095921575989136588898", "ShardId": "shardId-000000000000"})";
}  // namespace

TEST_F(KinesisUnitTest, ShouldUseAccountIDEndpointSetOnConfiguration) {
  KinesisClientConfiguration configuration;
  configuration.region = "us-east-1";
  configuration.accountId = "serenity";

  const auto accountIdClient = MakeClient(configuration);
  QueueResponse(LIST_STREAMS_RESPONSE);

  const auto listStreamsOutcome = accountIdClient->ListStreams();
  EXPECT_TRUE(listStreamsOutcome.IsSuccess());
  const auto requestSeen = mock_http_client_->GetMostRecentHttpRequest();
  EXPECT_EQ("https://serenity.control-kinesis.us-east-1.amazonaws.com", requestSeen.GetUri().GetURIString());
  const auto features = GetFeaturesForRequest(requestSeen);
  EXPECT_TRUE(!features.empty());
  EXPECT_TRUE(std::find(features.begin(), features.end(), "P") != features.end());
}

TEST_F(KinesisUnitTest, ShouldUseAccountIDEndpointForDataPlaneOperation) {
  KinesisClientConfiguration configuration;
  configuration.region = "us-east-1";
  configuration.accountId = "firefly";

  const auto accountIdClient = MakeClient(configuration);
  QueueResponse(PUT_RECORD_RESPONSE);

  Model::PutRecordRequest putRecordRequest;
  putRecordRequest.SetStreamName("Serenity");
  putRecordRequest.SetPartitionKey("wash");
  Aws::Utils::ByteBuffer data{reinterpret_cast<const unsigned char*>("shiny"), 5};
  putRecordRequest.SetData(data);

  const auto putRecordOutcome = accountIdClient->PutRecord(putRecordRequest);
  EXPECT_TRUE(putRecordOutcome.IsSuccess());
  const auto requestSeen = mock_http_client_->GetMostRecentHttpRequest();
  EXPECT_EQ("https://firefly.data-kinesis.us-east-1.amazonaws.com", requestSeen.GetUri().GetURIString());
}

TEST_F(KinesisUnitTest, ShouldNotUseAccountIDEndpointWhenDisabled) {
  KinesisClientConfiguration configuration;
  configuration.region = "us-east-1";
  configuration.accountId = "jayne";
  configuration.accountIdEndpointMode = "disabled";

  const auto accountIdClient = MakeClient(configuration);
  QueueResponse(LIST_STREAMS_RESPONSE);

  const auto listStreamsOutcome = accountIdClient->ListStreams();
  EXPECT_TRUE(listStreamsOutcome.IsSuccess());
  const auto requestSeen = mock_http_client_->GetMostRecentHttpRequest();
  EXPECT_EQ("https://kinesis.us-east-1.amazonaws.com", requestSeen.GetUri().GetURIString());
  const auto features = GetFeaturesForRequest(requestSeen);
  EXPECT_TRUE(!features.empty());
  EXPECT_TRUE(std::find(features.begin(), features.end(), "Q") != features.end());
}

TEST_F(KinesisUnitTest, ShouldFailWhenNoAccountIDAndRequired) {
  KinesisClientConfiguration configuration;
  configuration.region = "us-east-1";
  configuration.accountIdEndpointMode = "required";

  const auto accountIdClient = MakeClient(configuration);
  QueueResponse(LIST_STREAMS_RESPONSE);

  const auto listStreamsOutcome = accountIdClient->ListStreams();
  EXPECT_TRUE(!listStreamsOutcome.IsSuccess());
  EXPECT_EQ(listStreamsOutcome.GetError().GetMessage(),
            "AccountIdEndpointMode is required but no AccountID was provided or able to be loaded");
}

TEST_F(KinesisUnitTest, ShouldWorkWhenAccountIDPresentAndRequired) {
  KinesisClientConfiguration configuration;
  configuration.region = "us-east-1";
  configuration.accountId = "kaylee";
  configuration.accountIdEndpointMode = "required";

  const auto accountIdClient = MakeClient(configuration);
  QueueResponse(LIST_STREAMS_RESPONSE);

  const auto listStreamsOutcome = accountIdClient->ListStreams();
  EXPECT_TRUE(listStreamsOutcome.IsSuccess());
  const auto requestSeen = mock_http_client_->GetMostRecentHttpRequest();
  EXPECT_EQ("https://kaylee.control-kinesis.us-east-1.amazonaws.com", requestSeen.GetUri().GetURIString());
  const auto features = GetFeaturesForRequest(requestSeen);
  EXPECT_TRUE(!features.empty());
  EXPECT_TRUE(std::find(features.begin(), features.end(), "R") != features.end());
}

TEST_F(KinesisUnitTest, AccountIdBuiltInParametersReachTheEndpointProvider) {
  KinesisClientConfiguration configuration;
  configuration.region = "us-east-1";
  configuration.accountId = "inara";
  configuration.accountIdEndpointMode = "required";

  const auto accountIdClient = MakeClient(configuration);
  const auto provider = std::static_pointer_cast<KinesisEndpointProvider>(accountIdClient->accessEndpointProvider());
  ASSERT_TRUE(provider != nullptr);

  const auto& builtIns = provider->GetBuiltInParameters();
  EXPECT_EQ("inara", builtIns.GetParameter("AccountId").GetStrValueNoCheck());
  EXPECT_EQ("required", builtIns.GetParameter("AccountIdEndpointMode").GetStrValueNoCheck());
}
