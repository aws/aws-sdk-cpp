/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/PaymentCryptographyDataEndpointProvider.h>
#include <aws/payment-cryptography-data/internal/PaymentCryptographyDataEndpointRules.h>

namespace Aws {
namespace PaymentCryptographyData {
namespace Endpoint {
PaymentCryptographyDataEndpointProvider::PaymentCryptographyDataEndpointProvider()
    : PaymentCryptographyDataDefaultEpProviderBase(Aws::PaymentCryptographyData::PaymentCryptographyDataEndpointRules::GetRulesBlob(),
                                                   Aws::PaymentCryptographyData::PaymentCryptographyDataEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace PaymentCryptographyData
}  // namespace Aws
