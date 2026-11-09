/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
* SPDX-License-Identifier: Apache-2.0.
*/
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/Outcome.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/endpoint/BuiltInParameters.h>

#include <fstream>
#include <thread>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/core/auth/ProfileCredentialsProvider.h>


class AWSConfigTestSuite : public Aws::Testing::AwsCppSdkGTestSuite
{
protected:
  void SetUp()
  {
    SaveEnvironmentVariable("AWS_CONFIG_FILE");
    SaveEnvironmentVariable("AWS_DEFAULT_PROFILE");
    SaveEnvironmentVariable("AWS_PROFILE");
    SaveEnvironmentVariable("AWS_DEFAULT_REGION");
    SaveEnvironmentVariable("AWS_REGION");
    SaveEnvironmentVariable("AWS_EC2_METADATA_SERVICE_ENDPOINT");
    SaveEnvironmentVariable("DISABLE_REQUEST_COMPRESSION");
    SaveEnvironmentVariable("AWS_USE_DUALSTACK_ENDPOINT");
    SaveEnvironmentVariable("AWS_USE_FIPS_ENDPOINT");

    Aws::StringStream ss;
    ss << Aws::Auth::GetConfigProfileFilename() + "_blah" << std::this_thread::get_id();
    m_configFileName = ss.str();
    Aws::Environment::SetEnv("AWS_CONFIG_FILE", m_configFileName.c_str(), 1);
    Aws::Environment::UnSetEnv("AWS_DEFAULT_PROFILE");
    Aws::Environment::UnSetEnv("AWS_PROFILE");
    Aws::Environment::UnSetEnv("AWS_DEFAULT_REGION");
    Aws::Environment::UnSetEnv("AWS_REGION");
    Aws::Environment::UnSetEnv("AWS_EC2_METADATA_SERVICE_ENDPOINT");
    Aws::Environment::UnSetEnv("DISABLE_REQUEST_COMPRESSION");
    Aws::Environment::UnSetEnv("AWS_USE_DUALSTACK_ENDPOINT");
    Aws::Environment::UnSetEnv("AWS_USE_FIPS_ENDPOINT");

    auto profileDirectory = Aws::Auth::ProfileCredentialsProvider::GetProfileDirectory();
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
        Aws::Environment::SetEnv(iter.first, iter.second.c_str(), 1/*override*/);
      }
    }
  }

  Aws::Vector<std::pair<const char*, Aws::String>> m_environment;
  Aws::String m_configFileName;
};

