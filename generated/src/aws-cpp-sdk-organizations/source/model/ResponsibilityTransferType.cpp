/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/organizations/model/ResponsibilityTransferType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Organizations {
namespace Model {
namespace ResponsibilityTransferTypeMapper {

static const int BILLING_HASH = HashingUtils::HashString("BILLING");

ResponsibilityTransferType GetResponsibilityTransferTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BILLING_HASH) {
    return ResponsibilityTransferType::BILLING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResponsibilityTransferType>(hashCode);
  }

  return ResponsibilityTransferType::NOT_SET;
}

Aws::String GetNameForResponsibilityTransferType(ResponsibilityTransferType enumValue) {
  switch (enumValue) {
    case ResponsibilityTransferType::NOT_SET:
      return {};
    case ResponsibilityTransferType::BILLING:
      return "BILLING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResponsibilityTransferTypeMapper
}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
