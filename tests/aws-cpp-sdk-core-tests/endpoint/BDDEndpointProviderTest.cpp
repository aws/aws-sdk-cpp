/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/utils/memory/stl/AWSArray.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>

namespace {

/**
 * BDD bytecode compiled from:
 * {
 *   "version": "1.1",
 *   "parameters": { "Region": { "type": "string", "required": false } },
 *   "conditions": [
 *     { "fn": "isSet", "argv": [{"ref": "Region"}] },
 *     { "fn": "aws.partition", "argv": [{"ref": "Region"}], "assign": "partitionResult" }
 *   ],
 *   "results": [
 *     { "endpoint": { "url": "https://example.{Region}.{partitionResult#dnsSuffix}" } },
 *     { "error": "unable to determine endpoint for region: {Region}" },
 *     { "endpoint": { "url": "https://example.amazonaws.com" } }
 *   ],
 *   "root": 2, "nodeCount": 3
 * }
 *
 * When Region is set: resolves to https://example.{Region}.amazonaws.com
 * When Region is not set: resolves to https://example.amazonaws.com
 */
static const uint8_t TestBddBytecode[] = {
    0x52, 0x44, 0x50, 0x45, 0xa6, 0x00, 0x00, 0x00, 0x31, 0x2e, 0x31, 0x24,
    0x24, 0x52, 0x65, 0x67, 0x69, 0x6f, 0x6e, 0x24, 0x24, 0x70, 0x61, 0x72,
    0x74, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x52, 0x65, 0x73, 0x75, 0x6c, 0x74,
    0x24, 0x24, 0x68, 0x74, 0x74, 0x70, 0x73, 0x3a, 0x2f, 0x2f, 0x65, 0x78,
    0x61, 0x6d, 0x70, 0x6c, 0x65, 0x2e, 0x7b, 0x52, 0x65, 0x67, 0x69, 0x6f,
    0x6e, 0x7d, 0x2e, 0x7b, 0x70, 0x61, 0x72, 0x74, 0x69, 0x74, 0x69, 0x6f,
    0x6e, 0x52, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x23, 0x64, 0x6e, 0x73, 0x53,
    0x75, 0x66, 0x66, 0x69, 0x78, 0x7d, 0x24, 0x24, 0x75, 0x6e, 0x61, 0x62,
    0x6c, 0x65, 0x20, 0x74, 0x6f, 0x20, 0x64, 0x65, 0x74, 0x65, 0x72, 0x6d,
    0x69, 0x6e, 0x65, 0x20, 0x65, 0x6e, 0x64, 0x70, 0x6f, 0x69, 0x6e, 0x74,
    0x20, 0x66, 0x6f, 0x72, 0x20, 0x72, 0x65, 0x67, 0x69, 0x6f, 0x6e, 0x3a,
    0x20, 0x7b, 0x52, 0x65, 0x67, 0x69, 0x6f, 0x6e, 0x7d, 0x24, 0x24, 0x68,
    0x74, 0x74, 0x70, 0x73, 0x3a, 0x2f, 0x2f, 0x65, 0x78, 0x61, 0x6d, 0x70,
    0x6c, 0x65, 0x2e, 0x61, 0x6d, 0x61, 0x7a, 0x6f, 0x6e, 0x61, 0x77, 0x73,
    0x2e, 0x63, 0x6f, 0x6d, 0x24, 0x24, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00,
    0x01, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x10, 0x00,
    0x01, 0x00, 0x04, 0x05, 0x00, 0x06, 0x00, 0x00, 0x10, 0x0c, 0x01, 0x00,
    0x04, 0x05, 0x00, 0x06, 0x00, 0x01, 0x0d, 0x00, 0x0f, 0x00, 0x03, 0x00,
    0x20, 0x01, 0x1e, 0x00, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x21, 0x01, 0x54, 0x00, 0x31, 0x00, 0x20, 0x01, 0x87, 0x00, 0x1d, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00,
    0x00, 0x00, 0x24, 0x00, 0x01, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00,
    0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,
    0x00, 0x00, 0x03, 0xe1, 0xf5, 0x05, 0x01, 0x00, 0x00, 0x00, 0x01, 0xe1,
    0xf5, 0x05, 0x02, 0xe1, 0xf5, 0x05
};
static const size_t TestBddBytecodeSize = sizeof(TestBddBytecode);

} // namespace

