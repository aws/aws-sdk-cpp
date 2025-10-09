/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/client/ConfiguredEndpointResolver.h>
#include <aws/core/config/AWSConfigFileProfileConfigLoader.h>
#include <aws/core/platform/Environment.h>
#include <memory>

using namespace Aws::Client;
using namespace Aws::Config;

class ConfiguredEndpointResolverTestSuite : public Aws::Testing::AwsCppSdkGTestSuite
{
public:
    void SetUp() override
    {
        SaveEnvironmentVariable("AWS_ENDPOINT_URL");
        SaveEnvironmentVariable("AWS_ENDPOINT_URL_S3");
        SaveEnvironmentVariable("AWS_IGNORE_CONFIGURED_ENDPOINT_URLS");
        
        // Clean up any existing env vars
        Aws::Environment::UnSetEnv("AWS_ENDPOINT_URL");
        Aws::Environment::UnSetEnv("AWS_ENDPOINT_URL_S3");
        Aws::Environment::UnSetEnv("AWS_IGNORE_CONFIGURED_ENDPOINT_URLS");
    }

    void TearDown() override
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
};

// Mock loader for testing
class MockConfigLoader : public AWSConfigFileProfileConfigLoader
{
public:
    MockConfigLoader() : AWSConfigFileProfileConfigLoader("", false) {}
    
    void SetProfiles(const Aws::Map<Aws::String, Profile>& profiles) {
        m_profiles = profiles;
    }
    
protected:
    bool LoadInternal() override { return true; }
};

TEST_F(ConfiguredEndpointResolverTestSuite, TestServiceSpecificEnvironmentVariable)
{
    Aws::Environment::SetEnv("AWS_ENDPOINT_URL_S3", "http://localhost:9000", 1);
    
    auto loader = std::make_shared<MockConfigLoader>();
    ConfiguredEndpointResolver resolver(loader);
    
    auto result = resolver.ResolveForService("s3");
    EXPECT_EQ("http://localhost:9000", result.url);
    EXPECT_EQ(EndpointSource::ServiceEnvVar, result.source);
}

TEST_F(ConfiguredEndpointResolverTestSuite, TestGlobalEnvironmentVariable)
{
    Aws::Environment::SetEnv("AWS_ENDPOINT_URL", "http://localhost:4566", 1);
    
    auto loader = std::make_shared<MockConfigLoader>();
    ConfiguredEndpointResolver resolver(loader);
    
    auto result = resolver.ResolveForService("dynamodb");
    EXPECT_EQ("http://localhost:4566", result.url);
    EXPECT_EQ(EndpointSource::GlobalEnvVar, result.source);
}

TEST_F(ConfiguredEndpointResolverTestSuite, TestServiceSpecificTakesPrecedenceOverGlobal)
{
    Aws::Environment::SetEnv("AWS_ENDPOINT_URL", "http://localhost:4566", 1);
    Aws::Environment::SetEnv("AWS_ENDPOINT_URL_S3", "http://localhost:9000", 1);
    
    auto loader = std::make_shared<MockConfigLoader>();
    ConfiguredEndpointResolver resolver(loader);
    
    auto result = resolver.ResolveForService("s3");
    EXPECT_EQ("http://localhost:9000", result.url);
    EXPECT_EQ(EndpointSource::ServiceEnvVar, result.source);
}

TEST_F(ConfiguredEndpointResolverTestSuite, TestIgnoreConfiguredPolicy)
{
    Aws::Environment::SetEnv("AWS_ENDPOINT_URL_S3", "http://localhost:9000", 1);
    
    auto loader = std::make_shared<MockConfigLoader>();
    ConfiguredEndpointResolver::Options opts;
    opts.policy = ConfiguredEndpointsPolicy::IgnoreConfigured;
    ConfiguredEndpointResolver resolver(loader, opts);
    
    auto result = resolver.ResolveForService("s3");
    EXPECT_TRUE(result.url.empty());
}

TEST_F(ConfiguredEndpointResolverTestSuite, TestNoEndpointReturnsEmpty)
{
    auto loader = std::make_shared<MockConfigLoader>();
    ConfiguredEndpointResolver resolver(loader);
    
    auto result = resolver.ResolveForService("s3");
    EXPECT_TRUE(result.url.empty());
}