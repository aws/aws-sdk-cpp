/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/pca-connector-scep/PcaConnectorScepEndpointRules.h>


namespace Aws
{
namespace PcaConnectorScep
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using PcaConnectorScepClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PcaConnectorScepClientConfiguration = Aws::Client::GenericClientConfiguration;
using PcaConnectorScepBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the PcaConnectorScep Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PcaConnectorScepEndpointProviderBase =
    EndpointProviderBase<PcaConnectorScepClientConfiguration, PcaConnectorScepBuiltInParameters, PcaConnectorScepClientContextParameters>;

using PcaConnectorScepDefaultEpProviderBase =
    DefaultEndpointProvider<PcaConnectorScepClientConfiguration, PcaConnectorScepBuiltInParameters, PcaConnectorScepClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PCACONNECTORSCEP_API PcaConnectorScepEndpointProvider : public PcaConnectorScepDefaultEpProviderBase
{
public:
    using PcaConnectorScepResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    PcaConnectorScepEndpointProvider()
      : PcaConnectorScepDefaultEpProviderBase(Aws::PcaConnectorScep::PcaConnectorScepEndpointRules::GetRulesBlob(), Aws::PcaConnectorScep::PcaConnectorScepEndpointRules::RulesBlobSize)
    {}

    ~PcaConnectorScepEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace PcaConnectorScep
} // namespace Aws
