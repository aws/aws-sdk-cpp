/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/WorkMailEndpointProvider.h>
#include <aws/workmail/internal/WorkMailEndpointRules.h>

namespace Aws {
namespace WorkMail {
namespace Endpoint {
WorkMailEndpointProvider::WorkMailEndpointProvider()
    : WorkMailDefaultEpProviderBase(Aws::WorkMail::WorkMailEndpointRules::GetRulesBlob(),
                                    Aws::WorkMail::WorkMailEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace WorkMail
}  // namespace Aws
