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
enum class CampaignAssetStateReason {
  NOT_SET,
  ASSET_NOT_FOUND,
  ASSET_NOT_STARTABLE,
  ASSET_START_IN_PROGRESS,
  ASSET_ALREADY_ACTIVE,
  SEND_WINDOW_TOO_SOON,
  REQUIRED_FIELD_MISSING,
  RECIPIENT_LIST_MISSING,
  ENGAGEMENT_GROUPS_UNAVAILABLE,
  SENDER_EMAIL_MISSING,
  END_ON_MISSING,
  ASSET_CONTENT_MISSING,
  ASSET_NOT_ACTIVATABLE,
  TEMPLATE_CHANGED,
  PARTNER_IMAGE_REJECTED,
  PREREQUISITE_ASSET_NOT_ACTIVE,
  PARTNER_NOT_PROVISIONED,
  RECIPIENT_LIST_EMPTY,
  RECIPIENT_LIMIT_EXCEEDED,
  CONTACT_OPT_IN_REQUIRED,
  MAILING_CREDITS_EXHAUSTED,
  SENDER_EMAIL_INVALID,
  SOCIAL_CONNECTION_MISSING,
  SOCIAL_CONNECTION_EXPIRED,
  SOCIAL_CONNECTION_PAGE_REQUIRED,
  DELIVERY_FAILED,
  INTERNAL_ERROR,
  MAILING_CREDITS_INSUFFICIENT,
  PARTNER_PROFILE_FIELD_MISSING,
  PARTNER_PROFILE_FIELD_DOES_NOT_FIT,
  SOCIAL_CONNECTION_NOT_CHOSEN,
  PRIVACY_POLICY_URL_MISSING,
  PARTNER_ADDRESS_MISSING,
  SEND_MODE_MISSING,
  CONTENT_REJECTED,
  URL_NOT_ALLOWED,
  SENDER_NOT_APPROVED
};

namespace CampaignAssetStateReasonMapper {
AWS_PARTNERCENTRALMARKETING_API CampaignAssetStateReason GetCampaignAssetStateReasonForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForCampaignAssetStateReason(CampaignAssetStateReason value);
}  // namespace CampaignAssetStateReasonMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
