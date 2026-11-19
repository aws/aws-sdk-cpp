/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sts/STSEndpointProvider.h>
#include <aws/sts/internal/STSEndpointRules.h>

namespace Aws {
#ifndef AWS_STS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<STS::Endpoint::STSClientConfiguration, STS::Endpoint::STSBuiltInParameters,
                                                   STS::Endpoint::STSClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<STS::Endpoint::STSClientConfiguration, STS::Endpoint::STSBuiltInParameters,
                                                  STS::Endpoint::STSClientContextParameters>;
}  // namespace Endpoint
#endif

namespace STS {
namespace Endpoint {
STSEndpointProvider::STSEndpointProvider()
    : STSDefaultEpProviderBase(Aws::STS::STSEndpointRules::GetRulesBlob(), Aws::STS::STSEndpointRules::RulesBlobSize) {}

void STSBuiltInParameters::SetFromClientConfiguration(const STSClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const STSClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void STSBuiltInParameters::SetFromClientConfiguration(const STSClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const STSClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void STSBuiltInParameters::SetServiceSpecificParameters(const STSClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace STS
}  // namespace Aws
