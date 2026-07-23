/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/NeptunedataEndpointProvider.h>
#include <aws/neptunedata/internal/NeptunedataEndpointRules.h>

namespace Aws {
namespace neptunedata {
namespace Endpoint {
NeptunedataEndpointProvider::NeptunedataEndpointProvider()
    : NeptunedataDefaultEpProviderBase(Aws::neptunedata::NeptunedataEndpointRules::GetRulesBlob(),
                                       Aws::neptunedata::NeptunedataEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace neptunedata
}  // namespace Aws
