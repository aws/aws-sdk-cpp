/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/SSMIncidentsEndpointProvider.h>
#include <aws/ssm-incidents/internal/SSMIncidentsEndpointRules.h>

namespace Aws {
#ifndef AWS_SSMINCIDENTS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SSMIncidents::Endpoint::SSMIncidentsClientConfiguration,
                                                   SSMIncidents::Endpoint::SSMIncidentsBuiltInParameters,
                                                   SSMIncidents::Endpoint::SSMIncidentsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SSMIncidents::Endpoint::SSMIncidentsClientConfiguration,
                                                  SSMIncidents::Endpoint::SSMIncidentsBuiltInParameters,
                                                  SSMIncidents::Endpoint::SSMIncidentsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SSMIncidents {
namespace Endpoint {
SSMIncidentsEndpointProvider::SSMIncidentsEndpointProvider()
    : SSMIncidentsDefaultEpProviderBase(Aws::SSMIncidents::SSMIncidentsEndpointRules::GetRulesBlob(),
                                        Aws::SSMIncidents::SSMIncidentsEndpointRules::RulesBlobSize) {}

void SSMIncidentsBuiltInParameters::SetFromClientConfiguration(const SSMIncidentsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SSMIncidentsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SSMIncidentsBuiltInParameters::SetFromClientConfiguration(const SSMIncidentsClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SSMIncidentsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SSMIncidentsBuiltInParameters::SetServiceSpecificParameters(const SSMIncidentsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SSMIncidents
}  // namespace Aws
