/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/RedshiftEndpointProvider.h>
#include <aws/redshift/internal/RedshiftEndpointRules.h>

namespace Aws {
#ifndef AWS_REDSHIFT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Redshift::Endpoint::RedshiftClientConfiguration,
                                                   Redshift::Endpoint::RedshiftBuiltInParameters,
                                                   Redshift::Endpoint::RedshiftClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Redshift::Endpoint::RedshiftClientConfiguration,
                                                  Redshift::Endpoint::RedshiftBuiltInParameters,
                                                  Redshift::Endpoint::RedshiftClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Redshift {
namespace Endpoint {
RedshiftEndpointProvider::RedshiftEndpointProvider()
    : RedshiftDefaultEpProviderBase(Aws::Redshift::RedshiftEndpointRules::GetRulesBlob(),
                                    Aws::Redshift::RedshiftEndpointRules::RulesBlobSize) {}

void RedshiftBuiltInParameters::SetFromClientConfiguration(const RedshiftClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const RedshiftClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void RedshiftBuiltInParameters::SetFromClientConfiguration(const RedshiftClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const RedshiftClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void RedshiftBuiltInParameters::SetServiceSpecificParameters(const RedshiftClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Redshift
}  // namespace Aws