class BDDEndpointProviderTest : public Aws::Testing::AwsCppSdkGTestSuite {
};

TEST_F(BDDEndpointProviderTest, ConstructionWithValidBytecodeSucceeds)
{
    auto provider = Aws::MakeShared<Aws::Endpoint::BDDEndpointProvider<>>("BDDEndpointProviderTest",
        reinterpret_cast<const char*>(TestBddBytecode), TestBddBytecodeSize);
    ASSERT_NE(provider, nullptr);
}

TEST_F(BDDEndpointProviderTest, ResolveEndpointWithRegionReturnsCorrectUrl)
{
    auto provider = Aws::MakeShared<Aws::Endpoint::BDDEndpointProvider<>>("BDDEndpointProviderTest",
        reinterpret_cast<const char*>(TestBddBytecode), TestBddBytecodeSize);

    Aws::Endpoint::EndpointParameters parameters;
    parameters.emplace_back(Aws::String("Region"), Aws::String("us-west-2"),
        Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);

    auto result = provider->ResolveEndpoint(parameters);
    EXPECT_TRUE(result.IsSuccess());
    EXPECT_EQ(result.GetResult().GetURL(), "https://example.us-west-2.amazonaws.com");
}

TEST_F(BDDEndpointProviderTest, ResolveEndpointWithoutRegionReturnsFallback)
{
    auto provider = Aws::MakeShared<Aws::Endpoint::BDDEndpointProvider<>>("BDDEndpointProviderTest",
        reinterpret_cast<const char*>(TestBddBytecode), TestBddBytecodeSize);

    Aws::Endpoint::EndpointParameters parameters;

    auto result = provider->ResolveEndpoint(parameters);
    EXPECT_TRUE(result.IsSuccess());
    EXPECT_EQ(result.GetResult().GetURL(), "https://example.amazonaws.com");
}

TEST_F(BDDEndpointProviderTest, ConstructionWithInvalidBytecodeLogsError)
{
    static const uint8_t invalidBytecode[] = {0x00, 0x01, 0x02, 0x03};

    auto provider = Aws::MakeShared<Aws::Endpoint::BDDEndpointProvider<>>("BDDEndpointProviderTest",
        reinterpret_cast<const char*>(invalidBytecode), sizeof(invalidBytecode));

    Aws::Endpoint::EndpointParameters parameters;
    parameters.emplace_back(Aws::String("Region"), Aws::String("us-east-1"),
        Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);

    auto result = provider->ResolveEndpoint(parameters);
    EXPECT_FALSE(result.IsSuccess());
}

TEST_F(BDDEndpointProviderTest, ResolveEndpointWithDifferentRegions)
{
    auto provider = Aws::MakeShared<Aws::Endpoint::BDDEndpointProvider<>>("BDDEndpointProviderTest",
        reinterpret_cast<const char*>(TestBddBytecode), TestBddBytecodeSize);

    const Aws::Array<std::pair<Aws::String, Aws::String>, 3> testCases{{
        {"us-east-1", "https://example.us-east-1.amazonaws.com"},
        {"eu-west-1", "https://example.eu-west-1.amazonaws.com"},
        {"ap-southeast-1", "https://example.ap-southeast-1.amazonaws.com"},
    }};

    for (const auto& testCase : testCases)
    {
        Aws::Endpoint::EndpointParameters parameters;
        parameters.emplace_back(Aws::String("Region"), testCase.first,
            Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);

        auto result = provider->ResolveEndpoint(parameters);
        EXPECT_TRUE(result.IsSuccess()) << "Failed for region: " << testCase.first;
        EXPECT_EQ(result.GetResult().GetURL(), testCase.second) << "Failed for region: " << testCase.first;
    }
}
