/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-data/RedshiftDataAPIServiceEndpointProvider.h>
#include <aws/redshift-data/internal/RedshiftDataAPIServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_REDSHIFTDATAAPISERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<RedshiftDataAPIService::Endpoint::RedshiftDataAPIServiceClientConfiguration,
                                                   RedshiftDataAPIService::Endpoint::RedshiftDataAPIServiceBuiltInParameters,
                                                   RedshiftDataAPIService::Endpoint::RedshiftDataAPIServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<RedshiftDataAPIService::Endpoint::RedshiftDataAPIServiceClientConfiguration,
                                                  RedshiftDataAPIService::Endpoint::RedshiftDataAPIServiceBuiltInParameters,
                                                  RedshiftDataAPIService::Endpoint::RedshiftDataAPIServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace RedshiftDataAPIService {
namespace Endpoint {
RedshiftDataAPIServiceEndpointProvider::RedshiftDataAPIServiceEndpointProvider()
    : RedshiftDataAPIServiceDefaultEpProviderBase(Aws::RedshiftDataAPIService::RedshiftDataAPIServiceEndpointRules::GetRulesBlob(),
                                                  Aws::RedshiftDataAPIService::RedshiftDataAPIServiceEndpointRules::RulesBlobSize) {}

void RedshiftDataAPIServiceBuiltInParameters::SetFromClientConfiguration(const RedshiftDataAPIServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const RedshiftDataAPIServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void RedshiftDataAPIServiceBuiltInParameters::SetFromClientConfiguration(const RedshiftDataAPIServiceClientConfiguration& config,
                                                                         const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const RedshiftDataAPIServiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void RedshiftDataAPIServiceBuiltInParameters::SetServiceSpecificParameters(const RedshiftDataAPIServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace RedshiftDataAPIService
}  // namespace Aws
