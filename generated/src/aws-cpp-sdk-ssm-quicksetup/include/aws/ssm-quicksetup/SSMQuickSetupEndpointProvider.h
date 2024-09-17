/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ssm-quicksetup/SSMQuickSetupEndpointRules.h>


namespace Aws
{
namespace SSMQuickSetup
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SSMQuickSetupClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SSMQuickSetupClientConfiguration = Aws::Client::GenericClientConfiguration;
using SSMQuickSetupBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SSMQuickSetup Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SSMQuickSetupEndpointProviderBase =
    EndpointProviderBase<SSMQuickSetupClientConfiguration, SSMQuickSetupBuiltInParameters, SSMQuickSetupClientContextParameters>;

using SSMQuickSetupDefaultEpProviderBase =
    DefaultEndpointProvider<SSMQuickSetupClientConfiguration, SSMQuickSetupBuiltInParameters, SSMQuickSetupClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SSMQUICKSETUP_API SSMQuickSetupEndpointProvider : public SSMQuickSetupDefaultEpProviderBase
{
public:
    using SSMQuickSetupResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SSMQuickSetupEndpointProvider()
      : SSMQuickSetupDefaultEpProviderBase(Aws::SSMQuickSetup::SSMQuickSetupEndpointRules::GetRulesBlob(), Aws::SSMQuickSetup::SSMQuickSetupEndpointRules::RulesBlobSize)
    {}

    ~SSMQuickSetupEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SSMQuickSetup
} // namespace Aws
