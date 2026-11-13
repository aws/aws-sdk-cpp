/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/MediaTailorEndpointProvider.h>
#include <aws/mediatailor/internal/MediaTailorEndpointRules.h>

namespace Aws {
#ifndef AWS_MEDIATAILOR_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MediaTailor::Endpoint::MediaTailorClientConfiguration,
                                                   MediaTailor::Endpoint::MediaTailorBuiltInParameters,
                                                   MediaTailor::Endpoint::MediaTailorClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MediaTailor::Endpoint::MediaTailorClientConfiguration,
                                                  MediaTailor::Endpoint::MediaTailorBuiltInParameters,
                                                  MediaTailor::Endpoint::MediaTailorClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MediaTailor {
namespace Endpoint {
MediaTailorEndpointProvider::MediaTailorEndpointProvider()
    : MediaTailorDefaultEpProviderBase(Aws::MediaTailor::MediaTailorEndpointRules::GetRulesBlob(),
                                       Aws::MediaTailor::MediaTailorEndpointRules::RulesBlobSize) {}

void MediaTailorBuiltInParameters::SetFromClientConfiguration(const MediaTailorClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MediaTailorClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MediaTailorBuiltInParameters::SetFromClientConfiguration(const MediaTailorClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MediaTailorClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MediaTailorBuiltInParameters::SetServiceSpecificParameters(const MediaTailorClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MediaTailor
}  // namespace Aws
