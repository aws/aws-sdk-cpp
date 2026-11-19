/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/OrganizationsEndpointProvider.h>
#include <aws/organizations/internal/OrganizationsEndpointRules.h>

namespace Aws {
#ifndef AWS_ORGANIZATIONS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Organizations::Endpoint::OrganizationsClientConfiguration,
                                                   Organizations::Endpoint::OrganizationsBuiltInParameters,
                                                   Organizations::Endpoint::OrganizationsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Organizations::Endpoint::OrganizationsClientConfiguration,
                                                  Organizations::Endpoint::OrganizationsBuiltInParameters,
                                                  Organizations::Endpoint::OrganizationsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Organizations {
namespace Endpoint {
OrganizationsEndpointProvider::OrganizationsEndpointProvider()
    : OrganizationsDefaultEpProviderBase(Aws::Organizations::OrganizationsEndpointRules::GetRulesBlob(),
                                         Aws::Organizations::OrganizationsEndpointRules::RulesBlobSize) {}

void OrganizationsBuiltInParameters::SetFromClientConfiguration(const OrganizationsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const OrganizationsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void OrganizationsBuiltInParameters::SetFromClientConfiguration(const OrganizationsClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const OrganizationsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void OrganizationsBuiltInParameters::SetServiceSpecificParameters(const OrganizationsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Organizations
}  // namespace Aws
