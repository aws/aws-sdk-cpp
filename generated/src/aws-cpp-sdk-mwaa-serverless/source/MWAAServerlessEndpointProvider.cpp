/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa-serverless/MWAAServerlessEndpointProvider.h>
#include <aws/mwaa-serverless/internal/MWAAServerlessEndpointRules.h>

namespace Aws {
#ifndef AWS_MWAASERVERLESS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MWAAServerless::Endpoint::MWAAServerlessClientConfiguration,
                                                   MWAAServerless::Endpoint::MWAAServerlessBuiltInParameters,
                                                   MWAAServerless::Endpoint::MWAAServerlessClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MWAAServerless::Endpoint::MWAAServerlessClientConfiguration,
                                                  MWAAServerless::Endpoint::MWAAServerlessBuiltInParameters,
                                                  MWAAServerless::Endpoint::MWAAServerlessClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MWAAServerless {
namespace Endpoint {
MWAAServerlessEndpointProvider::MWAAServerlessEndpointProvider()
    : MWAAServerlessDefaultEpProviderBase(Aws::MWAAServerless::MWAAServerlessEndpointRules::GetRulesBlob(),
                                          Aws::MWAAServerless::MWAAServerlessEndpointRules::RulesBlobSize) {}

void MWAAServerlessBuiltInParameters::SetFromClientConfiguration(const MWAAServerlessClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MWAAServerlessClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MWAAServerlessBuiltInParameters::SetFromClientConfiguration(const MWAAServerlessClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MWAAServerlessClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MWAAServerlessBuiltInParameters::SetServiceSpecificParameters(const MWAAServerlessClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace MWAAServerless
}  // namespace Aws
