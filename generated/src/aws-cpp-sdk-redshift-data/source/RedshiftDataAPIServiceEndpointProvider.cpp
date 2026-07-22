/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-data/RedshiftDataAPIServiceEndpointProvider.h>
#include <aws/redshift-data/internal/RedshiftDataAPIServiceEndpointRules.h>

namespace Aws {
namespace RedshiftDataAPIService {
namespace Endpoint {
RedshiftDataAPIServiceEndpointProvider::RedshiftDataAPIServiceEndpointProvider()
    : RedshiftDataAPIServiceDefaultEpProviderBase(Aws::RedshiftDataAPIService::RedshiftDataAPIServiceEndpointRules::GetRulesBlob(),
                                                  Aws::RedshiftDataAPIService::RedshiftDataAPIServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace RedshiftDataAPIService
}  // namespace Aws
