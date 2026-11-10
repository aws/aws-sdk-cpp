/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/RedshiftServerlessEndpointProvider.h>
#include <aws/redshift-serverless/internal/RedshiftServerlessEndpointRules.h>

namespace Aws {
#ifndef AWS_REDSHIFTSERVERLESS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<RedshiftServerless::Endpoint::RedshiftServerlessClientConfiguration,
                                                   RedshiftServerless::Endpoint::RedshiftServerlessBuiltInParameters,
                                                   RedshiftServerless::Endpoint::RedshiftServerlessClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<RedshiftServerless::Endpoint::RedshiftServerlessClientConfiguration,
                                                  RedshiftServerless::Endpoint::RedshiftServerlessBuiltInParameters,
                                                  RedshiftServerless::Endpoint::RedshiftServerlessClientContextParameters>;
}  // namespace Endpoint
#endif

namespace RedshiftServerless {
namespace Endpoint {
RedshiftServerlessEndpointProvider::RedshiftServerlessEndpointProvider()
    : RedshiftServerlessDefaultEpProviderBase(Aws::RedshiftServerless::RedshiftServerlessEndpointRules::GetRulesBlob(),
                                              Aws::RedshiftServerless::RedshiftServerlessEndpointRules::RulesBlobSize) {}

void RedshiftServerlessBuiltInParameters::SetFromClientConfiguration(const RedshiftServerlessClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const RedshiftServerlessClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void RedshiftServerlessBuiltInParameters::SetFromClientConfiguration(const RedshiftServerlessClientConfiguration& config,
                                                                     const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const RedshiftServerlessClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void RedshiftServerlessBuiltInParameters::SetServiceSpecificParameters(const RedshiftServerlessClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace RedshiftServerless
}  // namespace Aws
