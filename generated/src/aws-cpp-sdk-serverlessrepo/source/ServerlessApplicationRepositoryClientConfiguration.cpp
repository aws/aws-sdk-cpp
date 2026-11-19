/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/ServerlessApplicationRepositoryClientConfiguration.h>

namespace Aws {
namespace ServerlessApplicationRepository {

void ServerlessApplicationRepositoryClientConfiguration::LoadServerlessApplicationRepositorySpecificConfig(
    const Aws::String& inputProfileName) {
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

ServerlessApplicationRepositoryClientConfiguration::ServerlessApplicationRepositoryClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadServerlessApplicationRepositorySpecificConfig(this->profileName);
}

ServerlessApplicationRepositoryClientConfiguration::ServerlessApplicationRepositoryClientConfiguration(const char* inputProfileName,
                                                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadServerlessApplicationRepositorySpecificConfig(Aws::String(inputProfileName));
}

ServerlessApplicationRepositoryClientConfiguration::ServerlessApplicationRepositoryClientConfiguration(bool useSmartDefaults,
                                                                                                       const char* defaultMode,
                                                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadServerlessApplicationRepositorySpecificConfig(this->profileName);
}

ServerlessApplicationRepositoryClientConfiguration::ServerlessApplicationRepositoryClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadServerlessApplicationRepositorySpecificConfig(this->profileName);
}

}  // namespace ServerlessApplicationRepository
}  // namespace Aws
