/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/Mediapackagev2EndpointProvider.h>
#include <aws/mediapackagev2/internal/Mediapackagev2EndpointRules.h>

namespace Aws {
namespace mediapackagev2 {
namespace Endpoint {
Mediapackagev2EndpointProvider::Mediapackagev2EndpointProvider()
    : Mediapackagev2DefaultEpProviderBase(Aws::mediapackagev2::Mediapackagev2EndpointRules::GetRulesBlob(),
                                          Aws::mediapackagev2::Mediapackagev2EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace mediapackagev2
}  // namespace Aws
