/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentials.h>
#include <aws/s3-crt/ClientConfiguration.h>
#include <aws/s3-crt/S3CrtClient.h>
#include <aws/s3-crt/S3CrtEndpointProvider.h>
#include <aws/testing/MemoryTesting.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <gtest/gtest.h>

#include <memory>

using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Auth;
using namespace Aws::S3Crt;

namespace {
const char* LOG_TAG = "S3CrtUnitTest";
const char* MRAP_BUCKET_ARN = "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap";
}  // namespace

class S3CrtUnitTest : public testing::Test {
 protected:
  static void SetUpTestSuite() {
#ifdef USE_AWS_MEMORY_MANAGEMENT
    test_memory_system.reset(new ExactTestMemorySystem(1024, 128));
    options_.memoryManagementOptions.memoryManager = test_memory_system.get();
#endif
    InitAPI(options_);
  }

  static void TearDownTestSuite() {
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

  static std::shared_ptr<Aws::S3Crt::Endpoint::S3CrtEndpointProvider> MakeProvider(const S3CrtClientConfiguration& configuration) {
    auto provider = Aws::MakeShared<Aws::S3Crt::Endpoint::S3CrtEndpointProvider>(LOG_TAG);
    provider->InitBuiltInParameters(configuration, "s3");
    return provider;
  }

  static SDKOptions options_;
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
      {"AWS_S3_USE_ARN_REGION", ""},
      {"AWS_EC2_METADATA_DISABLED", ""},
      {"AWS_DEFAULT_REGION", ""},
      {"AWS_REGION", ""},
      {"AWS_ENDPOINT_URL", ""},
      {"AWS_ENDPOINT_URL_S3", ""},
  }};
};

SDKOptions S3CrtUnitTest::options_;
#ifdef USE_AWS_MEMORY_MANAGEMENT
std::unique_ptr<ExactTestMemorySystem> S3CrtUnitTest::test_memory_system = nullptr;
#endif

TEST_F(S3CrtUnitTest, ServiceSpecificBuiltInParametersSurviveServiceNameInit) {
  S3CrtClientConfiguration configuration;
  configuration.region = "us-east-1";
  configuration.useVirtualAddressing = false;
  configuration.useArnRegion = true;
  configuration.disableMultiRegionAccessPoints = true;
  configuration.disableS3ExpressAuth = true;
  configuration.useUSEast1RegionalEndPointOption = US_EAST_1_REGIONAL_ENDPOINT_OPTION::LEGACY;

  const auto provider = MakeProvider(configuration);
  const auto& builtIns = provider->GetBuiltInParameters();

  EXPECT_TRUE(builtIns.GetParameter("ForcePathStyle").GetBoolValueNoCheck());
  EXPECT_TRUE(builtIns.GetParameter("UseArnRegion").GetBoolValueNoCheck());
  EXPECT_TRUE(builtIns.GetParameter("DisableMultiRegionAccessPoints").GetBoolValueNoCheck());
  EXPECT_TRUE(builtIns.GetParameter("DisableS3ExpressSessionAuth").GetBoolValueNoCheck());
  EXPECT_TRUE(builtIns.GetParameter("UseGlobalEndpoint").GetBoolValueNoCheck());
}

TEST_F(S3CrtUnitTest, ClientPropagatesServiceSpecificBuiltInParameters) {
  S3CrtClientConfiguration configuration;
  configuration.region = "us-east-1";
  configuration.useVirtualAddressing = false;
  configuration.useArnRegion = true;

  const AWSCredentials credentials{"mal", "reynolds"};
  S3CrtClient client{credentials, configuration};

  const auto provider = std::static_pointer_cast<Aws::S3Crt::Endpoint::S3CrtEndpointProvider>(client.accessEndpointProvider());
  ASSERT_TRUE(provider != nullptr);

  const auto& builtIns = provider->GetBuiltInParameters();
  EXPECT_TRUE(builtIns.GetParameter("ForcePathStyle").GetBoolValueNoCheck());
  EXPECT_TRUE(builtIns.GetParameter("UseArnRegion").GetBoolValueNoCheck());
}

TEST_F(S3CrtUnitTest, ForcePathStyleResolvesPathStyleEndpoint) {
  S3CrtClientConfiguration configuration;
  configuration.region = "us-east-1";
  configuration.useVirtualAddressing = false;

  const auto provider = MakeProvider(configuration);
  const Aws::Endpoint::EndpointParameters requestParameters{
      {"Bucket", Aws::String{"serenity"}, Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT}};

  const auto outcome = provider->ResolveEndpoint(requestParameters);
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ("https://s3.us-east-1.amazonaws.com/serenity", outcome.GetResult().GetURI().GetURIString());
}

TEST_F(S3CrtUnitTest, LegacyUsEast1OptionResolvesGlobalEndpoint) {
  S3CrtClientConfiguration configuration;
  configuration.region = "us-east-1";
  configuration.useUSEast1RegionalEndPointOption = US_EAST_1_REGIONAL_ENDPOINT_OPTION::LEGACY;

  const auto provider = MakeProvider(configuration);
  const Aws::Endpoint::EndpointParameters requestParameters{
      {"Bucket", Aws::String{"serenity"}, Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT}};

  const auto outcome = provider->ResolveEndpoint(requestParameters);
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ("https://serenity.s3.amazonaws.com", outcome.GetResult().GetURI().GetURIString());
}

TEST_F(S3CrtUnitTest, DisabledMultiRegionAccessPointsRejectsMrapArn) {
  S3CrtClientConfiguration configuration;
  configuration.region = "us-east-1";
  configuration.disableMultiRegionAccessPoints = true;

  const auto provider = MakeProvider(configuration);
  const Aws::Endpoint::EndpointParameters requestParameters{
      {"Bucket", Aws::String{MRAP_BUCKET_ARN}, Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT}};

  const auto outcome = provider->ResolveEndpoint(requestParameters);
  EXPECT_TRUE(!outcome.IsSuccess());
  EXPECT_EQ("Invalid configuration: Multi-Region Access Point ARNs are disabled.", outcome.GetError().GetMessage());
}
