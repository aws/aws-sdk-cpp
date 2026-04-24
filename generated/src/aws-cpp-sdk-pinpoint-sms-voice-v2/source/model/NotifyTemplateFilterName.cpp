/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyTemplateFilterName.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace NotifyTemplateFilterNameMapper {

static const int template_type_HASH = HashingUtils::HashString("template-type");
static const int channels_HASH = HashingUtils::HashString("channels");
static const int tier_access_HASH = HashingUtils::HashString("tier-access");
static const int supported_countries_HASH = HashingUtils::HashString("supported-countries");
static const int language_code_HASH = HashingUtils::HashString("language-code");
static const int supported_voice_ids_HASH = HashingUtils::HashString("supported-voice-ids");

NotifyTemplateFilterName GetNotifyTemplateFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == template_type_HASH) {
    return NotifyTemplateFilterName::template_type;
  } else if (hashCode == channels_HASH) {
    return NotifyTemplateFilterName::channels;
  } else if (hashCode == tier_access_HASH) {
    return NotifyTemplateFilterName::tier_access;
  } else if (hashCode == supported_countries_HASH) {
    return NotifyTemplateFilterName::supported_countries;
  } else if (hashCode == language_code_HASH) {
    return NotifyTemplateFilterName::language_code;
  } else if (hashCode == supported_voice_ids_HASH) {
    return NotifyTemplateFilterName::supported_voice_ids;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NotifyTemplateFilterName>(hashCode);
  }

  return NotifyTemplateFilterName::NOT_SET;
}

Aws::String GetNameForNotifyTemplateFilterName(NotifyTemplateFilterName enumValue) {
  switch (enumValue) {
    case NotifyTemplateFilterName::NOT_SET:
      return {};
    case NotifyTemplateFilterName::template_type:
      return "template-type";
    case NotifyTemplateFilterName::channels:
      return "channels";
    case NotifyTemplateFilterName::tier_access:
      return "tier-access";
    case NotifyTemplateFilterName::supported_countries:
      return "supported-countries";
    case NotifyTemplateFilterName::language_code:
      return "language-code";
    case NotifyTemplateFilterName::supported_voice_ids:
      return "supported-voice-ids";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NotifyTemplateFilterNameMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
