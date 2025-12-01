/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/VariablePaymentTermConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

VariablePaymentTermConfiguration::VariablePaymentTermConfiguration(JsonView jsonValue) { *this = jsonValue; }

VariablePaymentTermConfiguration& VariablePaymentTermConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("paymentRequestApprovalStrategy")) {
    m_paymentRequestApprovalStrategy = PaymentRequestApprovalStrategyMapper::GetPaymentRequestApprovalStrategyForName(
        jsonValue.GetString("paymentRequestApprovalStrategy"));
    m_paymentRequestApprovalStrategyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expirationDuration")) {
    m_expirationDuration = jsonValue.GetString("expirationDuration");
    m_expirationDurationHasBeenSet = true;
  }
  return *this;
}

JsonValue VariablePaymentTermConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_paymentRequestApprovalStrategyHasBeenSet) {
    payload.WithString("paymentRequestApprovalStrategy",
                       PaymentRequestApprovalStrategyMapper::GetNameForPaymentRequestApprovalStrategy(m_paymentRequestApprovalStrategy));
  }

  if (m_expirationDurationHasBeenSet) {
    payload.WithString("expirationDuration", m_expirationDuration);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
