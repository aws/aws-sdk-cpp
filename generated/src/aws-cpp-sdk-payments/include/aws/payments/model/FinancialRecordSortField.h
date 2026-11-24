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
enum class FinancialRecordSortField { NOT_SET, ISSUED_AT };

namespace FinancialRecordSortFieldMapper {
AWS_PAYMENTS_API FinancialRecordSortField GetFinancialRecordSortFieldForName(const Aws::String& name);

AWS_PAYMENTS_API Aws::String GetNameForFinancialRecordSortField(FinancialRecordSortField value);
}  // namespace FinancialRecordSortFieldMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
