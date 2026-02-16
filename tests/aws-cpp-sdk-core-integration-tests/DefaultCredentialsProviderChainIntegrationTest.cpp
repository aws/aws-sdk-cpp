/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/FileSystemUtils.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <gtest/gtest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Environment;
using namespace Aws::Utils;

/**
 * Integration tests for DefaultAWSCredentialsProviderChain
 * These tests use real credentials from the environment (e.g., via ada)
 */
class DefaultCredentialsProviderChainIntegrationTest : public testing::Test
{
protected:
    DefaultCredentialsProviderChainIntegrationTest()
    {
        m_options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Debug;
        InitAPI(m_options);
    }

    ~DefaultCredentialsProviderChainIntegrationTest()
    {
        ShutdownAPI(m_options);
    }

    SDKOptions m_options;
};

TEST_F(DefaultCredentialsProviderChainIntegrationTest, ChainResolvesCredentialsFromEnvironment)
{
    // This test assumes AWS credentials are set via environment (e.g., ada)
    DefaultAWSCredentialsProviderChain chain;
    auto creds = chain.GetAWSCredentials();

    // Should get valid credentials from environment
    EXPECT_FALSE(creds.IsEmpty());
    EXPECT_FALSE(creds.GetAWSAccessKeyId().empty());
    EXPECT_FALSE(creds.GetAWSSecretKey().empty());
}

TEST_F(DefaultCredentialsProviderChainIntegrationTest, ChainCachesCredentials)
{
    DefaultAWSCredentialsProviderChain chain;
    
    // First call
    auto creds1 = chain.GetAWSCredentials();
    EXPECT_FALSE(creds1.IsEmpty());
    
    // Second call should return same cached credentials
    auto creds2 = chain.GetAWSCredentials();
    EXPECT_FALSE(creds2.IsEmpty());
    EXPECT_EQ(creds1.GetAWSAccessKeyId(), creds2.GetAWSAccessKeyId());
    EXPECT_EQ(creds1.GetAWSSecretKey(), creds2.GetAWSSecretKey());
}

