/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/MediaLiveEndpointProvider.h>
#include <aws/medialive/internal/MediaLiveEndpointRules.h>

namespace Aws {
#ifndef AWS_MEDIALIVE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MediaLive::Endpoint::MediaLiveClientConfiguration,
                                                   MediaLive::Endpoint::MediaLiveBuiltInParameters,
                                                   MediaLive::Endpoint::MediaLiveClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MediaLive::Endpoint::MediaLiveClientConfiguration,
                                                  MediaLive::Endpoint::MediaLiveBuiltInParameters,
                                                  MediaLive::Endpoint::MediaLiveClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MediaLive {
namespace Endpoint {
MediaLiveEndpointProvider::MediaLiveEndpointProvider()
    : MediaLiveDefaultEpProviderBase(Aws::MediaLive::MediaLiveEndpointRules::GetRulesBlob(),
                                     Aws::MediaLive::MediaLiveEndpointRules::RulesBlobSize) {}

void MediaLiveBuiltInParameters::SetFromClientConfiguration(const MediaLiveClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MediaLiveClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MediaLiveBuiltInParameters::SetFromClientConfiguration(const MediaLiveClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MediaLiveClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MediaLiveBuiltInParameters::SetServiceSpecificParameters(const MediaLiveClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MediaLive
}  // namespace Aws
