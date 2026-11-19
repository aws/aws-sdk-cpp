/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

/*
 * Core pieces a service's configuration uses to build its own interceptors and signer:
 * ExpectHeaderInterceptor, UserAgentFeatureInterceptor, UserAgent::FeatureForAccountIdEndpointMode,
 * and the SigV4a signer's configured region set.
 */

#include <aws/core/AmazonWebServiceRequest.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/features/ExpectHeaderInterceptor.h>
#include <smithy/client/features/UserAgentFeatureInterceptor.h>
#include <smithy/identity/identity/AwsCredentialIdentity.h>
#include <smithy/identity/signer/built-in/SigV4aSigner.h>
#include <smithy/identity/signer/built-in/SignerProperties.h>
#include <smithy/interceptor/InterceptorContext.h>

using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Http::Standard;

namespace {
const char ALLOCATION_TAG[] = "ServiceInterceptorsTest";

class FakeRequest : public Aws::AmazonWebServiceRequest {
 public:
  explicit FakeRequest(bool streaming) : m_streaming(streaming) {}
  std::shared_ptr<Aws::IOStream> GetBody() const override { return nullptr; }
  Aws::Http::HeaderValueCollection GetHeaders() const override { return {}; }
  const char* GetServiceRequestName() const override { return "FakeRequest"; }
  bool IsStreaming() const override { return m_streaming; }

 private:
  bool m_streaming;
};

std::shared_ptr<HttpRequest> MakeHttpRequest() {
  return Aws::MakeShared<StandardHttpRequest>(ALLOCATION_TAG, "https://example.amazonaws.com", HttpMethod::HTTP_PUT);
}
}  // namespace

class ServiceInterceptorsTest : public Aws::Testing::AwsCppSdkGTestSuite {};

TEST_F(ServiceInterceptorsTest, SharedConfigurationCreatesNoInterceptors) {
  ClientConfiguration configuration;
  const auto httpClient = CreateHttpClient(configuration);
  EXPECT_TRUE(configuration.CreateInterceptors({httpClient}).empty());
}

TEST_F(ServiceInterceptorsTest, ExpectHeaderInterceptorAddsHeaderToStreamingRequestsOnly) {
  smithy::client::features::ExpectHeaderInterceptor interceptor;

  const FakeRequest streaming(true);
  smithy::interceptor::InterceptorContext streamingContext(streaming);
  streamingContext.SetTransmitRequest(MakeHttpRequest());
  const auto streamingOutcome = interceptor.ModifyBeforeSigning(streamingContext);
  ASSERT_TRUE(streamingOutcome.IsSuccess());
  EXPECT_EQ(EXPECT_100_CONTINUE_VALUE, streamingOutcome.GetResult()->GetHeaderValue(EXPECT_HEADER));

  const FakeRequest notStreaming(false);
  smithy::interceptor::InterceptorContext notStreamingContext(notStreaming);
  notStreamingContext.SetTransmitRequest(MakeHttpRequest());
  const auto notStreamingOutcome = interceptor.ModifyBeforeSigning(notStreamingContext);
  ASSERT_TRUE(notStreamingOutcome.IsSuccess());
  EXPECT_FALSE(notStreamingOutcome.GetResult()->HasHeader(EXPECT_HEADER));
}

TEST_F(ServiceInterceptorsTest, UserAgentFeatureInterceptorAddsItsFeaturesToTheRequest) {
  smithy::client::features::UserAgentFeatureInterceptor interceptor({UserAgentFeature::ACCOUNT_ID_MODE_REQUIRED});

  const FakeRequest request(false);
  smithy::interceptor::InterceptorContext context(request);
  context.SetTransmitRequest(MakeHttpRequest());
  ASSERT_TRUE(interceptor.ModifyBeforeSigning(context).IsSuccess());

  const auto features = request.GetUserAgentFeatures();
  EXPECT_EQ(1u, features.size());
  EXPECT_EQ(1u, features.count(UserAgentFeature::ACCOUNT_ID_MODE_REQUIRED));
}

TEST_F(ServiceInterceptorsTest, FeatureForAccountIdEndpointModeMapsKnownModes) {
  EXPECT_EQ(UserAgentFeature::ACCOUNT_ID_MODE_PREFERRED, UserAgent::FeatureForAccountIdEndpointMode("preferred").value());
  EXPECT_EQ(UserAgentFeature::ACCOUNT_ID_MODE_DISABLED, UserAgent::FeatureForAccountIdEndpointMode("disabled").value());
  EXPECT_EQ(UserAgentFeature::ACCOUNT_ID_MODE_REQUIRED, UserAgent::FeatureForAccountIdEndpointMode("required").value());
  EXPECT_FALSE(UserAgent::FeatureForAccountIdEndpointMode("").has_value());
  EXPECT_FALSE(UserAgent::FeatureForAccountIdEndpointMode("unknown").has_value());
}

TEST_F(ServiceInterceptorsTest, SigV4aConfiguredRegionSetWinsOverEndpointSigningRegion) {
  const smithy::AwsCredentialIdentity identity{"AKIDEXAMPLE", "wJalrXUtnFEMI/K7MDENG/bPxRfiCYEXAMPLEKEY", {}, {}, {}};
  smithy::AwsSigV4aSigner::SigningProperties properties;
  properties.emplace(smithy::SIGNER_REGION_PROPERTY, Aws::Crt::Variant<Aws::String, bool>(Aws::String("*")));

  smithy::AwsSigV4aSigner configured("service", "us-east-1", {"us-west-2", "eu-west-1"});
  const auto configuredRequest = MakeHttpRequest();
  configured.sign(configuredRequest, identity, properties);
  EXPECT_EQ("us-west-2,eu-west-1", configuredRequest->GetSigningRegion());

  smithy::AwsSigV4aSigner notConfigured("service", "us-east-1");
  const auto notConfiguredRequest = MakeHttpRequest();
  notConfigured.sign(notConfiguredRequest, identity, properties);
  EXPECT_EQ("*", notConfiguredRequest->GetSigningRegion());

  const auto regionOnlyRequest = MakeHttpRequest();
  notConfigured.sign(regionOnlyRequest, identity, {});
  EXPECT_EQ("us-east-1", regionOnlyRequest->GetSigningRegion());
}
