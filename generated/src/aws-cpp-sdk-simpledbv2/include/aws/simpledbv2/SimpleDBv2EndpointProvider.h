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
#include <aws/simpledbv2/SimpleDBv2EndpointRules.h>
#include <aws/simpledbv2/SimpleDBv2_EXPORTS.h>

namespace Aws {
namespace SimpleDBv2 {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SimpleDBv2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SimpleDBv2ClientConfiguration = Aws::Client::GenericClientConfiguration;
using SimpleDBv2BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SimpleDBv2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SimpleDBv2EndpointProviderBase =
    EndpointProviderBase<SimpleDBv2ClientConfiguration, SimpleDBv2BuiltInParameters, SimpleDBv2ClientContextParameters>;

using SimpleDBv2DefaultEpProviderBase =
    DefaultEndpointProvider<SimpleDBv2ClientConfiguration, SimpleDBv2BuiltInParameters, SimpleDBv2ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SIMPLEDBV2_API SimpleDBv2EndpointProvider : public SimpleDBv2DefaultEpProviderBase {
 public:
  using SimpleDBv2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SimpleDBv2EndpointProvider()
      : SimpleDBv2DefaultEpProviderBase(Aws::SimpleDBv2::SimpleDBv2EndpointRules::GetRulesBlob(),
                                        Aws::SimpleDBv2::SimpleDBv2EndpointRules::RulesBlobSize) {}

  ~SimpleDBv2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SimpleDBv2
}  // namespace Aws
