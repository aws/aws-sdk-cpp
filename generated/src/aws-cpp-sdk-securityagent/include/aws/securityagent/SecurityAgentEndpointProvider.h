/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgentClientConfiguration.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

namespace Aws {
namespace SecurityAgent {
namespace Endpoint {
using SecurityAgentClientConfiguration = Aws::SecurityAgent::SecurityAgentClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SecurityAgentClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SECURITYAGENT_API SecurityAgentBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SecurityAgentBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SecurityAgentClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SecurityAgentClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SecurityAgentClientConfiguration& config);
};

/**
 * The type for the SecurityAgent Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SecurityAgentEndpointProviderBase =
    EndpointProviderBase<SecurityAgentClientConfiguration, SecurityAgentBuiltInParameters, SecurityAgentClientContextParameters>;

using SecurityAgentDefaultEpProviderBase =
    BDDEndpointProvider<SecurityAgentClientConfiguration, SecurityAgentBuiltInParameters, SecurityAgentClientContextParameters>;

}  // namespace Endpoint
}  // namespace SecurityAgent

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SECURITYAGENT_EXTERN template class AWS_SECURITYAGENT_API Aws::Endpoint::EndpointProviderBase<
    SecurityAgent::Endpoint::SecurityAgentClientConfiguration, SecurityAgent::Endpoint::SecurityAgentBuiltInParameters,
    SecurityAgent::Endpoint::SecurityAgentClientContextParameters>;

AWS_SECURITYAGENT_EXTERN template class AWS_SECURITYAGENT_API Aws::Endpoint::BDDEndpointProvider<
    SecurityAgent::Endpoint::SecurityAgentClientConfiguration, SecurityAgent::Endpoint::SecurityAgentBuiltInParameters,
    SecurityAgent::Endpoint::SecurityAgentClientContextParameters>;
}  // namespace Endpoint

namespace SecurityAgent {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SECURITYAGENT_API SecurityAgentEndpointProvider : public SecurityAgentDefaultEpProviderBase {
 public:
  using SecurityAgentResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SecurityAgentEndpointProvider();

  ~SecurityAgentEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SecurityAgent
}  // namespace Aws
