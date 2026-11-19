/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigClientConfiguration.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>

namespace Aws {
namespace Route53RecoveryControlConfig {
namespace Endpoint {
using Route53RecoveryControlConfigClientConfiguration = Aws::Route53RecoveryControlConfig::Route53RecoveryControlConfigClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using Route53RecoveryControlConfigClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ROUTE53RECOVERYCONTROLCONFIG_API Route53RecoveryControlConfigBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~Route53RecoveryControlConfigBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const Route53RecoveryControlConfigClientConfiguration& config);
  virtual void SetFromClientConfiguration(const Route53RecoveryControlConfigClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const Route53RecoveryControlConfigClientConfiguration& config);
};

/**
 * The type for the Route53RecoveryControlConfig Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Route53RecoveryControlConfigEndpointProviderBase =
    EndpointProviderBase<Route53RecoveryControlConfigClientConfiguration, Route53RecoveryControlConfigBuiltInParameters,
                         Route53RecoveryControlConfigClientContextParameters>;

using Route53RecoveryControlConfigDefaultEpProviderBase =
    BDDEndpointProvider<Route53RecoveryControlConfigClientConfiguration, Route53RecoveryControlConfigBuiltInParameters,
                        Route53RecoveryControlConfigClientContextParameters>;

}  // namespace Endpoint
}  // namespace Route53RecoveryControlConfig

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ROUTE53RECOVERYCONTROLCONFIG_EXTERN template class AWS_ROUTE53RECOVERYCONTROLCONFIG_API
    Aws::Endpoint::EndpointProviderBase<Route53RecoveryControlConfig::Endpoint::Route53RecoveryControlConfigClientConfiguration,
                                        Route53RecoveryControlConfig::Endpoint::Route53RecoveryControlConfigBuiltInParameters,
                                        Route53RecoveryControlConfig::Endpoint::Route53RecoveryControlConfigClientContextParameters>;

AWS_ROUTE53RECOVERYCONTROLCONFIG_EXTERN template class AWS_ROUTE53RECOVERYCONTROLCONFIG_API
    Aws::Endpoint::BDDEndpointProvider<Route53RecoveryControlConfig::Endpoint::Route53RecoveryControlConfigClientConfiguration,
                                       Route53RecoveryControlConfig::Endpoint::Route53RecoveryControlConfigBuiltInParameters,
                                       Route53RecoveryControlConfig::Endpoint::Route53RecoveryControlConfigClientContextParameters>;
}  // namespace Endpoint

namespace Route53RecoveryControlConfig {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ROUTE53RECOVERYCONTROLCONFIG_API Route53RecoveryControlConfigEndpointProvider
    : public Route53RecoveryControlConfigDefaultEpProviderBase {
 public:
  using Route53RecoveryControlConfigResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  Route53RecoveryControlConfigEndpointProvider();

  ~Route53RecoveryControlConfigEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Route53RecoveryControlConfig
}  // namespace Aws
