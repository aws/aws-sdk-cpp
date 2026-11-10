/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessClientConfiguration.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>

namespace Aws {
namespace Route53RecoveryReadiness {
namespace Endpoint {
using Route53RecoveryReadinessClientConfiguration = Aws::Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using Route53RecoveryReadinessClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ROUTE53RECOVERYREADINESS_API Route53RecoveryReadinessBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~Route53RecoveryReadinessBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const Route53RecoveryReadinessClientConfiguration& config);
  virtual void SetFromClientConfiguration(const Route53RecoveryReadinessClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const Route53RecoveryReadinessClientConfiguration& config);
};

/**
 * The type for the Route53RecoveryReadiness Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Route53RecoveryReadinessEndpointProviderBase =
    EndpointProviderBase<Route53RecoveryReadinessClientConfiguration, Route53RecoveryReadinessBuiltInParameters,
                         Route53RecoveryReadinessClientContextParameters>;

using Route53RecoveryReadinessDefaultEpProviderBase =
    BDDEndpointProvider<Route53RecoveryReadinessClientConfiguration, Route53RecoveryReadinessBuiltInParameters,
                        Route53RecoveryReadinessClientContextParameters>;

}  // namespace Endpoint
}  // namespace Route53RecoveryReadiness

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ROUTE53RECOVERYREADINESS_EXTERN template class AWS_ROUTE53RECOVERYREADINESS_API
    Aws::Endpoint::EndpointProviderBase<Route53RecoveryReadiness::Endpoint::Route53RecoveryReadinessClientConfiguration,
                                        Route53RecoveryReadiness::Endpoint::Route53RecoveryReadinessBuiltInParameters,
                                        Route53RecoveryReadiness::Endpoint::Route53RecoveryReadinessClientContextParameters>;

AWS_ROUTE53RECOVERYREADINESS_EXTERN template class AWS_ROUTE53RECOVERYREADINESS_API
    Aws::Endpoint::BDDEndpointProvider<Route53RecoveryReadiness::Endpoint::Route53RecoveryReadinessClientConfiguration,
                                       Route53RecoveryReadiness::Endpoint::Route53RecoveryReadinessBuiltInParameters,
                                       Route53RecoveryReadiness::Endpoint::Route53RecoveryReadinessClientContextParameters>;
}  // namespace Endpoint

namespace Route53RecoveryReadiness {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ROUTE53RECOVERYREADINESS_API Route53RecoveryReadinessEndpointProvider : public Route53RecoveryReadinessDefaultEpProviderBase {
 public:
  using Route53RecoveryReadinessResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  Route53RecoveryReadinessEndpointProvider();

  ~Route53RecoveryReadinessEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Route53RecoveryReadiness
}  // namespace Aws
