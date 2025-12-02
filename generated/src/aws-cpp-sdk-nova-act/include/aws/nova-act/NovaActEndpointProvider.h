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
#include <aws/nova-act/NovaActEndpointRules.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>

namespace Aws {
namespace NovaAct {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using NovaActClientContextParameters = Aws::Endpoint::ClientContextParameters;

using NovaActClientConfiguration = Aws::Client::GenericClientConfiguration;
using NovaActBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the NovaAct Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using NovaActEndpointProviderBase =
    EndpointProviderBase<NovaActClientConfiguration, NovaActBuiltInParameters, NovaActClientContextParameters>;

using NovaActDefaultEpProviderBase =
    DefaultEndpointProvider<NovaActClientConfiguration, NovaActBuiltInParameters, NovaActClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_NOVAACT_API NovaActEndpointProvider : public NovaActDefaultEpProviderBase {
 public:
  using NovaActResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  NovaActEndpointProvider()
      : NovaActDefaultEpProviderBase(Aws::NovaAct::NovaActEndpointRules::GetRulesBlob(),
                                     Aws::NovaAct::NovaActEndpointRules::RulesBlobSize) {}

  ~NovaActEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace NovaAct
}  // namespace Aws
