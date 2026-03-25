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
#include <aws/uxc/UxcEndpointRules.h>
#include <aws/uxc/Uxc_EXPORTS.h>

namespace Aws {
namespace uxc {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using UxcClientContextParameters = Aws::Endpoint::ClientContextParameters;

using UxcClientConfiguration = Aws::Client::GenericClientConfiguration;
using UxcBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the uxc Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using UxcEndpointProviderBase = EndpointProviderBase<UxcClientConfiguration, UxcBuiltInParameters, UxcClientContextParameters>;

using UxcDefaultEpProviderBase = DefaultEndpointProvider<UxcClientConfiguration, UxcBuiltInParameters, UxcClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_UXC_API UxcEndpointProvider : public UxcDefaultEpProviderBase {
 public:
  using UxcResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  UxcEndpointProvider() : UxcDefaultEpProviderBase(Aws::uxc::UxcEndpointRules::GetRulesBlob(), Aws::uxc::UxcEndpointRules::RulesBlobSize) {}

  ~UxcEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace uxc
}  // namespace Aws
