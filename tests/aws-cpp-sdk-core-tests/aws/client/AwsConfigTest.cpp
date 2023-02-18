/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
* SPDX-License-Identifier: Apache-2.0.
*/
#include <gtest/gtest.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/Outcome.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/platform/Environment.h>

#include <fstream>
#include <thread>
#include <aws/core/utils/logging/LogMacros.h>


class AWSConfigTestSuite : public ::testing::Test
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