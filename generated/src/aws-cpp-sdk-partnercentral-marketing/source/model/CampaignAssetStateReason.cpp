/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/CampaignAssetStateReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace CampaignAssetStateReasonMapper {

static const int ASSET_NOT_FOUND_HASH = HashingUtils::HashString("ASSET_NOT_FOUND");
static const int ASSET_NOT_STARTABLE_HASH = HashingUtils::HashString("ASSET_NOT_STARTABLE");
static const int ASSET_START_IN_PROGRESS_HASH = HashingUtils::HashString("ASSET_START_IN_PROGRESS");
static const int ASSET_ALREADY_ACTIVE_HASH = HashingUtils::HashString("ASSET_ALREADY_ACTIVE");
static const int SEND_WINDOW_TOO_SOON_HASH = HashingUtils::HashString("SEND_WINDOW_TOO_SOON");
static const int REQUIRED_FIELD_MISSING_HASH = HashingUtils::HashString("REQUIRED_FIELD_MISSING");
static const int RECIPIENT_LIST_MISSING_HASH = HashingUtils::HashString("RECIPIENT_LIST_MISSING");
static const int ENGAGEMENT_GROUPS_UNAVAILABLE_HASH = HashingUtils::HashString("ENGAGEMENT_GROUPS_UNAVAILABLE");
static const int SENDER_EMAIL_MISSING_HASH = HashingUtils::HashString("SENDER_EMAIL_MISSING");
static const int END_ON_MISSING_HASH = HashingUtils::HashString("END_ON_MISSING");
static const int ASSET_CONTENT_MISSING_HASH = HashingUtils::HashString("ASSET_CONTENT_MISSING");
static const int ASSET_NOT_ACTIVATABLE_HASH = HashingUtils::HashString("ASSET_NOT_ACTIVATABLE");
static const int TEMPLATE_CHANGED_HASH = HashingUtils::HashString("TEMPLATE_CHANGED");
static const int PARTNER_IMAGE_REJECTED_HASH = HashingUtils::HashString("PARTNER_IMAGE_REJECTED");
static const int PREREQUISITE_ASSET_NOT_ACTIVE_HASH = HashingUtils::HashString("PREREQUISITE_ASSET_NOT_ACTIVE");
static const int PARTNER_NOT_PROVISIONED_HASH = HashingUtils::HashString("PARTNER_NOT_PROVISIONED");
static const int RECIPIENT_LIST_EMPTY_HASH = HashingUtils::HashString("RECIPIENT_LIST_EMPTY");
static const int RECIPIENT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("RECIPIENT_LIMIT_EXCEEDED");
static const int CONTACT_OPT_IN_REQUIRED_HASH = HashingUtils::HashString("CONTACT_OPT_IN_REQUIRED");
static const int MAILING_CREDITS_EXHAUSTED_HASH = HashingUtils::HashString("MAILING_CREDITS_EXHAUSTED");
static const int SENDER_EMAIL_INVALID_HASH = HashingUtils::HashString("SENDER_EMAIL_INVALID");
static const int SOCIAL_CONNECTION_MISSING_HASH = HashingUtils::HashString("SOCIAL_CONNECTION_MISSING");
static const int SOCIAL_CONNECTION_EXPIRED_HASH = HashingUtils::HashString("SOCIAL_CONNECTION_EXPIRED");
static const int SOCIAL_CONNECTION_PAGE_REQUIRED_HASH = HashingUtils::HashString("SOCIAL_CONNECTION_PAGE_REQUIRED");
static const int DELIVERY_FAILED_HASH = HashingUtils::HashString("DELIVERY_FAILED");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
static const int MAILING_CREDITS_INSUFFICIENT_HASH = HashingUtils::HashString("MAILING_CREDITS_INSUFFICIENT");
static const int PARTNER_PROFILE_FIELD_MISSING_HASH = HashingUtils::HashString("PARTNER_PROFILE_FIELD_MISSING");
static const int PARTNER_PROFILE_FIELD_DOES_NOT_FIT_HASH = HashingUtils::HashString("PARTNER_PROFILE_FIELD_DOES_NOT_FIT");
static const int SOCIAL_CONNECTION_NOT_CHOSEN_HASH = HashingUtils::HashString("SOCIAL_CONNECTION_NOT_CHOSEN");
static const int PRIVACY_POLICY_URL_MISSING_HASH = HashingUtils::HashString("PRIVACY_POLICY_URL_MISSING");
static const int PARTNER_ADDRESS_MISSING_HASH = HashingUtils::HashString("PARTNER_ADDRESS_MISSING");
static const int SEND_MODE_MISSING_HASH = HashingUtils::HashString("SEND_MODE_MISSING");
static const int CONTENT_REJECTED_HASH = HashingUtils::HashString("CONTENT_REJECTED");
static const int URL_NOT_ALLOWED_HASH = HashingUtils::HashString("URL_NOT_ALLOWED");
static const int SENDER_NOT_APPROVED_HASH = HashingUtils::HashString("SENDER_NOT_APPROVED");

CampaignAssetStateReason GetCampaignAssetStateReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASSET_NOT_FOUND_HASH) {
    return CampaignAssetStateReason::ASSET_NOT_FOUND;
  } else if (hashCode == ASSET_NOT_STARTABLE_HASH) {
    return CampaignAssetStateReason::ASSET_NOT_STARTABLE;
  } else if (hashCode == ASSET_START_IN_PROGRESS_HASH) {
    return CampaignAssetStateReason::ASSET_START_IN_PROGRESS;
  } else if (hashCode == ASSET_ALREADY_ACTIVE_HASH) {
    return CampaignAssetStateReason::ASSET_ALREADY_ACTIVE;
  } else if (hashCode == SEND_WINDOW_TOO_SOON_HASH) {
    return CampaignAssetStateReason::SEND_WINDOW_TOO_SOON;
  } else if (hashCode == REQUIRED_FIELD_MISSING_HASH) {
    return CampaignAssetStateReason::REQUIRED_FIELD_MISSING;
  } else if (hashCode == RECIPIENT_LIST_MISSING_HASH) {
    return CampaignAssetStateReason::RECIPIENT_LIST_MISSING;
  } else if (hashCode == ENGAGEMENT_GROUPS_UNAVAILABLE_HASH) {
    return CampaignAssetStateReason::ENGAGEMENT_GROUPS_UNAVAILABLE;
  } else if (hashCode == SENDER_EMAIL_MISSING_HASH) {
    return CampaignAssetStateReason::SENDER_EMAIL_MISSING;
  } else if (hashCode == END_ON_MISSING_HASH) {
    return CampaignAssetStateReason::END_ON_MISSING;
  } else if (hashCode == ASSET_CONTENT_MISSING_HASH) {
    return CampaignAssetStateReason::ASSET_CONTENT_MISSING;
  } else if (hashCode == ASSET_NOT_ACTIVATABLE_HASH) {
    return CampaignAssetStateReason::ASSET_NOT_ACTIVATABLE;
  } else if (hashCode == TEMPLATE_CHANGED_HASH) {
    return CampaignAssetStateReason::TEMPLATE_CHANGED;
  } else if (hashCode == PARTNER_IMAGE_REJECTED_HASH) {
    return CampaignAssetStateReason::PARTNER_IMAGE_REJECTED;
  } else if (hashCode == PREREQUISITE_ASSET_NOT_ACTIVE_HASH) {
    return CampaignAssetStateReason::PREREQUISITE_ASSET_NOT_ACTIVE;
  } else if (hashCode == PARTNER_NOT_PROVISIONED_HASH) {
    return CampaignAssetStateReason::PARTNER_NOT_PROVISIONED;
  } else if (hashCode == RECIPIENT_LIST_EMPTY_HASH) {
    return CampaignAssetStateReason::RECIPIENT_LIST_EMPTY;
  } else if (hashCode == RECIPIENT_LIMIT_EXCEEDED_HASH) {
    return CampaignAssetStateReason::RECIPIENT_LIMIT_EXCEEDED;
  } else if (hashCode == CONTACT_OPT_IN_REQUIRED_HASH) {
    return CampaignAssetStateReason::CONTACT_OPT_IN_REQUIRED;
  } else if (hashCode == MAILING_CREDITS_EXHAUSTED_HASH) {
    return CampaignAssetStateReason::MAILING_CREDITS_EXHAUSTED;
  } else if (hashCode == SENDER_EMAIL_INVALID_HASH) {
    return CampaignAssetStateReason::SENDER_EMAIL_INVALID;
  } else if (hashCode == SOCIAL_CONNECTION_MISSING_HASH) {
    return CampaignAssetStateReason::SOCIAL_CONNECTION_MISSING;
  } else if (hashCode == SOCIAL_CONNECTION_EXPIRED_HASH) {
    return CampaignAssetStateReason::SOCIAL_CONNECTION_EXPIRED;
  } else if (hashCode == SOCIAL_CONNECTION_PAGE_REQUIRED_HASH) {
    return CampaignAssetStateReason::SOCIAL_CONNECTION_PAGE_REQUIRED;
  } else if (hashCode == DELIVERY_FAILED_HASH) {
    return CampaignAssetStateReason::DELIVERY_FAILED;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return CampaignAssetStateReason::INTERNAL_ERROR;
  } else if (hashCode == MAILING_CREDITS_INSUFFICIENT_HASH) {
    return CampaignAssetStateReason::MAILING_CREDITS_INSUFFICIENT;
  } else if (hashCode == PARTNER_PROFILE_FIELD_MISSING_HASH) {
    return CampaignAssetStateReason::PARTNER_PROFILE_FIELD_MISSING;
  } else if (hashCode == PARTNER_PROFILE_FIELD_DOES_NOT_FIT_HASH) {
    return CampaignAssetStateReason::PARTNER_PROFILE_FIELD_DOES_NOT_FIT;
  } else if (hashCode == SOCIAL_CONNECTION_NOT_CHOSEN_HASH) {
    return CampaignAssetStateReason::SOCIAL_CONNECTION_NOT_CHOSEN;
  } else if (hashCode == PRIVACY_POLICY_URL_MISSING_HASH) {
    return CampaignAssetStateReason::PRIVACY_POLICY_URL_MISSING;
  } else if (hashCode == PARTNER_ADDRESS_MISSING_HASH) {
    return CampaignAssetStateReason::PARTNER_ADDRESS_MISSING;
  } else if (hashCode == SEND_MODE_MISSING_HASH) {
    return CampaignAssetStateReason::SEND_MODE_MISSING;
  } else if (hashCode == CONTENT_REJECTED_HASH) {
    return CampaignAssetStateReason::CONTENT_REJECTED;
  } else if (hashCode == URL_NOT_ALLOWED_HASH) {
    return CampaignAssetStateReason::URL_NOT_ALLOWED;
  } else if (hashCode == SENDER_NOT_APPROVED_HASH) {
    return CampaignAssetStateReason::SENDER_NOT_APPROVED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CampaignAssetStateReason>(hashCode);
  }

  return CampaignAssetStateReason::NOT_SET;
}

