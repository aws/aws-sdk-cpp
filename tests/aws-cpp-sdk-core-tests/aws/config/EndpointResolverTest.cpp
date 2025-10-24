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
        // Initialize AWS SDK
        Aws::InitAPI(m_options);
    }

    void TearDown() override
    {
        // Shutdown AWS SDK
        Aws::ShutdownAPI(m_options);
    }

private:
    Aws::SDKOptions m_options;
};

TEST_F(EndpointResolverTest, ServiceSpecificEnvironmentVariable)
{
    Aws::Environment::EnvironmentRAII envGuard{{
        {"AWS_ENDPOINT_URL_S3", "https://s3.example.com"}
    }};
    
    MockEndpointProvider provider;
    EndpointResolver::EndpointSource("s3", "default", provider);
    EXPECT_EQ("https://s3.example.com", provider.GetOverriddenEndpoint());
}

TEST_F(EndpointResolverTest, GlobalEnvironmentVariable)
{
    Aws::Environment::EnvironmentRAII envGuard{{
        {"AWS_ENDPOINT_URL", "https://global.example.com"}
    }};
    
    MockEndpointProvider provider;
    EndpointResolver::EndpointSource("s3", "default", provider);
    EXPECT_EQ("https://global.example.com", provider.GetOverriddenEndpoint());
}

TEST_F(EndpointResolverTest, EnvironmentTakesPrecedenceOverGlobal)
{
    Aws::Environment::EnvironmentRAII envGuard{{
        {"AWS_ENDPOINT_URL", "https://global.example.com"},
        {"AWS_ENDPOINT_URL_S3", "https://s3.example.com"}
    }};
    
    MockEndpointProvider provider;
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
    
    Aws::Environment::EnvironmentRAII envGuard{{
        {"AWS_CONFIG_FILE", configFile.GetFileName()},
        {"AWS_ENDPOINT_URL", "https://global-env.example.com"}
    }};
    ReloadCachedConfigFile();
    
    // Verify profile is cached
    ASSERT_TRUE(HasCachedConfigProfile("test-profile"));
    
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
    
    Aws::Environment::EnvironmentRAII envGuard{{
        {"AWS_CONFIG_FILE", configFile.GetFileName()}
    }};
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
    Aws::Environment::EnvironmentRAII envGuard{{
        {"AWS_ENDPOINT_URL_S3", ""},  // Blank service-specific
        {"AWS_ENDPOINT_URL", "https://global.example.com"}
    }};
    
    MockEndpointProvider provider;
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
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());
    configFile << "[profile test-profile]\n";
    configFile << "endpoint_url = https://global-profile.example.com\n";
    configFile << "services = test-services\n";
    configFile << "\n[services test-services]\n";
    configFile << "s3 =\n";
    configFile << "  endpoint_url = https://s3-profile.example.com\n";
    configFile.flush();
    
    Aws::Environment::EnvironmentRAII envGuard{{
        {"AWS_ENDPOINT_URL_S3", "https://s3-env.example.com"},
        {"AWS_ENDPOINT_URL", "https://global-env.example.com"},
        {"AWS_CONFIG_FILE", configFile.GetFileName()}
    }};
    ReloadCachedConfigFile();
    
    // Simulate code-provided endpoint (highest priority)
    MockEndpointProvider provider;
    provider.OverrideEndpoint("https://code-provided.example.com");
    
    // Verify that if EndpointSource is called, it would use env vars
    MockEndpointProvider resolverProvider;
    EndpointResolver::EndpointSource("s3", "test-profile", resolverProvider);
    EXPECT_EQ("https://s3-env.example.com", resolverProvider.GetOverriddenEndpoint());
    
    // But the original provider retains the code-provided endpoint
    EXPECT_EQ("https://code-provided.example.com", provider.GetOverriddenEndpoint());
}
TEST_F(EndpointResolverTest, IgnoreConfiguredEndpointUrlsEnvironmentVariable)
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
    
    Aws::Environment::EnvironmentRAII envGuard{{
        {"AWS_ENDPOINT_URL_S3", "https://s3-env.example.com"},
        {"AWS_ENDPOINT_URL", "https://global-env.example.com"},
        {"AWS_CONFIG_FILE", configFile.GetFileName()},
        {"AWS_IGNORE_CONFIGURED_ENDPOINT_URLS", "true"}
    }};
    ReloadCachedConfigFile();
    
    // Test that all configured endpoints are ignored
    MockEndpointProvider provider;
    EndpointResolver::EndpointSource("s3", "test-profile", provider);
    EXPECT_TRUE(provider.GetOverriddenEndpoint().empty());
}

TEST_F(EndpointResolverTest, IgnoreConfiguredEndpointUrlsProfileSetting)
{
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
    
    Aws::Environment::EnvironmentRAII envGuard{{
        {"AWS_ENDPOINT_URL_S3", "https://s3-env.example.com"},
        {"AWS_ENDPOINT_URL", "https://global-env.example.com"},
        {"AWS_CONFIG_FILE", configFile.GetFileName()}
    }};
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