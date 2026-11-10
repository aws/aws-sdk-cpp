/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/PaymentCryptographyClientConfiguration.h>

namespace Aws {
namespace PaymentCryptography {

void PaymentCryptographyClientConfiguration::LoadPaymentCryptographySpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

PaymentCryptographyClientConfiguration::PaymentCryptographyClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadPaymentCryptographySpecificConfig(this->profileName);
}

PaymentCryptographyClientConfiguration::PaymentCryptographyClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadPaymentCryptographySpecificConfig(Aws::String(inputProfileName));
}

PaymentCryptographyClientConfiguration::PaymentCryptographyClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                               bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadPaymentCryptographySpecificConfig(this->profileName);
}

PaymentCryptographyClientConfiguration::PaymentCryptographyClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadPaymentCryptographySpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const PaymentCryptographyClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace PaymentCryptography
}  // namespace Aws
