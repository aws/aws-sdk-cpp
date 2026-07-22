/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/OpenSearchServerlessEndpointProvider.h>
#include <aws/opensearchserverless/internal/OpenSearchServerlessEndpointRules.h>

namespace Aws {
namespace OpenSearchServerless {
namespace Endpoint {
OpenSearchServerlessEndpointProvider::OpenSearchServerlessEndpointProvider()
    : OpenSearchServerlessDefaultEpProviderBase(Aws::OpenSearchServerless::OpenSearchServerlessEndpointRules::GetRulesBlob(),
                                                Aws::OpenSearchServerless::OpenSearchServerlessEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace OpenSearchServerless
}  // namespace Aws
