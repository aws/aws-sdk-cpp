/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/TranscribeServiceEndpointProvider.h>
#include <aws/transcribe/internal/TranscribeServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_TRANSCRIBESERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<TranscribeService::Endpoint::TranscribeServiceClientConfiguration,
                                                   TranscribeService::Endpoint::TranscribeServiceBuiltInParameters,
                                                   TranscribeService::Endpoint::TranscribeServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<TranscribeService::Endpoint::TranscribeServiceClientConfiguration,
                                                  TranscribeService::Endpoint::TranscribeServiceBuiltInParameters,
                                                  TranscribeService::Endpoint::TranscribeServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace TranscribeService {
namespace Endpoint {
TranscribeServiceEndpointProvider::TranscribeServiceEndpointProvider()
    : TranscribeServiceDefaultEpProviderBase(Aws::TranscribeService::TranscribeServiceEndpointRules::GetRulesBlob(),
                                             Aws::TranscribeService::TranscribeServiceEndpointRules::RulesBlobSize) {}

void TranscribeServiceBuiltInParameters::SetFromClientConfiguration(const TranscribeServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const TranscribeServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void TranscribeServiceBuiltInParameters::SetFromClientConfiguration(const TranscribeServiceClientConfiguration& config,
                                                                    const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const TranscribeServiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void TranscribeServiceBuiltInParameters::SetServiceSpecificParameters(const TranscribeServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace TranscribeService
}  // namespace Aws
