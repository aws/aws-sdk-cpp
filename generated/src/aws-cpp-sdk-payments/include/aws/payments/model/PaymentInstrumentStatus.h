/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>

namespace Aws {
namespace Payments {
namespace Model {
enum class PaymentInstrumentStatus { NOT_SET, ACTIVE, PENDING_SETUP, SETUP_IN_PROGRESS, INVALID };

namespace PaymentInstrumentStatusMapper {
AWS_PAYMENTS_API PaymentInstrumentStatus GetPaymentInstrumentStatusForName(const Aws::String& name);

AWS_PAYMENTS_API Aws::String GetNameForPaymentInstrumentStatus(PaymentInstrumentStatus value);
}  // namespace PaymentInstrumentStatusMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