TEST_F(AWSConfigTestSuite, TestClientConfigurationWithNonExistentProfile)
{
  // create a config file with profile named Dijkstra
  Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
  configFileNew << "[Dijkstra]" << std::endl;
  configFileNew << "region = " << Aws::Region::US_WEST_2 << std::endl;

  configFileNew.flush();
  configFileNew.close();
  Aws::Config::ReloadCachedConfigFile();

  Aws::Client::ClientConfiguration config("Edsger");
  EXPECT_EQ(Aws::Region::US_EAST_1, config.region);
  EXPECT_STREQ("default", config.profileName.c_str());

  // cleanup
  Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(AWSConfigTestSuite, TestClientConfigurationWithNonExistentConfigFile)
{
  Aws::Environment::SetEnv("AWS_CONFIG_FILE", "WhatAreTheChances", 1/*overwrite*/);
  Aws::Config::ReloadCachedConfigFile();

  Aws::Client::ClientConfiguration config("default");
  EXPECT_EQ(Aws::Region::US_EAST_1, config.region);
  EXPECT_STREQ("default", config.profileName.c_str());
}

TEST_F(AWSConfigTestSuite, TestClientConfigurationSetsRegionToProfile)
{
  // create a config file with profile named Dijkstra
  Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
  configFileNew << "[profile Dijkstra]" << std::endl;  // profile keyword is mandatory per specification
  configFileNew << "region = " << Aws::Region::US_WEST_2 << std::endl;

  configFileNew.flush();
  configFileNew.close();
  Aws::Config::ReloadCachedConfigFile();

  Aws::Client::ClientConfiguration config("Dijkstra");
  EXPECT_EQ(Aws::Region::US_WEST_2, config.region);
  EXPECT_STREQ("Dijkstra", config.profileName.c_str());

  // cleanup
  Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(AWSConfigTestSuite, TestNoEnvNoConfigSetsUseRequestCompressionToTrue){
  // create an empty config file
  Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

  configFileNew.flush();
  configFileNew.close();
  Aws::Config::ReloadCachedConfigFile();

  Aws::Client::ClientConfiguration config;

  EXPECT_EQ(Aws::Client::UseRequestCompression::ENABLE, config.requestCompressionConfig.useRequestCompression);

  // cleanup
  Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(AWSConfigTestSuite, TestEnvToFalseAndNoConfigSetsUseRequestCompressionToFalse){
  //Set Env variable
  Aws::Environment::SetEnv("DISABLE_REQUEST_COMPRESSION", "true", 1/*overwrite*/);
  // create an empty config file
  Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);

  configFileNew.flush();
  configFileNew.close();
  Aws::Config::ReloadCachedConfigFile();

  Aws::Client::ClientConfiguration config;

  EXPECT_EQ(Aws::Client::UseRequestCompression::DISABLE, config.requestCompressionConfig.useRequestCompression);

  // cleanup
  Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(AWSConfigTestSuite, TestEnvToTrueAndConfigSetToFalseSetsUseRequestCompressionToTrue){
  //Set Env variable
  Aws::Environment::SetEnv("DISABLE_REQUEST_COMPRESSION", "false", 1/*overwrite*/);
  // create an empty config file
  Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
  configFileNew << "[profile Dijkstra]" << std::endl;  // profile keyword is mandatory per specification
  configFileNew << "disable_request_compression = false" << std::endl;

  configFileNew.flush();
  configFileNew.close();
  Aws::Config::ReloadCachedConfigFile();

  Aws::Client::ClientConfiguration config("Dijkstra");

  EXPECT_EQ(Aws::Client::UseRequestCompression::ENABLE, config.requestCompressionConfig.useRequestCompression);

  // cleanup
  Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(AWSConfigTestSuite, TestNoEnvAndConfigSetToFalseSetsUseRequestCompressionToFalse){
  // create an empty config file
  Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
  configFileNew << "[profile default]" << std::endl;  // profile keyword is mandatory per specification
  configFileNew << "disable_request_compression = true" << std::endl;

  configFileNew.flush();
  configFileNew.close();
  Aws::Config::ReloadCachedConfigFile();

  Aws::Client::ClientConfiguration config;

  EXPECT_EQ(Aws::Client::UseRequestCompression::DISABLE, config.requestCompressionConfig.useRequestCompression);

  // cleanup
  Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(AWSConfigTestSuite, TestNoEnvNoConfigLeavesDualStackAndFipsDisabled){
  Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
  configFileNew.flush();
  configFileNew.close();
  Aws::Config::ReloadCachedConfigFile();

  Aws::Client::ClientConfiguration config;

  EXPECT_FALSE(config.useDualStack);
  EXPECT_FALSE(config.useFIPS);

  Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(AWSConfigTestSuite, TestEnvEnablesDualStackAndFips){
  Aws::Environment::SetEnv("AWS_USE_DUALSTACK_ENDPOINT", "true", 1/*overwrite*/);
  Aws::Environment::SetEnv("AWS_USE_FIPS_ENDPOINT", "TRUE", 1/*overwrite*/);
  Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
  configFileNew.flush();
  configFileNew.close();
  Aws::Config::ReloadCachedConfigFile();

  Aws::Client::ClientConfiguration config;

  EXPECT_TRUE(config.useDualStack);
  EXPECT_TRUE(config.useFIPS);

  Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(AWSConfigTestSuite, TestProfileEnablesDualStackAndFips){
  Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
  configFileNew << "[profile Dijkstra]" << std::endl;
  configFileNew << "use_dualstack_endpoint = true" << std::endl;
  configFileNew << "use_fips_endpoint = true" << std::endl;
  configFileNew.flush();
  configFileNew.close();
  Aws::Config::ReloadCachedConfigFile();

  Aws::Client::ClientConfiguration config("Dijkstra");

  EXPECT_TRUE(config.useDualStack);
  EXPECT_TRUE(config.useFIPS);

  Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(AWSConfigTestSuite, TestEnvFalseOverridesProfileTrueForDualStackAndFips){
  Aws::Environment::SetEnv("AWS_USE_DUALSTACK_ENDPOINT", "false", 1/*overwrite*/);
  Aws::Environment::SetEnv("AWS_USE_FIPS_ENDPOINT", "false", 1/*overwrite*/);
  Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
  configFileNew << "[profile Dijkstra]" << std::endl;
  configFileNew << "use_dualstack_endpoint = true" << std::endl;
  configFileNew << "use_fips_endpoint = true" << std::endl;
  configFileNew.flush();
  configFileNew.close();
  Aws::Config::ReloadCachedConfigFile();

  Aws::Client::ClientConfiguration config("Dijkstra");

  EXPECT_FALSE(config.useDualStack);
  EXPECT_FALSE(config.useFIPS);

  Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(AWSConfigTestSuite, TestInvalidValueLeavesDualStackAndFipsDisabled){
  Aws::Environment::SetEnv("AWS_USE_DUALSTACK_ENDPOINT", "yes", 1/*overwrite*/);
  Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
  configFileNew << "[default]" << std::endl;
  configFileNew << "use_fips_endpoint = 1" << std::endl;
  configFileNew.flush();
  configFileNew.close();
  Aws::Config::ReloadCachedConfigFile();

  Aws::Client::ClientConfiguration config;

  EXPECT_FALSE(config.useDualStack);
  EXPECT_FALSE(config.useFIPS);

  Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(AWSConfigTestSuite, TestCodeOverridesEnvForDualStackAndFips){
  Aws::Environment::SetEnv("AWS_USE_DUALSTACK_ENDPOINT", "true", 1/*overwrite*/);
  Aws::Environment::SetEnv("AWS_USE_FIPS_ENDPOINT", "true", 1/*overwrite*/);
  Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
  configFileNew.flush();
  configFileNew.close();
  Aws::Config::ReloadCachedConfigFile();

  Aws::Client::ClientConfiguration config;
  config.useDualStack = false;
  config.useFIPS = false;

  Aws::Endpoint::BuiltInParameters params;
  params.SetFromClientConfiguration(config);
  const auto& dualStack = params.GetParameter("UseDualStack");
  const auto& fips = params.GetParameter("UseFIPS");
  bool dualStackValue = true;
  bool fipsValue = true;
  ASSERT_EQ(Aws::Endpoint::EndpointParameter::GetSetResult::SUCCESS, dualStack.GetBool(dualStackValue));
  ASSERT_EQ(Aws::Endpoint::EndpointParameter::GetSetResult::SUCCESS, fips.GetBool(fipsValue));
  EXPECT_FALSE(dualStackValue);
  EXPECT_FALSE(fipsValue);

  Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(AWSConfigTestSuite, TestDefaultProfileLoadingWithCLRFStyleLineEndings) {
    // Create a config file with CLRF line endings
    Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFileNew << "[profile default]\r\n";  // profile keyword is mandatory per specification

    configFileNew.flush();
    configFileNew.close();
    Aws::Config::ReloadCachedConfigFile();

    Aws::Client::ClientConfiguration config("default"); // Test if default profile could be loaded

    EXPECT_STREQ("default", config.profileName.c_str()); // Check if loaded profile name is 'default'

    // Test with mixed line endings
    Aws::OFStream configFileMixed(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFileMixed << "[profile default]\n";

    configFileMixed.flush();
    configFileMixed.close();
    Aws::Config::ReloadCachedConfigFile();

    Aws::Client::ClientConfiguration configMixed("default"); // Test if default profile could be loaded with mixed line endings

    EXPECT_STREQ("default", configMixed.profileName.c_str()); // Check if loaded profile name is 'default'

    // Cleanup
    Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}
