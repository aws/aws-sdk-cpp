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
    
    // Test service-specific endpoints
    auto s3Endpoint = Profile::GetServiceEndpointUrl(profile, loader.GetServices(), "s3");
    ASSERT_TRUE(s3Endpoint.has_value());
    ASSERT_STREQ("http://localhost:9000", s3Endpoint->c_str());
    
    auto dynamoEndpoint = Profile::GetServiceEndpointUrl(profile, loader.GetServices(), "dynamodb");
    ASSERT_TRUE(dynamoEndpoint.has_value());
    ASSERT_STREQ("http://localhost:8000", dynamoEndpoint->c_str());
    
    // Test case insensitive service lookup
    auto s3EndpointUpper = Profile::GetServiceEndpointUrl(profile, loader.GetServices(), "S3");
    ASSERT_TRUE(s3EndpointUpper.has_value());
    ASSERT_STREQ("http://localhost:9000", s3EndpointUpper->c_str());
    
    // Test non-existent service
    auto nonExistent = Profile::GetServiceEndpointUrl(profile, loader.GetServices(), "nonexistent");
    ASSERT_FALSE(nonExistent.has_value());

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
    
    // Test service-specific endpoint
    auto s3Endpoint = Profile::GetServiceEndpointUrl(profile, loader.GetServices(), "s3");
    ASSERT_TRUE(s3Endpoint.has_value());
    ASSERT_STREQ("https://play.min.io:9000", s3Endpoint->c_str());
    
    // Test case insensitive lookup
    auto s3EndpointUpper = Profile::GetServiceEndpointUrl(profile, loader.GetServices(), "S3");
    ASSERT_TRUE(s3EndpointUpper.has_value());
    ASSERT_STREQ("https://play.min.io:9000", s3EndpointUpper->c_str());
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
    
    // Test that service-specific endpoint is null when not set
    auto s3Endpoint = Profile::GetServiceEndpointUrl(profile, loader.GetServices(), "s3");
    ASSERT_FALSE(s3Endpoint.has_value());
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
    
    // Test service-specific S3 endpoint
    auto s3Endpoint = Profile::GetServiceEndpointUrl(profile, loader.GetServices(), "s3");
    ASSERT_TRUE(s3Endpoint.has_value());
    ASSERT_STREQ("https://play.min.io:9000", s3Endpoint->c_str());
    
    // Test global endpoint for other services
    auto globalEndpoint = profile.GetEndpointUrl();
    ASSERT_TRUE(globalEndpoint.has_value());
    ASSERT_STREQ("http://localhost:1234", globalEndpoint->c_str());
    
    // Test that non-configured service returns null (would fall back to global)
    auto dynamoEndpoint = Profile::GetServiceEndpointUrl(profile, loader.GetServices(), "dynamodb");
    ASSERT_FALSE(dynamoEndpoint.has_value());
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

  // Test S3 endpoint
  auto s3Endpoint = Profile::GetServiceEndpointUrl(profile, loader.GetServices(), "s3");
  ASSERT_TRUE(s3Endpoint.has_value());
  ASSERT_STREQ("http://localhost:4567", s3Endpoint->c_str());

  // Test Elastic Beanstalk endpoint with normalized service ID
  auto ebEndpoint = Profile::GetServiceEndpointUrl(profile, loader.GetServices(), "Elastic Beanstalk");
  ASSERT_TRUE(ebEndpoint.has_value());
  ASSERT_STREQ("http://localhost:8000", ebEndpoint->c_str());

  // Test direct normalized lookup
  auto ebEndpointDirect = Profile::GetServiceEndpointUrl(profile, loader.GetServices(), "elastic_beanstalk");
  ASSERT_TRUE(ebEndpointDirect.has_value());
  ASSERT_STREQ("http://localhost:8000", ebEndpointDirect->c_str());
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
    
    // Test that service-specific endpoints return null (no services configured)
    auto s3Endpoint = Profile::GetServiceEndpointUrl(profile, loader.GetServices(), "s3");
    ASSERT_FALSE(s3Endpoint.has_value());
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
    
    // Test that profile B gets EC2 endpoint from its own services definition
    auto ec2Endpoint = Profile::GetServiceEndpointUrl(profileB, loader.GetServices(), "ec2");
    ASSERT_TRUE(ec2Endpoint.has_value());
    ASSERT_STREQ("https://profile-b-ec2-endpoint.aws", ec2Endpoint->c_str());
    
    // Test that profile B has no global endpoint (doesn't inherit from profile A)
    auto globalEndpointB = profileB.GetEndpointUrl();
    ASSERT_FALSE(globalEndpointB.has_value());
    
    // Test that profile A still has its own global endpoint
    auto globalEndpointA = profileA.GetEndpointUrl();
    ASSERT_TRUE(globalEndpointA.has_value());
    ASSERT_STREQ("https://profile-a-endpoint.aws/", globalEndpointA->c_str());
    
    // Test that other services in profile B return null (no chaining to profile A)
    auto s3Endpoint = Profile::GetServiceEndpointUrl(profileB, loader.GetServices(), "s3");
    ASSERT_FALSE(s3Endpoint.has_value());
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