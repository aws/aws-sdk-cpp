/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/EndpointProviderBase.h>
#include <aws/core/client/ConfiguredEndpointResolver.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/Optional.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/http/URI.h>
#include <memory>

namespace Aws
{
namespace Client
{

template<typename ClientConfigurationT = Aws::Client::GenericClientConfiguration>
class ConfiguredEndpointProvider : public Aws::Endpoint::EndpointProviderBase<ClientConfigurationT>
{
public:
    ConfiguredEndpointProvider(
        std::shared_ptr<Aws::Endpoint::EndpointProviderBase<ClientConfigurationT>> inner,
        Aws::String serviceId,
        std::shared_ptr<Aws::Config::AWSConfigFileProfileConfigLoader> loader,
        const ClientConfigurationT& config)
        : m_inner(std::move(inner)), m_serviceId(std::move(serviceId))
    {
        // Check for explicit override
        m_explicit = config.endpointOverride;

        // Check for opt-out flags
        auto envValue = Environment::GetEnv("AWS_IGNORE_CONFIGURED_ENDPOINT_URLS");
        bool ignoreEnv = (envValue == "true" || envValue == "TRUE" || envValue == "True" || envValue == "1");

        // Only resolve configured endpoints if not ignored and no explicit override
        if (!ignoreEnv && m_explicit.empty())
        {
            ConfiguredEndpointResolver::Options opts;
            opts.policy = ConfiguredEndpointsPolicy::UseConfigured;
            if (!config.profileName.empty()) {
                opts.profileName = config.profileName;
            }

            ConfiguredEndpointResolver resolver(loader, opts);
            auto result = resolver.ResolveForService(m_serviceId);
            if (!result.url.empty()) {
                m_chain = result;
            }
        }
    }

    void InitBuiltInParameters(const ClientConfigurationT& config) override
    {
        m_inner->InitBuiltInParameters(config);
    }

    void OverrideEndpoint(const Aws::String& endpoint) override
    {
        m_explicit = endpoint;
        m_inner->OverrideEndpoint(endpoint);
    }
    
    typename Aws::Endpoint::EndpointProviderBase<ClientConfigurationT>::ClientContextParameters& 
    AccessClientContextParameters() override
    {
        return m_inner->AccessClientContextParameters();
    }
    
    const typename Aws::Endpoint::EndpointProviderBase<ClientConfigurationT>::ClientContextParameters& 
    GetClientContextParameters() const override
    {
        return m_inner->GetClientContextParameters();
    }

    Aws::Endpoint::ResolveEndpointOutcome
    ResolveEndpoint(const Aws::Endpoint::EndpointParameters& params) const override
    {
        // 1. Explicit override wins
        if (!m_explicit.empty())
        {
            Aws::Http::URI uri(m_explicit);
            Aws::Endpoint::AWSEndpoint endpoint;
            endpoint.SetURI(uri);
            return Aws::Endpoint::ResolveEndpointOutcome(endpoint);
        }

        // 2. Configured chain (env / services / profile)
        if (m_chain.has_value())
        {
            Aws::Http::URI uri(m_chain->url);
            Aws::Endpoint::AWSEndpoint endpoint;
            endpoint.SetURI(uri);
            return Aws::Endpoint::ResolveEndpointOutcome(endpoint);
        }

        // 3. Default rules-based provider
        return m_inner->ResolveEndpoint(params);
    }

private:
    std::shared_ptr<Aws::Endpoint::EndpointProviderBase<ClientConfigurationT>> m_inner;
    Aws::String m_serviceId;
    Aws::String m_explicit;
    Aws::Utils::Optional<ResolvedEndpoint> m_chain;
};

} // namespace Client
} // namespace Aws