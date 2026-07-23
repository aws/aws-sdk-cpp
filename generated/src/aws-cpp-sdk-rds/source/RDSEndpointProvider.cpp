/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/RDSEndpointProvider.h>
#include <aws/rds/internal/RDSEndpointRules.h>

namespace Aws {
namespace RDS {
namespace Endpoint {
RDSEndpointProvider::RDSEndpointProvider()
    : RDSDefaultEpProviderBase(Aws::RDS::RDSEndpointRules::GetRulesBlob(), Aws::RDS::RDSEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace RDS
}  // namespace Aws
