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
    auto globalEndpoint = loader.GetGlobalEndpointUrl("default");
    ASSERT_NE(nullptr, globalEndpoint);
    ASSERT_STREQ("https://global.example.com", globalEndpoint->c_str());
    
    // Test service-specific endpoints
    auto s3Endpoint = loader.GetServiceEndpointUrl("default", "s3");
    ASSERT_NE(nullptr, s3Endpoint);
    ASSERT_STREQ("http://localhost:9000", s3Endpoint->c_str());
    
    auto dynamoEndpoint = loader.GetServiceEndpointUrl("default", "dynamodb");
    ASSERT_NE(nullptr, dynamoEndpoint);
    ASSERT_STREQ("http://localhost:8000", dynamoEndpoint->c_str());
    
    // Test case insensitive service lookup
    auto s3EndpointUpper = loader.GetServiceEndpointUrl("default", "S3");
    ASSERT_NE(nullptr, s3EndpointUpper);
    ASSERT_STREQ("http://localhost:9000", s3EndpointUpper->c_str());
    
    // Test non-existent service
    auto nonExistent = loader.GetServiceEndpointUrl("default", "nonexistent");
    ASSERT_EQ(nullptr, nonExistent);
    
    // Test non-existent profile
    auto nonExistentProfile = loader.GetServiceEndpointUrl("nonexistent", "s3");
    ASSERT_EQ(nullptr, nonExistentProfile);
    
    auto nonExistentProfileGlobal = loader.GetGlobalEndpointUrl("nonexistent");
    ASSERT_EQ(nullptr, nonExistentProfileGlobal);
}

TEST_F(ServiceEndpointsConfigFileLoaderTest, TestServiceSpecificEndpointsOnly)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());

    configFile << "[profile test]\n";
    configFile << "region = us-east-1\n";
    configFile << "services = testservices\n";
    configFile << "\n[services testservices]\n";
    configFile << "s3 =\n";
    configFile << "  endpoint_url = http://localhost:9000\n";
    configFile.flush();

    AWSConfigFileProfileConfigLoader loader(configFile.GetFileName(), true);
    ASSERT_TRUE(loader.Load());
    
    // Test that global endpoint is null when not set
    auto globalEndpoint = loader.GetGlobalEndpointUrl("test");
    ASSERT_EQ(nullptr, globalEndpoint);
    
    // Test service-specific endpoint still works
    auto s3Endpoint = loader.GetServiceEndpointUrl("test", "s3");
    ASSERT_NE(nullptr, s3Endpoint);
    ASSERT_STREQ("http://localhost:9000", s3Endpoint->c_str());
}

TEST_F(ServiceEndpointsConfigFileLoaderTest, TestGlobalEndpointOnly)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());

    configFile << "[profile test]\n";
    configFile << "endpoint_url = https://global.example.com\n";
    configFile.flush();

    AWSConfigFileProfileConfigLoader loader(configFile.GetFileName(), true);
    ASSERT_TRUE(loader.Load());
    
    // Test global endpoint
    auto globalEndpoint = loader.GetGlobalEndpointUrl("test");
    ASSERT_NE(nullptr, globalEndpoint);
    ASSERT_STREQ("https://global.example.com", globalEndpoint->c_str());
    
    // Test that service-specific endpoint is null when not set
    auto s3Endpoint = loader.GetServiceEndpointUrl("test", "s3");
    ASSERT_EQ(nullptr, s3Endpoint);
}

