/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/ManagedBlockchainClientConfiguration.h>

namespace Aws {
namespace ManagedBlockchain {

void ManagedBlockchainClientConfiguration::LoadManagedBlockchainSpecificConfig(const Aws::String& inputProfileName) {
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

ManagedBlockchainClientConfiguration::ManagedBlockchainClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadManagedBlockchainSpecificConfig(this->profileName);
}

ManagedBlockchainClientConfiguration::ManagedBlockchainClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadManagedBlockchainSpecificConfig(Aws::String(inputProfileName));
}

ManagedBlockchainClientConfiguration::ManagedBlockchainClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                           bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadManagedBlockchainSpecificConfig(this->profileName);
}

ManagedBlockchainClientConfiguration::ManagedBlockchainClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadManagedBlockchainSpecificConfig(this->profileName);
}

}  // namespace ManagedBlockchain
}  // namespace Aws
