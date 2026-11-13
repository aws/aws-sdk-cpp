/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/service-quotas/ServiceQuotasClientConfiguration.h>
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>

namespace Aws {
namespace ServiceQuotas {
namespace Endpoint {
using ServiceQuotasClientConfiguration = Aws::ServiceQuotas::ServiceQuotasClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ServiceQuotasClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SERVICEQUOTAS_API ServiceQuotasBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ServiceQuotasBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ServiceQuotasClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ServiceQuotasClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ServiceQuotasClientConfiguration& config);
};

/**
 * The type for the ServiceQuotas Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ServiceQuotasEndpointProviderBase =
    EndpointProviderBase<ServiceQuotasClientConfiguration, ServiceQuotasBuiltInParameters, ServiceQuotasClientContextParameters>;

using ServiceQuotasDefaultEpProviderBase =
    BDDEndpointProvider<ServiceQuotasClientConfiguration, ServiceQuotasBuiltInParameters, ServiceQuotasClientContextParameters>;

}  // namespace Endpoint
}  // namespace ServiceQuotas

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SERVICEQUOTAS_EXTERN template class AWS_SERVICEQUOTAS_API Aws::Endpoint::EndpointProviderBase<
    ServiceQuotas::Endpoint::ServiceQuotasClientConfiguration, ServiceQuotas::Endpoint::ServiceQuotasBuiltInParameters,
    ServiceQuotas::Endpoint::ServiceQuotasClientContextParameters>;

AWS_SERVICEQUOTAS_EXTERN template class AWS_SERVICEQUOTAS_API Aws::Endpoint::BDDEndpointProvider<
    ServiceQuotas::Endpoint::ServiceQuotasClientConfiguration, ServiceQuotas::Endpoint::ServiceQuotasBuiltInParameters,
    ServiceQuotas::Endpoint::ServiceQuotasClientContextParameters>;
}  // namespace Endpoint

namespace ServiceQuotas {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SERVICEQUOTAS_API ServiceQuotasEndpointProvider : public ServiceQuotasDefaultEpProviderBase {
 public:
  using ServiceQuotasResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ServiceQuotasEndpointProvider();

  ~ServiceQuotasEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ServiceQuotas
}  // namespace Aws
