/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/SQSEndpointProvider.h>
#include <aws/sqs/internal/SQSEndpointRules.h>

namespace Aws {
namespace SQS {
namespace Endpoint {
SQSEndpointProvider::SQSEndpointProvider()
    : SQSDefaultEpProviderBase(Aws::SQS::SQSEndpointRules::GetRulesBlob(), Aws::SQS::SQSEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SQS
}  // namespace Aws
