/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/MgnEndpointProvider.h>
#include <aws/mgn/internal/MgnEndpointRules.h>

namespace Aws {
#ifndef AWS_MGN_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<mgn::Endpoint::MgnClientConfiguration, mgn::Endpoint::MgnBuiltInParameters,
                                                   mgn::Endpoint::MgnClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<mgn::Endpoint::MgnClientConfiguration, mgn::Endpoint::MgnBuiltInParameters,
                                                  mgn::Endpoint::MgnClientContextParameters>;
}  // namespace Endpoint
#endif

namespace mgn {
namespace Endpoint {
MgnEndpointProvider::MgnEndpointProvider()
    : MgnDefaultEpProviderBase(Aws::mgn::MgnEndpointRules::GetRulesBlob(), Aws::mgn::MgnEndpointRules::RulesBlobSize) {}

void MgnBuiltInParameters::SetFromClientConfiguration(const MgnClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MgnClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MgnBuiltInParameters::SetFromClientConfiguration(const MgnClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MgnClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MgnBuiltInParameters::SetServiceSpecificParameters(const MgnClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace mgn
}  // namespace Aws
