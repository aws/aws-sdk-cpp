/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/Route53RecoveryReadinessClientConfiguration.h>

namespace Aws {
namespace Route53RecoveryReadiness {

void Route53RecoveryReadinessClientConfiguration::LoadRoute53RecoveryReadinessSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

Route53RecoveryReadinessClientConfiguration::Route53RecoveryReadinessClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadRoute53RecoveryReadinessSpecificConfig(this->profileName);
}

Route53RecoveryReadinessClientConfiguration::Route53RecoveryReadinessClientConfiguration(const char* inputProfileName,
                                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadRoute53RecoveryReadinessSpecificConfig(Aws::String(inputProfileName));
}

Route53RecoveryReadinessClientConfiguration::Route53RecoveryReadinessClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadRoute53RecoveryReadinessSpecificConfig(this->profileName);
}

Route53RecoveryReadinessClientConfiguration::Route53RecoveryReadinessClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadRoute53RecoveryReadinessSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const Route53RecoveryReadinessClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace Route53RecoveryReadiness
}  // namespace Aws
