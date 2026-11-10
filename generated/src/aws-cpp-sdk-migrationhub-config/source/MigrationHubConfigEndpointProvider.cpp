/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhub-config/MigrationHubConfigEndpointProvider.h>
#include <aws/migrationhub-config/internal/MigrationHubConfigEndpointRules.h>

namespace Aws {
#ifndef AWS_MIGRATIONHUBCONFIG_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MigrationHubConfig::Endpoint::MigrationHubConfigClientConfiguration,
                                                   MigrationHubConfig::Endpoint::MigrationHubConfigBuiltInParameters,
                                                   MigrationHubConfig::Endpoint::MigrationHubConfigClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MigrationHubConfig::Endpoint::MigrationHubConfigClientConfiguration,
                                                  MigrationHubConfig::Endpoint::MigrationHubConfigBuiltInParameters,
                                                  MigrationHubConfig::Endpoint::MigrationHubConfigClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MigrationHubConfig {
namespace Endpoint {
MigrationHubConfigEndpointProvider::MigrationHubConfigEndpointProvider()
    : MigrationHubConfigDefaultEpProviderBase(Aws::MigrationHubConfig::MigrationHubConfigEndpointRules::GetRulesBlob(),
                                              Aws::MigrationHubConfig::MigrationHubConfigEndpointRules::RulesBlobSize) {}

void MigrationHubConfigBuiltInParameters::SetFromClientConfiguration(const MigrationHubConfigClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MigrationHubConfigClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MigrationHubConfigBuiltInParameters::SetFromClientConfiguration(const MigrationHubConfigClientConfiguration& config,
                                                                     const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MigrationHubConfigClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MigrationHubConfigBuiltInParameters::SetServiceSpecificParameters(const MigrationHubConfigClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MigrationHubConfig
}  // namespace Aws
