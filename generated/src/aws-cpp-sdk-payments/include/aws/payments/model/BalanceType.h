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
enum class BalanceType { NOT_SET, INVOICES_DUE, INVOICES_PAST_DUE, OUTSTANDING_CREDIT_MEMOS };

namespace BalanceTypeMapper {
AWS_PAYMENTS_API BalanceType GetBalanceTypeForName(const Aws::String& name);

AWS_PAYMENTS_API Aws::String GetNameForBalanceType(BalanceType value);
}  // namespace BalanceTypeMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
