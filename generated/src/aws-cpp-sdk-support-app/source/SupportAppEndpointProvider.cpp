/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support-app/SupportAppEndpointProvider.h>
#include <aws/support-app/internal/SupportAppEndpointRules.h>

namespace Aws {
namespace SupportApp {
namespace Endpoint {
SupportAppEndpointProvider::SupportAppEndpointProvider()
    : SupportAppDefaultEpProviderBase(Aws::SupportApp::SupportAppEndpointRules::GetRulesBlob(),
                                      Aws::SupportApp::SupportAppEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SupportApp
}  // namespace Aws
