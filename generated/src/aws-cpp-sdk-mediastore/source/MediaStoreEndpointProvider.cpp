/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore/MediaStoreEndpointProvider.h>
#include <aws/mediastore/internal/MediaStoreEndpointRules.h>

namespace Aws {
namespace MediaStore {
namespace Endpoint {
MediaStoreEndpointProvider::MediaStoreEndpointProvider()
    : MediaStoreDefaultEpProviderBase(Aws::MediaStore::MediaStoreEndpointRules::GetRulesBlob(),
                                      Aws::MediaStore::MediaStoreEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MediaStore
}  // namespace Aws
