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
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using Resiliencehubv2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using Resiliencehubv2ClientConfiguration = Aws::Client::GenericClientConfiguration;
using Resiliencehubv2BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the resiliencehubv2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Resiliencehubv2EndpointProviderBase =
    EndpointProviderBase<Resiliencehubv2ClientConfiguration, Resiliencehubv2BuiltInParameters, Resiliencehubv2ClientContextParameters>;

using Resiliencehubv2DefaultEpProviderBase =
    DefaultEndpointProvider<Resiliencehubv2ClientConfiguration, Resiliencehubv2BuiltInParameters, Resiliencehubv2ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_RESILIENCEHUBV2_API Resiliencehubv2EndpointProvider : public Resiliencehubv2DefaultEpProviderBase {
 public:
  using Resiliencehubv2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  Resiliencehubv2EndpointProvider();

  ~Resiliencehubv2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace resiliencehubv2
}  // namespace Aws
