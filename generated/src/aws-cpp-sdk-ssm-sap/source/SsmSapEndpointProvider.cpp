/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/SsmSapEndpointProvider.h>
#include <aws/ssm-sap/internal/SsmSapEndpointRules.h>

namespace Aws {
#ifndef AWS_SSMSAP_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SsmSap::Endpoint::SsmSapClientConfiguration, SsmSap::Endpoint::SsmSapBuiltInParameters,
                                                   SsmSap::Endpoint::SsmSapClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SsmSap::Endpoint::SsmSapClientConfiguration, SsmSap::Endpoint::SsmSapBuiltInParameters,
                                                  SsmSap::Endpoint::SsmSapClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SsmSap {
namespace Endpoint {
SsmSapEndpointProvider::SsmSapEndpointProvider()
    : SsmSapDefaultEpProviderBase(Aws::SsmSap::SsmSapEndpointRules::GetRulesBlob(), Aws::SsmSap::SsmSapEndpointRules::RulesBlobSize) {}

void SsmSapBuiltInParameters::SetFromClientConfiguration(const SsmSapClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SsmSapClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SsmSapBuiltInParameters::SetFromClientConfiguration(const SsmSapClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SsmSapClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SsmSapBuiltInParameters::SetServiceSpecificParameters(const SsmSapClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SsmSap
}  // namespace Aws
