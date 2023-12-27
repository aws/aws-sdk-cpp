/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/pca-connector-ad/PcaConnectorAdEndpointRules.h>


namespace Aws
{
namespace PcaConnectorAd
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using PcaConnectorAdClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PcaConnectorAdClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using PcaConnectorAdBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the PcaConnectorAd Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PcaConnectorAdEndpointProviderBase =
    EndpointProviderBase<PcaConnectorAdClientConfiguration, PcaConnectorAdBuiltInParameters, PcaConnectorAdClientContextParameters>;

using PcaConnectorAdDefaultEpProviderBase =
    DefaultEndpointProvider<PcaConnectorAdClientConfiguration, PcaConnectorAdBuiltInParameters, PcaConnectorAdClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PCACONNECTORAD_API PcaConnectorAdEndpointProvider : public PcaConnectorAdDefaultEpProviderBase
{
public:
    using PcaConnectorAdResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    PcaConnectorAdEndpointProvider()
      : PcaConnectorAdDefaultEpProviderBase(Aws::PcaConnectorAd::PcaConnectorAdEndpointRules::GetRulesBlob(), Aws::PcaConnectorAd::PcaConnectorAdEndpointRules::RulesBlobSize)
    {}

    ~PcaConnectorAdEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace PcaConnectorAd
} // namespace Aws
