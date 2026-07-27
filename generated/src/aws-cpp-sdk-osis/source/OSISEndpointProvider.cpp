/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/OSISEndpointProvider.h>
#include <aws/osis/internal/OSISEndpointRules.h>

namespace Aws {
namespace OSIS {
namespace Endpoint {
OSISEndpointProvider::OSISEndpointProvider()
    : OSISDefaultEpProviderBase(Aws::OSIS::OSISEndpointRules::GetRulesBlob(), Aws::OSIS::OSISEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace OSIS
}  // namespace Aws
