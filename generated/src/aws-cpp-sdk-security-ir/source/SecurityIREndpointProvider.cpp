/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/SecurityIREndpointProvider.h>
#include <aws/security-ir/internal/SecurityIREndpointRules.h>

namespace Aws {
namespace SecurityIR {
namespace Endpoint {
SecurityIREndpointProvider::SecurityIREndpointProvider()
    : SecurityIRDefaultEpProviderBase(Aws::SecurityIR::SecurityIREndpointRules::GetRulesBlob(),
                                      Aws::SecurityIR::SecurityIREndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SecurityIR
}  // namespace Aws
