/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/config/AWSProfileConfigLoader.h>
#include <aws/core/utils/FileSystemUtils.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <fstream>

using namespace Aws::Utils;
using namespace Aws::Config;

class ServiceEndpointsConfigFileLoaderTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ServiceEndpointsConfigFileLoaderTest, TestServiceSpecificEndpoints)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());

    configFile << "[profile default]\n";
    configFile << "region = us-west-2\n";
    configFile << "endpoint_url = https://global.example.com\n";
    configFile << "services = myservices\n";
    configFile << "\n[services myservices]\n";
    configFile << "s3 =\n";
    configFile << "  endpoint_url = http://localhost:9000\n";
    configFile << "dynamodb =\n";
    configFile << "  endpoint_url = http://localhost:8000\n";
    configFile.flush();

    AWSConfigFileProfileConfigLoader loader(configFile.GetFileName(), true);
    ASSERT_TRUE(loader.Load());
    auto profiles = loader.GetProfiles();
    
    ASSERT_EQ(1u, profiles.size());
    ASSERT_NE(profiles.end(), profiles.find("default"));
    
    // Test global endpoint
    auto profileIt = profiles.find("default");
    ASSERT_NE(profiles.end(), profileIt);
    const auto& profile = profileIt->second;
    auto globalEndpoint = profile.GetEndpointUrl();
    ASSERT_TRUE(globalEndpoint.has_value());
    ASSERT_STREQ("https://global.example.com", globalEndpoint->c_str());
    
    // Test services endpoints are parsed correctly
    const auto& services = profile.GetServices();
    ASSERT_TRUE(services.IsSet());
    const auto& endpoints = services.GetEndpoints();
    ASSERT_EQ(2u, endpoints.size());
    ASSERT_EQ("http://localhost:9000", endpoints.at("S3"));
    ASSERT_EQ("http://localhost:8000", endpoints.at("DYNAMODB"));
}

TEST_F(ServiceEndpointsConfigFileLoaderTest, TestServiceSpecificEndpointsOnly)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());

    configFile << "[services s3-minio]\n";
    configFile << "s3 =\n";
    configFile << "  endpoint_url = https://play.min.io:9000\n";
    configFile << "\n[profile dev-minio]\n";
    configFile << "services = s3-minio\n";
    configFile.flush();

    AWSConfigFileProfileConfigLoader loader(configFile.GetFileName(), true);
    ASSERT_TRUE(loader.Load());
    auto profiles = loader.GetProfiles();
    auto profileIt = profiles.find("dev-minio");
    ASSERT_NE(profiles.end(), profileIt);
    const auto& profile = profileIt->second;
    
    // Test that global endpoint is null when not set
    auto globalEndpoint = profile.GetEndpointUrl();
    ASSERT_FALSE(globalEndpoint.has_value());
    
    // Test services endpoints are parsed correctly
    const auto& services = profile.GetServices();
    ASSERT_TRUE(services.IsSet());
    const auto& endpoints = services.GetEndpoints();
    ASSERT_EQ(1u, endpoints.size());
    ASSERT_EQ("https://play.min.io:9000", endpoints.at("S3"));
}

TEST_F(ServiceEndpointsConfigFileLoaderTest, TestGlobalEndpointOnly)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());

    configFile << "[profile dev-global]\n";
    configFile << "endpoint_url = https://play.min.io:9000\n";
    configFile.flush();

    AWSConfigFileProfileConfigLoader loader(configFile.GetFileName(), true);
    ASSERT_TRUE(loader.Load());
    auto profiles = loader.GetProfiles();
    auto profileIt = profiles.find("dev-global");
    ASSERT_NE(profiles.end(), profileIt);
    const auto& profile = profileIt->second;
    
    // Test global endpoint
    auto globalEndpoint = profile.GetEndpointUrl();
    ASSERT_TRUE(globalEndpoint.has_value());
    ASSERT_STREQ("https://play.min.io:9000", globalEndpoint->c_str());
    
    // Test that services endpoints are not set
    const auto& services = profile.GetServices();
    ASSERT_FALSE(services.IsSet());
}

