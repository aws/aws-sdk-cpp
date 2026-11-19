/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/MediaConvertEndpointProvider.h>
#include <aws/mediaconvert/internal/MediaConvertEndpointRules.h>

namespace Aws {
#ifndef AWS_MEDIACONVERT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MediaConvert::Endpoint::MediaConvertClientConfiguration,
                                                   MediaConvert::Endpoint::MediaConvertBuiltInParameters,
                                                   MediaConvert::Endpoint::MediaConvertClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MediaConvert::Endpoint::MediaConvertClientConfiguration,
                                                  MediaConvert::Endpoint::MediaConvertBuiltInParameters,
                                                  MediaConvert::Endpoint::MediaConvertClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MediaConvert {
namespace Endpoint {
MediaConvertEndpointProvider::MediaConvertEndpointProvider()
    : MediaConvertDefaultEpProviderBase(Aws::MediaConvert::MediaConvertEndpointRules::GetRulesBlob(),
                                        Aws::MediaConvert::MediaConvertEndpointRules::RulesBlobSize) {}

void MediaConvertBuiltInParameters::SetFromClientConfiguration(const MediaConvertClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MediaConvertClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MediaConvertBuiltInParameters::SetFromClientConfiguration(const MediaConvertClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MediaConvertClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MediaConvertBuiltInParameters::SetServiceSpecificParameters(const MediaConvertClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MediaConvert
}  // namespace Aws
