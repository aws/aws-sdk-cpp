/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/odb/OdbEndpointRules.h>


namespace Aws
{
namespace odb
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using OdbClientContextParameters = Aws::Endpoint::ClientContextParameters;

using OdbClientConfiguration = Aws::Client::GenericClientConfiguration;
using OdbBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the odb Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using OdbEndpointProviderBase =
    EndpointProviderBase<OdbClientConfiguration, OdbBuiltInParameters, OdbClientContextParameters>;

using OdbDefaultEpProviderBase =
    DefaultEndpointProvider<OdbClientConfiguration, OdbBuiltInParameters, OdbClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ODB_API OdbEndpointProvider : public OdbDefaultEpProviderBase
{
public:
    using OdbResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    OdbEndpointProvider()
      : OdbDefaultEpProviderBase(Aws::odb::OdbEndpointRules::GetRulesBlob(), Aws::odb::OdbEndpointRules::RulesBlobSize)
    {}

    ~OdbEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace odb
} // namespace Aws