TEST_F(ServiceEndpointsConfigFileLoaderTest, TestServiceSpecificAndGlobalEndpoints)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());

    configFile << "[services s3-specific-and-global]\n";
    configFile << "s3 =\n";
    configFile << "  endpoint_url = https://play.min.io:9000\n";
    configFile << "\n[profile dev-s3-specific-and-global]\n";
    configFile << "endpoint_url = http://localhost:1234\n";
    configFile << "services = s3-specific-and-global\n";
    configFile.flush();

    AWSConfigFileProfileConfigLoader loader(configFile.GetFileName(), true);
    ASSERT_TRUE(loader.Load());
    auto profiles = loader.GetProfiles();
    auto profileIt = profiles.find("dev-s3-specific-and-global");
    ASSERT_NE(profiles.end(), profileIt);
    const auto& profile = profileIt->second;
    
    // Test services endpoints are parsed correctly
    const auto& services = profile.GetServices();
    ASSERT_TRUE(services.IsSet());
    const auto& endpoints = services.GetEndpoints();
    ASSERT_EQ(1u, endpoints.size());
    ASSERT_EQ("https://play.min.io:9000", endpoints.at("S3"));
    
    // Test global endpoint
    auto globalEndpoint = profile.GetEndpointUrl();
    ASSERT_TRUE(globalEndpoint.has_value());
    ASSERT_STREQ("http://localhost:1234", globalEndpoint->c_str());
}

TEST_F(ServiceEndpointsConfigFileLoaderTest, TestMultipleServicesInDefinition)
{
  TempFile configFile(std::ios_base::out | std::ios_base::trunc);
  ASSERT_TRUE(configFile.good());

  configFile << "[services testing-s3-and-eb]\n";
  configFile << "s3 =\n";
  configFile << "  endpoint_url = http://localhost:4567\n";
  configFile << "elastic_beanstalk =\n";
  configFile << "  endpoint_url = http://localhost:8000\n";
  configFile << "\n[profile dev]\n";
  configFile << "services = testing-s3-and-eb\n";
  configFile.flush();

  AWSConfigFileProfileConfigLoader loader(configFile.GetFileName(), true);
  ASSERT_TRUE(loader.Load());
  auto profiles = loader.GetProfiles();
  auto profileIt = profiles.find("dev");
  ASSERT_NE(profiles.end(), profileIt);
  const auto& profile = profileIt->second;

  // Test services endpoints are parsed correctly
  const auto& services = profile.GetServices();
  ASSERT_TRUE(services.IsSet());
  const auto& endpoints = services.GetEndpoints();
  ASSERT_EQ(2u, endpoints.size());
  ASSERT_EQ("http://localhost:4567", endpoints.at("S3"));
  ASSERT_EQ("http://localhost:8000", endpoints.at("ELASTIC_BEANSTALK"));
}

TEST_F(ServiceEndpointsConfigFileLoaderTest, TestIgnoreGlobalEndpointInServicesSection)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());

    configFile << "[profile testing]\n";
    configFile << "services = bad-service-definition\n";
    configFile << "\n[services bad-service-definition]\n";
    configFile << "endpoint_url = http://do-not-use.aws/\n";
    configFile.flush();

    AWSConfigFileProfileConfigLoader loader(configFile.GetFileName(), true);
    ASSERT_TRUE(loader.Load());
    auto profiles = loader.GetProfiles();
    auto profileIt = profiles.find("testing");
    ASSERT_NE(profiles.end(), profileIt);
    const auto& profile = profileIt->second;
    
    // Test that global endpoint in services section is ignored
    auto globalEndpoint = profile.GetEndpointUrl();
    ASSERT_FALSE(globalEndpoint.has_value());
    
    // Test that services endpoints are empty (global endpoint_url ignored)
    const auto& services = profile.GetServices();
    ASSERT_TRUE(services.IsSet());
    const auto& endpoints = services.GetEndpoints();
    ASSERT_EQ(0u, endpoints.size());
}

