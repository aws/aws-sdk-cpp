/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/MQEndpointProvider.h>
#include <aws/mq/internal/MQEndpointRules.h>

namespace Aws {
namespace MQ {
namespace Endpoint {
MQEndpointProvider::MQEndpointProvider()
    : MQDefaultEpProviderBase(Aws::MQ::MQEndpointRules::GetRulesBlob(), Aws::MQ::MQEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MQ
}  // namespace Aws
