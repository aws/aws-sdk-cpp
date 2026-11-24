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
enum class FinancialRecordType { NOT_SET, INVOICE, CREDIT_MEMO };

namespace FinancialRecordTypeMapper {
AWS_PAYMENTS_API FinancialRecordType GetFinancialRecordTypeForName(const Aws::String& name);

AWS_PAYMENTS_API Aws::String GetNameForFinancialRecordType(FinancialRecordType value);
}  // namespace FinancialRecordTypeMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
