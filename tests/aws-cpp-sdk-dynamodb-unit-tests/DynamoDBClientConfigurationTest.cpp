/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

/*
 * Per-client configuration: a client is built only from its own service's configuration,
 * that configuration has only the options its service supports, and the client has no OverrideEndpoint.
 * Most checks are compile-time so that a regression fails the build.
 */

#include <aws/core/Aws.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/DynamoDBClientConfiguration.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <gtest/gtest.h>

#include <type_traits>
#include <utility>

namespace
{
template <typename...>
struct VoidT
{
    using type = void;
};

#define PCC_DEFINE_HAS_MEMBER(member)                                                                  \
    template <typename T, typename = void>                                                             \
    struct Has_##member : std::false_type {};                                                          \
    template <typename T>                                                                              \
    struct Has_##member<T, typename VoidT<decltype(std::declval<T&>().member)>::type> : std::true_type {};

PCC_DEFINE_HAS_MEMBER(useFIPS)
PCC_DEFINE_HAS_MEMBER(useDualStack)
PCC_DEFINE_HAS_MEMBER(accountId)
PCC_DEFINE_HAS_MEMBER(accountIdEndpointMode)
PCC_DEFINE_HAS_MEMBER(enableEndpointDiscovery)
PCC_DEFINE_HAS_MEMBER(enableHostPrefixInjection)
PCC_DEFINE_HAS_MEMBER(requestCompressionConfig)
PCC_DEFINE_HAS_MEMBER(checksumConfig)
PCC_DEFINE_HAS_MEMBER(disableExpectHeader)
PCC_DEFINE_HAS_MEMBER(httpClientChunkedMode)
PCC_DEFINE_HAS_MEMBER(awsChunkedBufferSize)
PCC_DEFINE_HAS_MEMBER(sigV4aSigningRegionSet)
#undef PCC_DEFINE_HAS_MEMBER

template <typename T, typename = void>
struct HasOverrideEndpoint : std::false_type {};
template <typename T>
struct HasOverrideEndpoint<T, typename VoidT<decltype(std::declval<T&>().OverrideEndpoint(std::declval<const Aws::String&>()))>::type>
    : std::true_type {};

using Aws::Client::ClientConfiguration;
using Aws::DynamoDB::DynamoDBClient;
using Aws::DynamoDB::DynamoDBClientConfiguration;

// The shared configuration has none of the service-specific options.
static_assert(!Has_useFIPS<ClientConfiguration>::value, "ClientConfiguration must not have useFIPS");
static_assert(!Has_useDualStack<ClientConfiguration>::value, "ClientConfiguration must not have useDualStack");
static_assert(!Has_accountId<ClientConfiguration>::value, "ClientConfiguration must not have accountId");
static_assert(!Has_enableEndpointDiscovery<ClientConfiguration>::value, "ClientConfiguration must not have enableEndpointDiscovery");
static_assert(!Has_checksumConfig<ClientConfiguration>::value, "ClientConfiguration must not have checksumConfig");
static_assert(!Has_requestCompressionConfig<ClientConfiguration>::value, "ClientConfiguration must not have requestCompressionConfig");
static_assert(!Has_disableExpectHeader<ClientConfiguration>::value, "ClientConfiguration must not have disableExpectHeader");
static_assert(!Has_sigV4aSigningRegionSet<ClientConfiguration>::value, "ClientConfiguration must not have sigV4aSigningRegionSet");

// DynamoDB's endpoint rules declare UseFIPS, UseDualStack, AccountId and AccountIdEndpointMode,
// and its model has the endpoint discovery trait.
static_assert(Has_useFIPS<DynamoDBClientConfiguration>::value, "DynamoDB supports FIPS");
static_assert(Has_useDualStack<DynamoDBClientConfiguration>::value, "DynamoDB supports dual-stack");
static_assert(Has_accountId<DynamoDBClientConfiguration>::value, "DynamoDB supports account ID endpoints");
static_assert(Has_accountIdEndpointMode<DynamoDBClientConfiguration>::value, "DynamoDB supports account ID endpoint mode");
static_assert(Has_enableEndpointDiscovery<DynamoDBClientConfiguration>::value, "DynamoDB supports endpoint discovery");

// DynamoDB has no host prefixes, compressible operations, flexible checksums, streaming inputs or SigV4a auth.
static_assert(!Has_enableHostPrefixInjection<DynamoDBClientConfiguration>::value, "DynamoDB has no host prefix operations");
static_assert(!Has_requestCompressionConfig<DynamoDBClientConfiguration>::value, "DynamoDB has no compressible operations");
static_assert(!Has_checksumConfig<DynamoDBClientConfiguration>::value, "DynamoDB has no flexible checksums");
static_assert(!Has_disableExpectHeader<DynamoDBClientConfiguration>::value, "DynamoDB has no streaming inputs");
static_assert(!Has_httpClientChunkedMode<DynamoDBClientConfiguration>::value, "DynamoDB has no streaming inputs");
static_assert(!Has_awsChunkedBufferSize<DynamoDBClientConfiguration>::value, "DynamoDB has no streaming inputs");
static_assert(!Has_sigV4aSigningRegionSet<DynamoDBClientConfiguration>::value, "DynamoDB has no SigV4a auth");

// A client is built only from its own service's configuration.
static_assert(std::is_constructible<DynamoDBClient, const DynamoDBClientConfiguration&>::value,
              "DynamoDBClient must be constructible from DynamoDBClientConfiguration");
static_assert(!std::is_constructible<DynamoDBClient, const ClientConfiguration&>::value,
              "DynamoDBClient must not be constructible from the shared ClientConfiguration");
static_assert(!std::is_convertible<const ClientConfiguration&, DynamoDBClientConfiguration>::value,
              "The shared ClientConfiguration must not convert to DynamoDBClientConfiguration");

// The client's own method for changing its endpoint is gone; set endpointOverride on the configuration instead.
static_assert(!HasOverrideEndpoint<DynamoDBClient>::value, "DynamoDBClient must not have OverrideEndpoint");

class DynamoDBClientConfigurationTest : public testing::Test
{
protected:
    static void SetUpTestSuite() { Aws::InitAPI(options_); }
    static void TearDownTestSuite() { Aws::ShutdownAPI(options_); }

