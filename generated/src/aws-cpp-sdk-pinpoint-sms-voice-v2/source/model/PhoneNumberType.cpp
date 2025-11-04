/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/PhoneNumberType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace PhoneNumberTypeMapper {

static const int MOBILE_HASH = HashingUtils::HashString("MOBILE");
static const int LANDLINE_HASH = HashingUtils::HashString("LANDLINE");
static const int OTHER_HASH = HashingUtils::HashString("OTHER");
static const int INVALID_HASH = HashingUtils::HashString("INVALID");

PhoneNumberType GetPhoneNumberTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MOBILE_HASH) {
    return PhoneNumberType::MOBILE;
  } else if (hashCode == LANDLINE_HASH) {
    return PhoneNumberType::LANDLINE;
  } else if (hashCode == OTHER_HASH) {
    return PhoneNumberType::OTHER;
  } else if (hashCode == INVALID_HASH) {
    return PhoneNumberType::INVALID;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PhoneNumberType>(hashCode);
  }

  return PhoneNumberType::NOT_SET;
}

Aws::String GetNameForPhoneNumberType(PhoneNumberType enumValue) {
  switch (enumValue) {
    case PhoneNumberType::NOT_SET:
      return {};
    case PhoneNumberType::MOBILE:
      return "MOBILE";
    case PhoneNumberType::LANDLINE:
      return "LANDLINE";
    case PhoneNumberType::OTHER:
      return "OTHER";
    case PhoneNumberType::INVALID:
      return "INVALID";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PhoneNumberTypeMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
