/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/QBusinessEndpointProvider.h>
#include <aws/qbusiness/internal/QBusinessEndpointRules.h>

namespace Aws {
#ifndef AWS_QBUSINESS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<QBusiness::Endpoint::QBusinessClientConfiguration,
                                                   QBusiness::Endpoint::QBusinessBuiltInParameters,
                                                   QBusiness::Endpoint::QBusinessClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<QBusiness::Endpoint::QBusinessClientConfiguration,
                                                  QBusiness::Endpoint::QBusinessBuiltInParameters,
                                                  QBusiness::Endpoint::QBusinessClientContextParameters>;
}  // namespace Endpoint
#endif

namespace QBusiness {
namespace Endpoint {
QBusinessEndpointProvider::QBusinessEndpointProvider()
    : QBusinessDefaultEpProviderBase(Aws::QBusiness::QBusinessEndpointRules::GetRulesBlob(),
                                     Aws::QBusiness::QBusinessEndpointRules::RulesBlobSize) {}

void QBusinessBuiltInParameters::SetFromClientConfiguration(const QBusinessClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const QBusinessClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void QBusinessBuiltInParameters::SetFromClientConfiguration(const QBusinessClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const QBusinessClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void QBusinessBuiltInParameters::SetServiceSpecificParameters(const QBusinessClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace QBusiness
}  // namespace Aws