    static Aws::SDKOptions options_;
};

Aws::SDKOptions DynamoDBClientConfigurationTest::options_;

Aws::Client::ClientConfigurationInitValues NoImds()
{
    Aws::Client::ClientConfigurationInitValues values;
    values.shouldDisableIMDS = true;
    return values;
}
} // namespace

TEST_F(DynamoDBClientConfigurationTest, LoadsSupportedOptionsFromEnvironment)
{
    Aws::Environment::EnvironmentRAII env{{{"AWS_USE_FIPS_ENDPOINT", "true"},
                                           {"AWS_USE_DUALSTACK_ENDPOINT", "true"},
                                           {"AWS_ACCOUNT_ID_ENDPOINT_MODE", "disabled"}}};

    const DynamoDBClientConfiguration config(NoImds());

    EXPECT_TRUE(config.useFIPS);
    EXPECT_TRUE(config.useDualStack);
    EXPECT_EQ("disabled", config.accountIdEndpointMode);
}

TEST_F(DynamoDBClientConfigurationTest, SupportedOptionsDefaultWhenUnset)
{
    Aws::Environment::EnvironmentRAII env{{{"AWS_USE_FIPS_ENDPOINT", ""},
                                           {"AWS_USE_DUALSTACK_ENDPOINT", ""},
                                           {"AWS_ACCOUNT_ID_ENDPOINT_MODE", ""}}};

    const DynamoDBClientConfiguration config(NoImds());

    EXPECT_FALSE(config.useFIPS);
    EXPECT_FALSE(config.useDualStack);
    EXPECT_EQ("preferred", config.accountIdEndpointMode);
}
