/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/EndpointProviderBase.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <smithy/identity/auth/built-in/GenericAuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4aAuthScheme.h>

namespace
{
    static constexpr char ALLOCATION_TAG[] = "SmithyClientEndpointProviderTest";
    static constexpr char SERVICE_NAME[] = "TestService";

    struct TestClientConfiguration : public Aws::Client::ClientConfiguration
    {
    };

    class RecordingEndpointProvider : public Aws::Endpoint::EndpointProviderBase<>
    {
    public:
        void InitBuiltInParameters(const Aws::Client::GenericClientConfiguration& config) override
        {
            AWS_UNREFERENCED_PARAM(config);
            ++m_genericInitCalls;
        }

        void InitBuiltInParameters(
            const Aws::Client::GenericClientConfiguration& config, const Aws::String& serviceName) override
        {
            AWS_UNREFERENCED_PARAM(config);
            ++m_serviceInitCalls;
            m_serviceName = serviceName;
        }

        void OverrideEndpoint(const Aws::String& endpoint) override
        {
            AWS_UNREFERENCED_PARAM(endpoint);
        }

        ClientContextParameters& AccessClientContextParameters() override
        {
            return m_clientContext;
        }

        const ClientContextParameters& GetClientContextParameters() const override
        {
            return m_clientContext;
        }

        Aws::Endpoint::ResolveEndpointOutcome ResolveEndpoint(
            const Aws::Endpoint::EndpointParameters& endpointParameters) const override
        {
            AWS_UNREFERENCED_PARAM(endpointParameters);
            return Aws::Endpoint::AWSEndpoint{};
        }

        size_t m_genericInitCalls{0};
        size_t m_serviceInitCalls{0};
        Aws::String m_serviceName;

    private:
        ClientContextParameters m_clientContext;
    };

    using AuthSchemes = Aws::Crt::Variant<smithy::SigV4aAuthScheme>;
    using TestSmithyClient = smithy::client::AwsSmithyClientT<
        SERVICE_NAME,
        TestClientConfiguration,
        smithy::GenericAuthSchemeResolver<>,
        AuthSchemes,
        RecordingEndpointProvider,
        smithy::client::JsonOutcomeSerializer,
        smithy::client::JsonOutcome,
        Aws::Client::JsonErrorMarshaller>;

    class SmithyClientEndpointProviderTest : public Aws::Testing::AwsCppSdkGTestSuite
    {
    };

    TEST_F(SmithyClientEndpointProviderTest, InitializesEndpointProviderWithServiceName)
    {
        const TestClientConfiguration config;
        auto endpointProvider = Aws::MakeShared<RecordingEndpointProvider>(ALLOCATION_TAG);
        auto authSchemeResolver = Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(ALLOCATION_TAG);
        auto httpClient = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
        auto errorMarshaller = Aws::MakeShared<Aws::Client::JsonErrorMarshaller>(ALLOCATION_TAG);
        const Aws::UnorderedMap<Aws::String, AuthSchemes> authSchemes;

        const TestSmithyClient client(
            config,
            SERVICE_NAME,
            "TestServiceUserAgent",
            httpClient,
            errorMarshaller,
            endpointProvider,
            authSchemeResolver,
            authSchemes);

        EXPECT_EQ(endpointProvider->m_serviceInitCalls, 1u);
        EXPECT_EQ(endpointProvider->m_genericInitCalls, 0u);
        EXPECT_EQ(endpointProvider->m_serviceName, SERVICE_NAME);
    }
} // namespace
