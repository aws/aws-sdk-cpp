/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/SNSEndpointProvider.h>
#include <aws/sns/internal/SNSEndpointRules.h>

namespace Aws {
#ifndef AWS_SNS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SNS::Endpoint::SNSClientConfiguration, SNS::Endpoint::SNSBuiltInParameters,
                                                   SNS::Endpoint::SNSClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SNS::Endpoint::SNSClientConfiguration, SNS::Endpoint::SNSBuiltInParameters,
                                                  SNS::Endpoint::SNSClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SNS {
namespace Endpoint {
SNSEndpointProvider::SNSEndpointProvider()
    : SNSDefaultEpProviderBase(Aws::SNS::SNSEndpointRules::GetRulesBlob(), Aws::SNS::SNSEndpointRules::RulesBlobSize) {}

void SNSBuiltInParameters::SetFromClientConfiguration(const SNSClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SNSClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SNSBuiltInParameters::SetFromClientConfiguration(const SNSClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SNSClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SNSBuiltInParameters::SetServiceSpecificParameters(const SNSClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SNS
}  // namespace Aws
