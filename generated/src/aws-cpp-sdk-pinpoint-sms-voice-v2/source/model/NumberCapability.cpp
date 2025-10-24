﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberCapability.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace NumberCapabilityMapper {

static const int SMS_HASH = HashingUtils::HashString("SMS");
static const int VOICE_HASH = HashingUtils::HashString("VOICE");
static const int MMS_HASH = HashingUtils::HashString("MMS");

NumberCapability GetNumberCapabilityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SMS_HASH) {
    return NumberCapability::SMS;
  } else if (hashCode == VOICE_HASH) {
    return NumberCapability::VOICE;
  } else if (hashCode == MMS_HASH) {
    return NumberCapability::MMS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NumberCapability>(hashCode);
  }

  return NumberCapability::NOT_SET;
}

Aws::String GetNameForNumberCapability(NumberCapability enumValue) {
  switch (enumValue) {
    case NumberCapability::NOT_SET:
      return {};
    case NumberCapability::SMS:
      return "SMS";
    case NumberCapability::VOICE:
      return "VOICE";
    case NumberCapability::MMS:
      return "MMS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NumberCapabilityMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
