/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/PaymentCryptographyEndpointProvider.h>
#include <aws/payment-cryptography/internal/PaymentCryptographyEndpointRules.h>

namespace Aws {
namespace PaymentCryptography {
namespace Endpoint {
PaymentCryptographyEndpointProvider::PaymentCryptographyEndpointProvider()
    : PaymentCryptographyDefaultEpProviderBase(Aws::PaymentCryptography::PaymentCryptographyEndpointRules::GetRulesBlob(),
                                               Aws::PaymentCryptography::PaymentCryptographyEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace PaymentCryptography
}  // namespace Aws