TEST_F(ServiceEndpointsConfigFileLoaderTest, TestSourceProfileEndpointIsolation)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());

    configFile << "[profile A]\n";
    configFile << "credential_source = Ec2InstanceMetadata\n";
    configFile << "endpoint_url = https://profile-a-endpoint.aws/\n";
    configFile << "\n[profile B]\n";
    configFile << "source_profile = A\n";
    configFile << "role_arn = arn:aws:iam::123456789012:role/roleB\n";
    configFile << "services = profileB\n";
    configFile << "\n[services profileB]\n";
    configFile << "ec2 =\n";
    configFile << "  endpoint_url = https://profile-b-ec2-endpoint.aws\n";
    configFile.flush();

    AWSConfigFileProfileConfigLoader loader(configFile.GetFileName(), true);
    ASSERT_TRUE(loader.Load());
    auto profiles = loader.GetProfiles();
    auto profileBIt = profiles.find("B");
    ASSERT_NE(profiles.end(), profileBIt);
    const auto& profileB = profileBIt->second;
    auto profileAIt = profiles.find("A");
    ASSERT_NE(profiles.end(), profileAIt);
    const auto& profileA = profileAIt->second;
    
    // Test that profile B has services endpoints
    const auto& servicesB = profileB.GetServices();
    ASSERT_TRUE(servicesB.IsSet());
    const auto& endpointsB = servicesB.GetEndpoints();
    ASSERT_EQ(1u, endpointsB.size());
    ASSERT_EQ("https://profile-b-ec2-endpoint.aws", endpointsB.at("EC2"));
    
    // Test that profile B has no global endpoint (doesn't inherit from profile A)
    auto globalEndpointB = profileB.GetEndpointUrl();
    ASSERT_FALSE(globalEndpointB.has_value());
    
    // Test that profile A still has its own global endpoint
    auto globalEndpointA = profileA.GetEndpointUrl();
    ASSERT_TRUE(globalEndpointA.has_value());
    ASSERT_STREQ("https://profile-a-endpoint.aws/", globalEndpointA->c_str());
    
    // Test that profile A has no services name
    const auto& servicesA = profileA.GetServices();
    ASSERT_FALSE(servicesA.IsSet());
}

TEST_F(ServiceEndpointsConfigFileLoaderTest, TestIgnoreConfiguredEndpointUrls)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());

    configFile << "[profile default]\n";
    configFile << "ignore_configured_endpoint_urls = true\n";
    configFile << "endpoint_url = https://should-be-ignored.com\n";
    configFile << "\n[profile test]\n";
    configFile << "ignore_configured_endpoint_urls =  TRUE\n";
    configFile << "\n[profile empty]\n";
    configFile << "ignore_configured_endpoint_urls =\n";
    configFile.flush();

    AWSConfigFileProfileConfigLoader loader(configFile.GetFileName(), true);
    ASSERT_TRUE(loader.Load());
    auto profiles = loader.GetProfiles();
    
    // Test flag is parsed and stored
    ASSERT_STREQ("true", profiles.find("default")->second.GetValue("ignore_configured_endpoint_urls").c_str());
    ASSERT_STREQ("TRUE", profiles.find("test")->second.GetValue("ignore_configured_endpoint_urls").c_str());
    ASSERT_STREQ("", profiles.find("empty")->second.GetValue("ignore_configured_endpoint_urls").c_str());
}

TEST_F(ServiceEndpointsConfigFileLoaderTest, TestMultipleServicesDefinitions)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());

    configFile << "[services foo]\n";
    configFile << "s3 =\n";
    configFile << "  endpoint_url = http://foo.com\n";
    configFile << "\n[services bar]\n";
    configFile << "s3 =\n";
    configFile << "  endpoint_url = http://bar.com\n";
    configFile << "\n[profile dev]\n";
    configFile << "services = foo\n";
    configFile.flush();

    AWSConfigFileProfileConfigLoader loader(configFile.GetFileName(), true);
    ASSERT_TRUE(loader.Load());
    auto profiles = loader.GetProfiles();
    auto profileIt = profiles.find("dev");
    ASSERT_NE(profiles.end(), profileIt);
    const auto& profile = profileIt->second;

    // Test services endpoints are parsed correctly
    const auto& services = profile.GetServices();
    ASSERT_TRUE(services.IsSet());
    const auto& endpoints = services.GetEndpoints();
    ASSERT_EQ(1u, endpoints.size());
    ASSERT_EQ("http://foo.com", endpoints.at("S3"));
}