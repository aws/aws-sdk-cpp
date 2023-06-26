/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
* SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/utils/Outcome.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/platform/Environment.h>

#include <fstream>
#include <thread>
#include <aws/core/utils/logging/LogMacros.h>

class AWSMetadataEndpointTestSuite : public Aws::Testing::AwsCppSdkGTestSuite
{
public:
  void SetUp()
  {
    SaveEnvironmentVariable("AWS_CONFIG_FILE");
    SaveEnvironmentVariable("AWS_DEFAULT_PROFILE");
    SaveEnvironmentVariable("AWS_PROFILE");
    SaveEnvironmentVariable("AWS_DEFAULT_REGION");
    SaveEnvironmentVariable("AWS_REGION");
    SaveEnvironmentVariable("AWS_EC2_METADATA_DISABLED");
    SaveEnvironmentVariable("AWS_EC2_METADATA_SERVICE_ENDPOINT");

    Aws::StringStream ss;
    ss << Aws::Auth::GetConfigProfileFilename() + "_blah" << std::this_thread::get_id();
    m_configFileName = ss.str();
    Aws::Environment::SetEnv("AWS_CONFIG_FILE", m_configFileName.c_str(), 1);
    Aws::Environment::UnSetEnv("AWS_DEFAULT_PROFILE");
    Aws::Environment::UnSetEnv("AWS_PROFILE");
    Aws::Environment::UnSetEnv("AWS_DEFAULT_REGION");
    Aws::Environment::UnSetEnv("AWS_REGION");
    Aws::Environment::UnSetEnv("AWS_EC2_METADATA_SERVICE_ENDPOINT");

    auto profileDirectory = Aws::Auth::ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory();
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
  std::shared_ptr<MockHttpClient> mockHttpClient;
  std::shared_ptr<MockHttpClientFactory> mockHttpClientFactory;
};

TEST_F(AWSMetadataEndpointTestSuite, TestUndeclaredEndpointForEC2MetadataInEnvUsesDefaultURI)
{
  Aws::Internal::CleanupEC2MetadataClient();

  Aws::Environment::UnSetEnv("AWS_EC2_METADATA_SERVICE_ENDPOINT");
  Aws::Environment::UnSetEnv("AWS_EC2_METADATA_SERVICE_ENDPOINT_MODE");

  Aws::Internal::InitEC2MetadataClient();

  auto client = Aws::Internal::GetEC2MetadataClient();
  EXPECT_EQ("http://169.254.169.254", client->GetEndpoint());
}

TEST_F(AWSMetadataEndpointTestSuite, TestEndpointForEC2MetadataIsReadFromEnvWhenDeclared)
{
  Aws::Internal::CleanupEC2MetadataClient();

  Aws::Environment::SetEnv("AWS_EC2_METADATA_SERVICE_ENDPOINT", "http://[::1]", 1/*overwrite*/);
  Aws::Environment::UnSetEnv("AWS_EC2_METADATA_SERVICE_ENDPOINT_MODE");

  Aws::Internal::InitEC2MetadataClient();

  auto client = Aws::Internal::GetEC2MetadataClient();
  EXPECT_EQ("http://[::1]", client->GetEndpoint());
}

TEST_F(AWSMetadataEndpointTestSuite, TestEndpointForEC2MetadataCanBeOverriddenBySet)
{
  Aws::Internal::CleanupEC2MetadataClient();

  Aws::Environment::SetEnv("AWS_EC2_METADATA_SERVICE_ENDPOINT", "http://[::1]", 1/*overwrite*/);
  Aws::Environment::UnSetEnv("AWS_EC2_METADATA_SERVICE_ENDPOINT_MODE");

  Aws::Internal::InitEC2MetadataClient();

  auto client = Aws::Internal::GetEC2MetadataClient();
  EXPECT_EQ("http://[::1]", client->GetEndpoint());

  client->SetEndpoint("http://127.0.0.1");
  EXPECT_EQ("http://127.0.0.1", client->GetEndpoint());
}

TEST_F(AWSMetadataEndpointTestSuite, TestEndpointForIpV6ModeIsSetWhenNoExplicitlyOverridden)
{
  Aws::Internal::CleanupEC2MetadataClient();

  Aws::Environment::UnSetEnv("AWS_EC2_METADATA_SERVICE_ENDPOINT");
  Aws::Environment::SetEnv("AWS_EC2_METADATA_SERVICE_ENDPOINT_MODE", "ipV6", 1/*overwrite*/);

  Aws::Internal::InitEC2MetadataClient();

  auto client = Aws::Internal::GetEC2MetadataClient();
  EXPECT_EQ("http://[fd00:ec2::254]", client->GetEndpoint());
}

TEST_F(AWSMetadataEndpointTestSuite, TestEndpointForIpV4ModeIsSetWhenNoExplicitlyOverridden)
{
  Aws::Internal::CleanupEC2MetadataClient();

  Aws::Environment::UnSetEnv("AWS_EC2_METADATA_SERVICE_ENDPOINT");
  Aws::Environment::SetEnv("AWS_EC2_METADATA_SERVICE_ENDPOINT_MODE", "ipV4", 1/*overwrite*/);

  Aws::Internal::InitEC2MetadataClient();

  auto client = Aws::Internal::GetEC2MetadataClient();

  EXPECT_EQ("http://169.254.169.254", client->GetEndpoint());
}

TEST_F(AWSMetadataEndpointTestSuite, TestEndpointForIpV6ModeIsIgnoredSetWhenExplicitlyOverridden)
{
  Aws::Internal::CleanupEC2MetadataClient();

  Aws::Environment::SetEnv("AWS_EC2_METADATA_SERVICE_ENDPOINT", "http://[::1]", 1/*overwrite*/);
  Aws::Environment::SetEnv("AWS_EC2_METADATA_SERVICE_ENDPOINT_MODE", "ipV6", 1/*overwrite*/);

  Aws::Internal::InitEC2MetadataClient();

  auto client = Aws::Internal::GetEC2MetadataClient();
  EXPECT_EQ("http://[::1]", client->GetEndpoint());
}

TEST_F(AWSMetadataEndpointTestSuite, TestEndpointForIpV4ModeIsIgnoredSetWhenExplicitlyOverridden)
{
  Aws::Internal::CleanupEC2MetadataClient();

  Aws::Environment::SetEnv("AWS_EC2_METADATA_SERVICE_ENDPOINT", "http://[::1]", 1/*overwrite*/);
  Aws::Environment::SetEnv("AWS_EC2_METADATA_SERVICE_ENDPOINT_MODE", "ipV4", 1/*overwrite*/);

  Aws::Internal::InitEC2MetadataClient();

  auto client = Aws::Internal::GetEC2MetadataClient();
  EXPECT_EQ("http://[::1]", client->GetEndpoint());
}