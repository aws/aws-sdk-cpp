/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHubClientConfiguration.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

namespace Aws {
namespace SecurityHub {
namespace Endpoint {
using SecurityHubClientConfiguration = Aws::SecurityHub::SecurityHubClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SecurityHubClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SECURITYHUB_API SecurityHubBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SecurityHubBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SecurityHubClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SecurityHubClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SecurityHubClientConfiguration& config);
};

/**
 * The type for the SecurityHub Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SecurityHubEndpointProviderBase =
    EndpointProviderBase<SecurityHubClientConfiguration, SecurityHubBuiltInParameters, SecurityHubClientContextParameters>;

using SecurityHubDefaultEpProviderBase =
    BDDEndpointProvider<SecurityHubClientConfiguration, SecurityHubBuiltInParameters, SecurityHubClientContextParameters>;

}  // namespace Endpoint
}  // namespace SecurityHub

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SECURITYHUB_EXTERN template class AWS_SECURITYHUB_API Aws::Endpoint::EndpointProviderBase<
    SecurityHub::Endpoint::SecurityHubClientConfiguration, SecurityHub::Endpoint::SecurityHubBuiltInParameters,
    SecurityHub::Endpoint::SecurityHubClientContextParameters>;

AWS_SECURITYHUB_EXTERN template class AWS_SECURITYHUB_API Aws::Endpoint::BDDEndpointProvider<
    SecurityHub::Endpoint::SecurityHubClientConfiguration, SecurityHub::Endpoint::SecurityHubBuiltInParameters,
    SecurityHub::Endpoint::SecurityHubClientContextParameters>;
}  // namespace Endpoint

namespace SecurityHub {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SECURITYHUB_API SecurityHubEndpointProvider : public SecurityHubDefaultEpProviderBase {
 public:
  using SecurityHubResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SecurityHubEndpointProvider();

  ~SecurityHubEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SecurityHub
}  // namespace Aws
