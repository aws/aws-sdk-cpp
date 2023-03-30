/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/vpc-lattice/VPCLatticeEndpointRules.h>


namespace Aws
{
namespace VPCLattice
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using VPCLatticeClientContextParameters = Aws::Endpoint::ClientContextParameters;

using VPCLatticeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using VPCLatticeBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the VPCLattice Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using VPCLatticeEndpointProviderBase =
    EndpointProviderBase<VPCLatticeClientConfiguration, VPCLatticeBuiltInParameters, VPCLatticeClientContextParameters>;

using VPCLatticeDefaultEpProviderBase =
    DefaultEndpointProvider<VPCLatticeClientConfiguration, VPCLatticeBuiltInParameters, VPCLatticeClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_VPCLATTICE_API VPCLatticeEndpointProvider : public VPCLatticeDefaultEpProviderBase
{
public:
    using VPCLatticeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    VPCLatticeEndpointProvider()
      : VPCLatticeDefaultEpProviderBase(Aws::VPCLattice::VPCLatticeEndpointRules::GetRulesBlob(), Aws::VPCLattice::VPCLatticeEndpointRules::RulesBlobSize)
    {}

    ~VPCLatticeEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace VPCLattice
} // namespace Aws
