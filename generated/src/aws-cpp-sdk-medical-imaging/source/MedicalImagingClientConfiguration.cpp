/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/MedicalImagingClientConfiguration.h>

namespace Aws {
namespace MedicalImaging {

void MedicalImagingClientConfiguration::LoadMedicalImagingSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  useDualStack = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
                     "AWS_USE_DUALSTACK_ENDPOINT", this->profileName, "use_dualstack_endpoint", {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

MedicalImagingClientConfiguration::MedicalImagingClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadMedicalImagingSpecificConfig(this->profileName);
}

MedicalImagingClientConfiguration::MedicalImagingClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadMedicalImagingSpecificConfig(Aws::String(inputProfileName));
}

MedicalImagingClientConfiguration::MedicalImagingClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadMedicalImagingSpecificConfig(this->profileName);
}

MedicalImagingClientConfiguration::MedicalImagingClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadMedicalImagingSpecificConfig(this->profileName);
}

}  // namespace MedicalImaging
}  // namespace Aws
