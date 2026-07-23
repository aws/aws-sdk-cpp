/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/TnbEndpointProvider.h>
#include <aws/tnb/internal/TnbEndpointRules.h>

namespace Aws {
namespace tnb {
namespace Endpoint {
TnbEndpointProvider::TnbEndpointProvider()
    : TnbDefaultEpProviderBase(Aws::tnb::TnbEndpointRules::GetRulesBlob(), Aws::tnb::TnbEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace tnb
}  // namespace Aws
