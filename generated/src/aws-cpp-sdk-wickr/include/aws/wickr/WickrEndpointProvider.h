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
#include <aws/wickr/WickrEndpointRules.h>
#include <aws/wickr/Wickr_EXPORTS.h>

namespace Aws {
namespace Wickr {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using WickrClientContextParameters = Aws::Endpoint::ClientContextParameters;

using WickrClientConfiguration = Aws::Client::GenericClientConfiguration;
using WickrBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Wickr Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WickrEndpointProviderBase = EndpointProviderBase<WickrClientConfiguration, WickrBuiltInParameters, WickrClientContextParameters>;

using WickrDefaultEpProviderBase = DefaultEndpointProvider<WickrClientConfiguration, WickrBuiltInParameters, WickrClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_WICKR_API WickrEndpointProvider : public WickrDefaultEpProviderBase {
 public:
  using WickrResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  WickrEndpointProvider()
      : WickrDefaultEpProviderBase(Aws::Wickr::WickrEndpointRules::GetRulesBlob(), Aws::Wickr::WickrEndpointRules::RulesBlobSize) {}

  ~WickrEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Wickr
}  // namespace Aws
