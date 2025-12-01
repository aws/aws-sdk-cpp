/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/EngagementInvitationPayloadType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace EngagementInvitationPayloadTypeMapper {

static const int OpportunityInvitation_HASH = HashingUtils::HashString("OpportunityInvitation");
static const int LeadInvitation_HASH = HashingUtils::HashString("LeadInvitation");

EngagementInvitationPayloadType GetEngagementInvitationPayloadTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OpportunityInvitation_HASH) {
    return EngagementInvitationPayloadType::OpportunityInvitation;
  } else if (hashCode == LeadInvitation_HASH) {
    return EngagementInvitationPayloadType::LeadInvitation;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EngagementInvitationPayloadType>(hashCode);
  }

  return EngagementInvitationPayloadType::NOT_SET;
}

Aws::String GetNameForEngagementInvitationPayloadType(EngagementInvitationPayloadType enumValue) {
  switch (enumValue) {
    case EngagementInvitationPayloadType::NOT_SET:
      return {};
    case EngagementInvitationPayloadType::OpportunityInvitation:
      return "OpportunityInvitation";
    case EngagementInvitationPayloadType::LeadInvitation:
      return "LeadInvitation";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EngagementInvitationPayloadTypeMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
