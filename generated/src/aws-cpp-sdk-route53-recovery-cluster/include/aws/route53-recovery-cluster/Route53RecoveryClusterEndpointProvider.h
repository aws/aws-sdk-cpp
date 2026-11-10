/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterClientConfiguration.h>
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>

namespace Aws {
namespace Route53RecoveryCluster {
namespace Endpoint {
using Route53RecoveryClusterClientConfiguration = Aws::Route53RecoveryCluster::Route53RecoveryClusterClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using Route53RecoveryClusterClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ROUTE53RECOVERYCLUSTER_API Route53RecoveryClusterBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~Route53RecoveryClusterBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const Route53RecoveryClusterClientConfiguration& config);
  virtual void SetFromClientConfiguration(const Route53RecoveryClusterClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const Route53RecoveryClusterClientConfiguration& config);
};

/**
 * The type for the Route53RecoveryCluster Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Route53RecoveryClusterEndpointProviderBase =
    EndpointProviderBase<Route53RecoveryClusterClientConfiguration, Route53RecoveryClusterBuiltInParameters,
                         Route53RecoveryClusterClientContextParameters>;

using Route53RecoveryClusterDefaultEpProviderBase =
    BDDEndpointProvider<Route53RecoveryClusterClientConfiguration, Route53RecoveryClusterBuiltInParameters,
                        Route53RecoveryClusterClientContextParameters>;

}  // namespace Endpoint
}  // namespace Route53RecoveryCluster

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ROUTE53RECOVERYCLUSTER_EXTERN template class AWS_ROUTE53RECOVERYCLUSTER_API
    Aws::Endpoint::EndpointProviderBase<Route53RecoveryCluster::Endpoint::Route53RecoveryClusterClientConfiguration,
                                        Route53RecoveryCluster::Endpoint::Route53RecoveryClusterBuiltInParameters,
                                        Route53RecoveryCluster::Endpoint::Route53RecoveryClusterClientContextParameters>;

AWS_ROUTE53RECOVERYCLUSTER_EXTERN template class AWS_ROUTE53RECOVERYCLUSTER_API
    Aws::Endpoint::BDDEndpointProvider<Route53RecoveryCluster::Endpoint::Route53RecoveryClusterClientConfiguration,
                                       Route53RecoveryCluster::Endpoint::Route53RecoveryClusterBuiltInParameters,
                                       Route53RecoveryCluster::Endpoint::Route53RecoveryClusterClientContextParameters>;
}  // namespace Endpoint

namespace Route53RecoveryCluster {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ROUTE53RECOVERYCLUSTER_API Route53RecoveryClusterEndpointProvider : public Route53RecoveryClusterDefaultEpProviderBase {
 public:
  using Route53RecoveryClusterResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  Route53RecoveryClusterEndpointProvider();

  ~Route53RecoveryClusterEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Route53RecoveryCluster
}  // namespace Aws
