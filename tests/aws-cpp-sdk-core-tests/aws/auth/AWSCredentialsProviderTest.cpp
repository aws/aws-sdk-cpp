/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/mocks/aws/auth/MockAWSHttpResourceClient.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/config/AWSProfileConfigLoader.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/AWSError.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/auth/STSCredentialsProvider.h>
#include <aws/core/client/SpecifiedRetryableErrorsRetryStrategy.h>
#include <thread>
#include <fstream>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/auth/SSOCredentialsProvider.h>

static const char *AllocationTag = "AWSCredentialsProviderTest";

using namespace Aws::Auth;
using namespace Aws::Utils;
using namespace Aws::Client;
using namespace Aws::FileSystem;
using namespace Aws::Http;
using namespace Aws::Http::Standard;

class ProfileConfigFileAWSCredentialsProviderTest : public Aws::Testing::AwsCppSdkGTestSuite
{
public:
    void SetUp()
    {
        SaveEnvironmentVariable("AWS_SHARED_CREDENTIALS_FILE");
        SaveEnvironmentVariable("AWS_DEFAULT_PROFILE");
        SaveEnvironmentVariable("AWS_PROFILE");

        Aws::FileSystem::CreateDirectoryIfNotExists(ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory().c_str());
        Aws::StringStream ss;
        ss << ProfileConfigFileAWSCredentialsProvider::GetCredentialsProfileFilename() << "_blah" << std::this_thread::get_id();
        m_credsFileName = ss.str();

        Aws::Environment::SetEnv("AWS_SHARED_CREDENTIALS_FILE", m_credsFileName.c_str(), 1);
        Aws::Environment::UnSetEnv("AWS_DEFAULT_PROFILE");
        Aws::Environment::UnSetEnv("AWS_PROFILE");
    }

