/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nova-act/NovaActEndpointProvider.h>
#include <aws/nova-act/internal/NovaActEndpointRules.h>

namespace Aws {
namespace NovaAct {
namespace Endpoint {
NovaActEndpointProvider::NovaActEndpointProvider()
    : NovaActDefaultEpProviderBase(Aws::NovaAct::NovaActEndpointRules::GetRulesBlob(), Aws::NovaAct::NovaActEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace NovaAct
}  // namespace Aws
