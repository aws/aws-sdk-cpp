/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyTemplateType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace NotifyTemplateTypeMapper {

static const int OTP_VERIFICATION_HASH = HashingUtils::HashString("OTP_VERIFICATION");

NotifyTemplateType GetNotifyTemplateTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OTP_VERIFICATION_HASH) {
    return NotifyTemplateType::OTP_VERIFICATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NotifyTemplateType>(hashCode);
  }

  return NotifyTemplateType::NOT_SET;
}

Aws::String GetNameForNotifyTemplateType(NotifyTemplateType enumValue) {
  switch (enumValue) {
    case NotifyTemplateType::NOT_SET:
      return {};
    case NotifyTemplateType::OTP_VERIFICATION:
      return "OTP_VERIFICATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NotifyTemplateTypeMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
