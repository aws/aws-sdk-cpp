/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigClientConfiguration.h>

namespace Aws {
namespace Route53RecoveryControlConfig {

void Route53RecoveryControlConfigClientConfiguration::LoadRoute53RecoveryControlConfigSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

Route53RecoveryControlConfigClientConfiguration::Route53RecoveryControlConfigClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadRoute53RecoveryControlConfigSpecificConfig(this->profileName);
}

Route53RecoveryControlConfigClientConfiguration::Route53RecoveryControlConfigClientConfiguration(const char* inputProfileName,
                                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadRoute53RecoveryControlConfigSpecificConfig(Aws::String(inputProfileName));
}

Route53RecoveryControlConfigClientConfiguration::Route53RecoveryControlConfigClientConfiguration(bool useSmartDefaults,
                                                                                                 const char* defaultMode,
                                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadRoute53RecoveryControlConfigSpecificConfig(this->profileName);
}

Route53RecoveryControlConfigClientConfiguration::Route53RecoveryControlConfigClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadRoute53RecoveryControlConfigSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const Route53RecoveryControlConfigClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace Route53RecoveryControlConfig
}  // namespace Aws
