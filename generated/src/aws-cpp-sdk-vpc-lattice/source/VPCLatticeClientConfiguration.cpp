/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/VPCLatticeClientConfiguration.h>

namespace Aws {
namespace VPCLattice {

void VPCLatticeClientConfiguration::LoadVPCLatticeSpecificConfig(const Aws::String& inputProfileName) {
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

VPCLatticeClientConfiguration::VPCLatticeClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadVPCLatticeSpecificConfig(this->profileName);
}

VPCLatticeClientConfiguration::VPCLatticeClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadVPCLatticeSpecificConfig(Aws::String(inputProfileName));
}

VPCLatticeClientConfiguration::VPCLatticeClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadVPCLatticeSpecificConfig(this->profileName);
}

VPCLatticeClientConfiguration::VPCLatticeClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadVPCLatticeSpecificConfig(this->profileName);
}

}  // namespace VPCLattice
}  // namespace Aws
