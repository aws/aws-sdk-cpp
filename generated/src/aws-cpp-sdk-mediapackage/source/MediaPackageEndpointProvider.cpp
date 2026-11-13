/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/MediaPackageEndpointProvider.h>
#include <aws/mediapackage/internal/MediaPackageEndpointRules.h>

namespace Aws {
#ifndef AWS_MEDIAPACKAGE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MediaPackage::Endpoint::MediaPackageClientConfiguration,
                                                   MediaPackage::Endpoint::MediaPackageBuiltInParameters,
                                                   MediaPackage::Endpoint::MediaPackageClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MediaPackage::Endpoint::MediaPackageClientConfiguration,
                                                  MediaPackage::Endpoint::MediaPackageBuiltInParameters,
                                                  MediaPackage::Endpoint::MediaPackageClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MediaPackage {
namespace Endpoint {
MediaPackageEndpointProvider::MediaPackageEndpointProvider()
    : MediaPackageDefaultEpProviderBase(Aws::MediaPackage::MediaPackageEndpointRules::GetRulesBlob(),
                                        Aws::MediaPackage::MediaPackageEndpointRules::RulesBlobSize) {}

void MediaPackageBuiltInParameters::SetFromClientConfiguration(const MediaPackageClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MediaPackageClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MediaPackageBuiltInParameters::SetFromClientConfiguration(const MediaPackageClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MediaPackageClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MediaPackageBuiltInParameters::SetServiceSpecificParameters(const MediaPackageClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MediaPackage
}  // namespace Aws
