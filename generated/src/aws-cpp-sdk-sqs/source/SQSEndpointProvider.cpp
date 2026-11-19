/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/SQSEndpointProvider.h>
#include <aws/sqs/internal/SQSEndpointRules.h>

namespace Aws {
#ifndef AWS_SQS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<SQS::Endpoint::SQSClientConfiguration, SQS::Endpoint::SQSBuiltInParameters,
                                                   SQS::Endpoint::SQSClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<SQS::Endpoint::SQSClientConfiguration, SQS::Endpoint::SQSBuiltInParameters,
                                                  SQS::Endpoint::SQSClientContextParameters>;
}  // namespace Endpoint
#endif

namespace SQS {
namespace Endpoint {
SQSEndpointProvider::SQSEndpointProvider()
    : SQSDefaultEpProviderBase(Aws::SQS::SQSEndpointRules::GetRulesBlob(), Aws::SQS::SQSEndpointRules::RulesBlobSize) {}

void SQSBuiltInParameters::SetFromClientConfiguration(const SQSClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const SQSClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void SQSBuiltInParameters::SetFromClientConfiguration(const SQSClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const SQSClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void SQSBuiltInParameters::SetServiceSpecificParameters(const SQSClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace SQS
}  // namespace Aws
