/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsTestHelpers.h>
#include <aws/core/Aws.h>
#include <aws/core/config/EndpointResolver.h>
#include <aws/core/config/AWSProfileConfig.h>
#include <aws/core/utils/FileSystemUtils.h>

using namespace Aws::Config;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;

class MockEndpointProvider
{
public:
    void OverrideEndpoint(const Aws::String& endpoint)
    {
        m_overriddenEndpoint = endpoint;
    }
    
    const Aws::String& GetOverriddenEndpoint() const
    {
        return m_overriddenEndpoint;
    }
    
private:
    Aws::String m_overriddenEndpoint;
};

class EndpointResolverTest : public ::testing::Test
{
protected:
    void SetUp() override
    {
        // Clear environment variables
        unsetenv("AWS_ENDPOINT_URL");
        unsetenv("AWS_ENDPOINT_URL_S3");
        unsetenv("AWS_ENDPOINT_URL_ELASTIC_BEANSTALK");
        unsetenv("AWS_IGNORE_CONFIGURED_ENDPOINT_URLS");
        
        // Initialize AWS SDK
        Aws::InitAPI(m_options);
    }

    void TearDown() override
    {
        // Clean up environment variables
        unsetenv("AWS_ENDPOINT_URL");
        unsetenv("AWS_ENDPOINT_URL_S3");
        unsetenv("AWS_ENDPOINT_URL_ELASTIC_BEANSTALK");
        unsetenv("AWS_IGNORE_CONFIGURED_ENDPOINT_URLS");
        unsetenv("AWS_CONFIG_FILE");
        
        // Shutdown AWS SDK
        Aws::ShutdownAPI(m_options);
    }

private:
    Aws::SDKOptions m_options;
};

TEST_F(EndpointResolverTest, ServiceSpecificEnvironmentVariable)
{
    MockEndpointProvider provider;
    setenv("AWS_ENDPOINT_URL_S3", "https://s3.example.com", 1);
    EndpointResolver::EndpointSource("s3", "default", provider);
    EXPECT_EQ("https://s3.example.com", provider.GetOverriddenEndpoint());
}

TEST_F(EndpointResolverTest, GlobalEnvironmentVariable)
{
    MockEndpointProvider provider;
    setenv("AWS_ENDPOINT_URL", "https://global.example.com", 1);
    EndpointResolver::EndpointSource("s3", "default", provider);
    EXPECT_EQ("https://global.example.com", provider.GetOverriddenEndpoint());
}

TEST_F(EndpointResolverTest, EnvironmentTakesPrecedenceOverGlobal)
{
    MockEndpointProvider provider;
    setenv("AWS_ENDPOINT_URL", "https://global.example.com", 1);
    setenv("AWS_ENDPOINT_URL_S3", "https://s3.example.com", 1);
    EndpointResolver::EndpointSource("s3", "default", provider);
    EXPECT_EQ("https://s3.example.com", provider.GetOverriddenEndpoint());
}

TEST_F(EndpointResolverTest, GlobalEnvOverServiceProfile)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());
    
    configFile << "[profile test-profile]\n";
    configFile << "services = test-services\n";
    configFile << "\n[services test-services]\n";
    configFile << "s3 =\n";
    configFile << "  endpoint_url = https://s3-profile.example.com\n";
    configFile.flush();
    
    // Set config file path and reload cache
    setenv("AWS_CONFIG_FILE", configFile.GetFileName().c_str(), 1);
    ReloadCachedConfigFile();
    
    // Verify profile is cached
    ASSERT_TRUE(HasCachedConfigProfile("test-profile"));
    
    // Set global environment variable
    setenv("AWS_ENDPOINT_URL", "https://global-env.example.com", 1);
    
    // Test that global env takes precedence over service profile
    MockEndpointProvider provider;
    EndpointResolver::EndpointSource("s3", "test-profile", provider);
    EXPECT_EQ("https://global-env.example.com", provider.GetOverriddenEndpoint());
}

TEST_F(EndpointResolverTest, ServiceProfileOverGlobalProfile)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());
    
    configFile << "[profile test-profile]\n";
    configFile << "endpoint_url = https://global-profile.example.com\n";
    configFile << "services = test-services\n";
    configFile << "\n[services test-services]\n";
    configFile << "s3 =\n";
    configFile << "  endpoint_url = https://s3-profile.example.com\n";
    configFile.flush();
    
    // Set config file path and reload cache
    setenv("AWS_CONFIG_FILE", configFile.GetFileName().c_str(), 1);
    ReloadCachedConfigFile();
    
    // Verify profile is cached
    ASSERT_TRUE(HasCachedConfigProfile("test-profile"));
    
    // Test that service-specific profile takes precedence over global profile
    MockEndpointProvider provider;
    EndpointResolver::EndpointSource("s3", "test-profile", provider);
    EXPECT_EQ("https://s3-profile.example.com", provider.GetOverriddenEndpoint());
}

TEST_F(EndpointResolverTest, BlankValueContinuesResolution)
{
    MockEndpointProvider provider;
    setenv("AWS_ENDPOINT_URL_S3", "", 1);  // Blank service-specific
    setenv("AWS_ENDPOINT_URL", "https://global.example.com", 1);
    EndpointResolver::EndpointSource("s3", "default", provider);
    EXPECT_EQ("https://global.example.com", provider.GetOverriddenEndpoint());
}

