/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/MTurkClientConfiguration.h>

namespace Aws {
namespace MTurk {

void MTurkClientConfiguration::LoadMTurkSpecificConfig(const Aws::String& inputProfileName) {
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

MTurkClientConfiguration::MTurkClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadMTurkSpecificConfig(this->profileName);
}

MTurkClientConfiguration::MTurkClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadMTurkSpecificConfig(Aws::String(inputProfileName));
}

MTurkClientConfiguration::MTurkClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadMTurkSpecificConfig(this->profileName);
}

MTurkClientConfiguration::MTurkClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadMTurkSpecificConfig(this->profileName);
}

}  // namespace MTurk
}  // namespace Aws
