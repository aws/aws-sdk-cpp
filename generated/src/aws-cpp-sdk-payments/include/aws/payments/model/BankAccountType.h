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
enum class BankAccountType { NOT_SET, CHECKING, SAVINGS };

namespace BankAccountTypeMapper {
AWS_PAYMENTS_API BankAccountType GetBankAccountTypeForName(const Aws::String& name);

AWS_PAYMENTS_API Aws::String GetNameForBankAccountType(BankAccountType value);
}  // namespace BankAccountTypeMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
