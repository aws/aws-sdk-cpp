/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/SSMIncidentsEndpointProvider.h>
#include <aws/ssm-incidents/internal/SSMIncidentsEndpointRules.h>

namespace Aws {
namespace SSMIncidents {
namespace Endpoint {
SSMIncidentsEndpointProvider::SSMIncidentsEndpointProvider()
    : SSMIncidentsDefaultEpProviderBase(Aws::SSMIncidents::SSMIncidentsEndpointRules::GetRulesBlob(),
                                        Aws::SSMIncidents::SSMIncidentsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SSMIncidents
}  // namespace Aws
