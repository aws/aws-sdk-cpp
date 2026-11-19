/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemakerjobruntime/SagemakerJobRuntimeEndpointProvider.h>
#include <aws/sagemakerjobruntime/internal/SagemakerJobRuntimeEndpointRules.h>

namespace Aws {
#ifndef AWS_SAGEMAKERJOBRUNTIME_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SagemakerJobRuntime::Endpoint::SagemakerJobRuntimeClientConfiguration,
                                                   SagemakerJobRuntime::Endpoint::SagemakerJobRuntimeBuiltInParameters,
                                                   SagemakerJobRuntime::Endpoint::SagemakerJobRuntimeClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SagemakerJobRuntime::Endpoint::SagemakerJobRuntimeClientConfiguration,
                                                  SagemakerJobRuntime::Endpoint::SagemakerJobRuntimeBuiltInParameters,
                                                  SagemakerJobRuntime::Endpoint::SagemakerJobRuntimeClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SagemakerJobRuntime {
namespace Endpoint {
SagemakerJobRuntimeEndpointProvider::SagemakerJobRuntimeEndpointProvider()
    : SagemakerJobRuntimeDefaultEpProviderBase(Aws::SagemakerJobRuntime::SagemakerJobRuntimeEndpointRules::GetRulesBlob(),
                                               Aws::SagemakerJobRuntime::SagemakerJobRuntimeEndpointRules::RulesBlobSize) {}

void SagemakerJobRuntimeBuiltInParameters::SetFromClientConfiguration(const SagemakerJobRuntimeClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SagemakerJobRuntimeClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SagemakerJobRuntimeBuiltInParameters::SetFromClientConfiguration(const SagemakerJobRuntimeClientConfiguration& config,
                                                                      const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SagemakerJobRuntimeClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SagemakerJobRuntimeBuiltInParameters::SetServiceSpecificParameters(const SagemakerJobRuntimeClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace SagemakerJobRuntime
}  // namespace Aws
