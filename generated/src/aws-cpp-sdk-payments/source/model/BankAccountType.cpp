/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payments/model/BankAccountType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {
namespace BankAccountTypeMapper {

static const int CHECKING_HASH = HashingUtils::HashString("CHECKING");
static const int SAVINGS_HASH = HashingUtils::HashString("SAVINGS");

BankAccountType GetBankAccountTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CHECKING_HASH) {
    return BankAccountType::CHECKING;
  } else if (hashCode == SAVINGS_HASH) {
    return BankAccountType::SAVINGS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BankAccountType>(hashCode);
  }

  return BankAccountType::NOT_SET;
}

Aws::String GetNameForBankAccountType(BankAccountType enumValue) {
  switch (enumValue) {
    case BankAccountType::NOT_SET:
      return {};
    case BankAccountType::CHECKING:
      return "CHECKING";
    case BankAccountType::SAVINGS:
      return "SAVINGS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BankAccountTypeMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
