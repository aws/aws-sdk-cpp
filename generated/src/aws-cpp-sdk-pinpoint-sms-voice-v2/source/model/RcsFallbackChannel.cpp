/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsFallbackChannel.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace RcsFallbackChannelMapper {

static const int SMS_HASH = HashingUtils::HashString("SMS");
static const int MMS_HASH = HashingUtils::HashString("MMS");

RcsFallbackChannel GetRcsFallbackChannelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SMS_HASH) {
    return RcsFallbackChannel::SMS;
  } else if (hashCode == MMS_HASH) {
    return RcsFallbackChannel::MMS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RcsFallbackChannel>(hashCode);
  }

  return RcsFallbackChannel::NOT_SET;
}

Aws::String GetNameForRcsFallbackChannel(RcsFallbackChannel enumValue) {
  switch (enumValue) {
    case RcsFallbackChannel::NOT_SET:
      return {};
    case RcsFallbackChannel::SMS:
      return "SMS";
    case RcsFallbackChannel::MMS:
      return "MMS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RcsFallbackChannelMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
