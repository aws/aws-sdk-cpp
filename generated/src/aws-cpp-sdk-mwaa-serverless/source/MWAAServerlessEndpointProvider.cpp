/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa-serverless/MWAAServerlessEndpointProvider.h>
#include <aws/mwaa-serverless/internal/MWAAServerlessEndpointRules.h>

namespace Aws {
namespace MWAAServerless {
namespace Endpoint {
MWAAServerlessEndpointProvider::MWAAServerlessEndpointProvider()
    : MWAAServerlessDefaultEpProviderBase(Aws::MWAAServerless::MWAAServerlessEndpointRules::GetRulesBlob(),
                                          Aws::MWAAServerless::MWAAServerlessEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MWAAServerless
}  // namespace Aws
