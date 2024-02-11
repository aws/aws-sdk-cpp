/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/osis/OSISEndpointRules.h>


namespace Aws
{
namespace OSIS
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using OSISClientContextParameters = Aws::Endpoint::ClientContextParameters;

using OSISClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using OSISBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the OSIS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using OSISEndpointProviderBase =
    EndpointProviderBase<OSISClientConfiguration, OSISBuiltInParameters, OSISClientContextParameters>;

using OSISDefaultEpProviderBase =
    DefaultEndpointProvider<OSISClientConfiguration, OSISBuiltInParameters, OSISClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_OSIS_API OSISEndpointProvider : public OSISDefaultEpProviderBase
{
public:
    using OSISResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    OSISEndpointProvider()
      : OSISDefaultEpProviderBase(Aws::OSIS::OSISEndpointRules::GetRulesBlob(), Aws::OSIS::OSISEndpointRules::RulesBlobSize)
    {}

    ~OSISEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace OSIS
} // namespace Aws
