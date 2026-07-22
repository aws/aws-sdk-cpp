/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/RepostspaceEndpointProvider.h>
#include <aws/repostspace/internal/RepostspaceEndpointRules.h>

namespace Aws {
namespace repostspace {
namespace Endpoint {
RepostspaceEndpointProvider::RepostspaceEndpointProvider()
    : RepostspaceDefaultEpProviderBase(Aws::repostspace::RepostspaceEndpointRules::GetRulesBlob(),
                                       Aws::repostspace::RepostspaceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace repostspace
}  // namespace Aws
