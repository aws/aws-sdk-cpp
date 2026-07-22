/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/uxc/UxcEndpointProvider.h>
#include <aws/uxc/internal/UxcEndpointRules.h>

namespace Aws {
namespace uxc {
namespace Endpoint {
UxcEndpointProvider::UxcEndpointProvider()
    : UxcDefaultEpProviderBase(Aws::uxc::UxcEndpointRules::GetRulesBlob(), Aws::uxc::UxcEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace uxc
}  // namespace Aws
