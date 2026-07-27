/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/MediaTailorEndpointProvider.h>
#include <aws/mediatailor/internal/MediaTailorEndpointRules.h>

namespace Aws {
namespace MediaTailor {
namespace Endpoint {
MediaTailorEndpointProvider::MediaTailorEndpointProvider()
    : MediaTailorDefaultEpProviderBase(Aws::MediaTailor::MediaTailorEndpointRules::GetRulesBlob(),
                                       Aws::MediaTailor::MediaTailorEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MediaTailor
}  // namespace Aws
