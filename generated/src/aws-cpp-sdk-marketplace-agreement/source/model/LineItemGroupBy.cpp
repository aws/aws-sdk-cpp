/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/LineItemGroupBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace LineItemGroupByMapper {

static const int INVOICE_ID_HASH = HashingUtils::HashString("INVOICE_ID");

LineItemGroupBy GetLineItemGroupByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INVOICE_ID_HASH) {
    return LineItemGroupBy::INVOICE_ID;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LineItemGroupBy>(hashCode);
  }

  return LineItemGroupBy::NOT_SET;
}

Aws::String GetNameForLineItemGroupBy(LineItemGroupBy enumValue) {
  switch (enumValue) {
    case LineItemGroupBy::NOT_SET:
      return {};
    case LineItemGroupBy::INVOICE_ID:
      return "INVOICE_ID";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LineItemGroupByMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
