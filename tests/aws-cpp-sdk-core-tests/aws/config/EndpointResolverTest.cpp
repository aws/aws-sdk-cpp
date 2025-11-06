/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/core/Aws.h>
#include <aws/core/config/EndpointResolver.h>
#include <aws/core/config/AWSProfileConfig.h>
#include <aws/core/utils/FileSystemUtils.h>

using namespace Aws::Config;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;

class EndpointResolverTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(EndpointResolverTest, ServiceSpecificEnvironmentVariable)
{
    Aws::Environment::EnvironmentRAII setEnv{{
        {"AWS_ENDPOINT_URL_S3", "https://s3.example.com"}
    }};

    Aws::String endpoint = EndpointResolver::EndpointSource("s3", "default");
    EXPECT_EQ("https://s3.example.com", endpoint);
}

TEST_F(EndpointResolverTest, GlobalEnvironmentVariable)
{
    Aws::Environment::EnvironmentRAII setEnv{{
        {"AWS_ENDPOINT_URL", "https://global.example.com"}
    }};

    Aws::String endpoint = EndpointResolver::EndpointSource("s3", "default");
    EXPECT_EQ("https://global.example.com", endpoint);
}

TEST_F(EndpointResolverTest, EnvironmentTakesPrecedenceOverGlobal)
{
    Aws::Environment::EnvironmentRAII setEnv{{
        {"AWS_ENDPOINT_URL", "https://global.example.com"},
        {"AWS_ENDPOINT_URL_S3", "https://s3.example.com"}
    }};

    Aws::String endpoint = EndpointResolver::EndpointSource("s3", "default");
    EXPECT_EQ("https://s3.example.com", endpoint);
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

    Aws::Environment::EnvironmentRAII setEnv{{
        {"AWS_CONFIG_FILE", configFile.GetFileName()},
        {"AWS_ENDPOINT_URL", "https://global-env.example.com"}
    }};
    ReloadCachedConfigFile();

    // Verify profile is cached
    ASSERT_TRUE(HasCachedConfigProfile("test-profile"));

    // Test that global env takes precedence over service profile
    Aws::String endpoint = EndpointResolver::EndpointSource("s3", "test-profile");
    EXPECT_EQ("https://global-env.example.com", endpoint);
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

    Aws::Environment::EnvironmentRAII setEnv{{
        {"AWS_CONFIG_FILE", configFile.GetFileName()}
    }};
    ReloadCachedConfigFile();

    // Verify profile is cached
    ASSERT_TRUE(HasCachedConfigProfile("test-profile"));

    // Test that service-specific profile takes precedence over global profile
    Aws::String endpoint = EndpointResolver::EndpointSource("s3", "test-profile");
    EXPECT_EQ("https://s3-profile.example.com", endpoint);
}

TEST_F(EndpointResolverTest, BlankValueContinuesResolution)
{
    Aws::Environment::EnvironmentRAII setEnv{{
        {"AWS_ENDPOINT_URL_S3", ""},  // Blank service-specific
        {"AWS_ENDPOINT_URL", "https://global.example.com"}
    }};

    Aws::String endpoint = EndpointResolver::EndpointSource("s3", "default");
    EXPECT_EQ("https://global.example.com", endpoint);
}

TEST_F(EndpointResolverTest, NoEndpointConfigured)
{
    Aws::String endpoint = EndpointResolver::EndpointSource("s3", "default");
    EXPECT_TRUE(endpoint.empty());
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

    Aws::Environment::EnvironmentRAII setEnv{{
        {"AWS_ENDPOINT_URL_S3", "https://s3-env.example.com"},
        {"AWS_ENDPOINT_URL", "https://global-env.example.com"},
        {"AWS_CONFIG_FILE", configFile.GetFileName()}
    }};
    ReloadCachedConfigFile();

    // Verify that EndpointSource returns env vars
    Aws::String endpoint = EndpointResolver::EndpointSource("s3", "test-profile");
    EXPECT_EQ("https://s3-env.example.com", endpoint);
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

    Aws::Environment::EnvironmentRAII setEnv{{
        {"AWS_ENDPOINT_URL_S3", "https://s3-env.example.com"},
        {"AWS_ENDPOINT_URL", "https://global-env.example.com"},
        {"AWS_CONFIG_FILE", configFile.GetFileName()},
        {"AWS_IGNORE_CONFIGURED_ENDPOINT_URLS", "true"}
    }};
    ReloadCachedConfigFile();

    // Test that all configured endpoints are ignored
    Aws::String endpoint = EndpointResolver::EndpointSource("s3", "test-profile");
    EXPECT_TRUE(endpoint.empty());
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

    Aws::Environment::EnvironmentRAII setEnv{{
        {"AWS_ENDPOINT_URL_S3", "https://s3-env.example.com"},
        {"AWS_ENDPOINT_URL", "https://global-env.example.com"},
        {"AWS_CONFIG_FILE", configFile.GetFileName()}
    }};
    ReloadCachedConfigFile();

    // Test that all configured endpoints are ignored due to profile setting
    Aws::String endpoint = EndpointResolver::EndpointSource("s3", "test-profile");
    EXPECT_TRUE(endpoint.empty());
}

TEST_F(EndpointResolverTest, IgnoreConfiguredEndpointUrlsCaseInsensitive)
{
    Aws::Environment::EnvironmentRAII setEnv{{
        {"AWS_ENDPOINT_URL", "https://global-env.example.com"},
        {"AWS_CONFIG_FILE", ""}
    }};

    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());
    configFile << "[profile test-profile]\n";
    configFile << "ignore_configured_endpoint_urls = TRUE\n";  // Test case insensitive
    configFile.flush();

    Aws::Environment::SetEnv("AWS_CONFIG_FILE", configFile.GetFileName().c_str(), 1);
    ReloadCachedConfigFile();

    // Test that endpoints are ignored with case-insensitive "TRUE"
    Aws::String endpoint = EndpointResolver::EndpointSource("s3", "test-profile");
    EXPECT_TRUE(endpoint.empty());
}