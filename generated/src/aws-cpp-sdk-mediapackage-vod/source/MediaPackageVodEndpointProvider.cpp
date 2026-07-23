/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/MediaPackageVodEndpointProvider.h>
#include <aws/mediapackage-vod/internal/MediaPackageVodEndpointRules.h>

namespace Aws {
namespace MediaPackageVod {
namespace Endpoint {
MediaPackageVodEndpointProvider::MediaPackageVodEndpointProvider()
    : MediaPackageVodDefaultEpProviderBase(Aws::MediaPackageVod::MediaPackageVodEndpointRules::GetRulesBlob(),
                                           Aws::MediaPackageVod::MediaPackageVodEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MediaPackageVod
}  // namespace Aws
