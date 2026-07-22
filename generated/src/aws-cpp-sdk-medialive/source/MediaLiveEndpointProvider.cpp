/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/MediaLiveEndpointProvider.h>
#include <aws/medialive/internal/MediaLiveEndpointRules.h>

namespace Aws {
namespace MediaLive {
namespace Endpoint {
MediaLiveEndpointProvider::MediaLiveEndpointProvider()
    : MediaLiveDefaultEpProviderBase(Aws::MediaLive::MediaLiveEndpointRules::GetRulesBlob(),
                                     Aws::MediaLive::MediaLiveEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MediaLive
}  // namespace Aws
