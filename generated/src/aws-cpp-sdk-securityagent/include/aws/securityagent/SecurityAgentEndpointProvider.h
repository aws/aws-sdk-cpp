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
#include <aws/securityagent/SecurityAgentEndpointRules.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

namespace Aws {
namespace SecurityAgent {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SecurityAgentClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SecurityAgentClientConfiguration = Aws::Client::GenericClientConfiguration;
using SecurityAgentBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SecurityAgent Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SecurityAgentEndpointProviderBase =
    EndpointProviderBase<SecurityAgentClientConfiguration, SecurityAgentBuiltInParameters, SecurityAgentClientContextParameters>;

using SecurityAgentDefaultEpProviderBase =
    DefaultEndpointProvider<SecurityAgentClientConfiguration, SecurityAgentBuiltInParameters, SecurityAgentClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SECURITYAGENT_API SecurityAgentEndpointProvider : public SecurityAgentDefaultEpProviderBase {
 public:
  using SecurityAgentResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SecurityAgentEndpointProvider()
      : SecurityAgentDefaultEpProviderBase(Aws::SecurityAgent::SecurityAgentEndpointRules::GetRulesBlob(),
                                           Aws::SecurityAgent::SecurityAgentEndpointRules::RulesBlobSize) {}

  ~SecurityAgentEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SecurityAgent
}  // namespace Aws
