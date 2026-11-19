/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/PaymentCryptographyDataClientConfiguration.h>

namespace Aws {
namespace PaymentCryptographyData {

void PaymentCryptographyDataClientConfiguration::LoadPaymentCryptographyDataSpecificConfig(const Aws::String& inputProfileName) {
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

PaymentCryptographyDataClientConfiguration::PaymentCryptographyDataClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadPaymentCryptographyDataSpecificConfig(this->profileName);
}

PaymentCryptographyDataClientConfiguration::PaymentCryptographyDataClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadPaymentCryptographyDataSpecificConfig(Aws::String(inputProfileName));
}

PaymentCryptographyDataClientConfiguration::PaymentCryptographyDataClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadPaymentCryptographyDataSpecificConfig(this->profileName);
}

PaymentCryptographyDataClientConfiguration::PaymentCryptographyDataClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadPaymentCryptographyDataSpecificConfig(this->profileName);
}

}  // namespace PaymentCryptographyData
}  // namespace Aws