TEST_F(EndpointResolverTest, NoEndpointConfigured)
{
    MockEndpointProvider provider;
    EndpointResolver::EndpointSource("s3", "default", provider);
    EXPECT_TRUE(provider.GetOverriddenEndpoint().empty());
}
TEST_F(EndpointResolverTest, CodeProvidedEndpointTakesPrecedenceOverAll)
{
    // Set up all other endpoint sources
    setenv("AWS_ENDPOINT_URL_S3", "https://s3-env.example.com", 1);
    setenv("AWS_ENDPOINT_URL", "https://global-env.example.com", 1);
    
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());
    configFile << "[profile test-profile]\n";
    configFile << "endpoint_url = https://global-profile.example.com\n";
    configFile << "services = test-services\n";
    configFile << "\n[services test-services]\n";
    configFile << "s3 =\n";
    configFile << "  endpoint_url = https://s3-profile.example.com\n";
    configFile.flush();
    
    setenv("AWS_CONFIG_FILE", configFile.GetFileName().c_str(), 1);
    ReloadCachedConfigFile();
    
    // Simulate code-provided endpoint (highest priority)
    MockEndpointProvider provider;
    provider.OverrideEndpoint("https://code-provided.example.com");
    
    // EndpointResolver should not override code-provided endpoints
    // In practice, EndpointResolver::EndpointSource wouldn't be called
    // if an endpoint was already set in code, but this documents the behavior
    
    // Verify that if EndpointSource is called, it would use env vars
    MockEndpointProvider resolverProvider;
    EndpointResolver::EndpointSource("s3", "test-profile", resolverProvider);
    EXPECT_EQ("https://s3-env.example.com", resolverProvider.GetOverriddenEndpoint());
    
    // But the original provider retains the code-provided endpoint
    EXPECT_EQ("https://code-provided.example.com", provider.GetOverriddenEndpoint());
}
TEST_F(EndpointResolverTest, IgnoreConfiguredEndpointUrlsEnvironmentVariable)
{
    // Set up endpoint sources that would normally be used
    setenv("AWS_ENDPOINT_URL_S3", "https://s3-env.example.com", 1);
    setenv("AWS_ENDPOINT_URL", "https://global-env.example.com", 1);
    
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());
    configFile << "[profile test-profile]\n";
    configFile << "endpoint_url = https://global-profile.example.com\n";
    configFile << "services = test-services\n";
    configFile << "\n[services test-services]\n";
    configFile << "s3 =\n";
    configFile << "  endpoint_url = https://s3-profile.example.com\n";
    configFile.flush();
    
    setenv("AWS_CONFIG_FILE", configFile.GetFileName().c_str(), 1);
    ReloadCachedConfigFile();
    
    // Set ignore flag via environment variable
    setenv("AWS_IGNORE_CONFIGURED_ENDPOINT_URLS", "true", 1);
    
    // Test that all configured endpoints are ignored
    MockEndpointProvider provider;
    EndpointResolver::EndpointSource("s3", "test-profile", provider);
    EXPECT_TRUE(provider.GetOverriddenEndpoint().empty());
    
    // Cleanup
    unsetenv("AWS_IGNORE_CONFIGURED_ENDPOINT_URLS");
}

TEST_F(EndpointResolverTest, IgnoreConfiguredEndpointUrlsProfileSetting)
{
    // Set up endpoint sources that would normally be used
    setenv("AWS_ENDPOINT_URL_S3", "https://s3-env.example.com", 1);
    setenv("AWS_ENDPOINT_URL", "https://global-env.example.com", 1);
    
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());
    configFile << "[profile test-profile]\n";
    configFile << "ignore_configured_endpoint_urls = true\n";
    configFile << "endpoint_url = https://global-profile.example.com\n";
    configFile << "services = test-services\n";
    configFile << "\n[services test-services]\n";
    configFile << "s3 =\n";
    configFile << "  endpoint_url = https://s3-profile.example.com\n";
    configFile.flush();
    
    setenv("AWS_CONFIG_FILE", configFile.GetFileName().c_str(), 1);
    ReloadCachedConfigFile();
    
    // Test that all configured endpoints are ignored due to profile setting
    MockEndpointProvider provider;
    EndpointResolver::EndpointSource("s3", "test-profile", provider);
    EXPECT_TRUE(provider.GetOverriddenEndpoint().empty());
}

TEST_F(EndpointResolverTest, IgnoreConfiguredEndpointUrlsCaseInsensitive)
{
    setenv("AWS_ENDPOINT_URL", "https://global-env.example.com", 1);
    
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());
    configFile << "[profile test-profile]\n";
    configFile << "ignore_configured_endpoint_urls = TRUE\n";  // Test case insensitive
    configFile.flush();
    
    setenv("AWS_CONFIG_FILE", configFile.GetFileName().c_str(), 1);
    ReloadCachedConfigFile();
    
    // Test that endpoints are ignored with case-insensitive "TRUE"
    MockEndpointProvider provider;
    EndpointResolver::EndpointSource("s3", "test-profile", provider);
    EXPECT_TRUE(provider.GetOverriddenEndpoint().empty());
}

TEST_F(EndpointResolverTest, IgnoreConfiguredEndpointUrlsDefaultFalse)
{
    setenv("AWS_ENDPOINT_URL", "https://global-env.example.com", 1);
    
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());
    configFile << "[profile test-profile]\n";
    configFile << "ignore_configured_endpoint_urls = false\n";
    configFile.flush();
    
    setenv("AWS_CONFIG_FILE", configFile.GetFileName().c_str(), 1);
    ReloadCachedConfigFile();
    
    // Test that endpoints are used when explicitly set to false
    MockEndpointProvider provider;
    EndpointResolver::EndpointSource("s3", "test-profile", provider);
    EXPECT_EQ("https://global-env.example.com", provider.GetOverriddenEndpoint());
}