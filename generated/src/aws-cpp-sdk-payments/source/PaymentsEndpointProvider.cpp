/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payments/PaymentsEndpointProvider.h>
#include <aws/payments/internal/PaymentsEndpointRules.h>

namespace Aws {
namespace Payments {
namespace Endpoint {
PaymentsEndpointProvider::PaymentsEndpointProvider()
    : PaymentsDefaultEpProviderBase(Aws::Payments::PaymentsEndpointRules::GetRulesBlob(),
                                    Aws::Payments::PaymentsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Payments
}  // namespace Aws
