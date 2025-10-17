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
    const auto& profile = profiles["default"];
    auto globalEndpoint = profile.GetEndpointUrl();
    ASSERT_TRUE(globalEndpoint.has_value());
    ASSERT_STREQ("https://global.example.com", globalEndpoint->c_str());
    
    // Test services name is parsed correctly
    auto servicesName = profile.GetServicesName();
    ASSERT_TRUE(servicesName.has_value());
    ASSERT_STREQ("myservices", servicesName->c_str());

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
    const auto& profile = profiles["dev-minio"];
    
    // Test that global endpoint is null when not set
    auto globalEndpoint = profile.GetEndpointUrl();
    ASSERT_FALSE(globalEndpoint.has_value());
    
    // Test services name is parsed correctly
    auto servicesName = profile.GetServicesName();
    ASSERT_TRUE(servicesName.has_value());
    ASSERT_STREQ("s3-minio", servicesName->c_str());
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
    const auto& profile = profiles["dev-global"];
    
    // Test global endpoint
    auto globalEndpoint = profile.GetEndpointUrl();
    ASSERT_TRUE(globalEndpoint.has_value());
    ASSERT_STREQ("https://play.min.io:9000", globalEndpoint->c_str());
    
    // Test that services name is not set
    auto servicesName = profile.GetServicesName();
    ASSERT_FALSE(servicesName.has_value());
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
    const auto& profile = profiles["dev-s3-specific-and-global"];
    
    // Test services name is parsed correctly
    auto servicesName = profile.GetServicesName();
    ASSERT_TRUE(servicesName.has_value());
    ASSERT_STREQ("s3-specific-and-global", servicesName->c_str());
    
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
  const auto& profile = profiles["dev"];

  // Test services name is parsed correctly
  auto servicesName = profile.GetServicesName();
  ASSERT_TRUE(servicesName.has_value());
  ASSERT_STREQ("testing-s3-and-eb", servicesName->c_str());
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
    const auto& profile = profiles["testing"];
    
    // Test that global endpoint in services section is ignored
    auto globalEndpoint = profile.GetEndpointUrl();
    ASSERT_FALSE(globalEndpoint.has_value());
    
    // Test that services name is parsed correctly
    auto servicesName = profile.GetServicesName();
    ASSERT_TRUE(servicesName.has_value());
    ASSERT_STREQ("bad-service-definition", servicesName->c_str());
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
    const auto& profileB = profiles["B"];
    const auto& profileA = profiles["A"];
    
    // Test that profile B has services name
    auto servicesBName = profileB.GetServicesName();
    ASSERT_TRUE(servicesBName.has_value());
    ASSERT_STREQ("profileB", servicesBName->c_str());
    
    // Test that profile B has no global endpoint (doesn't inherit from profile A)
    auto globalEndpointB = profileB.GetEndpointUrl();
    ASSERT_FALSE(globalEndpointB.has_value());
    
    // Test that profile A still has its own global endpoint
    auto globalEndpointA = profileA.GetEndpointUrl();
    ASSERT_TRUE(globalEndpointA.has_value());
    ASSERT_STREQ("https://profile-a-endpoint.aws/", globalEndpointA->c_str());
    
    // Test that profile A has no services name
    auto servicesAName = profileA.GetServicesName();
    ASSERT_FALSE(servicesAName.has_value());
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
    ASSERT_STREQ("true", profiles["default"].GetValue("ignore_configured_endpoint_urls").c_str());
    ASSERT_STREQ("TRUE", profiles["test"].GetValue("ignore_configured_endpoint_urls").c_str());
    ASSERT_STREQ("", profiles["empty"].GetValue("ignore_configured_endpoint_urls").c_str());
    
    // Test absent key returns empty string
    TempFile configFile2(std::ios_base::out | std::ios_base::trunc);
    configFile2 << "[profile absent]\n";
    configFile2 << "region = us-east-1\n";
    configFile2.flush();
    
    AWSConfigFileProfileConfigLoader loader2(configFile2.GetFileName(), true);
    ASSERT_TRUE(loader2.Load());
    auto profiles2 = loader2.GetProfiles();
    ASSERT_STREQ("", profiles2["absent"].GetValue("ignore_configured_endpoint_urls").c_str());
}