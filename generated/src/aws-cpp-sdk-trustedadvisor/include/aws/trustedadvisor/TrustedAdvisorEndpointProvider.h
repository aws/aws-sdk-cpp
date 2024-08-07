﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/trustedadvisor/TrustedAdvisorEndpointRules.h>


namespace Aws
{
namespace TrustedAdvisor
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using TrustedAdvisorClientContextParameters = Aws::Endpoint::ClientContextParameters;

using TrustedAdvisorClientConfiguration = Aws::Client::GenericClientConfiguration;
using TrustedAdvisorBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the TrustedAdvisor Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TrustedAdvisorEndpointProviderBase =
    EndpointProviderBase<TrustedAdvisorClientConfiguration, TrustedAdvisorBuiltInParameters, TrustedAdvisorClientContextParameters>;

using TrustedAdvisorDefaultEpProviderBase =
    DefaultEndpointProvider<TrustedAdvisorClientConfiguration, TrustedAdvisorBuiltInParameters, TrustedAdvisorClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_TRUSTEDADVISOR_API TrustedAdvisorEndpointProvider : public TrustedAdvisorDefaultEpProviderBase
{
public:
    using TrustedAdvisorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    TrustedAdvisorEndpointProvider()
      : TrustedAdvisorDefaultEpProviderBase(Aws::TrustedAdvisor::TrustedAdvisorEndpointRules::GetRulesBlob(), Aws::TrustedAdvisor::TrustedAdvisorEndpointRules::RulesBlobSize)
    {}

    ~TrustedAdvisorEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace TrustedAdvisor
} // namespace Aws
