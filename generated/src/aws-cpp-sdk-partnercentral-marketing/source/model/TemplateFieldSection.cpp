/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/TemplateFieldSection.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace TemplateFieldSectionMapper {

static const int HEADER_HASH = HashingUtils::HashString("HEADER");
static const int BODY_HASH = HashingUtils::HashString("BODY");
static const int FOOTER_HASH = HashingUtils::HashString("FOOTER");

TemplateFieldSection GetTemplateFieldSectionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HEADER_HASH) {
    return TemplateFieldSection::HEADER;
  } else if (hashCode == BODY_HASH) {
    return TemplateFieldSection::BODY;
  } else if (hashCode == FOOTER_HASH) {
    return TemplateFieldSection::FOOTER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TemplateFieldSection>(hashCode);
  }

  return TemplateFieldSection::NOT_SET;
}

Aws::String GetNameForTemplateFieldSection(TemplateFieldSection enumValue) {
  switch (enumValue) {
    case TemplateFieldSection::NOT_SET:
      return {};
    case TemplateFieldSection::HEADER:
      return "HEADER";
    case TemplateFieldSection::BODY:
      return "BODY";
    case TemplateFieldSection::FOOTER:
      return "FOOTER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TemplateFieldSectionMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
