/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/RDSEndpointProvider.h>
#include <aws/rds/internal/RDSEndpointRules.h>

namespace Aws {
#ifndef AWS_RDS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<RDS::Endpoint::RDSClientConfiguration, RDS::Endpoint::RDSBuiltInParameters,
                                                   RDS::Endpoint::RDSClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<RDS::Endpoint::RDSClientConfiguration, RDS::Endpoint::RDSBuiltInParameters,
                                                  RDS::Endpoint::RDSClientContextParameters>;
}  // namespace Endpoint
#endif

namespace RDS {
namespace Endpoint {
RDSEndpointProvider::RDSEndpointProvider()
    : RDSDefaultEpProviderBase(Aws::RDS::RDSEndpointRules::GetRulesBlob(), Aws::RDS::RDSEndpointRules::RulesBlobSize) {}

void RDSBuiltInParameters::SetFromClientConfiguration(const RDSClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const RDSClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void RDSBuiltInParameters::SetFromClientConfiguration(const RDSClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const RDSClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void RDSBuiltInParameters::SetServiceSpecificParameters(const RDSClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace RDS
}  // namespace Aws
