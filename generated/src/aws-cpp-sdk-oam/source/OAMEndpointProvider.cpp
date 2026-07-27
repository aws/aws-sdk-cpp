/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/oam/OAMEndpointProvider.h>
#include <aws/oam/internal/OAMEndpointRules.h>

namespace Aws {
namespace OAM {
namespace Endpoint {
OAMEndpointProvider::OAMEndpointProvider()
    : OAMDefaultEpProviderBase(Aws::OAM::OAMEndpointRules::GetRulesBlob(), Aws::OAM::OAMEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace OAM
}  // namespace Aws
