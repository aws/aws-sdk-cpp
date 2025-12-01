/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-account/model/ProfileValidationErrorReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
namespace ProfileValidationErrorReasonMapper {

static const int INVALID_CONTENT_HASH = HashingUtils::HashString("INVALID_CONTENT");
static const int DUPLICATE_PROFILE_HASH = HashingUtils::HashString("DUPLICATE_PROFILE");
static const int INVALID_LOGO_HASH = HashingUtils::HashString("INVALID_LOGO");
static const int INVALID_LOGO_URL_HASH = HashingUtils::HashString("INVALID_LOGO_URL");
static const int INVALID_LOGO_FILE_HASH = HashingUtils::HashString("INVALID_LOGO_FILE");
static const int INVALID_LOGO_SIZE_HASH = HashingUtils::HashString("INVALID_LOGO_SIZE");
static const int INVALID_WEBSITE_URL_HASH = HashingUtils::HashString("INVALID_WEBSITE_URL");

ProfileValidationErrorReason GetProfileValidationErrorReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INVALID_CONTENT_HASH) {
    return ProfileValidationErrorReason::INVALID_CONTENT;
  } else if (hashCode == DUPLICATE_PROFILE_HASH) {
    return ProfileValidationErrorReason::DUPLICATE_PROFILE;
  } else if (hashCode == INVALID_LOGO_HASH) {
    return ProfileValidationErrorReason::INVALID_LOGO;
  } else if (hashCode == INVALID_LOGO_URL_HASH) {
    return ProfileValidationErrorReason::INVALID_LOGO_URL;
  } else if (hashCode == INVALID_LOGO_FILE_HASH) {
    return ProfileValidationErrorReason::INVALID_LOGO_FILE;
  } else if (hashCode == INVALID_LOGO_SIZE_HASH) {
    return ProfileValidationErrorReason::INVALID_LOGO_SIZE;
  } else if (hashCode == INVALID_WEBSITE_URL_HASH) {
    return ProfileValidationErrorReason::INVALID_WEBSITE_URL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProfileValidationErrorReason>(hashCode);
  }

  return ProfileValidationErrorReason::NOT_SET;
}

Aws::String GetNameForProfileValidationErrorReason(ProfileValidationErrorReason enumValue) {
  switch (enumValue) {
    case ProfileValidationErrorReason::NOT_SET:
      return {};
    case ProfileValidationErrorReason::INVALID_CONTENT:
      return "INVALID_CONTENT";
    case ProfileValidationErrorReason::DUPLICATE_PROFILE:
      return "DUPLICATE_PROFILE";
    case ProfileValidationErrorReason::INVALID_LOGO:
      return "INVALID_LOGO";
    case ProfileValidationErrorReason::INVALID_LOGO_URL:
      return "INVALID_LOGO_URL";
    case ProfileValidationErrorReason::INVALID_LOGO_FILE:
      return "INVALID_LOGO_FILE";
    case ProfileValidationErrorReason::INVALID_LOGO_SIZE:
      return "INVALID_LOGO_SIZE";
    case ProfileValidationErrorReason::INVALID_WEBSITE_URL:
      return "INVALID_WEBSITE_URL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProfileValidationErrorReasonMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
