/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/LayoutFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace LayoutFormatMapper {

static const int HTML_HASH = HashingUtils::HashString("HTML");
static const int PDF_HASH = HashingUtils::HashString("PDF");
static const int IMAGE_HASH = HashingUtils::HashString("IMAGE");

LayoutFormat GetLayoutFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HTML_HASH) {
    return LayoutFormat::HTML;
  } else if (hashCode == PDF_HASH) {
    return LayoutFormat::PDF;
  } else if (hashCode == IMAGE_HASH) {
    return LayoutFormat::IMAGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LayoutFormat>(hashCode);
  }

  return LayoutFormat::NOT_SET;
}

Aws::String GetNameForLayoutFormat(LayoutFormat enumValue) {
  switch (enumValue) {
    case LayoutFormat::NOT_SET:
      return {};
    case LayoutFormat::HTML:
      return "HTML";
    case LayoutFormat::PDF:
      return "PDF";
    case LayoutFormat::IMAGE:
      return "IMAGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LayoutFormatMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
