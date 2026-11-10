/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/ServiceCatalogEndpointProvider.h>
#include <aws/servicecatalog/internal/ServiceCatalogEndpointRules.h>

namespace Aws {
#ifndef AWS_SERVICECATALOG_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ServiceCatalog::Endpoint::ServiceCatalogClientConfiguration,
                                                   ServiceCatalog::Endpoint::ServiceCatalogBuiltInParameters,
                                                   ServiceCatalog::Endpoint::ServiceCatalogClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ServiceCatalog::Endpoint::ServiceCatalogClientConfiguration,
                                                  ServiceCatalog::Endpoint::ServiceCatalogBuiltInParameters,
                                                  ServiceCatalog::Endpoint::ServiceCatalogClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ServiceCatalog {
namespace Endpoint {
ServiceCatalogEndpointProvider::ServiceCatalogEndpointProvider()
    : ServiceCatalogDefaultEpProviderBase(Aws::ServiceCatalog::ServiceCatalogEndpointRules::GetRulesBlob(),
                                          Aws::ServiceCatalog::ServiceCatalogEndpointRules::RulesBlobSize) {}

void ServiceCatalogBuiltInParameters::SetFromClientConfiguration(const ServiceCatalogClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ServiceCatalogClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ServiceCatalogBuiltInParameters::SetFromClientConfiguration(const ServiceCatalogClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ServiceCatalogClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ServiceCatalogBuiltInParameters::SetServiceSpecificParameters(const ServiceCatalogClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ServiceCatalog
}  // namespace Aws
