/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sustainability/SustainabilityEndpointRules.h>
#include <aws/sustainability/Sustainability_EXPORTS.h>

namespace Aws {
namespace Sustainability {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SustainabilityClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SustainabilityClientConfiguration = Aws::Client::GenericClientConfiguration;
using SustainabilityBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Sustainability Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SustainabilityEndpointProviderBase =
    EndpointProviderBase<SustainabilityClientConfiguration, SustainabilityBuiltInParameters, SustainabilityClientContextParameters>;

using SustainabilityDefaultEpProviderBase =
    DefaultEndpointProvider<SustainabilityClientConfiguration, SustainabilityBuiltInParameters, SustainabilityClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SUSTAINABILITY_API SustainabilityEndpointProvider : public SustainabilityDefaultEpProviderBase {
 public:
  using SustainabilityResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SustainabilityEndpointProvider()
      : SustainabilityDefaultEpProviderBase(Aws::Sustainability::SustainabilityEndpointRules::GetRulesBlob(),
                                            Aws::Sustainability::SustainabilityEndpointRules::RulesBlobSize) {}

  ~SustainabilityEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Sustainability
}  // namespace Aws
