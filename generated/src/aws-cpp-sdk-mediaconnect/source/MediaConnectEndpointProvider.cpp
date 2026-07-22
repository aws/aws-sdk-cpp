/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/MediaConnectEndpointProvider.h>
#include <aws/mediaconnect/internal/MediaConnectEndpointRules.h>

namespace Aws {
namespace MediaConnect {
namespace Endpoint {
MediaConnectEndpointProvider::MediaConnectEndpointProvider()
    : MediaConnectDefaultEpProviderBase(Aws::MediaConnect::MediaConnectEndpointRules::GetRulesBlob(),
                                        Aws::MediaConnect::MediaConnectEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MediaConnect
}  // namespace Aws
