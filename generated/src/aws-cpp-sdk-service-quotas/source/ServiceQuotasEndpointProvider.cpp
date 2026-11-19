/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/ServiceQuotasEndpointProvider.h>
#include <aws/service-quotas/internal/ServiceQuotasEndpointRules.h>

namespace Aws {
#ifndef AWS_SERVICEQUOTAS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ServiceQuotas::Endpoint::ServiceQuotasClientConfiguration,
                                                   ServiceQuotas::Endpoint::ServiceQuotasBuiltInParameters,
                                                   ServiceQuotas::Endpoint::ServiceQuotasClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ServiceQuotas::Endpoint::ServiceQuotasClientConfiguration,
                                                  ServiceQuotas::Endpoint::ServiceQuotasBuiltInParameters,
                                                  ServiceQuotas::Endpoint::ServiceQuotasClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ServiceQuotas {
namespace Endpoint {
ServiceQuotasEndpointProvider::ServiceQuotasEndpointProvider()
    : ServiceQuotasDefaultEpProviderBase(Aws::ServiceQuotas::ServiceQuotasEndpointRules::GetRulesBlob(),
                                         Aws::ServiceQuotas::ServiceQuotasEndpointRules::RulesBlobSize) {}

void ServiceQuotasBuiltInParameters::SetFromClientConfiguration(const ServiceQuotasClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ServiceQuotasClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ServiceQuotasBuiltInParameters::SetFromClientConfiguration(const ServiceQuotasClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ServiceQuotasClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ServiceQuotasBuiltInParameters::SetServiceSpecificParameters(const ServiceQuotasClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ServiceQuotas
}  // namespace Aws
