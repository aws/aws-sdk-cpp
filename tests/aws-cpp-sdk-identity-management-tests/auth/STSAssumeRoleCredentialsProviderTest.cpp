/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <thread>

#include <aws/identity-management/auth/STSAssumeRoleCredentialsProvider.h>
#include <aws/sts/model/AssumeRoleRequest.h>
#include <aws/sts/STSClient.h>
#include <aws/core/utils/DateTime.h>
#include <gtest/gtest.h>
#include <aws/core/utils/memory/stl/AWSSet.h>

#include <cmath>
#include <thread>

using namespace Aws::Auth;
using namespace Aws::STS;
using namespace Aws::Utils;

namespace {

class MockSTSClient : public STSClient
{
public:
    MockSTSClient() : STSClient(AWSCredentials()), m_calledCount(0) {}

    Model::AssumeRoleOutcome AssumeRole(const Model::AssumeRoleRequest& request) const
    {
        m_calledCount++;
        m_capturedRequest = request;
        return m_mockedOutcome;
    }

    void MockAssumeRole(const Model::AssumeRoleOutcome& outcome)
    {
        m_mockedOutcome = outcome;
    }

    Model::AssumeRoleRequest CapturedRequest() const
    {
        return m_capturedRequest;
    }

    int CalledCount() const
    {
        return m_calledCount;
    }

private:
    mutable int m_calledCount;
    mutable Model::AssumeRoleRequest m_capturedRequest;
    Model::AssumeRoleOutcome m_mockedOutcome;
};

static const char* CLASS_TAG = "STSAssumeRoleCredentialsProviderTest";
static const char* ROLE_ARN = "arn:blah:blah:blah";
static const char* EXTERNAL_ID = "externalId";
static const char* SESSION_NAME = "sessionName";
static const char* ACCESS_KEY_ID_1 = "accessKeyId1";
static const char* SECRET_ACCESS_KEY_ID_1 = "secretAccessKeyId1";
static const char* SESSION_TOKEN_1 = "sessionToken1";
static const char* ACCESS_KEY_ID_2 = "accessKeyId2";
static const char* SECRET_ACCESS_KEY_ID_2 = "secretAccessKeyId2";
static const char* SESSION_TOKEN_2 = "sessionToken2";

TEST(STSAssumeRoleCredentialsProviderTest, TestCredentialsLoadAndCache)
{
    auto stsClient = Aws::MakeShared<MockSTSClient>(CLASS_TAG);

    DateTime expiryTime(DateTime::CurrentTimeMillis() + 70000);

    Model::Credentials stsCredentials;
        stsCredentials.WithAccessKeyId(ACCESS_KEY_ID_1)
            .WithSecretAccessKey(SECRET_ACCESS_KEY_ID_1)
            .WithSessionToken(SESSION_TOKEN_1)
            .WithExpiration(expiryTime);

    Model::AssumeRoleResult assumeRoleResult;
    assumeRoleResult.SetCredentials(stsCredentials);

    stsClient->MockAssumeRole(assumeRoleResult);

    STSAssumeRoleCredentialsProvider credsProvider(ROLE_ARN, SESSION_NAME, EXTERNAL_ID, DEFAULT_CREDS_LOAD_FREQ_SECONDS, stsClient);

    auto credentials = credsProvider.GetAWSCredentials();

    ASSERT_STREQ(ACCESS_KEY_ID_1, credentials.GetAWSAccessKeyId().c_str());
    ASSERT_STREQ(SECRET_ACCESS_KEY_ID_1, credentials.GetAWSSecretKey().c_str());
    ASSERT_STREQ(SESSION_TOKEN_1, credentials.GetSessionToken().c_str());

    auto request = stsClient->CapturedRequest();
    ASSERT_EQ(1, stsClient->CalledCount());
    ASSERT_STREQ(SESSION_NAME, request.GetRoleSessionName().c_str());
    ASSERT_STREQ(ROLE_ARN, request.GetRoleArn().c_str());
    ASSERT_EQ(DEFAULT_CREDS_LOAD_FREQ_SECONDS, request.GetDurationSeconds());
    ASSERT_STREQ(EXTERNAL_ID, request.GetExternalId().c_str());

    credentials = credsProvider.GetAWSCredentials();
    ASSERT_STREQ(ACCESS_KEY_ID_1, credentials.GetAWSAccessKeyId().c_str());
    ASSERT_STREQ(SECRET_ACCESS_KEY_ID_1, credentials.GetAWSSecretKey().c_str());
    ASSERT_STREQ(SESSION_TOKEN_1, credentials.GetSessionToken().c_str());
    ASSERT_EQ(DEFAULT_CREDS_LOAD_FREQ_SECONDS, request.GetDurationSeconds());
    //we should not have called multiple times.
    ASSERT_EQ(1, stsClient->CalledCount());
}

TEST(STSAssumeRoleCredentialsProviderTest, TestCredentialsCacheExpiry)
{
    auto stsClient = Aws::MakeShared<MockSTSClient>(CLASS_TAG);

    DateTime expiryTime(DateTime::CurrentTimeMillis() + 61000);

    Model::Credentials stsCredentials;
    stsCredentials.WithAccessKeyId(ACCESS_KEY_ID_1)
        .WithSecretAccessKey(SECRET_ACCESS_KEY_ID_1)
        .WithSessionToken(SESSION_TOKEN_1)
        .WithExpiration(expiryTime);

    Model::AssumeRoleResult assumeRoleResult;
    assumeRoleResult.SetCredentials(stsCredentials);

    stsClient->MockAssumeRole(assumeRoleResult);

    STSAssumeRoleCredentialsProvider credsProvider(ROLE_ARN, SESSION_NAME, EXTERNAL_ID, DEFAULT_CREDS_LOAD_FREQ_SECONDS, stsClient);

    auto credentials = credsProvider.GetAWSCredentials();

    ASSERT_STREQ(ACCESS_KEY_ID_1, credentials.GetAWSAccessKeyId().c_str());
    ASSERT_STREQ(SECRET_ACCESS_KEY_ID_1, credentials.GetAWSSecretKey().c_str());
    ASSERT_STREQ(SESSION_TOKEN_1, credentials.GetSessionToken().c_str());

    auto request = stsClient->CapturedRequest();
    ASSERT_EQ(1, stsClient->CalledCount());
    ASSERT_STREQ(SESSION_NAME, request.GetRoleSessionName().c_str());
    ASSERT_STREQ(ROLE_ARN, request.GetRoleArn().c_str());
    ASSERT_EQ(DEFAULT_CREDS_LOAD_FREQ_SECONDS, request.GetDurationSeconds());
    ASSERT_STREQ(EXTERNAL_ID, request.GetExternalId().c_str());

    stsCredentials.WithAccessKeyId(ACCESS_KEY_ID_2)
        .WithSecretAccessKey(SECRET_ACCESS_KEY_ID_2)
        .WithSessionToken(SESSION_TOKEN_2)
        .WithExpiration(expiryTime);

    assumeRoleResult.SetCredentials(stsCredentials);

    stsClient->MockAssumeRole(assumeRoleResult);

    std::this_thread::sleep_for(std::chrono::seconds(1));

    credentials = credsProvider.GetAWSCredentials();
    request = stsClient->CapturedRequest();
    ASSERT_STREQ(ACCESS_KEY_ID_2, credentials.GetAWSAccessKeyId().c_str());
    ASSERT_STREQ(SECRET_ACCESS_KEY_ID_2, credentials.GetAWSSecretKey().c_str());
    ASSERT_STREQ(SESSION_TOKEN_2, credentials.GetSessionToken().c_str());
    ASSERT_EQ(DEFAULT_CREDS_LOAD_FREQ_SECONDS, request.GetDurationSeconds());
    ASSERT_STREQ(EXTERNAL_ID, request.GetExternalId().c_str());

    //should have been called twice.
    ASSERT_EQ(2, stsClient->CalledCount());
}

//Fail once then make sure next call recovers.
TEST(STSAssumeRoleCredentialsProviderTest, TestCredentialsErrorThenRecovery)
{
    auto stsClient = Aws::MakeShared<MockSTSClient>(CLASS_TAG);

    STSAssumeRoleCredentialsProvider credsProvider(ROLE_ARN, SESSION_NAME, EXTERNAL_ID, DEFAULT_CREDS_LOAD_FREQ_SECONDS, stsClient);

    Aws::Client::AWSError<STSErrors> error(STSErrors::INVALID_ACTION, "blah", "blah", false);
    stsClient->MockAssumeRole(error);

    auto credentials = credsProvider.GetAWSCredentials();

    ASSERT_TRUE(credentials.GetAWSAccessKeyId().empty());
    ASSERT_TRUE(credentials.GetAWSSecretKey().empty());
    ASSERT_TRUE(credentials.GetSessionToken().empty());

    auto request = stsClient->CapturedRequest();
    ASSERT_EQ(1, stsClient->CalledCount());
    ASSERT_STREQ(SESSION_NAME, request.GetRoleSessionName().c_str());
    ASSERT_STREQ(ROLE_ARN, request.GetRoleArn().c_str());
    ASSERT_EQ(DEFAULT_CREDS_LOAD_FREQ_SECONDS, request.GetDurationSeconds());
    ASSERT_STREQ(EXTERNAL_ID, request.GetExternalId().c_str());

    DateTime expiryTime(DateTime::CurrentTimeMillis() + 61000);

    Model::Credentials stsCredentials;
    stsCredentials.WithAccessKeyId(ACCESS_KEY_ID_1)
        .WithSecretAccessKey(SECRET_ACCESS_KEY_ID_1)
        .WithSessionToken(SESSION_TOKEN_1)
        .WithExpiration(expiryTime);

    Model::AssumeRoleResult assumeRoleResult;
    assumeRoleResult.SetCredentials(stsCredentials);

    stsClient->MockAssumeRole(assumeRoleResult);

    credentials = credsProvider.GetAWSCredentials();
    request = stsClient->CapturedRequest();
    ASSERT_STREQ(ACCESS_KEY_ID_1, credentials.GetAWSAccessKeyId().c_str());
    ASSERT_STREQ(SECRET_ACCESS_KEY_ID_1, credentials.GetAWSSecretKey().c_str());
    ASSERT_STREQ(SESSION_TOKEN_1, credentials.GetSessionToken().c_str());
    ASSERT_EQ(DEFAULT_CREDS_LOAD_FREQ_SECONDS, request.GetDurationSeconds());
    ASSERT_STREQ(EXTERNAL_ID, request.GetExternalId().c_str());

    //should have been called twice.
    ASSERT_EQ(2, stsClient->CalledCount());
}
}
