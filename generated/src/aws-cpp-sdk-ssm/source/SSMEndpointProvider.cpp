/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/SSMEndpointProvider.h>
#include <aws/ssm/internal/SSMEndpointRules.h>

namespace Aws {
namespace SSM {
namespace Endpoint {
SSMEndpointProvider::SSMEndpointProvider()
    : SSMDefaultEpProviderBase(Aws::SSM::SSMEndpointRules::GetRulesBlob(), Aws::SSM::SSMEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SSM
}  // namespace Aws
