/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/PartnerProfileField.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace PartnerProfileFieldMapper {

static const int DISPLAY_NAME_HASH = HashingUtils::HashString("DISPLAY_NAME");
static const int WEBSITE_URL_HASH = HashingUtils::HashString("WEBSITE_URL");
static const int LOGO_HASH = HashingUtils::HashString("LOGO");
static const int WEBSITE_DOMAIN_HASH = HashingUtils::HashString("WEBSITE_DOMAIN");
static const int COPYRIGHT_LINE_HASH = HashingUtils::HashString("COPYRIGHT_LINE");
static const int PARTNER_DETAILS_HASH = HashingUtils::HashString("PARTNER_DETAILS");
static const int COPYRIGHT_AND_DETAILS_HASH = HashingUtils::HashString("COPYRIGHT_AND_DETAILS");
static const int COPYRIGHT_YEAR_LINE_HASH = HashingUtils::HashString("COPYRIGHT_YEAR_LINE");

PartnerProfileField GetPartnerProfileFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISPLAY_NAME_HASH) {
    return PartnerProfileField::DISPLAY_NAME;
  } else if (hashCode == WEBSITE_URL_HASH) {
    return PartnerProfileField::WEBSITE_URL;
  } else if (hashCode == LOGO_HASH) {
    return PartnerProfileField::LOGO;
  } else if (hashCode == WEBSITE_DOMAIN_HASH) {
    return PartnerProfileField::WEBSITE_DOMAIN;
  } else if (hashCode == COPYRIGHT_LINE_HASH) {
    return PartnerProfileField::COPYRIGHT_LINE;
  } else if (hashCode == PARTNER_DETAILS_HASH) {
    return PartnerProfileField::PARTNER_DETAILS;
  } else if (hashCode == COPYRIGHT_AND_DETAILS_HASH) {
    return PartnerProfileField::COPYRIGHT_AND_DETAILS;
  } else if (hashCode == COPYRIGHT_YEAR_LINE_HASH) {
    return PartnerProfileField::COPYRIGHT_YEAR_LINE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PartnerProfileField>(hashCode);
  }

  return PartnerProfileField::NOT_SET;
}

Aws::String GetNameForPartnerProfileField(PartnerProfileField enumValue) {
  switch (enumValue) {
    case PartnerProfileField::NOT_SET:
      return {};
    case PartnerProfileField::DISPLAY_NAME:
      return "DISPLAY_NAME";
    case PartnerProfileField::WEBSITE_URL:
      return "WEBSITE_URL";
    case PartnerProfileField::LOGO:
      return "LOGO";
    case PartnerProfileField::WEBSITE_DOMAIN:
      return "WEBSITE_DOMAIN";
    case PartnerProfileField::COPYRIGHT_LINE:
      return "COPYRIGHT_LINE";
    case PartnerProfileField::PARTNER_DETAILS:
      return "PARTNER_DETAILS";
    case PartnerProfileField::COPYRIGHT_AND_DETAILS:
      return "COPYRIGHT_AND_DETAILS";
    case PartnerProfileField::COPYRIGHT_YEAR_LINE:
      return "COPYRIGHT_YEAR_LINE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PartnerProfileFieldMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
