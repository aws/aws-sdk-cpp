/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementClientConfiguration.h>
#include <smithy/identity/signer/built-in/SigV4aSigningRegionSet.h>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {

void PartnerCentralRevenueMeasurementClientConfiguration::LoadPartnerCentralRevenueMeasurementSpecificConfig(
    const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
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

}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
