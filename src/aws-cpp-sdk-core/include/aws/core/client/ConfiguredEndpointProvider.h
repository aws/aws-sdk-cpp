/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/EndpointProviderBase.h>
#include <aws/core/client/ConfiguredEndpointResolver.h>
#include <aws/core/client/ClientConfiguration.h>
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
        const ClientConfigurationT& config);

    void InitBuiltInParameters(const ClientConfigurationT& config) override;
    void OverrideEndpoint(const Aws::String& endpoint) override;
    
    typename Aws::Endpoint::EndpointProviderBase<ClientConfigurationT>::ClientContextParameters& 
    AccessClientContextParameters() override;
    
    const typename Aws::Endpoint::EndpointProviderBase<ClientConfigurationT>::ClientContextParameters& 
    GetClientContextParameters() const override;

    Aws::Endpoint::ResolveEndpointOutcome
    ResolveEndpoint(const Aws::Endpoint::EndpointParameters& params) const override;

private:
    std::shared_ptr<Aws::Endpoint::EndpointProviderBase<ClientConfigurationT>> m_inner;
    Aws::String m_serviceId;
    Aws::String m_explicit;
    ResolvedEndpoint m_chain;
};

} // namespace Client
} // namespace Aws