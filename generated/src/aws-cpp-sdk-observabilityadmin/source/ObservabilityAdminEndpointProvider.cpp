/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/ObservabilityAdminEndpointProvider.h>
#include <aws/observabilityadmin/internal/ObservabilityAdminEndpointRules.h>

namespace Aws {
namespace ObservabilityAdmin {
namespace Endpoint {
ObservabilityAdminEndpointProvider::ObservabilityAdminEndpointProvider()
    : ObservabilityAdminDefaultEpProviderBase(Aws::ObservabilityAdmin::ObservabilityAdminEndpointRules::GetRulesBlob(),
                                              Aws::ObservabilityAdmin::ObservabilityAdminEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ObservabilityAdmin
}  // namespace Aws
