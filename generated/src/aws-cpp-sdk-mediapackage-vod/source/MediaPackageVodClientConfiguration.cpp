/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/MediaPackageVodClientConfiguration.h>

namespace Aws {
namespace MediaPackageVod {

void MediaPackageVodClientConfiguration::LoadMediaPackageVodSpecificConfig(const Aws::String& inputProfileName) {
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

MediaPackageVodClientConfiguration::MediaPackageVodClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadMediaPackageVodSpecificConfig(this->profileName);
}

MediaPackageVodClientConfiguration::MediaPackageVodClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadMediaPackageVodSpecificConfig(Aws::String(inputProfileName));
}

MediaPackageVodClientConfiguration::MediaPackageVodClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadMediaPackageVodSpecificConfig(this->profileName);
}

MediaPackageVodClientConfiguration::MediaPackageVodClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadMediaPackageVodSpecificConfig(this->profileName);
}

}  // namespace MediaPackageVod
}  // namespace Aws
