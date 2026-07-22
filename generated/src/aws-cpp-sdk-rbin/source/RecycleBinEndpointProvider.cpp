/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rbin/RecycleBinEndpointProvider.h>
#include <aws/rbin/internal/RecycleBinEndpointRules.h>

namespace Aws {
namespace RecycleBin {
namespace Endpoint {
RecycleBinEndpointProvider::RecycleBinEndpointProvider()
    : RecycleBinDefaultEpProviderBase(Aws::RecycleBin::RecycleBinEndpointRules::GetRulesBlob(),
                                      Aws::RecycleBin::RecycleBinEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace RecycleBin
}  // namespace Aws
