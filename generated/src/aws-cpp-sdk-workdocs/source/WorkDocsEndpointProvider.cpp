/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/WorkDocsEndpointProvider.h>
#include <aws/workdocs/internal/WorkDocsEndpointRules.h>

namespace Aws {
namespace WorkDocs {
namespace Endpoint {
WorkDocsEndpointProvider::WorkDocsEndpointProvider()
    : WorkDocsDefaultEpProviderBase(Aws::WorkDocs::WorkDocsEndpointRules::GetRulesBlob(),
                                    Aws::WorkDocs::WorkDocsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace WorkDocs
}  // namespace Aws
