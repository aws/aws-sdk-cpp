/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/ConfiguredEndpointProvider.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/http/URI.h>

using namespace Aws::Client;
using namespace Aws::Endpoint;

template<typename ClientConfigurationT>
ConfiguredEndpointProvider<ClientConfigurationT>::ConfiguredEndpointProvider(
    std::shared_ptr<Aws::Endpoint::EndpointProviderBase<ClientConfigurationT>> inner,
    Aws::String serviceId,
    std::shared_ptr<Aws::Config::AWSConfigFileProfileConfigLoader> loader,
    const ClientConfigurationT& config)
    : m_inner(std::move(inner)), m_serviceId(std::move(serviceId))
{
    // Check for explicit override
    m_explicit = config.endpointOverride;

    // Check for opt-out flags
    bool ignoreEnv = Environment::GetEnv("AWS_IGNORE_CONFIGURED_ENDPOINT_URLS") == "true";

    // Only resolve configured endpoints if not ignored and no explicit override
    if (!ignoreEnv && m_explicit.empty())
    {
        ConfiguredEndpointResolver::Options opts;
        opts.policy = ConfiguredEndpointsPolicy::UseConfigured;
        if (!config.profileName.empty()) {
            opts.profileName = config.profileName;
        }

        ConfiguredEndpointResolver resolver(loader, opts);
        m_chain = resolver.ResolveForService(m_serviceId);
    }
}

template<typename ClientConfigurationT>
void ConfiguredEndpointProvider<ClientConfigurationT>::InitBuiltInParameters(const ClientConfigurationT& config)
{
    m_inner->InitBuiltInParameters(config);
}

template<typename ClientConfigurationT>
void ConfiguredEndpointProvider<ClientConfigurationT>::OverrideEndpoint(const Aws::String& endpoint)
{
    m_explicit = endpoint;
    m_inner->OverrideEndpoint(endpoint);
}

template<typename ClientConfigurationT>
typename Aws::Endpoint::EndpointProviderBase<ClientConfigurationT>::ClientContextParameters&
ConfiguredEndpointProvider<ClientConfigurationT>::AccessClientContextParameters()
{
    return m_inner->AccessClientContextParameters();
}

template<typename ClientConfigurationT>
const typename Aws::Endpoint::EndpointProviderBase<ClientConfigurationT>::ClientContextParameters&
ConfiguredEndpointProvider<ClientConfigurationT>::GetClientContextParameters() const
{
    return m_inner->GetClientContextParameters();
}

template<typename ClientConfigurationT>
Aws::Endpoint::ResolveEndpointOutcome
ConfiguredEndpointProvider<ClientConfigurationT>::ResolveEndpoint(const Aws::Endpoint::EndpointParameters& params) const
{
    // 1. Explicit override wins
    if (!m_explicit.empty())
    {
        return m_inner->ResolveEndpoint(params);
    }

    // 2. Configured chain (env / services / profile)
    if (!m_chain.url.empty())
    {
        Aws::Http::URI uri(m_chain.url);
        Aws::Endpoint::AWSEndpoint endpoint;
        endpoint.SetURI(uri);
        return Aws::Endpoint::ResolveEndpointOutcome(endpoint);
    }

    // 3. Default rules-based provider
    return m_inner->ResolveEndpoint(params);
}

// Explicit template instantiation for common types
namespace Aws {
namespace Client {
template class ConfiguredEndpointProvider<Aws::Client::ClientConfiguration>;
} // namespace Client
} // namespace Aws