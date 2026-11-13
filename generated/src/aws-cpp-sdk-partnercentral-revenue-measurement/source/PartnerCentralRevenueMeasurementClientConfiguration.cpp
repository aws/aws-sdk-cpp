/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementClientConfiguration.h>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {

void PartnerCentralRevenueMeasurementClientConfiguration::LoadPartnerCentralRevenueMeasurementSpecificConfig(
    const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  sigV4aSigningRegionSet = Aws::Client::LoadSigV4aSigningRegionSetFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

PartnerCentralRevenueMeasurementClientConfiguration::PartnerCentralRevenueMeasurementClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadPartnerCentralRevenueMeasurementSpecificConfig(this->profileName);
}

PartnerCentralRevenueMeasurementClientConfiguration::PartnerCentralRevenueMeasurementClientConfiguration(const char* inputProfileName,
                                                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadPartnerCentralRevenueMeasurementSpecificConfig(Aws::String(inputProfileName));
}

PartnerCentralRevenueMeasurementClientConfiguration::PartnerCentralRevenueMeasurementClientConfiguration(bool useSmartDefaults,
                                                                                                         const char* defaultMode,
                                                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadPartnerCentralRevenueMeasurementSpecificConfig(this->profileName);
}

PartnerCentralRevenueMeasurementClientConfiguration::PartnerCentralRevenueMeasurementClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadPartnerCentralRevenueMeasurementSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const PartnerCentralRevenueMeasurementClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  options.sigV4aSigningRegionSet = config.sigV4aSigningRegionSet;
  return options;
}

}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
