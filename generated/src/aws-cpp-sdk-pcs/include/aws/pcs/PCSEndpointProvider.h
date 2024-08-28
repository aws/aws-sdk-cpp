/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/pcs/PCSEndpointRules.h>


namespace Aws
{
namespace PCS
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using PCSClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PCSClientConfiguration = Aws::Client::GenericClientConfiguration;
using PCSBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the PCS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PCSEndpointProviderBase =
    EndpointProviderBase<PCSClientConfiguration, PCSBuiltInParameters, PCSClientContextParameters>;

using PCSDefaultEpProviderBase =
    DefaultEndpointProvider<PCSClientConfiguration, PCSBuiltInParameters, PCSClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PCS_API PCSEndpointProvider : public PCSDefaultEpProviderBase
{
public:
    using PCSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    PCSEndpointProvider()
      : PCSDefaultEpProviderBase(Aws::PCS::PCSEndpointRules::GetRulesBlob(), Aws::PCS::PCSEndpointRules::RulesBlobSize)
    {}

    ~PCSEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace PCS
} // namespace Aws