    void TearDown()
    {
        RestoreEnvironmentVariables();
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

    Aws::Vector<std::pair<const char*, Aws::String>> m_environment;
    Aws::String m_credsFileName;
};

TEST_F(ProfileConfigFileAWSCredentialsProviderTest, TestDefaultConfig)
{
    struct ReloadableProfileConfigProvider : ProfileConfigFileAWSCredentialsProvider
    {
        void ReloadNow()
        {
            Reload();
        }
    };

    Aws::OFStream credsFile(m_credsFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

    credsFile << std::endl;
    credsFile << "[Somebody Else ]" << std::endl;
    credsFile << "aws_access_key_id = SomebodyElseAccessId" << std::endl;
    credsFile << "something else to break the parser" << std::endl;
    credsFile << "#test comment" << std::endl;
    credsFile << "[default]" << std::endl;
    credsFile << "aws_access_key_id = DefaultAccessKey" << std::endl;
    credsFile << "aws_secret_access_key=DefaultSecretKey " << std::endl;
    credsFile << "aws_session_token=DefaultSessionToken" << std::endl;
    credsFile << std::endl;
    credsFile << " [Somebody Else Again]" << std::endl;
    credsFile << "aws_secret_access_key = SomebodyElseAgainAccessId" << std::endl;
    credsFile << " aws_secret_access_key=SomebodyElseAgainSecretKey" << std::endl;
    credsFile << "aws_session_token=SomebodyElseAgainSessionToken" << std::endl;
    credsFile.close();

    ReloadableProfileConfigProvider provider;
    EXPECT_STREQ("DefaultAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("DefaultSecretKey", provider.GetAWSCredentials().GetAWSSecretKey().c_str());

    Aws::FileSystem::RemoveFileIfExists(m_credsFileName.c_str());
    provider.ReloadNow();
    EXPECT_STREQ("", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("", provider.GetAWSCredentials().GetAWSSecretKey().c_str());
}

class EnvironmentModifyingTest : public Aws::Testing::AwsCppSdkGTestSuite
{
public:

    void SetUp()
    {
        SaveEnvironmentVariable("AWS_SHARED_CREDENTIALS_FILE");
        SaveEnvironmentVariable("AWS_CONFIG_FILE");
        SaveEnvironmentVariable("AWS_DEFAULT_PROFILE");
        SaveEnvironmentVariable("AWS_PROFILE");
        SaveEnvironmentVariable("AWS_ACCESS_KEY_ID");
        SaveEnvironmentVariable("AWS_SECRET_ACCESS_KEY");
        SaveEnvironmentVariable("AWS_CONTAINER_CREDENTIALS_RELATIVE_URI");
        SaveEnvironmentVariable("AWS_EC2_METADATA_DISABLED");

        Aws::FileSystem::CreateDirectoryIfNotExists(ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory().c_str());
        Aws::StringStream ss;
        ss << ProfileConfigFileAWSCredentialsProvider::GetCredentialsProfileFilename() << "_blah" << std::this_thread::get_id();
        m_credsFileName = ss.str();
        Aws::Environment::SetEnv("AWS_SHARED_CREDENTIALS_FILE", m_credsFileName.c_str(), 1);

    }

    void TearDown()
    {
        RestoreEnvironmentVariable();
    }

    void SaveEnvironmentVariable(const char* variableName)
    {
        m_environment.emplace_back(variableName, Aws::Environment::GetEnv(variableName));
    }

    void RestoreEnvironmentVariable()
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

    Aws::Vector<std::pair<const char*, Aws::String>> m_environment;
    Aws::String m_credsFileName;
};

TEST_F(EnvironmentModifyingTest, TestOrderOfAwsDefaultProfileAndAwsProfile)
{
    Aws::OFStream credsFile(m_credsFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

    credsFile << "[default_profile]" << std::endl;
    credsFile << " aws_access_key_id = DefaultProfileAccessKey " << std::endl;
    credsFile << "aws_secret_access_key= DefaultProfileSecretKey" << std::endl;
    credsFile << std::endl;

    credsFile << "[default]" << std::endl;
    credsFile << " aws_access_key_id = DefaultAccessKey " << std::endl;
    credsFile << "aws_secret_access_key= DefaultSecretKey" << std::endl;
    credsFile << std::endl;

    credsFile << "[profile]" << std::endl;
    credsFile << " aws_access_key_id = ProfileAccessKey " << std::endl;
    credsFile << "aws_secret_access_key =ProfileSecretKey" << std::endl;
    credsFile << std::endl;

    credsFile.close();

    Aws::Environment::SetEnv("AWS_DEFAULT_PROFILE", "default_profile", 1/*override*/);
    Aws::Environment::SetEnv("AWS_PROFILE", "profile", 1/*override*/);

    ProfileConfigFileAWSCredentialsProvider providerDefaultProfile(10);
    EXPECT_STREQ("DefaultProfileAccessKey", providerDefaultProfile.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("DefaultProfileSecretKey", providerDefaultProfile.GetAWSCredentials().GetAWSSecretKey().c_str());

    Aws::Environment::SetEnv("AWS_DEFAULT_PROFILE", "", 1/*override*/);
    Aws::Environment::SetEnv("AWS_PROFILE", "profile", 1/*override*/);
    ProfileConfigFileAWSCredentialsProvider providerProfile(10);
    EXPECT_STREQ("ProfileAccessKey", providerProfile.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("ProfileSecretKey", providerProfile.GetAWSCredentials().GetAWSSecretKey().c_str());

    Aws::Environment::SetEnv("AWS_DEFAULT_PROFILE", "", 1/*override*/);
    Aws::Environment::SetEnv("AWS_PROFILE", "", 1/*override*/);
    ProfileConfigFileAWSCredentialsProvider providerDefault(10);
    EXPECT_STREQ("DefaultAccessKey", providerDefault.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("DefaultSecretKey", providerDefault.GetAWSCredentials().GetAWSSecretKey().c_str());

    Aws::FileSystem::RemoveFileIfExists(m_credsFileName.c_str());
}

TEST_F(EnvironmentModifyingTest, ProfileConfigTestWithEnvVars)
{
    Aws::Environment::SetEnv("AWS_DEFAULT_PROFILE", "someProfile", 1);
    Aws::OFStream credsFile(m_credsFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

    credsFile << "[ someProfile]" << std::endl;
    credsFile << " aws_access_key_id = SomeProfileAccessKey " << std::endl;
    credsFile << "aws_secret_access_key =SomeProfileSecretKey" << std::endl;
    credsFile << "aws_session_token=SomeProfileSessionToken " << std::endl;
    credsFile << std::endl;
    credsFile.close();

    ProfileConfigFileAWSCredentialsProvider provider(10);
    EXPECT_STREQ("SomeProfileAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("SomeProfileSecretKey", provider.GetAWSCredentials().GetAWSSecretKey().c_str());

    Aws::FileSystem::RemoveFileIfExists(m_credsFileName.c_str());
}

TEST_F(EnvironmentModifyingTest, ProfileConfigTestWithEnvVarsButSpecifiedProfile)
{
    Aws::Environment::SetEnv("AWS_DEFAULT_PROFILE", "someProfile", 1);
    Aws::OFStream credsFile(m_credsFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

    credsFile << " [ someProfile]" << std::endl;
    credsFile << " aws_access_key_id = SomeProfileAccessKey" << std::endl;
    credsFile << "aws_secret_access_key=SomeProfileSecretKey " << std::endl;
    credsFile << "aws_session_token= SomeProfileSessionToken" << std::endl;
    credsFile << std::endl;
    credsFile << "[customProfile]" << std::endl;
    credsFile << "aws_access_key_id =customProfileAccessKey" << std::endl;
    credsFile << "aws_secret_access_key=customProfileSecretKey " << std::endl;
    credsFile << " aws_session_token=customProfileSessionToken" << std::endl;
    credsFile << std::endl;
    credsFile.close();

    ProfileConfigFileAWSCredentialsProvider provider("customProfile", 10);
    EXPECT_STREQ("customProfileAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("customProfileSecretKey", provider.GetAWSCredentials().GetAWSSecretKey().c_str());

    Aws::FileSystem::RemoveFileIfExists(m_credsFileName.c_str());
}

TEST_F(EnvironmentModifyingTest, ProfileConfigTestNotSetup)
{
    Aws::Environment::UnSetEnv("AWS_ACCESS_KEY_ID");
    Aws::Environment::UnSetEnv("AWS_SECRET_ACCESS_KEY");
    Aws::Environment::UnSetEnv("AWS_SHARED_CREDENTIALS_FILE");
    //On windows we don't redirect the home directory
    //This is to prevent when user actually sets .aws/credentials with Keys, this test would fail.
    Aws::Environment::SetEnv("AWS_DEFAULT_PROFILE", "SomeUnknownProfileThatDoesNotExist", 1);

    ProfileConfigFileAWSCredentialsProvider provider;
    EXPECT_STREQ("", provider.GetAWSCredentials().GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("", provider.GetAWSCredentials().GetAWSSecretKey().c_str());
}

TEST_F(EnvironmentModifyingTest, TestEnvironmentVariablesExist)
{
    Aws::Environment::SetEnv("AWS_ACCESS_KEY_ID", "Access Key", 1);
    Aws::Environment::SetEnv("AWS_SECRET_ACCESS_KEY", "Secret Key", 1);
    Aws::Environment::SetEnv("AWS_SESSION_TOKEN", "Session Token", 1);

    EnvironmentAWSCredentialsProvider provider;
    ASSERT_EQ("Access Key", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("Secret Key", provider.GetAWSCredentials().GetAWSSecretKey());
    ASSERT_EQ("Session Token", provider.GetAWSCredentials().GetSessionToken());
}

TEST_F(EnvironmentModifyingTest, TestEnvironmentVariablesDoNotExist)
{
    Aws::Environment::UnSetEnv("AWS_ACCESS_KEY_ID");
    Aws::Environment::UnSetEnv("AWS_SECRET_ACCESS_KEY");

    EnvironmentAWSCredentialsProvider provider;
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSSecretKey());
}

TEST_F(EnvironmentModifyingTest, TestProvidersNumberInCredentialsProvidersChain)
{
    Aws::Environment::UnSetEnv("AWS_CONTAINER_CREDENTIALS_RELATIVE_URI");
    Aws::Environment::UnSetEnv("AWS_EC2_METADATA_DISABLED");

    DefaultAWSCredentialsProviderChain providersChainWith6ProvidersEC2;
    ASSERT_EQ(6u, providersChainWith6ProvidersEC2.GetProviders().size()); //With EC2 instance metadata, without ECS task role.

    Aws::Environment::SetEnv("AWS_CONTAINER_CREDENTIALS_RELATIVE_URI", "TestVar", 1);
    DefaultAWSCredentialsProviderChain providersChainWith6ProvidersECS;
    ASSERT_EQ(6u, providersChainWith6ProvidersECS.GetProviders().size()); //With ECS task role, without ec2

    Aws::Environment::SetEnv("AWS_EC2_METADATA_DISABLED", "TruE", 1);
    Aws::Environment::UnSetEnv("AWS_CONTAINER_CREDENTIALS_RELATIVE_URI"); //Without ECS task role, without ec2
    DefaultAWSCredentialsProviderChain providersChainWith5Providers;
    ASSERT_EQ(5u, providersChainWith5Providers.GetProviders().size());
}


class InstanceProfileCredentialsProviderTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(InstanceProfileCredentialsProviderTest, TestEC2MetadataClientReturnsGoodData)
{
    auto mockClient = Aws::MakeShared<MockEC2MetadataClient>(AllocationTag);

    const char* validCredentials = R"({ "AccessKeyId": "goodAccessKey", "SecretAccessKey": "goodSecretKey", "Token": "goodToken", "Code": "Success", "Expiration": "2047-04-19T00:00:00Z" })";
    mockClient->SetMockedCredentialsValue(validCredentials);

    InstanceProfileCredentialsProvider provider(Aws::MakeShared<Aws::Config::EC2InstanceProfileConfigLoader>(AllocationTag, mockClient), 1000 * 60 * 15);
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());
}


TEST_F(InstanceProfileCredentialsProviderTest, TestThatProviderRefreshes)
{
    auto mockClient = Aws::MakeShared<MockEC2MetadataClient>(AllocationTag);

    const char* validCredentials = R"({ "AccessKeyId": "goodAccessKey", "SecretAccessKey": "goodSecretKey", "Token": "goodToken", "Code": "Success", "Expiration": "2047-04-19T00:00:00Z" })";
    mockClient->SetMockedCredentialsValue(validCredentials);

    InstanceProfileCredentialsProvider provider(Aws::MakeShared<Aws::Config::EC2InstanceProfileConfigLoader>(AllocationTag, mockClient), 10);
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());

    const char* nextSetOfCredentials = R"({ "AccessKeyId": "betterAccessKey", "SecretAccessKey": "betterSecretKey", "Token": "betterToken", "Code": "Success", "Expiration": "2047-04-19T00:00:00Z" })";
    mockClient->SetMockedCredentialsValue(nextSetOfCredentials);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    ASSERT_EQ("betterAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("betterSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());
}

TEST_F(InstanceProfileCredentialsProviderTest, TestCredentialsDontRefreshForCredentialsInPast)
{
    auto mockClient = Aws::MakeShared<MockEC2MetadataClient>(AllocationTag);

    const char* validCredentials = R"({ "AccessKeyId": "goodAccessKey", "SecretAccessKey": "goodSecretKey", "Token": "goodToken", "Code": "Success", "Expiration": "2047-04-19T00:00:00Z" })";
    mockClient->SetMockedCredentialsValue(validCredentials);

    InstanceProfileCredentialsProvider provider(Aws::MakeShared<Aws::Config::EC2InstanceProfileConfigLoader>(AllocationTag, mockClient), 10);
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());

    const char* nextSetOfCredentials = R"({ "AccessKeyId": "betterAccessKey", "SecretAccessKey": "betterSecretKey", "Token": "betterToken", "Code": "Success", "Expiration": "2019-04-19T00:00:00Z" })";
    mockClient->SetMockedCredentialsValue(nextSetOfCredentials);

    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());;
}

TEST_F(InstanceProfileCredentialsProviderTest, TestCredentialsDontRefreshForFailedCall)
{
    auto mockClient = Aws::MakeShared<MockEC2MetadataClient>(AllocationTag);

    const char* validCredentials = R"({ "AccessKeyId": "goodAccessKey", "SecretAccessKey": "goodSecretKey", "Token": "goodToken", "Code": "Success", "Expiration": "2047-04-19T00:00:00Z" })";
    mockClient->SetMockedCredentialsValue(validCredentials);

    InstanceProfileCredentialsProvider provider(Aws::MakeShared<Aws::Config::EC2InstanceProfileConfigLoader>(AllocationTag, mockClient), 10);
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());

    const char* nextSetOfCredentials = R"({ "Code": "InternalServiceException", "Message": "Unable to process request" })";
    mockClient->SetMockedCredentialsValue(nextSetOfCredentials);

    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());;
}

TEST_F(InstanceProfileCredentialsProviderTest, TestCredentialsWhenExpirationAndCodeAreMissing)
{
    auto mockClient = Aws::MakeShared<MockEC2MetadataClient>(AllocationTag);

    const char* validCredentials = R"({ "AccessKeyId": "goodAccessKey", "SecretAccessKey": "goodSecretKey", "Token": "goodToken" })";
    mockClient->SetMockedCredentialsValue(validCredentials);

    InstanceProfileCredentialsProvider provider(Aws::MakeShared<Aws::Config::EC2InstanceProfileConfigLoader>(AllocationTag, mockClient), 10);
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());
}

TEST_F(InstanceProfileCredentialsProviderTest, TestEC2MetadataClientCouldntFindCredentials)
{
    auto mockClient = Aws::MakeShared<MockEC2MetadataClient>(AllocationTag);
    const char* emptyCredentials = "";
    mockClient->SetMockedCredentialsValue(emptyCredentials);

    InstanceProfileCredentialsProvider provider(Aws::MakeShared<Aws::Config::EC2InstanceProfileConfigLoader>(AllocationTag, mockClient), 1000 * 60 * 15);
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSSecretKey());

    const char* missingInfo = "{ }";
    mockClient->SetMockedCredentialsValue(missingInfo);
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSSecretKey());
}

TEST_F(InstanceProfileCredentialsProviderTest, TestEC2MetadataClientReturnsBadData)
{
    auto mockClient = Aws::MakeShared<MockEC2MetadataClient>(AllocationTag);
    const char* badData = "blah blah blah, I'm bad";
    mockClient->SetMockedCredentialsValue(badData);

    InstanceProfileCredentialsProvider provider(Aws::MakeShared<Aws::Config::EC2InstanceProfileConfigLoader>(AllocationTag, mockClient), 1000 * 60 * 15);
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSSecretKey());
}

class TaskRoleCredentialsProviderTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(TaskRoleCredentialsProviderTest, TestECSCredentialsClientReturnsGoodData)
{
    auto mockClient = Aws::MakeShared<MockECSCredentialsClient>(AllocationTag, "/path/to/res");

    const char* validCredentials = "{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\", \"Expiration\": \"2020-02-25T06:03:31Z\" }";
    mockClient->SetMockedCredentialsValue(validCredentials);

    TaskRoleCredentialsProvider provider(mockClient, 1000 * 60 * 15);
    ASSERT_EQ("goodAccessKey", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("goodSecretKey", provider.GetAWSCredentials().GetAWSSecretKey());
    ASSERT_EQ("goodToken", provider.GetAWSCredentials().GetSessionToken());
}


TEST_F(TaskRoleCredentialsProviderTest, TestThatProviderRefreshes)
{
    auto mockClient = Aws::MakeShared<MockECSCredentialsClient>(AllocationTag, "/path/to/res");

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
    auto mockClient = Aws::MakeShared<MockECSCredentialsClient>(AllocationTag, "/path/to/res");

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
    auto mockClient = Aws::MakeShared<MockECSCredentialsClient>(AllocationTag, "/path/to/res");
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
    auto mockClient = Aws::MakeShared<MockECSCredentialsClient>(AllocationTag, "/path/to/res");
    const char* badData = "blah blah blah, I'm bad";
    mockClient->SetMockedCredentialsValue(badData);

    TaskRoleCredentialsProvider provider(mockClient, 1000 * 60 * 15);
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSAccessKeyId());
    ASSERT_EQ("", provider.GetAWSCredentials().GetAWSSecretKey());
}

static Aws::String WrapEchoStringWithSingleQuoteForUnixShell(Aws::String str)
{
#ifndef _WIN32
    str.insert(0, 1, '\'');
    str.append(1, '\'');
#endif
    return str;
}

class ProcessCredentialsProviderTest : public Aws::Testing::AwsCppSdkGTestSuite
{
public:
    void SetUp()
    {
        SaveEnvironmentVariable("AWS_CONFIG_FILE");
        SaveEnvironmentVariable("AWS_DEFAULT_PROFILE");
        SaveEnvironmentVariable("AWS_PROFILE");

        Aws::StringStream ss;
        ss << Aws::Auth::GetConfigProfileFilename() + "_blah" << std::this_thread::get_id();
        m_configFileName = ss.str();
        Aws::Environment::SetEnv("AWS_CONFIG_FILE", m_configFileName.c_str(), 1);
        Aws::Environment::UnSetEnv("AWS_DEFAULT_PROFILE");
        Aws::Environment::UnSetEnv("AWS_PROFILE");

        auto profileDirectory = ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory();
        Aws::FileSystem::CreateDirectoryIfNotExists(profileDirectory.c_str());
    }

    void TearDown()
    {
        RestoreEnvironmentVariables();
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

    Aws::Vector<std::pair<const char*, Aws::String>> m_environment;
    Aws::String m_configFileName;
};

TEST_F(ProcessCredentialsProviderTest, TestProcessCredentialsProviderExpiredThenRefreshed)
{
    Aws::OFStream configFile(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFile << "[default]" << std::endl;
    configFile << "credential_process = echo " << WrapEchoStringWithSingleQuoteForUnixShell("{\"Version\": 1, \"AccessKeyId\": \"AccessKey123\", \"SecretAccessKey\": \"SecretKey321\", \"Expiration\": \"1970-01-01T00:00:01Z\"}") << std::endl;
    configFile.close();

    Aws::Config::ReloadCachedConfigFile();
    ProcessCredentialsProvider provider;
    Aws::Auth::AWSCredentials credsOne = provider.GetAWSCredentials();
    EXPECT_TRUE(credsOne.IsExpired());

    Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFileNew << "[default]" << std::endl;
    configFileNew << "credential_process = echo " << WrapEchoStringWithSingleQuoteForUnixShell("{\"Version\": 1, \"AccessKeyId\": \"AccessKey321\", \"SecretAccessKey\": \"SecretKey123\"}") << std::endl;
    configFileNew.close();

    Aws::Config::ReloadCachedConfigFile();
    Aws::Auth::AWSCredentials credsTwo = provider.GetAWSCredentials();
    EXPECT_NE(credsOne, credsTwo);
    EXPECT_FALSE(credsTwo.IsEmpty());
    EXPECT_STREQ("AccessKey321", credsTwo.GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("SecretKey123", credsTwo.GetAWSSecretKey().c_str());

    Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(ProcessCredentialsProviderTest, TestProcessCredentialsProviderNonSupportedVersion)
{
    Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFileNew << "[default]" << std::endl;
    configFileNew << "credential_process = echo " << WrapEchoStringWithSingleQuoteForUnixShell("{\"Version\": 2, \"AccessKeyId\": \"AccessKey321\", \"SecretAccessKey\": \"SecretKey123\"}") << std::endl;
    configFileNew.close();
    Aws::Config::ReloadCachedConfigFile();

    ProcessCredentialsProvider provider;
    EXPECT_TRUE(provider.GetAWSCredentials().IsEmpty());

    Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(ProcessCredentialsProviderTest, TestProcessCredentialsProviderDoNotRefresh)
{
    Aws::OFStream configFile(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

    configFile << "[default]" << std::endl;
    configFile << "credential_process = echo " << WrapEchoStringWithSingleQuoteForUnixShell("{\"Version\": 1, \"AccessKeyId\": \"AccessKey456\", \"SecretAccessKey\": \"SecretKey654\"}") << std::endl;
    configFile.close();
    Aws::Config::ReloadCachedConfigFile();

    ProcessCredentialsProvider provider;
    Aws::Auth::AWSCredentials credsOne = provider.GetAWSCredentials();
    EXPECT_STREQ("AccessKey456", credsOne.GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("SecretKey654", credsOne.GetAWSSecretKey().c_str());

    Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

    configFileNew << "[default]" << std::endl;
    configFileNew << "credential_process = echo " << WrapEchoStringWithSingleQuoteForUnixShell("{\"Version\": 1, \"AccessKeyId\": \"AccessKey789\", \"SecretAccessKey\": \"SecretKey987\"}") << std::endl;
    configFileNew.close();
    Aws::Config::ReloadCachedConfigFile();

    Aws::Auth::AWSCredentials credsTwo = provider.GetAWSCredentials();
    EXPECT_EQ(credsOne, credsTwo);
    EXPECT_FALSE(credsTwo.IsEmpty());
    EXPECT_STREQ("AccessKey456", credsTwo.GetAWSAccessKeyId().c_str());
    EXPECT_STREQ("SecretKey654", credsTwo.GetAWSSecretKey().c_str());

    Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(ProcessCredentialsProviderTest, TestProcessCredentialsProviderCaptureInvalidOutput)
{
    Aws::OFStream configFile(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

    configFile << "[default]" << std::endl;
    configFile << "credential_process = echo 'Error: Failed to retrieve credentials'" << std::endl;
    configFile << std::endl;
    configFile.close();
    Aws::Config::ReloadCachedConfigFile();

    ProcessCredentialsProvider provider;
    EXPECT_TRUE(provider.GetAWSCredentials().IsEmpty());

    Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

class STSAssumeRoleWithWebIdentityCredentialsProviderTest :public ProcessCredentialsProviderTest
{
public:
    void SetUp()
    {
        SaveEnvironmentVariable("AWS_CONFIG_FILE");
        SaveEnvironmentVariable("AWS_DEFAULT_PROFILE");
        SaveEnvironmentVariable("AWS_PROFILE");
        SaveEnvironmentVariable("AWS_WEB_IDENTITY_TOKEN_FILE");
        SaveEnvironmentVariable("AWS_ROLE_ARN");
        SaveEnvironmentVariable("AWS_DEFAULT_REGION");

        Aws::StringStream ss;
        ss << Aws::Auth::GetConfigProfileFilename() + "_blah" << std::this_thread::get_id();
        m_configFileName = ss.str();
        Aws::Environment::SetEnv("AWS_CONFIG_FILE", m_configFileName.c_str(), 1);
        Aws::Environment::UnSetEnv("AWS_DEFAULT_PROFILE");
        Aws::Environment::UnSetEnv("AWS_PROFILE");
        // avoid reading region environment var when testing get correct region from config file
        Aws::Environment::UnSetEnv("AWS_DEFAULT_REGION");

        auto profileDirectory = ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory();
        Aws::FileSystem::CreateDirectoryIfNotExists(profileDirectory.c_str());

        mockHttpClient = Aws::MakeShared<MockHttpClient>(AllocationTag);
        mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>(AllocationTag);
        mockHttpClientFactory->SetClient(mockHttpClient);
        SetHttpClientFactory(mockHttpClientFactory);
    }

    void TearDown()
    {
        RestoreEnvironmentVariables();
        mockHttpClient = nullptr;
        mockHttpClientFactory = nullptr;

        CleanupHttp();
        InitHttp();
    }

    std::shared_ptr<MockHttpClient> mockHttpClient;
    std::shared_ptr<MockHttpClientFactory> mockHttpClientFactory;
};

TEST_F(STSAssumeRoleWithWebIdentityCredentialsProviderTest, TestRetryStrategy)
{
    Aws::Vector<Aws::String> retryableErrors;
    retryableErrors.push_back("IDPCommunicationError");
    retryableErrors.push_back("InvalidIdentityToken");
    SpecifiedRetryableErrorsRetryStrategy retryStrategy(retryableErrors, 3/*max retries*/);

    auto error1 = AWSError<CoreErrors>(CoreErrors::UNKNOWN, "SomethingElse",/*ExceptionName*/ "ErrorMsg", true/*retry*/);
    ASSERT_TRUE(retryStrategy.ShouldRetry(error1, 0));
    ASSERT_TRUE(retryStrategy.ShouldRetry(error1, 1));
    ASSERT_TRUE(retryStrategy.ShouldRetry(error1, 2));
    ASSERT_FALSE(retryStrategy.ShouldRetry(error1, 3));
    ASSERT_FALSE(retryStrategy.ShouldRetry(error1, 4));

    auto error2 = AWSError<CoreErrors>(CoreErrors::UNKNOWN, "SomethingElse",/*ExceptionName*/ "ErrorMsg", false/*retry*/);
    ASSERT_FALSE(retryStrategy.ShouldRetry(error2, 0));
    ASSERT_FALSE(retryStrategy.ShouldRetry(error2, 1));
    ASSERT_FALSE(retryStrategy.ShouldRetry(error2, 2));
    ASSERT_FALSE(retryStrategy.ShouldRetry(error2, 3));
    ASSERT_FALSE(retryStrategy.ShouldRetry(error2, 4));

    auto error3 = AWSError<CoreErrors>(CoreErrors::UNKNOWN, "IDPCommunicationError",/*ExceptionName*/ "ErrorMsg", false/*retry*/);
    ASSERT_TRUE(retryStrategy.ShouldRetry(error3, 0));
    ASSERT_TRUE(retryStrategy.ShouldRetry(error3, 1));
    ASSERT_TRUE(retryStrategy.ShouldRetry(error3, 2));
    ASSERT_FALSE(retryStrategy.ShouldRetry(error3, 3));
    ASSERT_FALSE(retryStrategy.ShouldRetry(error3, 4));

    auto error4 = AWSError<CoreErrors>(CoreErrors::UNKNOWN, "IDPCommunicationError",/*ExceptionName*/ "ErrorMsg", true/*retry*/);
    ASSERT_TRUE(retryStrategy.ShouldRetry(error4, 0));
    ASSERT_TRUE(retryStrategy.ShouldRetry(error4, 1));
    ASSERT_TRUE(retryStrategy.ShouldRetry(error4, 2));
    ASSERT_FALSE(retryStrategy.ShouldRetry(error4, 3));
    ASSERT_FALSE(retryStrategy.ShouldRetry(error4, 4));

    auto error5 = AWSError<CoreErrors>(CoreErrors::UNKNOWN, "InvalidIdentityToken",/*ExceptionName*/ "ErrorMsg", false/*retry*/);
    ASSERT_TRUE(retryStrategy.ShouldRetry(error5, 0));
    ASSERT_TRUE(retryStrategy.ShouldRetry(error5, 1));
    ASSERT_TRUE(retryStrategy.ShouldRetry(error5, 2));
    ASSERT_FALSE(retryStrategy.ShouldRetry(error5, 3));
    ASSERT_FALSE(retryStrategy.ShouldRetry(error5, 4));

    auto error6 = AWSError<CoreErrors>(CoreErrors::UNKNOWN, "InvalidIdentityToken",/*ExceptionName*/ "ErrorMsg", true/*retry*/);
    ASSERT_TRUE(retryStrategy.ShouldRetry(error6, 0));
    ASSERT_TRUE(retryStrategy.ShouldRetry(error6, 1));
    ASSERT_TRUE(retryStrategy.ShouldRetry(error6, 2));
    ASSERT_FALSE(retryStrategy.ShouldRetry(error6, 3));
    ASSERT_FALSE(retryStrategy.ShouldRetry(error6, 4));

    ASSERT_EQ(0l, retryStrategy.CalculateDelayBeforeNextRetry(error1, 0));
    ASSERT_EQ(50l, retryStrategy.CalculateDelayBeforeNextRetry(error2, 1));
    ASSERT_EQ(100l, retryStrategy.CalculateDelayBeforeNextRetry(error2, 2));
    ASSERT_EQ(200l, retryStrategy.CalculateDelayBeforeNextRetry(error2, 3));
    ASSERT_EQ(400l, retryStrategy.CalculateDelayBeforeNextRetry(error2, 4));
    ASSERT_EQ(512*25l, retryStrategy.CalculateDelayBeforeNextRetry(error2, 9));
}

TEST_F(STSAssumeRoleWithWebIdentityCredentialsProviderTest, TestParseCredentialsFromConfigCorrectly)
{
    Aws::String tokenFileName = m_configFileName + "tokenFile";
    Aws::OFStream tokenFile(tokenFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    Aws::String token = "AQoDYXdzEE0a8ANXXXXXXXXNO1ewxE5TijQyp+IEXAMPLE";
    tokenFile << token;
    tokenFile.close();

    // One of the required environment variables is not set, test it will load from config file and parse credentials correctly
    Aws::Environment::UnSetEnv("AWS_ROLE_ARN");
    Aws::Environment::SetEnv("AWS_WEB_IDENTITY_TOKEN_FILE", tokenFileName.c_str(), 1/*override*/);

    Aws::OFStream configFile(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFile << "[default]" << std::endl;
    configFile << "region = us-west-2" << std::endl;
    configFile << "web_identity_token_file = " << tokenFileName << std::endl;
    configFile << " role_arn = arn:aws:iam::123456789012:role/demo " << std::endl;
    configFile << "role_session_name = sessionId_1234_abcd_xxxx" << std::endl;
    configFile << std::endl;
    configFile.close();
    Aws::Config::ReloadCachedConfigFile();
    STSAssumeRoleWebIdentityCredentialsProvider provider;

    // No response is set to mockHttpClient, there will be no response
    auto creds = provider.GetAWSCredentials();
    ASSERT_TRUE(creds.IsEmpty());

    auto request = mockHttpClient->GetMostRecentHttpRequest();
    ASSERT_EQ("https://sts.us-west-2.amazonaws.com", request.GetURIString(false /*don't include querystring*/));
    Aws::StringStream ss;
    ss << request.GetContentBody()->rdbuf();
    ASSERT_EQ("Action=AssumeRoleWithWebIdentity&Version=2011-06-15&RoleSessionName=sessionId_1234_abcd_xxxx&RoleArn=arn%3Aaws%3Aiam%3A%3A123456789012%3Arole%2Fdemo&WebIdentityToken=AQoDYXdzEE0a8ANXXXXXXXXNO1ewxE5TijQyp%2BIEXAMPLE", ss.str());
    std::shared_ptr<HttpRequest> requestTmp = CreateHttpRequest(URI(request.GetURIString(true /*include querystring*/)), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    //Made up credentials from https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRoleWithWebIdentity.html
    Aws::String goodXml = "<AssumeRoleWithWebIdentityResult><Credentials><SessionToken>AQoDYXdzEE0a8ANXXXXXXXXNO1ewxE5TijQyp+IEXAMPLE</SessionToken><SecretAccessKey>wJalrXUtnFEMI/K7MDENG/bPxRfiCYzEXAMPLEKEY</SecretAccessKey><Expiration>2226-10-24T23:00:23Z</Expiration><AccessKeyId>ASgeIAIOSFODNN7EXAMPLE</AccessKeyId></Credentials></AssumeRoleWithWebIdentityResult>";
    std::shared_ptr<StandardHttpResponse> goodResponse = Aws::MakeShared<StandardHttpResponse>(AllocationTag, requestTmp);
    goodResponse->SetResponseCode(HttpResponseCode::OK);
    goodResponse->GetResponseBody() << goodXml;
    mockHttpClient->AddResponseToReturn(goodResponse);

    creds = provider.GetAWSCredentials();
    ASSERT_FALSE(creds.IsEmpty());
    ASSERT_EQ("AQoDYXdzEE0a8ANXXXXXXXXNO1ewxE5TijQyp+IEXAMPLE", creds.GetSessionToken());
    ASSERT_EQ("wJalrXUtnFEMI/K7MDENG/bPxRfiCYzEXAMPLEKEY", creds.GetAWSSecretKey());
    ASSERT_EQ("ASgeIAIOSFODNN7EXAMPLE", creds.GetAWSAccessKeyId());

    Aws::FileSystem::RemoveFileIfExists(tokenFileName.c_str());
    Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(STSAssumeRoleWithWebIdentityCredentialsProviderTest, TestInitializeFromEnvironmentVariables)
{
    Aws::String tokenFileName = m_configFileName + "tokenFile";
    Aws::OFStream tokenFile(tokenFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    Aws::String token = "AQoDYXdzEE0a8ANXXXXXXXXNO1ewxE5TijQyp+IEXAMPLE";
    tokenFile << token;
    tokenFile.close();

    // Load from environment only when both AWS_ROLE_ARN and AWS_WEB_IDENTITY_TOKEN_FILE are available
    Aws::Environment::SetEnv("AWS_ROLE_ARN", "arn:aws:iam::123456789012:role/env", 1/*override*/);
    Aws::Environment::SetEnv("AWS_WEB_IDENTITY_TOKEN_FILE", tokenFileName.c_str(), 1/*override*/);
    // Note this one is not required
    Aws::Environment::SetEnv("AWS_ROLE_SESSION_NAME", "sessionId_abcd_1234_xxxx", 1/*override*/);

    // Construct config file to prove that we will not load from config file when those required two are available
    Aws::OFStream configFile(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFile << "[default]" << std::endl;
    configFile << "region = us-west-2" << std::endl;
    configFile << "web_identity_token_file = " << tokenFileName << std::endl;
    configFile << " role_arn = arn:aws:iam::123456789012:role/demo " << std::endl;
    configFile << "role_session_name = sessionId_1234_abcd_xxxx" << std::endl;
    configFile << std::endl;
    configFile.close();

    Aws::Config::ReloadCachedConfigFile();
    STSAssumeRoleWebIdentityCredentialsProvider provider;
    // No response is set to mockHttpClient, there will be no response
    auto creds = provider.GetAWSCredentials();
    ASSERT_TRUE(creds.IsEmpty());
    auto request = mockHttpClient->GetMostRecentHttpRequest();
    Aws::StringStream ss;
    ss << request.GetContentBody()->rdbuf();
    ASSERT_EQ("Action=AssumeRoleWithWebIdentity&Version=2011-06-15&RoleSessionName=sessionId_abcd_1234_xxxx&RoleArn=arn%3Aaws%3Aiam%3A%3A123456789012%3Arole%2Fenv&WebIdentityToken=AQoDYXdzEE0a8ANXXXXXXXXNO1ewxE5TijQyp%2BIEXAMPLE", ss.str());

    // Role session name will be an random uuid
    Aws::Environment::UnSetEnv("AWS_ROLE_SESSION_NAME");
    STSAssumeRoleWebIdentityCredentialsProvider provider1;
    // No response is set to mockHttpClient, there will be no response
    auto creds1 = provider1.GetAWSCredentials();
    ASSERT_TRUE(creds1.IsEmpty());
    auto request1 = mockHttpClient->GetMostRecentHttpRequest();
    ss.str("");
    ss << request1.GetContentBody()->rdbuf();
    ASSERT_NE("Action=AssumeRoleWithWebIdentity&Version=2011-06-15&RoleSessionName=sessionId_abcd_1234_xxxx&RoleArn=arn%3Aaws%3Aiam%3A%3A123456789012%3Arole%2Fenv&WebIdentityToken=AQoDYXdzEE0a8ANXXXXXXXXNO1ewxE5TijQyp%2BIEXAMPLE", ss.str());

    // Set session name back
    Aws::Environment::SetEnv("AWS_ROLE_SESSION_NAME", "sessionId_abcd_1234_xxxx", 1/*override*/);
    // One of the required environment variable is not set
    Aws::Environment::UnSetEnv("AWS_WEB_IDENTITY_TOKEN_FILE");
    STSAssumeRoleWebIdentityCredentialsProvider provider2;
    // No response is set to mockHttpClient, there will be no response
    auto creds2 = provider2.GetAWSCredentials();
    ASSERT_TRUE(creds2.IsEmpty());
    auto request2 = mockHttpClient->GetMostRecentHttpRequest();
    ss.str("");
    ss << request2.GetContentBody()->rdbuf();
    ASSERT_EQ("Action=AssumeRoleWithWebIdentity&Version=2011-06-15&RoleSessionName=sessionId_1234_abcd_xxxx&RoleArn=arn%3Aaws%3Aiam%3A%3A123456789012%3Arole%2Fdemo&WebIdentityToken=AQoDYXdzEE0a8ANXXXXXXXXNO1ewxE5TijQyp%2BIEXAMPLE", ss.str());

    Aws::FileSystem::RemoveFileIfExists(tokenFileName.c_str());
    Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

class SSOCredentialsProviderTest :public ProcessCredentialsProviderTest
{
public:
    void SetUp()
    {
        SaveEnvironmentVariable("AWS_CONFIG_FILE");
        SaveEnvironmentVariable("AWS_DEFAULT_PROFILE");
        SaveEnvironmentVariable("AWS_PROFILE");
        SaveEnvironmentVariable("AWS_DEFAULT_REGION");

        Aws::StringStream ssConfig;
        ssConfig << Aws::Auth::GetConfigProfileFilename() + "_blah" << std::this_thread::get_id();
        m_configFileName = ssConfig.str();
        Aws::Environment::SetEnv("AWS_CONFIG_FILE", m_configFileName.c_str(), 1);
        Aws::Environment::UnSetEnv("AWS_DEFAULT_PROFILE");
        Aws::Environment::UnSetEnv("AWS_PROFILE");
        // avoid reading region environment var when testing get correct region from config file
        Aws::Environment::UnSetEnv("AWS_DEFAULT_REGION");

        auto profileDirectory = ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory();
        Aws::FileSystem::CreateDirectoryIfNotExists(profileDirectory.c_str());
        Aws::StringStream ssCachedTokenDirectory;
        ssCachedTokenDirectory << profileDirectory << PATH_DELIM << "sso";
        Aws::FileSystem::CreateDirectoryIfNotExists(ssCachedTokenDirectory.str().c_str());
        ssCachedTokenDirectory << PATH_DELIM << "cache";
        Aws::FileSystem::CreateDirectoryIfNotExists(ssCachedTokenDirectory.str().c_str());

        // setting up token file for tests
        Aws::StringStream ssToken;
        ssToken << ssCachedTokenDirectory.str();
        auto ssoTokenDirectory = ssToken.str();
        // SHA1 of "https://d-92671207e4.awsapps.com/start" -> 13f9d35043871d073ab260e020f0ffde092cb14b
        ssToken << PATH_DELIM << "13f9d35043871d073ab260e020f0ffde092cb14b.json";
        m_ssoTokenFileName = ssToken.str();

        Aws::StringStream ssRefreshToken;
        ssRefreshToken << ssCachedTokenDirectory.str();
        // SHA1 of "dev" -> 34c6fceca75e456f25e7e99531e2425c6c1de443
        ssRefreshToken << PATH_DELIM << "34c6fceca75e456f25e7e99531e2425c6c1de443.json";
        m_ssoTokenRefreshFileName = ssRefreshToken.str();

        mockHttpClient = Aws::MakeShared<MockHttpClient>(AllocationTag);
        mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>(AllocationTag);
        mockHttpClientFactory->SetClient(mockHttpClient);
        SetHttpClientFactory(mockHttpClientFactory);
    }

    void TearDown()
    {
        RestoreEnvironmentVariables();
        mockHttpClient = nullptr;
        mockHttpClientFactory = nullptr;

        CleanupHttp();
        InitHttp();

        Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
        Aws::FileSystem::RemoveFileIfExists(m_ssoTokenFileName.c_str());
    }

    Aws::String m_ssoTokenFileName;
    Aws::String m_ssoTokenRefreshFileName;
    std::shared_ptr<MockHttpClient> mockHttpClient;
    std::shared_ptr<MockHttpClientFactory> mockHttpClientFactory;
};

TEST_F(SSOCredentialsProviderTest, TestParseCredentialsFromConfigCorrectly)
{
    AWS_LOGSTREAM_DEBUG("TEST_SSO", "Preparing Test Token file in: " << m_ssoTokenFileName);
    Aws::OFStream tokenFile(m_ssoTokenFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    tokenFile << R"({
    "accessToken": "base64string",
    "expiresAt": ")";
    tokenFile << DateTime::Now().GetYear() + 1;
    tokenFile << R"(-01-02T00:00:00Z",
    "region": "us-west-2",
    "startUrl": "https://d-92671207e4.awsapps.com/start"
})";
    tokenFile.close();

    Aws::OFStream configFile(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFile << R"([default]
sso_account_id = 012345678901
sso_region = us-east-1
sso_role_name = SampleRole
sso_start_url = https://d-92671207e4.awsapps.com/start
)";
    configFile.close();

    Aws::Config::ReloadCachedConfigFile();
    SSOCredentialsProvider provider;

    // No response is set to mockHttpClient, there will be no response
    auto creds = provider.GetAWSCredentials();
    ASSERT_TRUE(creds.IsEmpty());
    auto request = mockHttpClient->GetMostRecentHttpRequest();

    ASSERT_EQ("https://portal.sso.us-east-1.amazonaws.com/federation/credentials?account_id=012345678901&role_name=SampleRole", request.GetURIString());
    ASSERT_EQ("base64string", request.GetHeaderValue("x-amz-sso_bearer_token"));
    // No response is set to mockHttpClient, there will be no response
    creds = provider.GetAWSCredentials();
    ASSERT_TRUE(creds.IsEmpty());

    // adding a valid response to the http request
    std::shared_ptr<HttpRequest> requestTmp = CreateHttpRequest(URI(request.GetURIString(true /*include querystring*/)), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    //Made up credentials
    Aws::String goodResult = R"({
   "roleCredentials": {
      "accessKeyId": "access",
      "expiration": 2303614800000,
      "secretAccessKey": "secret",
      "sessionToken": "token"
   }
}
)";

    std::shared_ptr<StandardHttpResponse> goodResponse = Aws::MakeShared<StandardHttpResponse>(AllocationTag, requestTmp);
    goodResponse->SetResponseCode(HttpResponseCode::OK);
    goodResponse->GetResponseBody() << goodResult;
    mockHttpClient->AddResponseToReturn(goodResponse);

    creds = provider.GetAWSCredentials();
    ASSERT_FALSE(creds.IsEmpty());
    ASSERT_EQ("access", creds.GetAWSAccessKeyId());
    ASSERT_EQ("secret", creds.GetAWSSecretKey());
    ASSERT_EQ("token", creds.GetSessionToken());
    ASSERT_EQ(DateTime((int64_t) 2303614800000), creds.GetExpiration());
}

TEST_F(SSOCredentialsProviderTest, TestParseCredentialsFromConfigCorrectlyWithRefresh)
{
    AWS_LOGSTREAM_DEBUG("TEST_SSO", "Preparing Test Token file in: " << m_ssoTokenRefreshFileName);
    Aws::OFStream tokenFile(m_ssoTokenRefreshFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    tokenFile << R"({
    "accessToken": "base64string",
    "expiresAt": ")";
    tokenFile << DateTime::Now().GetYear() + 1;
    tokenFile << R"(-01-02T00:00:00Z",
    "region": "us-west-2",
    "startUrl": "https://d-92671207e4.awsapps.com/start"
})";
    tokenFile.close();
    Aws::Environment::SetEnv("AWS_DEFAULT_PROFILE", "sso-profile", 1/*override*/);
    Aws::Environment::SetEnv("AWS_PROFILE", "sso-profile", 1/*override*/);
    Aws::OFStream configFile(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFile << R"([profile sso-profile]
sso_session = dev
sso_account_id = 012345678901
sso_role_name = SampleRole
sso_region = us-east-1
sso_start_url = https://d-92671207e4.awsapps.com/start

[sso-session dev]
sso_region = us-east-1
sso_start_url = https://d-92671207e4.awsapps.com/start
)";
    configFile.close();

    Aws::Config::ReloadCachedConfigFile();
    SSOCredentialsProvider provider;

    // No response is set to mockHttpClient, there will be no response
    auto creds = provider.GetAWSCredentials();
    ASSERT_TRUE(creds.IsEmpty());
    auto request = mockHttpClient->GetMostRecentHttpRequest();

    ASSERT_EQ("https://portal.sso.us-east-1.amazonaws.com/federation/credentials?account_id=012345678901&role_name=SampleRole", request.GetURIString());
    ASSERT_EQ("base64string", request.GetHeaderValue("x-amz-sso_bearer_token"));
    // No response is set to mockHttpClient, there will be no response
    creds = provider.GetAWSCredentials();
    ASSERT_TRUE(creds.IsEmpty());

    // adding a valid response to the http request
    std::shared_ptr<HttpRequest> requestTmp = CreateHttpRequest(URI(request.GetURIString(true /*include querystring*/)), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    //Made up credentials
    Aws::String goodResult = R"({
   "roleCredentials": {
      "accessKeyId": "access",
      "expiration": 2303614800000,
      "secretAccessKey": "secret",
      "sessionToken": "token"
   }
}
)";

    std::shared_ptr<StandardHttpResponse> goodResponse = Aws::MakeShared<StandardHttpResponse>(AllocationTag, requestTmp);
    goodResponse->SetResponseCode(HttpResponseCode::OK);
    goodResponse->GetResponseBody() << goodResult;
    mockHttpClient->AddResponseToReturn(goodResponse);

    creds = provider.GetAWSCredentials();
    ASSERT_FALSE(creds.IsEmpty());
    ASSERT_EQ("access", creds.GetAWSAccessKeyId());
    ASSERT_EQ("secret", creds.GetAWSSecretKey());
    ASSERT_EQ("token", creds.GetSessionToken());
    ASSERT_EQ(DateTime((int64_t) 2303614800000), creds.GetExpiration());
}

TEST_F(SSOCredentialsProviderTest, TestParseCredentialsFromConfigFailsWithConflictingConfiguration)
{
    AWS_LOGSTREAM_DEBUG("TEST_SSO", "Preparing Test Token file in: " << m_ssoTokenRefreshFileName);
    Aws::OFStream tokenFile(m_ssoTokenRefreshFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    tokenFile << R"({
    "accessToken": "base64string",
    "expiresAt": ")";
    tokenFile << DateTime::Now().GetYear() + 1;
    tokenFile << R"(-01-02T00:00:00Z",
    "region": "us-west-2",
    "startUrl": "https://d-92671207e4.awsapps.com/start"
})";
    tokenFile.close();
    Aws::Environment::SetEnv("AWS_DEFAULT_PROFILE", "sso-profile", 1/*override*/);
    Aws::Environment::SetEnv("AWS_PROFILE", "sso-profile", 1/*override*/);
    Aws::OFStream configFile(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFile << R"([profile sso-profile]
sso_session = dev
sso_account_id = 012345678901
sso_role_name = SampleRole
sso_region = us-west-2
sso_start_url = https://a-different-url/start

[sso-session dev]
sso_region = us-east-1
sso_start_url = https://d-92671207e4.awsapps.com/start
)";
    configFile.close();

    Aws::Config::ReloadCachedConfigFile();
    SSOCredentialsProvider provider;

    // No response is set to mockHttpClient, there will be no response
    auto creds = provider.GetAWSCredentials();
    ASSERT_TRUE(creds.IsEmpty());
    // No request is made for bad configuration
    ASSERT_TRUE(mockHttpClient->GetAllRequestsMade().empty());
}

TEST_F(SSOCredentialsProviderTest, TestParseCredentialsFromExpiredTokenProvidesNoCredentials)
{
    AWS_LOGSTREAM_DEBUG("TEST_SSO", "Preparing Test Token file in: " << m_ssoTokenFileName);
    Aws::OFStream tokenFile(m_ssoTokenFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    Aws::String token = R"({
    "accessToken": "base64string",
    "expiresAt": "1997-05-15T00:00:00Z",
    "region": "us-west-2",
    "startUrl": "https://d-92671207e4.awsapps.com/start"
})";
    tokenFile << token;
    tokenFile.close();

    Aws::OFStream configFile(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFile << R"([default]
sso_account_id = 012345678901
sso_region = us-east-1
sso_role_name = SampleRole
sso_start_url = https://d-92671207e4.awsapps.com/start
)";
    configFile << std::endl;
    configFile.close();

    Aws::Config::ReloadCachedConfigFile();
    SSOCredentialsProvider provider;

    // No request is made to get credentials
    auto creds = provider.GetAWSCredentials();
    ASSERT_TRUE(creds.IsEmpty());
    ASSERT_TRUE(mockHttpClient->GetAllRequestsMade().empty());
}

TEST_F(SSOCredentialsProviderTest, TestParseCredentialsFromBadConfigProvidesNoCredentials)
{
    AWS_LOGSTREAM_DEBUG("TEST_SSO", "Preparing Test Token file in: " << m_ssoTokenFileName);
    Aws::OFStream tokenFile(m_ssoTokenFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    Aws::String token = R"({
    "accessToken": "base64string",
    "expiresAt": "2042-12-12T00:00:00Z",
    "region": "us-west-2",
})";// Missing startUrl attribute
    tokenFile << token;
    tokenFile.close();

    Aws::OFStream configFile(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFile << R"([default]
sso_account_id = 012345678901
sso_region = us-east-1
sso_role_name = SampleRole
sso_start_url = https://d-92671207e4.awsapps.com/start
)";
    configFile << std::endl;
    configFile.close();

    Aws::Config::ReloadCachedConfigFile();
    SSOCredentialsProvider provider;

    // No request is made to get credentials
    auto creds = provider.GetAWSCredentials();
    ASSERT_TRUE(creds.IsEmpty());
    ASSERT_TRUE(mockHttpClient->GetAllRequestsMade().empty());
}

class AWSCredentialsTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AWSCredentialsTest, TestDefaultState)
{
    AWSCredentials credentials;
    ASSERT_TRUE(credentials.IsEmpty());
    ASSERT_FALSE(credentials.IsExpired());
    ASSERT_TRUE(credentials.IsExpiredOrEmpty());
}

TEST_F(AWSCredentialsTest, TestValidState)
{
    AWSCredentials credentials;
    credentials.SetAWSAccessKeyId("a");
    credentials.SetAWSSecretKey("b");
    ASSERT_FALSE(credentials.IsEmpty());
    ASSERT_FALSE(credentials.IsExpired());
    ASSERT_FALSE(credentials.IsExpiredOrEmpty());
}

TEST_F(AWSCredentialsTest, TestExpiredState)
{
    AWSCredentials credentials;
    credentials.SetExpiration(DateTime::Now() - std::chrono::minutes(1));

    ASSERT_TRUE(credentials.IsEmpty());
    ASSERT_TRUE(credentials.IsExpired());
    ASSERT_TRUE(credentials.IsExpiredOrEmpty());

    credentials.SetAWSAccessKeyId("a");
    credentials.SetAWSSecretKey("b");

    ASSERT_FALSE(credentials.IsEmpty());
    ASSERT_TRUE(credentials.IsExpired());
    ASSERT_TRUE(credentials.IsExpiredOrEmpty());
}

class AWSCachedCredentialsTest : public Aws::Testing::AwsCppSdkGTestSuite
{
public:
    class MockCredentialsProvider : public AWSCredentialsProvider {
    public:
        AWSCredentials GetAWSCredentials() override {
          if (!responseQueue.empty()) {
            auto creds = responseQueue.front();
            responseQueue.pop();
            return creds;
          }
          return {};
        }

        void PushResponse(AWSCredentials &&creds) {
          responseQueue.emplace(std::forward<AWSCredentials>(creds));
        }

    private:
        std::queue<AWSCredentials> responseQueue;
    };

    class MockCredentialsProviderChain : public AWSCredentialsProviderChain {
    public:
        void AddMockProvider(std::shared_ptr<MockCredentialsProvider> provider) {
          AddProvider(provider);
        }
    };

    void SetUp() override {
      cachedProviderChain = Aws::MakeShared<MockCredentialsProviderChain>(AllocationTag);
    }

    std::shared_ptr<MockCredentialsProviderChain> cachedProviderChain;
};

TEST_F(AWSCachedCredentialsTest, ShouldSkipCredentialsChainForCachedValue)
{
  auto failFirstProvider = Aws::MakeShared<MockCredentialsProvider>(AllocationTag);
  failFirstProvider->PushResponse({});
  failFirstProvider->PushResponse({"never", "see", "this"});

  auto cachedProvider = Aws::MakeShared<MockCredentialsProvider>(AllocationTag);
  cachedProvider->PushResponse({"sbiscigl", "was", "here"});
  cachedProvider->PushResponse({"sbiscigl", "was", "here"});
  cachedProvider->PushResponse({"sbiscigl", "was", "here"});
  cachedProvider->PushResponse({"sbiscigl", "was", "here"});

  cachedProviderChain->AddMockProvider(failFirstProvider);
  cachedProviderChain->AddMockProvider(cachedProvider);

  for (int i = 0; i < 4; ++i) {
    auto creds = cachedProviderChain->GetAWSCredentials();
    ASSERT_EQ("sbiscigl", creds.GetAWSAccessKeyId());
    ASSERT_EQ("was", creds.GetAWSSecretKey());
    ASSERT_EQ("here", creds.GetSessionToken());
  }
}

TEST_F(AWSCachedCredentialsTest, ShouldReplaceCachedWhenProviderFails)
{
  auto failFirstProvider = Aws::MakeShared<MockCredentialsProvider>(AllocationTag);
  failFirstProvider->PushResponse({});
  failFirstProvider->PushResponse({"and", "no", "alarms"});
  failFirstProvider->PushResponse({"and", "no", "surprises"});

  auto cachedFailingProvider = Aws::MakeShared<MockCredentialsProvider>(AllocationTag);
  cachedFailingProvider->PushResponse({"sbiscigl", "was", "here"});
  cachedFailingProvider->PushResponse({});

  cachedProviderChain->AddMockProvider(failFirstProvider);
  cachedProviderChain->AddMockProvider(cachedFailingProvider);

  auto creds = cachedProviderChain->GetAWSCredentials();
  ASSERT_EQ("sbiscigl", creds.GetAWSAccessKeyId());
  ASSERT_EQ("was", creds.GetAWSSecretKey());
  ASSERT_EQ("here", creds.GetSessionToken());

  creds = cachedProviderChain->GetAWSCredentials();
  ASSERT_EQ("and", creds.GetAWSAccessKeyId());
  ASSERT_EQ("no", creds.GetAWSSecretKey());
  ASSERT_EQ("alarms", creds.GetSessionToken());

  creds = cachedProviderChain->GetAWSCredentials();
  ASSERT_EQ("and", creds.GetAWSAccessKeyId());
  ASSERT_EQ("no", creds.GetAWSSecretKey());
  ASSERT_EQ("surprises", creds.GetSessionToken());
}

TEST_F(AWSCachedCredentialsTest, ShouldCacheCredenitalAsync)
{
  auto cachedProvider = Aws::MakeShared<MockCredentialsProvider>(AllocationTag);
  cachedProvider->PushResponse({"and", "no", "alarms"});
  cachedProvider->PushResponse({"and", "no", "surprises"});

  auto fallback = Aws::MakeShared<MockCredentialsProvider>(AllocationTag);
  fallback->PushResponse({"a", "quiet", "life"});

  cachedProviderChain->AddMockProvider(cachedProvider);
  cachedProviderChain->AddMockProvider(fallback);

  auto getCredentials = [](std::shared_ptr<MockCredentialsProviderChain> provider) -> AWSCredentials {
      return provider->GetAWSCredentials();
  };

  std::vector<std::future<AWSCredentials>> futures;
  futures.push_back(std::async(std::launch::async, getCredentials, cachedProviderChain));
  futures.push_back(std::async(std::launch::async, getCredentials, cachedProviderChain));

  std::vector<AWSCredentials> creds;
  for (auto &future: futures) {
    creds.push_back(future.get());
  }

  auto containCredentials = [](std::vector<AWSCredentials> &found,
      const AWSCredentials &credentials) -> bool {
      return std::any_of(found.begin(), found.end(), [&credentials](const AWSCredentials& cred) -> bool {
          return cred == credentials;
      });
  };

  ASSERT_TRUE(containCredentials(creds, {"and", "no", "alarms"}));
  ASSERT_TRUE(containCredentials(creds, {"and", "no", "surprises"}));
  ASSERT_FALSE(containCredentials(creds, {"a", "quiet", "life"}));
}
