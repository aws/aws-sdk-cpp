/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/PCSEndpointProvider.h>
#include <aws/pcs/internal/PCSEndpointRules.h>

namespace Aws {
namespace PCS {
namespace Endpoint {
PCSEndpointProvider::PCSEndpointProvider()
    : PCSDefaultEpProviderBase(Aws::PCS::PCSEndpointRules::GetRulesBlob(), Aws::PCS::PCSEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace PCS
}  // namespace Aws
