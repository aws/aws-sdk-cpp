/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/ValidationExceptionFieldCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace ValidationExceptionFieldCodeMapper {

static const int VALUE_TOO_SHORT_HASH = HashingUtils::HashString("VALUE_TOO_SHORT");
static const int VALUE_TOO_LONG_HASH = HashingUtils::HashString("VALUE_TOO_LONG");
static const int PATTERN_MISMATCH_HASH = HashingUtils::HashString("PATTERN_MISMATCH");
static const int DISALLOWED_HTML_TAG_HASH = HashingUtils::HashString("DISALLOWED_HTML_TAG");
static const int WRONG_VALUE_TYPE_HASH = HashingUtils::HashString("WRONG_VALUE_TYPE");
static const int FILE_REFERENCE_INVALID_HASH = HashingUtils::HashString("FILE_REFERENCE_INVALID");
static const int FILE_REFERENCE_NOT_OWNED_HASH = HashingUtils::HashString("FILE_REFERENCE_NOT_OWNED");
static const int IMAGE_FORMAT_NOT_SUPPORTED_HASH = HashingUtils::HashString("IMAGE_FORMAT_NOT_SUPPORTED");
static const int IMAGE_FORMAT_NOT_ALLOWED_HASH = HashingUtils::HashString("IMAGE_FORMAT_NOT_ALLOWED");
static const int IMAGE_TOO_LARGE_HASH = HashingUtils::HashString("IMAGE_TOO_LARGE");
static const int FILE_TOO_LARGE_HASH = HashingUtils::HashString("FILE_TOO_LARGE");
static const int SCAN_REJECTED_HASH = HashingUtils::HashString("SCAN_REJECTED");
static const int UNKNOWN_FIELD_HASH = HashingUtils::HashString("UNKNOWN_FIELD");
static const int IMAGE_ASPECT_RATIO_MISMATCH_HASH = HashingUtils::HashString("IMAGE_ASPECT_RATIO_MISMATCH");
static const int FIELD_SET_ON_CAMPAIGN_HASH = HashingUtils::HashString("FIELD_SET_ON_CAMPAIGN");
static const int EMAIL_COLUMN_MISSING_HASH = HashingUtils::HashString("EMAIL_COLUMN_MISSING");
static const int RECIPIENT_LIST_TOO_LARGE_HASH = HashingUtils::HashString("RECIPIENT_LIST_TOO_LARGE");
static const int RECIPIENT_LIST_EMPTY_HASH = HashingUtils::HashString("RECIPIENT_LIST_EMPTY");
static const int INVALID_VALUE_HASH = HashingUtils::HashString("INVALID_VALUE");
static const int NOT_SUPPORTED_FOR_CATEGORY_HASH = HashingUtils::HashString("NOT_SUPPORTED_FOR_CATEGORY");
static const int RECIPIENT_LIST_NOT_UTF8_HASH = HashingUtils::HashString("RECIPIENT_LIST_NOT_UTF8");
static const int FIELD_FROM_PARTNER_PROFILE_HASH = HashingUtils::HashString("FIELD_FROM_PARTNER_PROFILE");
static const int COPY_SOURCE_INVALID_HASH = HashingUtils::HashString("COPY_SOURCE_INVALID");
static const int SENDER_DOMAIN_NOT_ALLIANCE_LEAD_HASH = HashingUtils::HashString("SENDER_DOMAIN_NOT_ALLIANCE_LEAD");
static const int SENDER_DOMAIN_DKIM_MISSING_HASH = HashingUtils::HashString("SENDER_DOMAIN_DKIM_MISSING");
static const int SENDER_DOMAIN_DMARC_MISSING_HASH = HashingUtils::HashString("SENDER_DOMAIN_DMARC_MISSING");
static const int PARTNER_BADGE_NOT_ELIGIBLE_HASH = HashingUtils::HashString("PARTNER_BADGE_NOT_ELIGIBLE");

ValidationExceptionFieldCode GetValidationExceptionFieldCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VALUE_TOO_SHORT_HASH) {
    return ValidationExceptionFieldCode::VALUE_TOO_SHORT;
  } else if (hashCode == VALUE_TOO_LONG_HASH) {
    return ValidationExceptionFieldCode::VALUE_TOO_LONG;
  } else if (hashCode == PATTERN_MISMATCH_HASH) {
    return ValidationExceptionFieldCode::PATTERN_MISMATCH;
  } else if (hashCode == DISALLOWED_HTML_TAG_HASH) {
    return ValidationExceptionFieldCode::DISALLOWED_HTML_TAG;
  } else if (hashCode == WRONG_VALUE_TYPE_HASH) {
    return ValidationExceptionFieldCode::WRONG_VALUE_TYPE;
  } else if (hashCode == FILE_REFERENCE_INVALID_HASH) {
    return ValidationExceptionFieldCode::FILE_REFERENCE_INVALID;
  } else if (hashCode == FILE_REFERENCE_NOT_OWNED_HASH) {
    return ValidationExceptionFieldCode::FILE_REFERENCE_NOT_OWNED;
  } else if (hashCode == IMAGE_FORMAT_NOT_SUPPORTED_HASH) {
    return ValidationExceptionFieldCode::IMAGE_FORMAT_NOT_SUPPORTED;
  } else if (hashCode == IMAGE_FORMAT_NOT_ALLOWED_HASH) {
    return ValidationExceptionFieldCode::IMAGE_FORMAT_NOT_ALLOWED;
  } else if (hashCode == IMAGE_TOO_LARGE_HASH) {
    return ValidationExceptionFieldCode::IMAGE_TOO_LARGE;
  } else if (hashCode == FILE_TOO_LARGE_HASH) {
    return ValidationExceptionFieldCode::FILE_TOO_LARGE;
  } else if (hashCode == SCAN_REJECTED_HASH) {
    return ValidationExceptionFieldCode::SCAN_REJECTED;
  } else if (hashCode == UNKNOWN_FIELD_HASH) {
    return ValidationExceptionFieldCode::UNKNOWN_FIELD;
  } else if (hashCode == IMAGE_ASPECT_RATIO_MISMATCH_HASH) {
    return ValidationExceptionFieldCode::IMAGE_ASPECT_RATIO_MISMATCH;
  } else if (hashCode == FIELD_SET_ON_CAMPAIGN_HASH) {
    return ValidationExceptionFieldCode::FIELD_SET_ON_CAMPAIGN;
  } else if (hashCode == EMAIL_COLUMN_MISSING_HASH) {
    return ValidationExceptionFieldCode::EMAIL_COLUMN_MISSING;
  } else if (hashCode == RECIPIENT_LIST_TOO_LARGE_HASH) {
    return ValidationExceptionFieldCode::RECIPIENT_LIST_TOO_LARGE;
  } else if (hashCode == RECIPIENT_LIST_EMPTY_HASH) {
    return ValidationExceptionFieldCode::RECIPIENT_LIST_EMPTY;
  } else if (hashCode == INVALID_VALUE_HASH) {
    return ValidationExceptionFieldCode::INVALID_VALUE;
  } else if (hashCode == NOT_SUPPORTED_FOR_CATEGORY_HASH) {
    return ValidationExceptionFieldCode::NOT_SUPPORTED_FOR_CATEGORY;
  } else if (hashCode == RECIPIENT_LIST_NOT_UTF8_HASH) {
    return ValidationExceptionFieldCode::RECIPIENT_LIST_NOT_UTF8;
  } else if (hashCode == FIELD_FROM_PARTNER_PROFILE_HASH) {
    return ValidationExceptionFieldCode::FIELD_FROM_PARTNER_PROFILE;
  } else if (hashCode == COPY_SOURCE_INVALID_HASH) {
    return ValidationExceptionFieldCode::COPY_SOURCE_INVALID;
  } else if (hashCode == SENDER_DOMAIN_NOT_ALLIANCE_LEAD_HASH) {
    return ValidationExceptionFieldCode::SENDER_DOMAIN_NOT_ALLIANCE_LEAD;
  } else if (hashCode == SENDER_DOMAIN_DKIM_MISSING_HASH) {
    return ValidationExceptionFieldCode::SENDER_DOMAIN_DKIM_MISSING;
  } else if (hashCode == SENDER_DOMAIN_DMARC_MISSING_HASH) {
    return ValidationExceptionFieldCode::SENDER_DOMAIN_DMARC_MISSING;
  } else if (hashCode == PARTNER_BADGE_NOT_ELIGIBLE_HASH) {
    return ValidationExceptionFieldCode::PARTNER_BADGE_NOT_ELIGIBLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ValidationExceptionFieldCode>(hashCode);
  }

  return ValidationExceptionFieldCode::NOT_SET;
}

