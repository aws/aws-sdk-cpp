/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/SNSEndpointProvider.h>
#include <aws/sns/internal/SNSEndpointRules.h>

namespace Aws {
namespace SNS {
namespace Endpoint {
SNSEndpointProvider::SNSEndpointProvider()
    : SNSDefaultEpProviderBase(Aws::SNS::SNSEndpointRules::GetRulesBlob(), Aws::SNS::SNSEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SNS
}  // namespace Aws
