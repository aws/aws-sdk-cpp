/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/SecurityIREndpointProvider.h>
#include <aws/security-ir/internal/SecurityIREndpointRules.h>

namespace Aws {
#ifndef AWS_SECURITYIR_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SecurityIR::Endpoint::SecurityIRClientConfiguration,
                                                   SecurityIR::Endpoint::SecurityIRBuiltInParameters,
                                                   SecurityIR::Endpoint::SecurityIRClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SecurityIR::Endpoint::SecurityIRClientConfiguration,
                                                  SecurityIR::Endpoint::SecurityIRBuiltInParameters,
                                                  SecurityIR::Endpoint::SecurityIRClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SecurityIR {
namespace Endpoint {
SecurityIREndpointProvider::SecurityIREndpointProvider()
    : SecurityIRDefaultEpProviderBase(Aws::SecurityIR::SecurityIREndpointRules::GetRulesBlob(),
                                      Aws::SecurityIR::SecurityIREndpointRules::RulesBlobSize) {}

void SecurityIRBuiltInParameters::SetFromClientConfiguration(const SecurityIRClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SecurityIRClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SecurityIRBuiltInParameters::SetFromClientConfiguration(const SecurityIRClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SecurityIRClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SecurityIRBuiltInParameters::SetServiceSpecificParameters(const SecurityIRClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace SecurityIR
}  // namespace Aws
