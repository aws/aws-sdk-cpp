/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/PaymentCryptographyEndpointProvider.h>
#include <aws/payment-cryptography/internal/PaymentCryptographyEndpointRules.h>

namespace Aws {
#ifndef AWS_PAYMENTCRYPTOGRAPHY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<PaymentCryptography::Endpoint::PaymentCryptographyClientConfiguration,
                                                   PaymentCryptography::Endpoint::PaymentCryptographyBuiltInParameters,
                                                   PaymentCryptography::Endpoint::PaymentCryptographyClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<PaymentCryptography::Endpoint::PaymentCryptographyClientConfiguration,
                                                  PaymentCryptography::Endpoint::PaymentCryptographyBuiltInParameters,
                                                  PaymentCryptography::Endpoint::PaymentCryptographyClientContextParameters>;
}  // namespace Endpoint
#endif

namespace PaymentCryptography {
namespace Endpoint {
PaymentCryptographyEndpointProvider::PaymentCryptographyEndpointProvider()
    : PaymentCryptographyDefaultEpProviderBase(Aws::PaymentCryptography::PaymentCryptographyEndpointRules::GetRulesBlob(),
                                               Aws::PaymentCryptography::PaymentCryptographyEndpointRules::RulesBlobSize) {}

void PaymentCryptographyBuiltInParameters::SetFromClientConfiguration(const PaymentCryptographyClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PaymentCryptographyClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PaymentCryptographyBuiltInParameters::SetFromClientConfiguration(const PaymentCryptographyClientConfiguration& config,
                                                                      const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PaymentCryptographyClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PaymentCryptographyBuiltInParameters::SetServiceSpecificParameters(const PaymentCryptographyClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace PaymentCryptography
}  // namespace Aws
