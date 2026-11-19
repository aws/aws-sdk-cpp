/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/MQEndpointProvider.h>
#include <aws/mq/internal/MQEndpointRules.h>

namespace Aws {
#ifndef AWS_MQ_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MQ::Endpoint::MQClientConfiguration, MQ::Endpoint::MQBuiltInParameters,
                                                   MQ::Endpoint::MQClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MQ::Endpoint::MQClientConfiguration, MQ::Endpoint::MQBuiltInParameters,
                                                  MQ::Endpoint::MQClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MQ {
namespace Endpoint {
MQEndpointProvider::MQEndpointProvider()
    : MQDefaultEpProviderBase(Aws::MQ::MQEndpointRules::GetRulesBlob(), Aws::MQ::MQEndpointRules::RulesBlobSize) {}

void MQBuiltInParameters::SetFromClientConfiguration(const MQClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MQClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MQBuiltInParameters::SetFromClientConfiguration(const MQClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MQClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MQBuiltInParameters::SetServiceSpecificParameters(const MQClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MQ
}  // namespace Aws
