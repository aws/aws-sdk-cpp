/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pricing-plan-manager/PricingPlanManagerClientConfiguration.h>

namespace Aws {
namespace PricingPlanManager {

void PricingPlanManagerClientConfiguration::LoadPricingPlanManagerSpecificConfig(const Aws::String& inputProfileName) {
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

PricingPlanManagerClientConfiguration::PricingPlanManagerClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadPricingPlanManagerSpecificConfig(this->profileName);
}

PricingPlanManagerClientConfiguration::PricingPlanManagerClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadPricingPlanManagerSpecificConfig(Aws::String(inputProfileName));
}

PricingPlanManagerClientConfiguration::PricingPlanManagerClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadPricingPlanManagerSpecificConfig(this->profileName);
}

PricingPlanManagerClientConfiguration::PricingPlanManagerClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadPricingPlanManagerSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const PricingPlanManagerClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace PricingPlanManager
}  // namespace Aws
