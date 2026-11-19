/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/OdbEndpointProvider.h>
#include <aws/odb/internal/OdbEndpointRules.h>

namespace Aws {
#ifndef AWS_ODB_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<odb::Endpoint::OdbClientConfiguration, odb::Endpoint::OdbBuiltInParameters,
                                                   odb::Endpoint::OdbClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<odb::Endpoint::OdbClientConfiguration, odb::Endpoint::OdbBuiltInParameters,
                                                  odb::Endpoint::OdbClientContextParameters>;
}  // namespace Endpoint
#endif

namespace odb {
namespace Endpoint {
OdbEndpointProvider::OdbEndpointProvider()
    : OdbDefaultEpProviderBase(Aws::odb::OdbEndpointRules::GetRulesBlob(), Aws::odb::OdbEndpointRules::RulesBlobSize) {}

void OdbBuiltInParameters::SetFromClientConfiguration(const OdbClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const OdbClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void OdbBuiltInParameters::SetFromClientConfiguration(const OdbClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const OdbClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void OdbBuiltInParameters::SetServiceSpecificParameters(const OdbClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace odb
}  // namespace Aws
