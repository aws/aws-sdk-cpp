/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/TranscribeServiceEndpointProvider.h>
#include <aws/transcribe/internal/TranscribeServiceEndpointRules.h>

namespace Aws {
namespace TranscribeService {
namespace Endpoint {
TranscribeServiceEndpointProvider::TranscribeServiceEndpointProvider()
    : TranscribeServiceDefaultEpProviderBase(Aws::TranscribeService::TranscribeServiceEndpointRules::GetRulesBlob(),
                                             Aws::TranscribeService::TranscribeServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace TranscribeService
}  // namespace Aws
