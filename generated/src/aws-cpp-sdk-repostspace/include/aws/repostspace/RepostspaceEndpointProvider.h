/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/repostspace/RepostspaceEndpointRules.h>


namespace Aws
{
namespace repostspace
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using RepostspaceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using RepostspaceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using RepostspaceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the repostspace Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RepostspaceEndpointProviderBase =
    EndpointProviderBase<RepostspaceClientConfiguration, RepostspaceBuiltInParameters, RepostspaceClientContextParameters>;

using RepostspaceDefaultEpProviderBase =
    DefaultEndpointProvider<RepostspaceClientConfiguration, RepostspaceBuiltInParameters, RepostspaceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_REPOSTSPACE_API RepostspaceEndpointProvider : public RepostspaceDefaultEpProviderBase
{
public:
    using RepostspaceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    RepostspaceEndpointProvider()
      : RepostspaceDefaultEpProviderBase(Aws::repostspace::RepostspaceEndpointRules::GetRulesBlob(), Aws::repostspace::RepostspaceEndpointRules::RulesBlobSize)
    {}

    ~RepostspaceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace repostspace
} // namespace Aws
