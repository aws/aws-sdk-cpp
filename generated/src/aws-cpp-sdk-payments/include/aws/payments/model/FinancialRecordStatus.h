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
enum class FinancialRecordStatus { NOT_SET, OUTSTANDING, PROCESSING, SETTLED, CANCELED };

namespace FinancialRecordStatusMapper {
AWS_PAYMENTS_API FinancialRecordStatus GetFinancialRecordStatusForName(const Aws::String& name);

AWS_PAYMENTS_API Aws::String GetNameForFinancialRecordStatus(FinancialRecordStatus value);
}  // namespace FinancialRecordStatusMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
