/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/OmicsEndpointProvider.h>
#include <aws/omics/internal/OmicsEndpointRules.h>

namespace Aws {
namespace Omics {
namespace Endpoint {
OmicsEndpointProvider::OmicsEndpointProvider()
    : OmicsDefaultEpProviderBase(Aws::Omics::OmicsEndpointRules::GetRulesBlob(), Aws::Omics::OmicsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Omics
}  // namespace Aws
