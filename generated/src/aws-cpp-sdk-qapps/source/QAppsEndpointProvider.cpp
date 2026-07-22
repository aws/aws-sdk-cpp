/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/QAppsEndpointProvider.h>
#include <aws/qapps/internal/QAppsEndpointRules.h>

namespace Aws {
namespace QApps {
namespace Endpoint {
QAppsEndpointProvider::QAppsEndpointProvider()
    : QAppsDefaultEpProviderBase(Aws::QApps::QAppsEndpointRules::GetRulesBlob(), Aws::QApps::QAppsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace QApps
}  // namespace Aws
