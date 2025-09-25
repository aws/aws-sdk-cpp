/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/config/ConfiguredEndpointResolver.h>
#include <aws/core/platform/Environment.h>
#include <aws/testing/TestingEnvironment.h>

using namespace Aws::Config;
using namespace Aws::Utils;

class ConfiguredEndpointResolverTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ConfiguredEndpointResolverTest, TestNoEndpointConfigured)
{
    auto result = ConfiguredEndpointResolver::ResolveForService("S3", "", false);
    EXPECT_FALSE(result.has_value());
}

TEST_F(ConfiguredEndpointResolverTest, TestServiceSpecificEnvVar)
{
    Aws::Environment::EnvironmentRAII testEnvironment{{
        {"AWS_ENDPOINT_URL_S3", "https://s3.example.com"},
    }};
    
    auto result = ConfiguredEndpointResolver::ResolveForService("S3", "", false);
    ASSERT_TRUE(result.has_value());
    EXPECT_EQ("https://s3.example.com", result->url);
    EXPECT_EQ(EndpointSource::ServiceEnvVar, result->source);
}

TEST_F(ConfiguredEndpointResolverTest, TestGlobalEnvVar)
{
    Aws::Environment::EnvironmentRAII testEnvironment{{
        {"AWS_ENDPOINT_URL", "https://global.example.com"},
    }};
    
    auto result = ConfiguredEndpointResolver::ResolveForService("S3", "", false);
    ASSERT_TRUE(result.has_value());
    EXPECT_EQ("https://global.example.com", result->url);
    EXPECT_EQ(EndpointSource::GlobalEnvVar, result->source);
}

TEST_F(ConfiguredEndpointResolverTest, TestServiceEnvVarTakesPrecedence)
{
    Aws::Environment::EnvironmentRAII testEnvironment{{
        {"AWS_ENDPOINT_URL", "https://global.example.com"},
        {"AWS_ENDPOINT_URL_S3", "https://s3.example.com"},
    }};
    
    auto result = ConfiguredEndpointResolver::ResolveForService("S3", "", false);
    ASSERT_TRUE(result.has_value());
    EXPECT_EQ("https://s3.example.com", result->url);
    EXPECT_EQ(EndpointSource::ServiceEnvVar, result->source);
}

TEST_F(ConfiguredEndpointResolverTest, TestIgnoreFromCode)
{
    Aws::Environment::EnvironmentRAII testEnvironment{{
        {"AWS_ENDPOINT_URL_S3", "https://s3.example.com"},
    }};
    
    auto result = ConfiguredEndpointResolver::ResolveForService("S3", "", true);
    EXPECT_FALSE(result.has_value());
}

TEST_F(ConfiguredEndpointResolverTest, TestIgnoreFromEnv)
{
    Aws::Environment::EnvironmentRAII testEnvironment{{
        {"AWS_ENDPOINT_URL_S3", "https://s3.example.com"},
        {"AWS_IGNORE_CONFIGURED_ENDPOINT_URLS", "true"},
    }};
    
    auto result = ConfiguredEndpointResolver::ResolveForService("S3", "", false);
    EXPECT_FALSE(result.has_value());
}

TEST_F(ConfiguredEndpointResolverTest, TestServiceIdTransformation)
{
    // Test that "Elastic Beanstalk" becomes "ELASTIC_BEANSTALK" for env var
    Aws::Environment::EnvironmentRAII testEnvironment{{
        {"AWS_ENDPOINT_URL_ELASTIC_BEANSTALK", "https://eb.example.com"},
    }};
    
    auto result = ConfiguredEndpointResolver::ResolveForService("Elastic Beanstalk", "", false);
    ASSERT_TRUE(result.has_value());
    EXPECT_EQ("https://eb.example.com", result->url);
    EXPECT_EQ(EndpointSource::ServiceEnvVar, result->source);
}