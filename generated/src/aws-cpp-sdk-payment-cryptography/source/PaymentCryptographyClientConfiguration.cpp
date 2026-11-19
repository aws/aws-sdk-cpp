/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/PaymentCryptographyClientConfiguration.h>

namespace Aws {
namespace PaymentCryptography {

void PaymentCryptographyClientConfiguration::LoadPaymentCryptographySpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  useDualStack = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
                     "AWS_USE_DUALSTACK_ENDPOINT", this->profileName, "use_dualstack_endpoint", {"true", "false"}, "false") == "true";
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

}  // namespace PaymentCryptography
}  // namespace Aws
