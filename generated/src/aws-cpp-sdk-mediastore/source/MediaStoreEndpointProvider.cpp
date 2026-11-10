/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore/MediaStoreEndpointProvider.h>
#include <aws/mediastore/internal/MediaStoreEndpointRules.h>

namespace Aws {
#ifndef AWS_MEDIASTORE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MediaStore::Endpoint::MediaStoreClientConfiguration,
                                                   MediaStore::Endpoint::MediaStoreBuiltInParameters,
                                                   MediaStore::Endpoint::MediaStoreClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MediaStore::Endpoint::MediaStoreClientConfiguration,
                                                  MediaStore::Endpoint::MediaStoreBuiltInParameters,
                                                  MediaStore::Endpoint::MediaStoreClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MediaStore {
namespace Endpoint {
MediaStoreEndpointProvider::MediaStoreEndpointProvider()
    : MediaStoreDefaultEpProviderBase(Aws::MediaStore::MediaStoreEndpointRules::GetRulesBlob(),
                                      Aws::MediaStore::MediaStoreEndpointRules::RulesBlobSize) {}

void MediaStoreBuiltInParameters::SetFromClientConfiguration(const MediaStoreClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MediaStoreClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MediaStoreBuiltInParameters::SetFromClientConfiguration(const MediaStoreClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MediaStoreClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MediaStoreBuiltInParameters::SetServiceSpecificParameters(const MediaStoreClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MediaStore
}  // namespace Aws
