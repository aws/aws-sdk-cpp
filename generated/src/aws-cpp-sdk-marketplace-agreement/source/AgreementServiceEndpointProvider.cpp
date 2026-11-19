/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/AgreementServiceEndpointProvider.h>
#include <aws/marketplace-agreement/internal/AgreementServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_AGREEMENTSERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AgreementService::Endpoint::AgreementServiceClientConfiguration,
                                                   AgreementService::Endpoint::AgreementServiceBuiltInParameters,
                                                   AgreementService::Endpoint::AgreementServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AgreementService::Endpoint::AgreementServiceClientConfiguration,
                                                  AgreementService::Endpoint::AgreementServiceBuiltInParameters,
                                                  AgreementService::Endpoint::AgreementServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AgreementService {
namespace Endpoint {
AgreementServiceEndpointProvider::AgreementServiceEndpointProvider()
    : AgreementServiceDefaultEpProviderBase(Aws::AgreementService::AgreementServiceEndpointRules::GetRulesBlob(),
                                            Aws::AgreementService::AgreementServiceEndpointRules::RulesBlobSize) {}

void AgreementServiceBuiltInParameters::SetFromClientConfiguration(const AgreementServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AgreementServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AgreementServiceBuiltInParameters::SetFromClientConfiguration(const AgreementServiceClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AgreementServiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AgreementServiceBuiltInParameters::SetServiceSpecificParameters(const AgreementServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace AgreementService
}  // namespace Aws
