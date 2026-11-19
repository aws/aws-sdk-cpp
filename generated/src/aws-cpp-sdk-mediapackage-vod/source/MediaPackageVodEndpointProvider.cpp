/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/MediaPackageVodEndpointProvider.h>
#include <aws/mediapackage-vod/internal/MediaPackageVodEndpointRules.h>

namespace Aws {
#ifndef AWS_MEDIAPACKAGEVOD_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MediaPackageVod::Endpoint::MediaPackageVodClientConfiguration,
                                                   MediaPackageVod::Endpoint::MediaPackageVodBuiltInParameters,
                                                   MediaPackageVod::Endpoint::MediaPackageVodClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MediaPackageVod::Endpoint::MediaPackageVodClientConfiguration,
                                                  MediaPackageVod::Endpoint::MediaPackageVodBuiltInParameters,
                                                  MediaPackageVod::Endpoint::MediaPackageVodClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MediaPackageVod {
namespace Endpoint {
MediaPackageVodEndpointProvider::MediaPackageVodEndpointProvider()
    : MediaPackageVodDefaultEpProviderBase(Aws::MediaPackageVod::MediaPackageVodEndpointRules::GetRulesBlob(),
                                           Aws::MediaPackageVod::MediaPackageVodEndpointRules::RulesBlobSize) {}

void MediaPackageVodBuiltInParameters::SetFromClientConfiguration(const MediaPackageVodClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MediaPackageVodClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MediaPackageVodBuiltInParameters::SetFromClientConfiguration(const MediaPackageVodClientConfiguration& config,
                                                                  const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MediaPackageVodClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MediaPackageVodBuiltInParameters::SetServiceSpecificParameters(const MediaPackageVodClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MediaPackageVod
}  // namespace Aws
