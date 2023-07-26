/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/managedblockchain-query/ManagedBlockchainQueryEndpointRules.h>


namespace Aws
{
namespace ManagedBlockchainQuery
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ManagedBlockchainQueryClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ManagedBlockchainQueryClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ManagedBlockchainQueryBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ManagedBlockchainQuery Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ManagedBlockchainQueryEndpointProviderBase =
    EndpointProviderBase<ManagedBlockchainQueryClientConfiguration, ManagedBlockchainQueryBuiltInParameters, ManagedBlockchainQueryClientContextParameters>;

using ManagedBlockchainQueryDefaultEpProviderBase =
    DefaultEndpointProvider<ManagedBlockchainQueryClientConfiguration, ManagedBlockchainQueryBuiltInParameters, ManagedBlockchainQueryClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MANAGEDBLOCKCHAINQUERY_API ManagedBlockchainQueryEndpointProvider : public ManagedBlockchainQueryDefaultEpProviderBase
{
public:
    using ManagedBlockchainQueryResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ManagedBlockchainQueryEndpointProvider()
      : ManagedBlockchainQueryDefaultEpProviderBase(Aws::ManagedBlockchainQuery::ManagedBlockchainQueryEndpointRules::GetRulesBlob(), Aws::ManagedBlockchainQuery::ManagedBlockchainQueryEndpointRules::RulesBlobSize)
    {}

    ~ManagedBlockchainQueryEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ManagedBlockchainQuery
} // namespace Aws
