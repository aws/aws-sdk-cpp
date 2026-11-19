/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/QAppsEndpointProvider.h>
#include <aws/qapps/internal/QAppsEndpointRules.h>

namespace Aws {
#ifndef AWS_QAPPS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<QApps::Endpoint::QAppsClientConfiguration, QApps::Endpoint::QAppsBuiltInParameters,
                                                   QApps::Endpoint::QAppsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<QApps::Endpoint::QAppsClientConfiguration, QApps::Endpoint::QAppsBuiltInParameters,
                                                  QApps::Endpoint::QAppsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace QApps {
namespace Endpoint {
QAppsEndpointProvider::QAppsEndpointProvider()
    : QAppsDefaultEpProviderBase(Aws::QApps::QAppsEndpointRules::GetRulesBlob(), Aws::QApps::QAppsEndpointRules::RulesBlobSize) {}

void QAppsBuiltInParameters::SetFromClientConfiguration(const QAppsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const QAppsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void QAppsBuiltInParameters::SetFromClientConfiguration(const QAppsClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const QAppsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void QAppsBuiltInParameters::SetServiceSpecificParameters(const QAppsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace QApps
}  // namespace Aws
