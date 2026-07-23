/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/SSMQuickSetupEndpointProvider.h>
#include <aws/ssm-quicksetup/internal/SSMQuickSetupEndpointRules.h>

namespace Aws {
namespace SSMQuickSetup {
namespace Endpoint {
SSMQuickSetupEndpointProvider::SSMQuickSetupEndpointProvider()
    : SSMQuickSetupDefaultEpProviderBase(Aws::SSMQuickSetup::SSMQuickSetupEndpointRules::GetRulesBlob(),
                                         Aws::SSMQuickSetup::SSMQuickSetupEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SSMQuickSetup
}  // namespace Aws
