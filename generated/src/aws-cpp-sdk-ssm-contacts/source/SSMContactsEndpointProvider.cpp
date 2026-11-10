/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/SSMContactsEndpointProvider.h>
#include <aws/ssm-contacts/internal/SSMContactsEndpointRules.h>

namespace Aws {
#ifndef AWS_SSMCONTACTS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SSMContacts::Endpoint::SSMContactsClientConfiguration,
                                                   SSMContacts::Endpoint::SSMContactsBuiltInParameters,
                                                   SSMContacts::Endpoint::SSMContactsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SSMContacts::Endpoint::SSMContactsClientConfiguration,
                                                  SSMContacts::Endpoint::SSMContactsBuiltInParameters,
                                                  SSMContacts::Endpoint::SSMContactsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SSMContacts {
namespace Endpoint {
SSMContactsEndpointProvider::SSMContactsEndpointProvider()
    : SSMContactsDefaultEpProviderBase(Aws::SSMContacts::SSMContactsEndpointRules::GetRulesBlob(),
                                       Aws::SSMContacts::SSMContactsEndpointRules::RulesBlobSize) {}

void SSMContactsBuiltInParameters::SetFromClientConfiguration(const SSMContactsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SSMContactsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SSMContactsBuiltInParameters::SetFromClientConfiguration(const SSMContactsClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SSMContactsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SSMContactsBuiltInParameters::SetServiceSpecificParameters(const SSMContactsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SSMContacts
}  // namespace Aws
