/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/WorkMailEndpointProvider.h>
#include <aws/workmail/internal/WorkMailEndpointRules.h>

namespace Aws {
#ifndef AWS_WORKMAIL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<WorkMail::Endpoint::WorkMailClientConfiguration,
                                                   WorkMail::Endpoint::WorkMailBuiltInParameters,
                                                   WorkMail::Endpoint::WorkMailClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<WorkMail::Endpoint::WorkMailClientConfiguration,
                                                  WorkMail::Endpoint::WorkMailBuiltInParameters,
                                                  WorkMail::Endpoint::WorkMailClientContextParameters>;
}  // namespace Endpoint
#endif

namespace WorkMail {
namespace Endpoint {
WorkMailEndpointProvider::WorkMailEndpointProvider()
    : WorkMailDefaultEpProviderBase(Aws::WorkMail::WorkMailEndpointRules::GetRulesBlob(),
                                    Aws::WorkMail::WorkMailEndpointRules::RulesBlobSize) {}

void WorkMailBuiltInParameters::SetFromClientConfiguration(const WorkMailClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const WorkMailClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void WorkMailBuiltInParameters::SetFromClientConfiguration(const WorkMailClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const WorkMailClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void WorkMailBuiltInParameters::SetServiceSpecificParameters(const WorkMailClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace WorkMail
}  // namespace Aws
