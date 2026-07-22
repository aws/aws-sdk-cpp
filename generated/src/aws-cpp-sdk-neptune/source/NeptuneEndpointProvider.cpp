/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/NeptuneEndpointProvider.h>
#include <aws/neptune/internal/NeptuneEndpointRules.h>

namespace Aws {
namespace Neptune {
namespace Endpoint {
NeptuneEndpointProvider::NeptuneEndpointProvider()
    : NeptuneDefaultEpProviderBase(Aws::Neptune::NeptuneEndpointRules::GetRulesBlob(), Aws::Neptune::NeptuneEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Neptune
}  // namespace Aws
