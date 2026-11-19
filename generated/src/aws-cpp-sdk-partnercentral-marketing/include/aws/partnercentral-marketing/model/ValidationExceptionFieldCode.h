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
enum class ValidationExceptionFieldCode {
  NOT_SET,
  VALUE_TOO_SHORT,
  VALUE_TOO_LONG,
  PATTERN_MISMATCH,
  DISALLOWED_HTML_TAG,
  WRONG_VALUE_TYPE,
  FILE_REFERENCE_INVALID,
  FILE_REFERENCE_NOT_OWNED,
  IMAGE_FORMAT_NOT_SUPPORTED,
  IMAGE_FORMAT_NOT_ALLOWED,
  IMAGE_TOO_LARGE,
  FILE_TOO_LARGE,
  SCAN_REJECTED,
  UNKNOWN_FIELD,
  IMAGE_ASPECT_RATIO_MISMATCH,
  FIELD_SET_ON_CAMPAIGN,
  EMAIL_COLUMN_MISSING,
  RECIPIENT_LIST_TOO_LARGE,
  RECIPIENT_LIST_EMPTY,
  INVALID_VALUE,
  NOT_SUPPORTED_FOR_CATEGORY,
  RECIPIENT_LIST_NOT_UTF8,
  FIELD_FROM_PARTNER_PROFILE,
  COPY_SOURCE_INVALID,
  SENDER_DOMAIN_NOT_ALLIANCE_LEAD,
  SENDER_DOMAIN_DKIM_MISSING,
  SENDER_DOMAIN_DMARC_MISSING,
  PARTNER_BADGE_NOT_ELIGIBLE
};

namespace ValidationExceptionFieldCodeMapper {
AWS_PARTNERCENTRALMARKETING_API ValidationExceptionFieldCode GetValidationExceptionFieldCodeForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForValidationExceptionFieldCode(ValidationExceptionFieldCode value);
}  // namespace ValidationExceptionFieldCodeMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
