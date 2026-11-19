/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/TranscribeStreamingServiceEndpointProvider.h>
#include <aws/transcribestreaming/internal/TranscribeStreamingServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_TRANSCRIBESTREAMINGSERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<TranscribeStreamingService::Endpoint::TranscribeStreamingServiceClientConfiguration,
                                                   TranscribeStreamingService::Endpoint::TranscribeStreamingServiceBuiltInParameters,
                                                   TranscribeStreamingService::Endpoint::TranscribeStreamingServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<TranscribeStreamingService::Endpoint::TranscribeStreamingServiceClientConfiguration,
                                                  TranscribeStreamingService::Endpoint::TranscribeStreamingServiceBuiltInParameters,
                                                  TranscribeStreamingService::Endpoint::TranscribeStreamingServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace TranscribeStreamingService {
namespace Endpoint {
TranscribeStreamingServiceEndpointProvider::TranscribeStreamingServiceEndpointProvider()
    : TranscribeStreamingServiceDefaultEpProviderBase(
          Aws::TranscribeStreamingService::TranscribeStreamingServiceEndpointRules::GetRulesBlob(),
          Aws::TranscribeStreamingService::TranscribeStreamingServiceEndpointRules::RulesBlobSize) {}

void TranscribeStreamingServiceBuiltInParameters::SetFromClientConfiguration(const TranscribeStreamingServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const TranscribeStreamingServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void TranscribeStreamingServiceBuiltInParameters::SetFromClientConfiguration(const TranscribeStreamingServiceClientConfiguration& config,
                                                                             const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const TranscribeStreamingServiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void TranscribeStreamingServiceBuiltInParameters::SetServiceSpecificParameters(
    const TranscribeStreamingServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace TranscribeStreamingService
}  // namespace Aws
