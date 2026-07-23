/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/XRayEndpointProvider.h>
#include <aws/xray/internal/XRayEndpointRules.h>

namespace Aws {
namespace XRay {
namespace Endpoint {
XRayEndpointProvider::XRayEndpointProvider()
    : XRayDefaultEpProviderBase(Aws::XRay::XRayEndpointRules::GetRulesBlob(), Aws::XRay::XRayEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace XRay
}  // namespace Aws
