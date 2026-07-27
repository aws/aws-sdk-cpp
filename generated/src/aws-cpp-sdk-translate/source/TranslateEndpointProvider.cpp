/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/TranslateEndpointProvider.h>
#include <aws/translate/internal/TranslateEndpointRules.h>

namespace Aws {
namespace Translate {
namespace Endpoint {
TranslateEndpointProvider::TranslateEndpointProvider()
    : TranslateDefaultEpProviderBase(Aws::Translate::TranslateEndpointRules::GetRulesBlob(),
                                     Aws::Translate::TranslateEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Translate
}  // namespace Aws
