/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/LayoutPageType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace LayoutPageTypeMapper {

static const int FORM_HASH = HashingUtils::HashString("FORM");
static const int CONFIRMATION_HASH = HashingUtils::HashString("CONFIRMATION");

LayoutPageType GetLayoutPageTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FORM_HASH) {
    return LayoutPageType::FORM;
  } else if (hashCode == CONFIRMATION_HASH) {
    return LayoutPageType::CONFIRMATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LayoutPageType>(hashCode);
  }

  return LayoutPageType::NOT_SET;
}

Aws::String GetNameForLayoutPageType(LayoutPageType enumValue) {
  switch (enumValue) {
    case LayoutPageType::NOT_SET:
      return {};
    case LayoutPageType::FORM:
      return "FORM";
    case LayoutPageType::CONFIRMATION:
      return "CONFIRMATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LayoutPageTypeMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
