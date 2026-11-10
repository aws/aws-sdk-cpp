/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/QConnectEndpointProvider.h>
#include <aws/qconnect/internal/QConnectEndpointRules.h>

namespace Aws {
#ifndef AWS_QCONNECT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<QConnect::Endpoint::QConnectClientConfiguration,
                                                   QConnect::Endpoint::QConnectBuiltInParameters,
                                                   QConnect::Endpoint::QConnectClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<QConnect::Endpoint::QConnectClientConfiguration,
                                                  QConnect::Endpoint::QConnectBuiltInParameters,
                                                  QConnect::Endpoint::QConnectClientContextParameters>;
}  // namespace Endpoint
#endif

namespace QConnect {
namespace Endpoint {
QConnectEndpointProvider::QConnectEndpointProvider()
    : QConnectDefaultEpProviderBase(Aws::QConnect::QConnectEndpointRules::GetRulesBlob(),
                                    Aws::QConnect::QConnectEndpointRules::RulesBlobSize) {}

void QConnectBuiltInParameters::SetFromClientConfiguration(const QConnectClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const QConnectClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void QConnectBuiltInParameters::SetFromClientConfiguration(const QConnectClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const QConnectClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void QConnectBuiltInParameters::SetServiceSpecificParameters(const QConnectClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace QConnect
}  // namespace Aws
