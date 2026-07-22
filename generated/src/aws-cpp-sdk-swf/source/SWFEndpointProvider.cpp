/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/SWFEndpointProvider.h>
#include <aws/swf/internal/SWFEndpointRules.h>

namespace Aws {
namespace SWF {
namespace Endpoint {
SWFEndpointProvider::SWFEndpointProvider()
    : SWFDefaultEpProviderBase(Aws::SWF::SWFEndpointRules::GetRulesBlob(), Aws::SWF::SWFEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SWF
}  // namespace Aws
