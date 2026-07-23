/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/RDSDataServiceEndpointProvider.h>
#include <aws/rds-data/internal/RDSDataServiceEndpointRules.h>

namespace Aws {
namespace RDSDataService {
namespace Endpoint {
RDSDataServiceEndpointProvider::RDSDataServiceEndpointProvider()
    : RDSDataServiceDefaultEpProviderBase(Aws::RDSDataService::RDSDataServiceEndpointRules::GetRulesBlob(),
                                          Aws::RDSDataService::RDSDataServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace RDSDataService
}  // namespace Aws
