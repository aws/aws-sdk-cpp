/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
enum class PartnerProfileField {
  NOT_SET,
  DISPLAY_NAME,
  WEBSITE_URL,
  LOGO,
  WEBSITE_DOMAIN,
  COPYRIGHT_LINE,
  PARTNER_DETAILS,
  COPYRIGHT_AND_DETAILS,
  COPYRIGHT_YEAR_LINE
};

namespace PartnerProfileFieldMapper {
AWS_PARTNERCENTRALMARKETING_API PartnerProfileField GetPartnerProfileFieldForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForPartnerProfileField(PartnerProfileField value);
}  // namespace PartnerProfileFieldMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
