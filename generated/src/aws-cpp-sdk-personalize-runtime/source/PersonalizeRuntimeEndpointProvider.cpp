/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-runtime/PersonalizeRuntimeEndpointProvider.h>
#include <aws/personalize-runtime/internal/PersonalizeRuntimeEndpointRules.h>

namespace Aws {
namespace PersonalizeRuntime {
namespace Endpoint {
PersonalizeRuntimeEndpointProvider::PersonalizeRuntimeEndpointProvider()
    : PersonalizeRuntimeDefaultEpProviderBase(Aws::PersonalizeRuntime::PersonalizeRuntimeEndpointRules::GetRulesBlob(),
                                              Aws::PersonalizeRuntime::PersonalizeRuntimeEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace PersonalizeRuntime
}  // namespace Aws
