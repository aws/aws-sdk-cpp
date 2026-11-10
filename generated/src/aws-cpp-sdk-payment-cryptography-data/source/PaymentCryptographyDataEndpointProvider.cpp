/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/PaymentCryptographyDataEndpointProvider.h>
#include <aws/payment-cryptography-data/internal/PaymentCryptographyDataEndpointRules.h>

namespace Aws {
#ifndef AWS_PAYMENTCRYPTOGRAPHYDATA_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<PaymentCryptographyData::Endpoint::PaymentCryptographyDataClientConfiguration,
                                                   PaymentCryptographyData::Endpoint::PaymentCryptographyDataBuiltInParameters,
                                                   PaymentCryptographyData::Endpoint::PaymentCryptographyDataClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<PaymentCryptographyData::Endpoint::PaymentCryptographyDataClientConfiguration,
                                                  PaymentCryptographyData::Endpoint::PaymentCryptographyDataBuiltInParameters,
                                                  PaymentCryptographyData::Endpoint::PaymentCryptographyDataClientContextParameters>;
}  // namespace Endpoint
#endif

namespace PaymentCryptographyData {
namespace Endpoint {
PaymentCryptographyDataEndpointProvider::PaymentCryptographyDataEndpointProvider()
    : PaymentCryptographyDataDefaultEpProviderBase(Aws::PaymentCryptographyData::PaymentCryptographyDataEndpointRules::GetRulesBlob(),
                                                   Aws::PaymentCryptographyData::PaymentCryptographyDataEndpointRules::RulesBlobSize) {}

void PaymentCryptographyDataBuiltInParameters::SetFromClientConfiguration(const PaymentCryptographyDataClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PaymentCryptographyDataClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PaymentCryptographyDataBuiltInParameters::SetFromClientConfiguration(const PaymentCryptographyDataClientConfiguration& config,
                                                                          const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PaymentCryptographyDataClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PaymentCryptographyDataBuiltInParameters::SetServiceSpecificParameters(const PaymentCryptographyDataClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace PaymentCryptographyData
}  // namespace Aws
