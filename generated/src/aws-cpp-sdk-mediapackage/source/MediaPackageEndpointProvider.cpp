/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/MediaPackageEndpointProvider.h>
#include <aws/mediapackage/internal/MediaPackageEndpointRules.h>

namespace Aws {
namespace MediaPackage {
namespace Endpoint {
MediaPackageEndpointProvider::MediaPackageEndpointProvider()
    : MediaPackageDefaultEpProviderBase(Aws::MediaPackage::MediaPackageEndpointRules::GetRulesBlob(),
                                        Aws::MediaPackage::MediaPackageEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MediaPackage
}  // namespace Aws
