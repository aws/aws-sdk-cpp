/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/MediaConnectEndpointProvider.h>
#include <aws/mediaconnect/internal/MediaConnectEndpointRules.h>

namespace Aws {
#ifndef AWS_MEDIACONNECT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MediaConnect::Endpoint::MediaConnectClientConfiguration,
                                                   MediaConnect::Endpoint::MediaConnectBuiltInParameters,
                                                   MediaConnect::Endpoint::MediaConnectClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MediaConnect::Endpoint::MediaConnectClientConfiguration,
                                                  MediaConnect::Endpoint::MediaConnectBuiltInParameters,
                                                  MediaConnect::Endpoint::MediaConnectClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MediaConnect {
namespace Endpoint {
MediaConnectEndpointProvider::MediaConnectEndpointProvider()
    : MediaConnectDefaultEpProviderBase(Aws::MediaConnect::MediaConnectEndpointRules::GetRulesBlob(),
                                        Aws::MediaConnect::MediaConnectEndpointRules::RulesBlobSize) {}

void MediaConnectBuiltInParameters::SetFromClientConfiguration(const MediaConnectClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MediaConnectClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MediaConnectBuiltInParameters::SetFromClientConfiguration(const MediaConnectClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MediaConnectClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MediaConnectBuiltInParameters::SetServiceSpecificParameters(const MediaConnectClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MediaConnect
}  // namespace Aws
