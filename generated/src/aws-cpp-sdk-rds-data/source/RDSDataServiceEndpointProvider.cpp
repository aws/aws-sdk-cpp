/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/RDSDataServiceEndpointProvider.h>
#include <aws/rds-data/internal/RDSDataServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_RDSDATASERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<RDSDataService::Endpoint::RDSDataServiceClientConfiguration,
                                                   RDSDataService::Endpoint::RDSDataServiceBuiltInParameters,
                                                   RDSDataService::Endpoint::RDSDataServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<RDSDataService::Endpoint::RDSDataServiceClientConfiguration,
                                                  RDSDataService::Endpoint::RDSDataServiceBuiltInParameters,
                                                  RDSDataService::Endpoint::RDSDataServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace RDSDataService {
namespace Endpoint {
RDSDataServiceEndpointProvider::RDSDataServiceEndpointProvider()
    : RDSDataServiceDefaultEpProviderBase(Aws::RDSDataService::RDSDataServiceEndpointRules::GetRulesBlob(),
                                          Aws::RDSDataService::RDSDataServiceEndpointRules::RulesBlobSize) {}

void RDSDataServiceBuiltInParameters::SetFromClientConfiguration(const RDSDataServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const RDSDataServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void RDSDataServiceBuiltInParameters::SetFromClientConfiguration(const RDSDataServiceClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const RDSDataServiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void RDSDataServiceBuiltInParameters::SetServiceSpecificParameters(const RDSDataServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace RDSDataService
}  // namespace Aws