Aws::String GetNameForCampaignAssetStateReason(CampaignAssetStateReason enumValue) {
  switch (enumValue) {
    case CampaignAssetStateReason::NOT_SET:
      return {};
    case CampaignAssetStateReason::ASSET_NOT_FOUND:
      return "ASSET_NOT_FOUND";
    case CampaignAssetStateReason::ASSET_NOT_STARTABLE:
      return "ASSET_NOT_STARTABLE";
    case CampaignAssetStateReason::ASSET_START_IN_PROGRESS:
      return "ASSET_START_IN_PROGRESS";
    case CampaignAssetStateReason::ASSET_ALREADY_ACTIVE:
      return "ASSET_ALREADY_ACTIVE";
    case CampaignAssetStateReason::SEND_WINDOW_TOO_SOON:
      return "SEND_WINDOW_TOO_SOON";
    case CampaignAssetStateReason::REQUIRED_FIELD_MISSING:
      return "REQUIRED_FIELD_MISSING";
    case CampaignAssetStateReason::RECIPIENT_LIST_MISSING:
      return "RECIPIENT_LIST_MISSING";
    case CampaignAssetStateReason::ENGAGEMENT_GROUPS_UNAVAILABLE:
      return "ENGAGEMENT_GROUPS_UNAVAILABLE";
    case CampaignAssetStateReason::SENDER_EMAIL_MISSING:
      return "SENDER_EMAIL_MISSING";
    case CampaignAssetStateReason::END_ON_MISSING:
      return "END_ON_MISSING";
    case CampaignAssetStateReason::ASSET_CONTENT_MISSING:
      return "ASSET_CONTENT_MISSING";
    case CampaignAssetStateReason::ASSET_NOT_ACTIVATABLE:
      return "ASSET_NOT_ACTIVATABLE";
    case CampaignAssetStateReason::TEMPLATE_CHANGED:
      return "TEMPLATE_CHANGED";
    case CampaignAssetStateReason::PARTNER_IMAGE_REJECTED:
      return "PARTNER_IMAGE_REJECTED";
    case CampaignAssetStateReason::PREREQUISITE_ASSET_NOT_ACTIVE:
      return "PREREQUISITE_ASSET_NOT_ACTIVE";
    case CampaignAssetStateReason::PARTNER_NOT_PROVISIONED:
      return "PARTNER_NOT_PROVISIONED";
    case CampaignAssetStateReason::RECIPIENT_LIST_EMPTY:
      return "RECIPIENT_LIST_EMPTY";
    case CampaignAssetStateReason::RECIPIENT_LIMIT_EXCEEDED:
      return "RECIPIENT_LIMIT_EXCEEDED";
    case CampaignAssetStateReason::CONTACT_OPT_IN_REQUIRED:
      return "CONTACT_OPT_IN_REQUIRED";
    case CampaignAssetStateReason::MAILING_CREDITS_EXHAUSTED:
      return "MAILING_CREDITS_EXHAUSTED";
    case CampaignAssetStateReason::SENDER_EMAIL_INVALID:
      return "SENDER_EMAIL_INVALID";
    case CampaignAssetStateReason::SOCIAL_CONNECTION_MISSING:
      return "SOCIAL_CONNECTION_MISSING";
    case CampaignAssetStateReason::SOCIAL_CONNECTION_EXPIRED:
      return "SOCIAL_CONNECTION_EXPIRED";
    case CampaignAssetStateReason::SOCIAL_CONNECTION_PAGE_REQUIRED:
      return "SOCIAL_CONNECTION_PAGE_REQUIRED";
    case CampaignAssetStateReason::DELIVERY_FAILED:
      return "DELIVERY_FAILED";
    case CampaignAssetStateReason::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    case CampaignAssetStateReason::MAILING_CREDITS_INSUFFICIENT:
      return "MAILING_CREDITS_INSUFFICIENT";
    case CampaignAssetStateReason::PARTNER_PROFILE_FIELD_MISSING:
      return "PARTNER_PROFILE_FIELD_MISSING";
    case CampaignAssetStateReason::PARTNER_PROFILE_FIELD_DOES_NOT_FIT:
      return "PARTNER_PROFILE_FIELD_DOES_NOT_FIT";
    case CampaignAssetStateReason::SOCIAL_CONNECTION_NOT_CHOSEN:
      return "SOCIAL_CONNECTION_NOT_CHOSEN";
    case CampaignAssetStateReason::PRIVACY_POLICY_URL_MISSING:
      return "PRIVACY_POLICY_URL_MISSING";
    case CampaignAssetStateReason::PARTNER_ADDRESS_MISSING:
      return "PARTNER_ADDRESS_MISSING";
    case CampaignAssetStateReason::SEND_MODE_MISSING:
      return "SEND_MODE_MISSING";
    case CampaignAssetStateReason::CONTENT_REJECTED:
      return "CONTENT_REJECTED";
    case CampaignAssetStateReason::URL_NOT_ALLOWED:
      return "URL_NOT_ALLOWED";
    case CampaignAssetStateReason::SENDER_NOT_APPROVED:
      return "SENDER_NOT_APPROVED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CampaignAssetStateReasonMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
