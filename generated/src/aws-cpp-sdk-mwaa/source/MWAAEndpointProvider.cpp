/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/MWAAEndpointProvider.h>
#include <aws/mwaa/internal/MWAAEndpointRules.h>

namespace Aws {
namespace MWAA {
namespace Endpoint {
MWAAEndpointProvider::MWAAEndpointProvider()
    : MWAADefaultEpProviderBase(Aws::MWAA::MWAAEndpointRules::GetRulesBlob(), Aws::MWAA::MWAAEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MWAA
}  // namespace Aws
