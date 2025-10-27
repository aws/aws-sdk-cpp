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
#include <aws/rtbfabric/RTBFabricEndpointRules.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

namespace Aws {
namespace RTBFabric {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using RTBFabricClientContextParameters = Aws::Endpoint::ClientContextParameters;

using RTBFabricClientConfiguration = Aws::Client::GenericClientConfiguration;
using RTBFabricBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the RTBFabric Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RTBFabricEndpointProviderBase =
    EndpointProviderBase<RTBFabricClientConfiguration, RTBFabricBuiltInParameters, RTBFabricClientContextParameters>;

using RTBFabricDefaultEpProviderBase =
    DefaultEndpointProvider<RTBFabricClientConfiguration, RTBFabricBuiltInParameters, RTBFabricClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_RTBFABRIC_API RTBFabricEndpointProvider : public RTBFabricDefaultEpProviderBase {
 public:
  using RTBFabricResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  RTBFabricEndpointProvider()
      : RTBFabricDefaultEpProviderBase(Aws::RTBFabric::RTBFabricEndpointRules::GetRulesBlob(),
                                       Aws::RTBFabric::RTBFabricEndpointRules::RulesBlobSize) {}

  ~RTBFabricEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace RTBFabric
}  // namespace Aws