TEST_F(DefaultCredentialsProviderChainIntegrationTest, ChainWithCustomProfile)
{
    // Create temporary credentials file with custom profile
    TempFile credsFile{std::ios_base::out | std::ios_base::trunc};
    credsFile << "[custom-test-profile]\n";
    credsFile << "aws_access_key_id = AKIAIOSFODNN7EXAMPLE\n";
    credsFile << "aws_secret_access_key = wJalrXUtnFEMI/K7MDENG/bPxRfiCYEXAMPLEKEY\n";
    credsFile.close();

    // Create temporary config file
    TempFile configFile{std::ios_base::out | std::ios_base::trunc};
    configFile << "[profile custom-test-profile]\n";
    configFile << "region = us-west-2\n";
    configFile.close();

    const EnvironmentRAII environmentRAII{{
        {"AWS_SHARED_CREDENTIALS_FILE", credsFile.GetFileName()},
        {"AWS_CONFIG_FILE", configFile.GetFileName()},
        {"AWS_ACCESS_KEY_ID", ""},
        {"AWS_SECRET_ACCESS_KEY", ""},
    }};

    Aws::Config::ReloadCachedConfigFile();

    Client::ClientConfiguration::CredentialProviderConfiguration config;
    config.profile = "custom-test-profile";
    DefaultAWSCredentialsProviderChain chain(config);
    
    auto creds = chain.GetAWSCredentials();

    EXPECT_STREQ("AKIAIOSFODNN7EXAMPLE", creds.GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("wJalrXUtnFEMI/K7MDENG/bPxRfiCYEXAMPLEKEY", creds.GetAWSSecretKey().c_str());
}

TEST_F(DefaultCredentialsProviderChainIntegrationTest, ChainWithProcessCredentials)
{
    // Create temporary config file with credential_process
    TempFile configFile{std::ios_base::out | std::ios_base::trunc};
    configFile << "[default]\n";
    configFile << "credential_process = echo '{\"Version\": 1, \"AccessKeyId\": \"AKIAPROCESSEXAMPLE\", \"SecretAccessKey\": \"ProcessSecretKeyExample\"}'\n";
    configFile.close();

    // Create empty credentials file to override ~/.aws/credentials
    TempFile credsFile{std::ios_base::out | std::ios_base::trunc};
    credsFile << "[default]\n";
    credsFile.close();

    const EnvironmentRAII environmentRAII{{
        {"AWS_CONFIG_FILE", configFile.GetFileName()},
        {"AWS_SHARED_CREDENTIALS_FILE", credsFile.GetFileName()},
        {"AWS_ACCESS_KEY_ID", ""},
        {"AWS_SECRET_ACCESS_KEY", ""},
        {"AWS_SESSION_TOKEN", ""},
        {"AWS_EC2_METADATA_DISABLED", "true"},
    }};

    Aws::Config::ReloadCachedConfigFile();

    DefaultAWSCredentialsProviderChain chain;
    auto creds = chain.GetAWSCredentials();

    EXPECT_STREQ("AKIAPROCESSEXAMPLE", creds.GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("ProcessSecretKeyExample", creds.GetAWSSecretKey().c_str());
}

TEST_F(DefaultCredentialsProviderChainIntegrationTest, ChainPrecedenceEnvironmentOverProfile)
{
    // Create temporary credentials file
    TempFile credsFile{std::ios_base::out | std::ios_base::trunc};
    credsFile << "[default]\n";
    credsFile << "aws_access_key_id = AKIAPROFILEEXAMPLE\n";
    credsFile << "aws_secret_access_key = ProfileSecretKeyExample\n";
    credsFile.close();

    const EnvironmentRAII environmentRAII{{
        {"AWS_SHARED_CREDENTIALS_FILE", credsFile.GetFileName()},
        {"AWS_ACCESS_KEY_ID", "AKIAENVEXAMPLE"},
        {"AWS_SECRET_ACCESS_KEY", "EnvSecretKeyExample"},
    }};

    Aws::Config::ReloadCachedConfigFile();

    DefaultAWSCredentialsProviderChain chain;
    auto creds = chain.GetAWSCredentials();

    // Environment should take precedence
    EXPECT_STREQ("AKIAENVEXAMPLE", creds.GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("EnvSecretKeyExample", creds.GetAWSSecretKey().c_str());
}

TEST_F(DefaultCredentialsProviderChainIntegrationTest, ChainHandlesSessionToken)
{
    // Create temporary credentials file with session token
    TempFile credsFile{std::ios_base::out | std::ios_base::trunc};
    credsFile << "[default]\n";
    credsFile << "aws_access_key_id = ASIATEMPORARYEXAMPLE\n";
    credsFile << "aws_secret_access_key = TempSecretKeyExample\n";
    credsFile << "aws_session_token = TempSessionTokenExample123\n";
    credsFile.close();

    const EnvironmentRAII environmentRAII{{
        {"AWS_SHARED_CREDENTIALS_FILE", credsFile.GetFileName()},
        {"AWS_ACCESS_KEY_ID", ""},
        {"AWS_SECRET_ACCESS_KEY", ""},
        {"AWS_EC2_METADATA_DISABLED", "true"},
    }};

    Aws::Config::ReloadCachedConfigFile();

    DefaultAWSCredentialsProviderChain chain;
    auto creds = chain.GetAWSCredentials();

    EXPECT_STREQ("ASIATEMPORARYEXAMPLE", creds.GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("TempSecretKeyExample", creds.GetAWSSecretKey().c_str());
    EXPECT_STREQ("TempSessionTokenExample123", creds.GetSessionToken().c_str());
}

TEST_F(DefaultCredentialsProviderChainIntegrationTest, ChainReturnsEmptyWhenNoCredentialsAvailable)
{
    const EnvironmentRAII environmentRAII{{
        {"AWS_ACCESS_KEY_ID", ""},
        {"AWS_SECRET_ACCESS_KEY", ""},
        {"AWS_SHARED_CREDENTIALS_FILE", "/nonexistent/credentials"},
        {"AWS_CONFIG_FILE", "/nonexistent/config"},
        {"AWS_EC2_METADATA_DISABLED", "true"},
    }};

    Aws::Config::ReloadCachedConfigFile();

    DefaultAWSCredentialsProviderChain chain;
    auto creds = chain.GetAWSCredentials();

    EXPECT_TRUE(creds.IsEmpty());
}
