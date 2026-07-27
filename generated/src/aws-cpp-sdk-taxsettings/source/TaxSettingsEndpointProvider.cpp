/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/TaxSettingsEndpointProvider.h>
#include <aws/taxsettings/internal/TaxSettingsEndpointRules.h>

namespace Aws {
namespace TaxSettings {
namespace Endpoint {
TaxSettingsEndpointProvider::TaxSettingsEndpointProvider()
    : TaxSettingsDefaultEpProviderBase(Aws::TaxSettings::TaxSettingsEndpointRules::GetRulesBlob(),
                                       Aws::TaxSettings::TaxSettingsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace TaxSettings
}  // namespace Aws
