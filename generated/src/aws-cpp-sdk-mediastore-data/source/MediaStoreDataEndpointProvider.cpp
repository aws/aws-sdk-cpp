/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore-data/MediaStoreDataEndpointProvider.h>
#include <aws/mediastore-data/internal/MediaStoreDataEndpointRules.h>

namespace Aws {
#ifndef AWS_MEDIASTOREDATA_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MediaStoreData::Endpoint::MediaStoreDataClientConfiguration,
                                                   MediaStoreData::Endpoint::MediaStoreDataBuiltInParameters,
                                                   MediaStoreData::Endpoint::MediaStoreDataClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MediaStoreData::Endpoint::MediaStoreDataClientConfiguration,
                                                  MediaStoreData::Endpoint::MediaStoreDataBuiltInParameters,
                                                  MediaStoreData::Endpoint::MediaStoreDataClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MediaStoreData {
namespace Endpoint {
MediaStoreDataEndpointProvider::MediaStoreDataEndpointProvider()
    : MediaStoreDataDefaultEpProviderBase(Aws::MediaStoreData::MediaStoreDataEndpointRules::GetRulesBlob(),
                                          Aws::MediaStoreData::MediaStoreDataEndpointRules::RulesBlobSize) {}

void MediaStoreDataBuiltInParameters::SetFromClientConfiguration(const MediaStoreDataClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MediaStoreDataClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MediaStoreDataBuiltInParameters::SetFromClientConfiguration(const MediaStoreDataClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MediaStoreDataClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MediaStoreDataBuiltInParameters::SetServiceSpecificParameters(const MediaStoreDataClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MediaStoreData
}  // namespace Aws
