/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supportauthz/SupportAuthZEndpointProvider.h>
#include <aws/supportauthz/internal/SupportAuthZEndpointRules.h>

namespace Aws {
namespace SupportAuthZ {
namespace Endpoint {
SupportAuthZEndpointProvider::SupportAuthZEndpointProvider()
    : SupportAuthZDefaultEpProviderBase(Aws::SupportAuthZ::SupportAuthZEndpointRules::GetRulesBlob(),
                                        Aws::SupportAuthZ::SupportAuthZEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SupportAuthZ
}  // namespace Aws
