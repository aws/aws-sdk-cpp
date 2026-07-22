/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/TranscribeStreamingServiceEndpointProvider.h>
#include <aws/transcribestreaming/internal/TranscribeStreamingServiceEndpointRules.h>

namespace Aws {
namespace TranscribeStreamingService {
namespace Endpoint {
TranscribeStreamingServiceEndpointProvider::TranscribeStreamingServiceEndpointProvider()
    : TranscribeStreamingServiceDefaultEpProviderBase(
          Aws::TranscribeStreamingService::TranscribeStreamingServiceEndpointRules::GetRulesBlob(),
          Aws::TranscribeStreamingService::TranscribeStreamingServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace TranscribeStreamingService
}  // namespace Aws
