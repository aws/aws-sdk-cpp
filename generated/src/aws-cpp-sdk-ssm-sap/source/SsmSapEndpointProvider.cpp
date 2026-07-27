/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/SsmSapEndpointProvider.h>
#include <aws/ssm-sap/internal/SsmSapEndpointRules.h>

namespace Aws {
namespace SsmSap {
namespace Endpoint {
SsmSapEndpointProvider::SsmSapEndpointProvider()
    : SsmSapDefaultEpProviderBase(Aws::SsmSap::SsmSapEndpointRules::GetRulesBlob(), Aws::SsmSap::SsmSapEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SsmSap
}  // namespace Aws
