/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/core/client/ClientConfiguration.h>

#include <aws/sts/STSClient.h>
#include <aws/sts/STSErrors.h>
#include <aws/sts/model/GetCallerIdentityRequest.h>
#include <aws/sts/model/GetAccessKeyInfoRequest.h>
#include <aws/sts/model/AssumeRoleRequest.h>
#include <aws/sts/model/AssumeRoleWithSAMLRequest.h>
#include <aws/sts/model/AssumeRoleWithWebIdentityRequest.h>
#include <aws/sts/model/DecodeAuthorizationMessageRequest.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/testing/TestingEnvironment.h>

using namespace Aws::STS;
using namespace Aws::STS::Model;
using namespace Aws::Region;

namespace {

static const char* ALLOCATION_TAG = "STSIntegrationTest";

class STSIntegrationTest : public ::testing::Test
{
protected:
    std::shared_ptr<STSClient> m_client;

    void SetUp() override
    {
        Aws::Client::ClientConfiguration config;
        config.authPreferences = {smithy::SIGV4A_PREFERENCE};
        config.region = AWS_TEST_REGION;
        config.sigV4aSigningRegionSet = {"*"};
        m_client = Aws::MakeShared<STSClient>(ALLOCATION_TAG, config);
    }
};

TEST_F(STSIntegrationTest, TestGetCallerIdentity)
{
    auto outcome = m_client->GetCallerIdentity(GetCallerIdentityRequest{});
    AWS_ASSERT_SUCCESS(outcome);

    const auto& result = outcome.GetResult();
    EXPECT_FALSE(result.GetAccount().empty());
    EXPECT_FALSE(result.GetArn().empty());
    EXPECT_FALSE(result.GetUserId().empty());
}

TEST_F(STSIntegrationTest, TestGetAccessKeyInfo)
{
    // Use GetCallerIdentity to get our account, then look up our own access key
    auto callerOutcome = m_client->GetCallerIdentity(GetCallerIdentityRequest{});
    AWS_ASSERT_SUCCESS(callerOutcome);
    const Aws::String& accountId = callerOutcome.GetResult().GetAccount();

    // Use the access key from the environment/credentials chain
    Aws::String accessKeyId = Aws::Auth::DefaultAWSCredentialsProviderChain().GetAWSCredentials().GetAWSAccessKeyId();
    ASSERT_FALSE(accessKeyId.empty());

    auto outcome = m_client->GetAccessKeyInfo(GetAccessKeyInfoRequest{}.WithAccessKeyId(accessKeyId));
    AWS_ASSERT_SUCCESS(outcome);
    EXPECT_EQ(accountId, outcome.GetResult().GetAccount());
}

TEST_F(STSIntegrationTest, TestAssumeRoleWithInvalidArn)
{
    auto outcome = m_client->AssumeRole(
        AssumeRoleRequest{}.WithRoleArn("arn:aws:iam::123456789012:role/NonExistentRole")
                           .WithRoleSessionName("test-session"));
    EXPECT_FALSE(outcome.IsSuccess());
}

TEST_F(STSIntegrationTest, TestAssumeRoleWithSAMLInvalidAssertion)
{
    auto outcome = m_client->AssumeRoleWithSAML(
        AssumeRoleWithSAMLRequest{}
            .WithRoleArn("arn:aws:iam::123456789012:role/FakeRole")
            .WithPrincipalArn("arn:aws:iam::123456789012:saml-provider/FakeProvider")
            .WithSAMLAssertion("not-a-valid-assertion"));
    EXPECT_FALSE(outcome.IsSuccess());
}

TEST_F(STSIntegrationTest, TestAssumeRoleWithWebIdentityInvalidToken)
{
    auto outcome = m_client->AssumeRoleWithWebIdentity(
        AssumeRoleWithWebIdentityRequest{}
            .WithRoleArn("arn:aws:iam::123456789012:role/FakeRole")
            .WithRoleSessionName("test-session")
            .WithWebIdentityToken("not-a-valid-token"));
    EXPECT_FALSE(outcome.IsSuccess());
}

TEST_F(STSIntegrationTest, TestDecodeAuthorizationMessageInvalidMessage)
{
    auto outcome = m_client->DecodeAuthorizationMessage(
        DecodeAuthorizationMessageRequest{}.WithEncodedMessage("not-a-valid-encoded-message"));
    EXPECT_FALSE(outcome.IsSuccess());
    EXPECT_EQ(STSErrors::INVALID_AUTHORIZATION_MESSAGE, outcome.GetError().GetErrorType());
}

} // anonymous namespace
