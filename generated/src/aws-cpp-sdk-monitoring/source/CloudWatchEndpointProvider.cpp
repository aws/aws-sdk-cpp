/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/CloudWatchEndpointProvider.h>
#include <aws/monitoring/internal/CloudWatchEndpointRules.h>

namespace Aws {
namespace CloudWatch {
namespace Endpoint {
CloudWatchEndpointProvider::CloudWatchEndpointProvider()
    : CloudWatchDefaultEpProviderBase(Aws::CloudWatch::CloudWatchEndpointRules::GetRulesBlob(),
                                      Aws::CloudWatch::CloudWatchEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CloudWatch
}  // namespace Aws
