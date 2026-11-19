/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/TranscribeServiceClientConfiguration.h>

namespace Aws {
namespace TranscribeService {

void TranscribeServiceClientConfiguration::LoadTranscribeServiceSpecificConfig(const Aws::String& inputProfileName) {
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

TranscribeServiceClientConfiguration::TranscribeServiceClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadTranscribeServiceSpecificConfig(this->profileName);
}

TranscribeServiceClientConfiguration::TranscribeServiceClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadTranscribeServiceSpecificConfig(Aws::String(inputProfileName));
}

TranscribeServiceClientConfiguration::TranscribeServiceClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                           bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadTranscribeServiceSpecificConfig(this->profileName);
}

TranscribeServiceClientConfiguration::TranscribeServiceClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadTranscribeServiceSpecificConfig(this->profileName);
}

}  // namespace TranscribeService
}  // namespace Aws