Aws::String GetNameForValidationExceptionFieldCode(ValidationExceptionFieldCode enumValue) {
  switch (enumValue) {
    case ValidationExceptionFieldCode::NOT_SET:
      return {};
    case ValidationExceptionFieldCode::VALUE_TOO_SHORT:
      return "VALUE_TOO_SHORT";
    case ValidationExceptionFieldCode::VALUE_TOO_LONG:
      return "VALUE_TOO_LONG";
    case ValidationExceptionFieldCode::PATTERN_MISMATCH:
      return "PATTERN_MISMATCH";
    case ValidationExceptionFieldCode::DISALLOWED_HTML_TAG:
      return "DISALLOWED_HTML_TAG";
    case ValidationExceptionFieldCode::WRONG_VALUE_TYPE:
      return "WRONG_VALUE_TYPE";
    case ValidationExceptionFieldCode::FILE_REFERENCE_INVALID:
      return "FILE_REFERENCE_INVALID";
    case ValidationExceptionFieldCode::FILE_REFERENCE_NOT_OWNED:
      return "FILE_REFERENCE_NOT_OWNED";
    case ValidationExceptionFieldCode::IMAGE_FORMAT_NOT_SUPPORTED:
      return "IMAGE_FORMAT_NOT_SUPPORTED";
    case ValidationExceptionFieldCode::IMAGE_FORMAT_NOT_ALLOWED:
      return "IMAGE_FORMAT_NOT_ALLOWED";
    case ValidationExceptionFieldCode::IMAGE_TOO_LARGE:
      return "IMAGE_TOO_LARGE";
    case ValidationExceptionFieldCode::FILE_TOO_LARGE:
      return "FILE_TOO_LARGE";
    case ValidationExceptionFieldCode::SCAN_REJECTED:
      return "SCAN_REJECTED";
    case ValidationExceptionFieldCode::UNKNOWN_FIELD:
      return "UNKNOWN_FIELD";
    case ValidationExceptionFieldCode::IMAGE_ASPECT_RATIO_MISMATCH:
      return "IMAGE_ASPECT_RATIO_MISMATCH";
    case ValidationExceptionFieldCode::FIELD_SET_ON_CAMPAIGN:
      return "FIELD_SET_ON_CAMPAIGN";
    case ValidationExceptionFieldCode::EMAIL_COLUMN_MISSING:
      return "EMAIL_COLUMN_MISSING";
    case ValidationExceptionFieldCode::RECIPIENT_LIST_TOO_LARGE:
      return "RECIPIENT_LIST_TOO_LARGE";
    case ValidationExceptionFieldCode::RECIPIENT_LIST_EMPTY:
      return "RECIPIENT_LIST_EMPTY";
    case ValidationExceptionFieldCode::INVALID_VALUE:
      return "INVALID_VALUE";
    case ValidationExceptionFieldCode::NOT_SUPPORTED_FOR_CATEGORY:
      return "NOT_SUPPORTED_FOR_CATEGORY";
    case ValidationExceptionFieldCode::RECIPIENT_LIST_NOT_UTF8:
      return "RECIPIENT_LIST_NOT_UTF8";
    case ValidationExceptionFieldCode::FIELD_FROM_PARTNER_PROFILE:
      return "FIELD_FROM_PARTNER_PROFILE";
    case ValidationExceptionFieldCode::COPY_SOURCE_INVALID:
      return "COPY_SOURCE_INVALID";
    case ValidationExceptionFieldCode::SENDER_DOMAIN_NOT_ALLIANCE_LEAD:
      return "SENDER_DOMAIN_NOT_ALLIANCE_LEAD";
    case ValidationExceptionFieldCode::SENDER_DOMAIN_DKIM_MISSING:
      return "SENDER_DOMAIN_DKIM_MISSING";
    case ValidationExceptionFieldCode::SENDER_DOMAIN_DMARC_MISSING:
      return "SENDER_DOMAIN_DMARC_MISSING";
    case ValidationExceptionFieldCode::PARTNER_BADGE_NOT_ELIGIBLE:
      return "PARTNER_BADGE_NOT_ELIGIBLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ValidationExceptionFieldCodeMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
