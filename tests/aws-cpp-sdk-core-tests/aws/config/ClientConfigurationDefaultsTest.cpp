/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/platform/Environment.h>
#include <aws/testing/platform/PlatformTesting.h>

#include <aws/core/config/defaults/ClientConfigurationDefaults.h>

class ClientConfigurationDefaultsTest : public Aws::Testing::AwsCppSdkGTestSuite
{

public:
    // original env vars and their value
    std::unordered_map<Aws::String, Aws::String> originalEnvVars;
    const std::vector<Aws::String> ENV_VARS_TO_RESTORE =
            {"AWS_EC2_METADATA_DISABLED", "AWS_DEFAULTS_MODE", "AWS_EXECUTION_ENV",
             "AWS_REGION", "AWS_DEFAULT_REGION"};

    virtual void SetUp()
    {
        for (const Aws::String& origEnvVarName : ENV_VARS_TO_RESTORE)
        {
            const Aws::String& origEnvVarValue = Aws::Environment::GetEnv(origEnvVarName.c_str());
            originalEnvVars[origEnvVarName] = origEnvVarValue;
        }
    }

    virtual void TearDown()
    {
        for (const auto& origEnvVar : originalEnvVars)
        {
            if(!origEnvVar.second.empty())
            {
                Aws::Environment::SetEnv(origEnvVar.first.c_str(), origEnvVar.second.c_str(), true);
            }
            else
            {
                Aws::Environment::UnSetEnv(origEnvVar.first.c_str());
            }
        }
    }
};

struct SmartDefaultsTestEntry
{
    const char* inCodeClientConfigDefault;
    const char* envVarClientConfigDefault;
    const char* configFileClientConfigDefault;
    const char* expectedResolvedMode;
};

static const std::vector<SmartDefaultsTestEntry> TEST_CASES = {
        {"standard", "in-region", "mobile", "standard"},
        {"", "in-region", "cross-region", "in-region"},
        {"", "", "cross-region", "cross-region"},
        {"", "", "StAnDArD", "standard"},
        {"", "", "random", "legacy"}, /* warning expected*/
        {"", "", "", "legacy" /*TODO: standard(new SDKs)*/}
};

TEST_F(ClientConfigurationDefaultsTest, TestDefaultModeResolution)
{
    Aws::Environment::SetEnv("AWS_EC2_METADATA_DISABLED", "true", true);

    Aws::Client::ClientConfiguration dummyClientConfig;

    for(const SmartDefaultsTestEntry& test_case : TEST_CASES)
    {
        Aws::Environment::SetEnv("AWS_DEFAULTS_MODE", test_case.envVarClientConfigDefault, true);

        const Aws::String& resolvedDefaultsModeName
          = Aws::Config::Defaults::ResolveDefaultModeName(dummyClientConfig, test_case.inCodeClientConfigDefault, test_case.configFileClientConfigDefault, false, "");

        ASSERT_EQ(resolvedDefaultsModeName, test_case.expectedResolvedMode);
    }
}

struct SmartDefaultsAutoResolutionTestEntry
{
    /* const char* os; */ // not applicable to AWS CPP SDK
    const char* awsExecutionEnv;
    const char* awsRegion;
    const char* awsDefaultRegion;
    const char* awsEc2MetadataDisabled;
    const char* imdsRegion;
    const char* clientRegion;

    const char* expectedResolvedMode;
};

static const std::vector<SmartDefaultsAutoResolutionTestEntry> TEST_CASES_AUTO_RESOLUTION = {
        /*{"AWS_Lambda_java8", "us-east-1", "", "", "", "us-east-1", "mobile"},*/
        {"AWS_Lambda_java8", "us-east-1", "", "", "", "us-east-1", "in-region"},
        {"AWS_Lambda_java8", "", "us-west-2", "", "", "us-east-1", "cross-region"},
        {"AWS_Lambda_java8", "", "", "", "us-west-2", "us-east-1", "cross-region"},
        {"", "us-east-1", "", "", "us-east-1", "us-east-1", "in-region"},
        {"", "", "", "false", "us-west-2","us-east-1", "cross-region"},
        {"", "", "", "false", "", "us-west-2", "standard"},
        {"", "", "", "", "", "us-west-2", "standard"}
};

TEST_F(ClientConfigurationDefaultsTest, TestDefaultModeAutoResolution)
{
    Aws::Environment::UnSetEnv("AWS_DEFAULTS_MODE");
    for(const SmartDefaultsAutoResolutionTestEntry& test_case : TEST_CASES_AUTO_RESOLUTION)
    {
        Aws::Environment::SetEnv("AWS_EXECUTION_ENV", test_case.awsExecutionEnv, true);
        Aws::Environment::SetEnv("AWS_REGION", test_case.awsRegion, true);
        Aws::Environment::SetEnv("AWS_DEFAULT_REGION", test_case.awsDefaultRegion, true);
        Aws::Environment::SetEnv("AWS_EC2_METADATA_DISABLED", test_case.awsEc2MetadataDisabled, true);

        Aws::Client::ClientConfiguration dummyClientConfig;
        dummyClientConfig.region = test_case.clientRegion;

        const Aws::String& resolvedDefaultsModeName
                = Aws::Config::Defaults::ResolveAutoClientConfiguration(dummyClientConfig, test_case.imdsRegion);

        ASSERT_EQ(resolvedDefaultsModeName, test_case.expectedResolvedMode);
    }
}
