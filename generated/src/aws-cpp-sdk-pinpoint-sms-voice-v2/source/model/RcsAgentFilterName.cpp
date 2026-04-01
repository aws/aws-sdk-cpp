/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsAgentFilterName.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace RcsAgentFilterNameMapper {

static const int status_HASH = HashingUtils::HashString("status");
static const int two_way_enabled_HASH = HashingUtils::HashString("two-way-enabled");
static const int self_managed_opt_outs_enabled_HASH = HashingUtils::HashString("self-managed-opt-outs-enabled");
static const int opt_out_list_name_HASH = HashingUtils::HashString("opt-out-list-name");
static const int deletion_protection_enabled_HASH = HashingUtils::HashString("deletion-protection-enabled");
static const int two_way_channel_arn_HASH = HashingUtils::HashString("two-way-channel-arn");

RcsAgentFilterName GetRcsAgentFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == status_HASH) {
    return RcsAgentFilterName::status;
  } else if (hashCode == two_way_enabled_HASH) {
    return RcsAgentFilterName::two_way_enabled;
  } else if (hashCode == self_managed_opt_outs_enabled_HASH) {
    return RcsAgentFilterName::self_managed_opt_outs_enabled;
  } else if (hashCode == opt_out_list_name_HASH) {
    return RcsAgentFilterName::opt_out_list_name;
  } else if (hashCode == deletion_protection_enabled_HASH) {
    return RcsAgentFilterName::deletion_protection_enabled;
  } else if (hashCode == two_way_channel_arn_HASH) {
    return RcsAgentFilterName::two_way_channel_arn;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RcsAgentFilterName>(hashCode);
  }

  return RcsAgentFilterName::NOT_SET;
}

Aws::String GetNameForRcsAgentFilterName(RcsAgentFilterName enumValue) {
  switch (enumValue) {
    case RcsAgentFilterName::NOT_SET:
      return {};
    case RcsAgentFilterName::status:
      return "status";
    case RcsAgentFilterName::two_way_enabled:
      return "two-way-enabled";
    case RcsAgentFilterName::self_managed_opt_outs_enabled:
      return "self-managed-opt-outs-enabled";
    case RcsAgentFilterName::opt_out_list_name:
      return "opt-out-list-name";
    case RcsAgentFilterName::deletion_protection_enabled:
      return "deletion-protection-enabled";
    case RcsAgentFilterName::two_way_channel_arn:
      return "two-way-channel-arn";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RcsAgentFilterNameMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
