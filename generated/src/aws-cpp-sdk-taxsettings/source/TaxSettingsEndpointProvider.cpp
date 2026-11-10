/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/TaxSettingsEndpointProvider.h>
#include <aws/taxsettings/internal/TaxSettingsEndpointRules.h>

namespace Aws {
#ifndef AWS_TAXSETTINGS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<TaxSettings::Endpoint::TaxSettingsClientConfiguration,
                                                   TaxSettings::Endpoint::TaxSettingsBuiltInParameters,
                                                   TaxSettings::Endpoint::TaxSettingsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<TaxSettings::Endpoint::TaxSettingsClientConfiguration,
                                                  TaxSettings::Endpoint::TaxSettingsBuiltInParameters,
                                                  TaxSettings::Endpoint::TaxSettingsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace TaxSettings {
namespace Endpoint {
TaxSettingsEndpointProvider::TaxSettingsEndpointProvider()
    : TaxSettingsDefaultEpProviderBase(Aws::TaxSettings::TaxSettingsEndpointRules::GetRulesBlob(),
                                       Aws::TaxSettings::TaxSettingsEndpointRules::RulesBlobSize) {}

void TaxSettingsBuiltInParameters::SetFromClientConfiguration(const TaxSettingsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const TaxSettingsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void TaxSettingsBuiltInParameters::SetFromClientConfiguration(const TaxSettingsClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const TaxSettingsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void TaxSettingsBuiltInParameters::SetServiceSpecificParameters(const TaxSettingsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace TaxSettings
}  // namespace Aws
