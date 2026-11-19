/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-oidc/SSOOIDCClientConfiguration.h>

namespace Aws {
namespace SSOOIDC {

void SSOOIDCClientConfiguration::LoadSSOOIDCSpecificConfig(const Aws::String& inputProfileName) {
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

SSOOIDCClientConfiguration::SSOOIDCClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadSSOOIDCSpecificConfig(this->profileName);
}

SSOOIDCClientConfiguration::SSOOIDCClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadSSOOIDCSpecificConfig(Aws::String(inputProfileName));
}

SSOOIDCClientConfiguration::SSOOIDCClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadSSOOIDCSpecificConfig(this->profileName);
}

SSOOIDCClientConfiguration::SSOOIDCClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadSSOOIDCSpecificConfig(this->profileName);
}

}  // namespace SSOOIDC
}  // namespace Aws
