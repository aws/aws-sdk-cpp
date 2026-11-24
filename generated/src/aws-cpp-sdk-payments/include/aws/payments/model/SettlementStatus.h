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
enum class SettlementStatus { NOT_SET, OPEN, CLOSED };

namespace SettlementStatusMapper {
AWS_PAYMENTS_API SettlementStatus GetSettlementStatusForName(const Aws::String& name);

AWS_PAYMENTS_API Aws::String GetNameForSettlementStatus(SettlementStatus value);
}  // namespace SettlementStatusMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
