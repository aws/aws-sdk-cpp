/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicediscovery/ServiceDiscoveryClientConfiguration.h>
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>

namespace Aws {
namespace ServiceDiscovery {
namespace Endpoint {
using ServiceDiscoveryClientConfiguration = Aws::ServiceDiscovery::ServiceDiscoveryClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ServiceDiscoveryClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SERVICEDISCOVERY_API ServiceDiscoveryBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ServiceDiscoveryBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ServiceDiscoveryClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ServiceDiscoveryClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ServiceDiscoveryClientConfiguration& config);
};

/**
 * The type for the ServiceDiscovery Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ServiceDiscoveryEndpointProviderBase =
    EndpointProviderBase<ServiceDiscoveryClientConfiguration, ServiceDiscoveryBuiltInParameters, ServiceDiscoveryClientContextParameters>;

using ServiceDiscoveryDefaultEpProviderBase =
    BDDEndpointProvider<ServiceDiscoveryClientConfiguration, ServiceDiscoveryBuiltInParameters, ServiceDiscoveryClientContextParameters>;

}  // namespace Endpoint
}  // namespace ServiceDiscovery

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SERVICEDISCOVERY_EXTERN template class AWS_SERVICEDISCOVERY_API Aws::Endpoint::EndpointProviderBase<
    ServiceDiscovery::Endpoint::ServiceDiscoveryClientConfiguration, ServiceDiscovery::Endpoint::ServiceDiscoveryBuiltInParameters,
    ServiceDiscovery::Endpoint::ServiceDiscoveryClientContextParameters>;

AWS_SERVICEDISCOVERY_EXTERN template class AWS_SERVICEDISCOVERY_API Aws::Endpoint::BDDEndpointProvider<
    ServiceDiscovery::Endpoint::ServiceDiscoveryClientConfiguration, ServiceDiscovery::Endpoint::ServiceDiscoveryBuiltInParameters,
    ServiceDiscovery::Endpoint::ServiceDiscoveryClientContextParameters>;
}  // namespace Endpoint

namespace ServiceDiscovery {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SERVICEDISCOVERY_API ServiceDiscoveryEndpointProvider : public ServiceDiscoveryDefaultEpProviderBase {
 public:
  using ServiceDiscoveryResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ServiceDiscoveryEndpointProvider();

  ~ServiceDiscoveryEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ServiceDiscovery
}  // namespace Aws
