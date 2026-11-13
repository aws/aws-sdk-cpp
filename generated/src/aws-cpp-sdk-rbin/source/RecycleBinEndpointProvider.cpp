/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rbin/RecycleBinEndpointProvider.h>
#include <aws/rbin/internal/RecycleBinEndpointRules.h>

namespace Aws {
#ifndef AWS_RECYCLEBIN_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<RecycleBin::Endpoint::RecycleBinClientConfiguration,
                                                   RecycleBin::Endpoint::RecycleBinBuiltInParameters,
                                                   RecycleBin::Endpoint::RecycleBinClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<RecycleBin::Endpoint::RecycleBinClientConfiguration,
                                                  RecycleBin::Endpoint::RecycleBinBuiltInParameters,
                                                  RecycleBin::Endpoint::RecycleBinClientContextParameters>;
}  // namespace Endpoint
#endif

namespace RecycleBin {
namespace Endpoint {
RecycleBinEndpointProvider::RecycleBinEndpointProvider()
    : RecycleBinDefaultEpProviderBase(Aws::RecycleBin::RecycleBinEndpointRules::GetRulesBlob(),
                                      Aws::RecycleBin::RecycleBinEndpointRules::RulesBlobSize) {}

void RecycleBinBuiltInParameters::SetFromClientConfiguration(const RecycleBinClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const RecycleBinClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void RecycleBinBuiltInParameters::SetFromClientConfiguration(const RecycleBinClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const RecycleBinClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void RecycleBinBuiltInParameters::SetServiceSpecificParameters(const RecycleBinClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace RecycleBin
}  // namespace Aws
