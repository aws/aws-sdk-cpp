/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore-data/MediaStoreDataEndpointProvider.h>
#include <aws/mediastore-data/internal/MediaStoreDataEndpointRules.h>

namespace Aws {
namespace MediaStoreData {
namespace Endpoint {
MediaStoreDataEndpointProvider::MediaStoreDataEndpointProvider()
    : MediaStoreDataDefaultEpProviderBase(Aws::MediaStoreData::MediaStoreDataEndpointRules::GetRulesBlob(),
                                          Aws::MediaStoreData::MediaStoreDataEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MediaStoreData
}  // namespace Aws
