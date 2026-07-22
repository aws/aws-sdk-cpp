/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/ServiceQuotasEndpointProvider.h>
#include <aws/service-quotas/internal/ServiceQuotasEndpointRules.h>

namespace Aws {
namespace ServiceQuotas {
namespace Endpoint {
ServiceQuotasEndpointProvider::ServiceQuotasEndpointProvider()
    : ServiceQuotasDefaultEpProviderBase(Aws::ServiceQuotas::ServiceQuotasEndpointRules::GetRulesBlob(),
                                         Aws::ServiceQuotas::ServiceQuotasEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ServiceQuotas
}  // namespace Aws
