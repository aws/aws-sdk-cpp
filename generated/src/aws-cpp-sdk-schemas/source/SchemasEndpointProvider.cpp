/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/SchemasEndpointProvider.h>
#include <aws/schemas/internal/SchemasEndpointRules.h>

namespace Aws {
#ifndef AWS_SCHEMAS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Schemas::Endpoint::SchemasClientConfiguration,
                                                   Schemas::Endpoint::SchemasBuiltInParameters,
                                                   Schemas::Endpoint::SchemasClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Schemas::Endpoint::SchemasClientConfiguration,
                                                  Schemas::Endpoint::SchemasBuiltInParameters,
                                                  Schemas::Endpoint::SchemasClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Schemas {
namespace Endpoint {
SchemasEndpointProvider::SchemasEndpointProvider()
    : SchemasDefaultEpProviderBase(Aws::Schemas::SchemasEndpointRules::GetRulesBlob(), Aws::Schemas::SchemasEndpointRules::RulesBlobSize) {}

void SchemasBuiltInParameters::SetFromClientConfiguration(const SchemasClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SchemasClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SchemasBuiltInParameters::SetFromClientConfiguration(const SchemasClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SchemasClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SchemasBuiltInParameters::SetServiceSpecificParameters(const SchemasClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Schemas
}  // namespace Aws
